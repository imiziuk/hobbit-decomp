// Shadow testing: check every generated function on REAL game state while the original game runs.
//
// Active only when `shadow.txt` exists in the game folder (then core/hook.cpp installs no replacements).
// Every registered function gets an INT3 at its entry. On a hit (vectored exception handler):
//   1. A = the ORIGINAL machine code, B = our compiled replacement (entered through its thunk, so the
//      calling convention is exactly the game's), each run in its own Unicorn x86 emulator.
//   2. Both emulators start from the same registers and lazily copy memory pages from the live process
//      (heap, globals, stack, code), so they see exactly the state the real call sees. Nothing is
//      written back: the game is never affected.
//   3. Compare: return registers (EAX / EDX:EAX / ST0), ESP after return (stack balance), callee-saved
//      registers, and every byte either run wrote outside its own stack frame.
//   4. Remove the INT3, single-step the real instruction, put it back (until N samples are taken).
// Results: shadow_results.tsv next to the exe (rewritten every 5 s and at exit).
// shadow.txt may contain `samples N` (default 6) and `only <addr>` lines to limit the probed set.
//
// Unicorn (third_party/unicorn, 32-bit build of 2.1.4) is loaded with LoadLibrary only in shadow mode.
#include "core/hook.h"
#include "core/log.h"

#include <windows.h>
#include <unicorn/unicorn.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <unordered_set>
#include <vector>

extern "C" IMAGE_DOS_HEADER __ImageBase;

namespace {

// ---- Unicorn, loaded at runtime ----
struct UC {
    decltype(&uc_open) open;
    decltype(&uc_close) close;
    decltype(&uc_mem_map) mem_map;
    decltype(&uc_mem_write) mem_write;
    decltype(&uc_mem_read) mem_read;
    decltype(&uc_reg_write) reg_write;
    decltype(&uc_reg_read) reg_read;
    decltype(&uc_hook_add) hook_add;
    decltype(&uc_emu_start) emu_start;
    decltype(&uc_emu_stop) emu_stop;
    decltype(&uc_strerror) strerror;
    decltype(&uc_ctl) ctl;
} U;

bool LoadUnicorn() {
    char path[MAX_PATH];
    GetModuleFileNameA(reinterpret_cast<HMODULE>(&__ImageBase), path, MAX_PATH);
    if (char* s = strrchr(path, '\\')) strcpy_s(s + 1, MAX_PATH - (s + 1 - path), "unicorn.dll");
    HMODULE m = LoadLibraryA(path);
    if (!m) { Log("shadow: cannot load %s", path); return false; }
#define LOADFN(f, n) U.f = reinterpret_cast<decltype(U.f)>(GetProcAddress(m, n)); if (!U.f) return false;
    LOADFN(open, "uc_open") LOADFN(close, "uc_close") LOADFN(mem_map, "uc_mem_map")
    LOADFN(mem_write, "uc_mem_write") LOADFN(mem_read, "uc_mem_read") LOADFN(reg_write, "uc_reg_write")
    LOADFN(reg_read, "uc_reg_read") LOADFN(hook_add, "uc_hook_add") LOADFN(emu_start, "uc_emu_start")
    LOADFN(emu_stop, "uc_emu_stop") LOADFN(strerror, "uc_strerror") LOADFN(ctl, "uc_ctl")
#undef LOADFN
    return true;
}

// ---- probes ----
struct Probe {
    uint32_t addr;
    uint8_t orig;
    hook::Entry* e;
    void* thunk;
    volatile long armed;
    int samples, pass, near_, fail, inc;
    std::string detail;     // first failure
    std::string incWhy;     // last incomplete reason
};
std::vector<Probe> g_probes;          // sorted by addr
int g_maxSamples = 6;
CRITICAL_SECTION g_lock;
uint32_t g_exeLo, g_exeHi, g_dllLo, g_dllHi;
thread_local Probe* t_rearm = nullptr;

Probe* FindProbe(uint32_t a) {
    auto it = std::lower_bound(g_probes.begin(), g_probes.end(), a, [](const Probe& p, uint32_t x) { return p.addr < x; });
    return it != g_probes.end() && it->addr == a ? &*it : nullptr;
}

// probe pages are made writable once at startup (toggling protection per write raced between threads:
// one thread restored read-only while another was writing its INT3 -> access violation)
void PokeByte(uint32_t a, uint8_t v) {
    *reinterpret_cast<volatile uint8_t*>(a) = v;
    FlushInstructionCache(GetCurrentProcess(), reinterpret_cast<void*>(a), 1);
}

// ---- one emulated run ----
constexpr uint32_t kSentinel = 0xBADC0000;   // fake return address (emulator-only page)
constexpr uint32_t kGdt = 0xBADB0000;

struct Write { uint32_t addr, size, eip; uint64_t value; };
struct Run {
    uc_engine* uc = nullptr;
    std::vector<Write> writes;                            // in order, with the instruction that wrote
    std::string why;                                      // non-empty = did not complete
    uint32_t stackLo = 0, stackHi = 0;                    // excluded from the write compare
    uint32_t teb = 0;
};

// live pages copied for the current sample (both runs see the same): saved in a failure capsule
std::vector<std::pair<uint32_t, std::vector<uint8_t>>> g_snap;

bool SafeCopy(void* dst, uint32_t src) {
    __try { memcpy(dst, reinterpret_cast<void*>(src), 4096); } __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
    return true;
}

bool CopyPage(uc_engine* uc, uint32_t page) {
    static uint8_t buf[4096];
    if (page >= 0x80000000u || page < 0x10000) return false;
    if (!SafeCopy(buf, page)) return false;
    // original code bytes under our INT3s
    auto it = std::lower_bound(g_probes.begin(), g_probes.end(), page, [](const Probe& p, uint32_t x) { return p.addr < x; });
    for (; it != g_probes.end() && it->addr < page + 4096; ++it) buf[it->addr - page] = it->orig;
    if (U.mem_map(uc, page, 4096, UC_PROT_ALL) != UC_ERR_OK) return false;
    U.mem_write(uc, page, buf, 4096);
    if (std::none_of(g_snap.begin(), g_snap.end(), [&](auto& x) { return x.first == page; }))
        g_snap.push_back({page, std::vector<uint8_t>(buf, buf + 4096)});
    return true;
}

bool OnUnmapped(uc_engine* uc, uc_mem_type, uint64_t addr, int size, int64_t, void* user) {
    auto* r = static_cast<Run*>(user);
    for (uint64_t p = addr & ~0xFFFull; p < addr + (size ? size : 1); p += 4096)
        if (!CopyPage(uc, static_cast<uint32_t>(p))) {
            char b[64];
            sprintf_s(b, "unreadable memory %08llX", addr);
            r->why = b;
            return false;
        }
    return true;
}

void OnWrite(uc_engine* uc, uc_mem_type, uint64_t addr, int size, int64_t value, void* user) {
    uint32_t eip = 0;
    U.reg_read(uc, UC_X86_REG_EIP, &eip);
    static_cast<Run*>(user)->writes.push_back({static_cast<uint32_t>(addr), static_cast<uint32_t>(size), eip,
                                               static_cast<uint64_t>(value)});
}

// "KERNEL32.dll!EnterCriticalSection+0x0" for an address inside a loaded module (nearest export)
std::string Describe(uint32_t a) {
    HMODULE m = nullptr;
    if (!GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                            reinterpret_cast<LPCSTR>(a), &m) || !m) {
        char b[16]; sprintf_s(b, "%08X", a); return b;
    }
    char mod[MAX_PATH];
    GetModuleFileNameA(m, mod, MAX_PATH);
    const char* base = strrchr(mod, '\\') ? strrchr(mod, '\\') + 1 : mod;
    uint32_t mb = reinterpret_cast<uint32_t>(m), best = 0;
    const char* bestName = "?";
    auto* nt = reinterpret_cast<IMAGE_NT_HEADERS*>(mb + reinterpret_cast<IMAGE_DOS_HEADER*>(mb)->e_lfanew);
    auto& dir = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT];
    if (dir.VirtualAddress) {
        auto* ex = reinterpret_cast<IMAGE_EXPORT_DIRECTORY*>(mb + dir.VirtualAddress);
        auto* names = reinterpret_cast<uint32_t*>(mb + ex->AddressOfNames);
        auto* ords = reinterpret_cast<uint16_t*>(mb + ex->AddressOfNameOrdinals);
        auto* funcs = reinterpret_cast<uint32_t*>(mb + ex->AddressOfFunctions);
        for (DWORD i = 0; i < ex->NumberOfNames; ++i) {
            uint32_t f = mb + funcs[ords[i]];
            if (f <= a && f > best) { best = f; bestName = reinterpret_cast<const char*>(mb + names[i]); }
        }
    }
    char b[200];
    sprintf_s(b, "%s!%s+0x%X", base, bestName, best ? a - best : a - mb);
    return b;
}

// only game code, our DLL and our thunks may run; anything else (Windows, D3D, sound) = not comparable
void OnBlock(uc_engine* uc, uint64_t addr, uint32_t, void* user) {
    uint32_t a = static_cast<uint32_t>(addr);
    if ((a >= g_exeLo && a < g_exeHi) || (a >= g_dllLo && a < g_dllHi) || a == kSentinel) return;
    MEMORY_BASIC_INFORMATION mi{};
    if (VirtualQuery(reinterpret_cast<void*>(a), &mi, sizeof mi) && mi.Type == MEM_PRIVATE) return;   // thunk pool
    static_cast<Run*>(user)->why = "external code " + Describe(a);
    U.emu_stop(uc);
}

#pragma pack(push, 1)
struct Desc {
    uint16_t limit0, base0;
    uint8_t base1, type_flags, limit1_flags, base2;
};
#pragma pack(pop)
Desc MakeDesc(uint32_t base, uint32_t limit, bool code, int dpl) {
    Desc d{};
    bool g = limit > 0xFFFFF;
    if (g) limit >>= 12;
    d.limit0 = limit & 0xFFFF;
    d.base0 = base & 0xFFFF;
    d.base1 = (base >> 16) & 0xFF;
    d.base2 = base >> 24;
    d.type_flags = static_cast<uint8_t>(0x80 | (dpl << 5) | 0x10 | (code ? 0xB : 0x3));   // present, S, type
    d.limit1_flags = static_cast<uint8_t>(((limit >> 16) & 0xF) | 0x40 | (g ? 0x80 : 0));  // D/B=32-bit
    return d;
}

bool Setup(Run& r, const CONTEXT& c, uint32_t start, uint32_t teb) {
    if (U.open(UC_ARCH_X86, UC_MODE_32, &r.uc) != UC_ERR_OK) { r.why = "uc_open"; return false; }
    // default translation cache is up to 1 GB: impossible inside a 32-bit game. Must be set before init.
    U.ctl(r.uc, UC_CTL_WRITE(UC_CTL_TCG_BUFFER_SIZE, 1), static_cast<uint32_t>(8 * 1024 * 1024));
    uc_hook h;
    U.hook_add(r.uc, &h, UC_HOOK_MEM_UNMAPPED, reinterpret_cast<void*>(&OnUnmapped), &r, 1, 0);
    U.hook_add(r.uc, &h, UC_HOOK_MEM_WRITE, reinterpret_cast<void*>(&OnWrite), &r, 1, 0);
    U.hook_add(r.uc, &h, UC_HOOK_BLOCK, reinterpret_cast<void*>(&OnBlock), &r, 1, 0);
    // GDT: flat code/data, FS = this thread's TEB (SEH frames: mov eax,fs:[0])
    Desc gdt[8] = {};
    gdt[1] = MakeDesc(0, 0xFFFFFFFF, true, 3);
    gdt[2] = MakeDesc(0, 0xFFFFFFFF, false, 3);
    gdt[3] = MakeDesc(teb, 0xFFF, false, 3);
    gdt[4] = MakeDesc(0, 0xFFFFFFFF, false, 0);
    U.mem_map(r.uc, kGdt, 4096, UC_PROT_ALL);
    U.mem_write(r.uc, kGdt, gdt, sizeof gdt);
    uc_x86_mmr gdtr{0, kGdt, sizeof gdt - 1, 0};
    U.reg_write(r.uc, UC_X86_REG_GDTR, &gdtr);
    int ss = (4 << 3), ds = (2 << 3) | 3, fs = (3 << 3) | 3;
    U.reg_write(r.uc, UC_X86_REG_SS, &ss);
    U.reg_write(r.uc, UC_X86_REG_DS, &ds);
    U.reg_write(r.uc, UC_X86_REG_ES, &ds);
    U.reg_write(r.uc, UC_X86_REG_FS, &fs);
    // sentinel page + return address
    U.mem_map(r.uc, kSentinel, 4096, UC_PROT_ALL);
    uint32_t esp = c.Esp;
    if (!CopyPage(r.uc, esp & ~0xFFFu) || ((esp + 3) & ~0xFFFu) != (esp & ~0xFFFu) && !CopyPage(r.uc, (esp + 3) & ~0xFFFu)) {
        r.why = "stack";
        return false;
    }
    U.mem_write(r.uc, esp, &kSentinel, 4);
    uint32_t regs[] = {c.Eax, c.Ebx, c.Ecx, c.Edx, c.Esi, c.Edi, c.Ebp, esp, start, c.EFlags & ~0x100u};
    int ids[] = {UC_X86_REG_EAX, UC_X86_REG_EBX, UC_X86_REG_ECX, UC_X86_REG_EDX, UC_X86_REG_ESI,
                 UC_X86_REG_EDI, UC_X86_REG_EBP, UC_X86_REG_ESP, UC_X86_REG_EIP, UC_X86_REG_EFLAGS};
    for (int i = 0; i < 10; ++i) U.reg_write(r.uc, ids[i], &regs[i]);
    uint16_t cw = static_cast<uint16_t>(c.FloatSave.ControlWord);
    if (!(c.ContextFlags & CONTEXT_FLOATING_POINT & 0xFFFF)) cw = 0x027F;
    U.reg_write(r.uc, UC_X86_REG_FPCW, &cw);
    return true;
}

void Execute(Run& r, uint32_t start) {
    uc_err e = U.emu_start(r.uc, start, kSentinel, 0, 3000000);
    if (!r.why.empty()) return;
    uint32_t eip = 0;
    U.reg_read(r.uc, UC_X86_REG_EIP, &eip);
    if (e != UC_ERR_OK) r.why = std::string("uc: ") + U.strerror(e);
    else if (eip != kSentinel) r.why = "instruction limit";
}

uint32_t Reg(Run& r, int id) { uint32_t v = 0; U.reg_read(r.uc, id, &v); return v; }

int FpuTop(Run& r) {
    uint16_t sw = 0;
    U.reg_read(r.uc, UC_X86_REG_FPSW, &sw);
    return (sw >> 11) & 7;
}

double St0(Run& r) {
    uint16_t sw = 0;
    U.reg_read(r.uc, UC_X86_REG_FPSW, &sw);
    int top = (sw >> 11) & 7;
#pragma pack(push, 1)
    struct { uint64_t mantissa; uint16_t exponent; } f{};
#pragma pack(pop)
    U.reg_read(r.uc, UC_X86_REG_FP0 + top, &f);
    if ((f.exponent & 0x7FFF) == 0 && f.mantissa == 0) return 0.0;
    int ex = (f.exponent & 0x7FFF) - 16383;
    double m = static_cast<double>(f.mantissa) / 9223372036854775808.0;   // 2^63
    double v = std::ldexp(m, ex);
    return (f.exponent & 0x8000) ? -v : v;
}

bool NearFloat(uint32_t a, uint32_t b) {
    float x, y;
    memcpy(&x, &a, 4); memcpy(&y, &b, 4);
    if (!std::isfinite(x) || !std::isfinite(y)) return false;
    return std::fabs(x - y) <= 1e-5f * std::max(1.0f, std::max(std::fabs(x), std::fabs(y)));
}

// ---- failure capsule: shadow_fail/<addr>.txt (+ .bin = input pages) for offline replay/diagnosis ----
bool Ignored(uint32_t x, uint32_t frameLo, uint32_t frameHi, uint32_t teb) {
    return (x >= frameLo && x < frameHi) || (x >= teb && x < teb + 0x1000) || (x >= g_dllLo && x < g_dllHi) ||
           x >= 0xBAD00000u;
}

void WriteCapsule(Probe& p, const CONTEXT& c, Run& a, Run& b, const std::string& why, uint32_t teb) {
    CreateDirectoryA("shadow_fail", nullptr);
    char path[64];
    sprintf_s(path, "shadow_fail/%08X.txt", p.addr);
    FILE* f = nullptr;
    if (fopen_s(&f, path, "w") || !f) return;
    NT_TIB* tib = reinterpret_cast<NT_TIB*>(NtCurrentTeb());
    uint32_t lo = reinterpret_cast<uint32_t>(tib->StackLimit), hi = c.Esp + 4 + p.e->stackArgBytes;
    fprintf(f, "function %08X %s\nverdict %s\n", p.addr, p.e->name, why.c_str());
    fprintf(f, "regs eax=%08lX ebx=%08lX ecx=%08lX edx=%08lX esi=%08lX edi=%08lX ebp=%08lX esp=%08lX eflags=%08lX fpcw=%04lX\n",
            c.Eax, c.Ebx, c.Ecx, c.Edx, c.Esi, c.Edi, c.Ebp, c.Esp, c.EFlags, c.FloatSave.ControlWord & 0xFFFF);
    fprintf(f, "teb %08X ourdll %08X\n", teb, g_dllLo);
    // filtered write logs and the first point where the two runs disagree
    std::vector<Write> wa, wb;
    for (auto& w : a.writes) if (!Ignored(w.addr, lo, hi, teb)) wa.push_back(w);
    for (auto& w : b.writes) if (!Ignored(w.addr, lo, hi, teb)) wb.push_back(w);
    size_t i = 0;
    while (i < wa.size() && i < wb.size() && wa[i].addr == wb[i].addr && wa[i].size == wb[i].size &&
           wa[i].value == wb[i].value)
        ++i;
    fprintf(f, "first_divergence index=%zu", i);
    if (i < wa.size()) fprintf(f, " A:eip=%08X addr=%08X size=%u value=%llX", wa[i].eip, wa[i].addr, wa[i].size, wa[i].value);
    if (i < wb.size()) fprintf(f, " B:eip=%08X addr=%08X size=%u value=%llX", wb[i].eip, wb[i].addr, wb[i].size, wb[i].value);
    fprintf(f, "\n");
    // every differing dword
    std::vector<uint32_t> dw;
    for (auto* ws : {&wa, &wb})
        for (auto& w : *ws)
            for (uint32_t k = 0; k < w.size; ++k) dw.push_back((w.addr + k) & ~3u);
    std::sort(dw.begin(), dw.end());
    dw.erase(std::unique(dw.begin(), dw.end()), dw.end());
    int nd = 0;
    for (uint32_t x : dw) {
        uint32_t va = 0, vb = 0;
        U.mem_read(a.uc, x, &va, 4);
        U.mem_read(b.uc, x, &vb, 4);
        if (va != vb && nd++ < 300) fprintf(f, "diff %08X A=%08X B=%08X\n", x, va, vb);
    }
    fprintf(f, "diff_count %d\n", nd);
    for (auto& w : wa) fprintf(f, "wa %08X %08X %u %llX\n", w.eip, w.addr, w.size, w.value);
    for (auto& w : wb) fprintf(f, "wb %08X %08X %u %llX\n", w.eip, w.addr, w.size, w.value);
    fclose(f);
    sprintf_s(path, "shadow_fail/%08X.bin", p.addr);
    if (!fopen_s(&f, path, "wb") && f) {          // [u32 page][4096 bytes] ... : the live input the runs saw
        for (auto& pg : g_snap) { fwrite(&pg.first, 4, 1, f); fwrite(pg.second.data(), 1, 4096, f); }
        fclose(f);
    }
}

// ---- compare one sample ----
void Sample(Probe& p, const CONTEXT& c) {
    NT_TIB* tib = reinterpret_cast<NT_TIB*>(NtCurrentTeb());
    uint32_t teb = reinterpret_cast<uint32_t>(tib);
    Run a, b;
    g_snap.clear();
    bool okA = Setup(a, c, p.addr, teb), okB = okA && Setup(b, c, reinterpret_cast<uint32_t>(p.thunk), teb);
    if (okA) Execute(a, p.addr);
    if (okA && a.why.empty() && okB) Execute(b, reinterpret_cast<uint32_t>(p.thunk));
    ++p.samples;
    std::string fail;
    bool nearOnly = false;
    if (!okA || !a.why.empty()) {
        ++p.inc;
        p.incWhy = okA ? a.why : "setup";
    } else if (!b.why.empty()) {
        fail = "ours did not finish: " + b.why;
    } else {
        char m[200] = "";
        uint32_t frameLo = reinterpret_cast<uint32_t>(tib->StackLimit), frameHi = c.Esp + 4 + p.e->stackArgBytes;
        // (the function's own argument slots are excluded: MSVC6 reuses them as temporaries. Nothing above
        // them: the caller's locals there are often written through out-pointers. An earlier 32-byte margin
        // hid exactly such writes -> functions "passed" in shadow mode and then crashed live.)
        // registers
        if (Reg(a, UC_X86_REG_ESP) != Reg(b, UC_X86_REG_ESP))
            sprintf_s(m, "esp after return A=%08X B=%08X (stack imbalance)", Reg(a, UC_X86_REG_ESP), Reg(b, UC_X86_REG_ESP));
        else if (Reg(a, UC_X86_REG_EBX) != Reg(b, UC_X86_REG_EBX) || Reg(a, UC_X86_REG_ESI) != Reg(b, UC_X86_REG_ESI) ||
                 Reg(a, UC_X86_REG_EDI) != Reg(b, UC_X86_REG_EDI) || Reg(a, UC_X86_REG_EBP) != Reg(b, UC_X86_REG_EBP))
            sprintf_s(m, "callee-saved register differs");
        else if (FpuTop(a) != FpuTop(b))
            sprintf_s(m, "x87 stack depth differs after return: top A=%d B=%d", FpuTop(a), FpuTop(b));
        else if ((p.e->ret == hook::Ret::Int32 || p.e->ret == hook::Ret::Int64) && Reg(a, UC_X86_REG_EAX) != Reg(b, UC_X86_REG_EAX)) {
            // bool/char results: MSVC6 sets only AL (callers test AL); same low byte = not a real difference
            if ((Reg(a, UC_X86_REG_EAX) & 0xFF) == (Reg(b, UC_X86_REG_EAX) & 0xFF) && p.e->ret == hook::Ret::Int32)
                nearOnly = true;
            else
                sprintf_s(m, "eax A=%08X B=%08X", Reg(a, UC_X86_REG_EAX), Reg(b, UC_X86_REG_EAX));
        }
        else if (p.e->ret == hook::Ret::Int64 && Reg(a, UC_X86_REG_EDX) != Reg(b, UC_X86_REG_EDX))
            sprintf_s(m, "edx A=%08X B=%08X", Reg(a, UC_X86_REG_EDX), Reg(b, UC_X86_REG_EDX));
        else if (p.e->ret == hook::Ret::Float) {
            double x = St0(a), y = St0(b);
            if (x != y) {
                if (std::isfinite(x) && std::isfinite(y) && std::fabs(x - y) <= 1e-5 * std::max(1.0, std::max(std::fabs(x), std::fabs(y))))
                    nearOnly = true;
                else
                    sprintf_s(m, "st0 A=%g B=%g", x, y);
            }
        }
        if (m[0]) fail = m;
        // memory written by either run, outside the callee's own frame/args, TEB, our DLL and emulator pages
        if (fail.empty()) {
            std::unordered_set<uint32_t> bytes;
            for (Run* r : {&a, &b})
                for (auto& w : r->writes)
                    for (uint32_t i = 0; i < w.size; ++i) {
                        uint32_t x = w.addr + i;
                        if ((x >= frameLo && x < frameHi) || (x >= teb && x < teb + 0x1000) ||
                            (x >= g_dllLo && x < g_dllHi) || x >= 0xBAD00000u)
                            continue;
                        bytes.insert(x);
                    }
            std::vector<uint32_t> sorted(bytes.begin(), bytes.end());
            std::sort(sorted.begin(), sorted.end());
            for (uint32_t x : sorted) {
                uint8_t va = 0, vb = 0;
                U.mem_read(a.uc, x, &va, 1);
                U.mem_read(b.uc, x, &vb, 1);
                if (va == vb) continue;
                uint32_t al = x & ~3u, da = 0, db = 0;
                U.mem_read(a.uc, al, &da, 4);
                U.mem_read(b.uc, al, &db, 4);
                if (NearFloat(da, db)) { nearOnly = true; continue; }
                char mm[160];
                sprintf_s(mm, "memory %08X A=%08X B=%08X (%zu bytes written)", al, da, db, sorted.size());
                fail = mm;
                break;
            }
        }
        if (fail.empty()) { if (nearOnly) ++p.near_; else ++p.pass; }
    }
    if (!fail.empty()) {
        ++p.fail;
        if (p.detail.empty()) {
            p.detail = fail;
            WriteCapsule(p, c, a, b, fail, teb);
        }
    }
    if (a.uc) U.close(a.uc);
    if (b.uc) U.close(b.uc);
}

// ---- exception handler: INT3 at a probed entry / single step after it ----
LONG CALLBACK Handler(EXCEPTION_POINTERS* x) {
    DWORD code = x->ExceptionRecord->ExceptionCode;
    CONTEXT* c = x->ContextRecord;
    if (code == EXCEPTION_BREAKPOINT) {
        Probe* p = FindProbe(reinterpret_cast<uint32_t>(x->ExceptionRecord->ExceptionAddress));
        if (!p) return EXCEPTION_CONTINUE_SEARCH;
        c->Eip = p->addr;
        if (p->samples < g_maxSamples && TryEnterCriticalSection(&g_lock)) {
            DWORD le = GetLastError();
            Sample(*p, *c);
            SetLastError(le);
            LeaveCriticalSection(&g_lock);
        }
        PokeByte(p->addr, p->orig);
        if (p->samples < g_maxSamples) {
            t_rearm = p;
            c->EFlags |= 0x100;          // trap after the first real instruction, then re-arm
        } else {
            p->armed = 0;
        }
        return EXCEPTION_CONTINUE_EXECUTION;
    }
    if (code == EXCEPTION_SINGLE_STEP && t_rearm) {
        Probe* p = t_rearm;
        t_rearm = nullptr;
        if (p->samples < g_maxSamples) PokeByte(p->addr, 0xCC);
        else p->armed = 0;
        return EXCEPTION_CONTINUE_EXECUTION;
    }
    return EXCEPTION_CONTINUE_SEARCH;
}

void WriteReport() {
    EnterCriticalSection(&g_lock);
    FILE* f = nullptr;
    if (!fopen_s(&f, "shadow_results.tsv", "w") && f) {
        fprintf(f, "addr\tname\tsamples\tpass\tnear\tfail\tincomplete\tverdict\tdetail\n");
        int nPass = 0, nFail = 0, nInc = 0, nNever = 0;
        for (auto& p : g_probes) {
            const char* v = p.samples == 0 ? "NEVER" : p.fail ? "FAIL" : (p.pass + p.near_) ? "PASS" : "INCOMPLETE";
            (p.samples == 0 ? nNever : p.fail ? nFail : (p.pass + p.near_) ? nPass : nInc)++;
            fprintf(f, "%08X\t%s\t%d\t%d\t%d\t%d\t%d\t%s\t%s\n", p.addr, p.e->name, p.samples, p.pass, p.near_, p.fail,
                    p.inc, v, p.fail ? p.detail.c_str() : p.inc ? p.incWhy.c_str() : "");
        }
        fclose(f);
        Log("shadow: PASS %d  FAIL %d  INCOMPLETE %d  NEVER-RAN %d", nPass, nFail, nInc, nNever);
    }
    LeaveCriticalSection(&g_lock);
}

DWORD WINAPI Reporter(void*) {
    for (;;) { Sleep(5000); WriteReport(); }
}

uint32_t ImageEnd(uint32_t base) {
    auto* dos = reinterpret_cast<IMAGE_DOS_HEADER*>(base);
    auto* nt = reinterpret_cast<IMAGE_NT_HEADERS*>(base + dos->e_lfanew);
    return base + nt->OptionalHeader.SizeOfImage;
}

}  // namespace

namespace shadow {

void Start() {
    if (!hook::ShadowMode()) return;
    if (!LoadUnicorn()) { Log("shadow: unicorn.dll missing/incomplete - shadow mode off"); return; }
    InitializeCriticalSection(&g_lock);
    g_exeLo = reinterpret_cast<uint32_t>(GetModuleHandleA(nullptr));
    g_exeHi = ImageEnd(g_exeLo);
    g_dllLo = reinterpret_cast<uint32_t>(&__ImageBase);
    g_dllHi = ImageEnd(g_dllLo);
    std::unordered_set<uint32_t> only;
    if (FILE* f = nullptr; !fopen_s(&f, "shadow.txt", "r") && f) {
        char w[32];
        unsigned v;
        while (fscanf_s(f, "%31s", w, (unsigned)sizeof w) == 1) {
            if (!_stricmp(w, "samples") && fscanf_s(f, "%u", &v) == 1) g_maxSamples = static_cast<int>(v);
            else if (!_stricmp(w, "only") && fscanf_s(f, "%x", &v) == 1) only.insert(v);
        }
        fclose(f);
    }
    for (hook::Entry* e = hook::Registry(); e; e = e->next) {
        if (!only.empty() && !only.count(e->address)) continue;
        Probe p{};
        p.addr = e->address;
        p.e = e;
        p.thunk = hook::Thunk(*e);
        p.orig = *reinterpret_cast<uint8_t*>(e->address);
        if (p.thunk && p.orig != 0xCC) g_probes.push_back(p);
    }
    std::sort(g_probes.begin(), g_probes.end(), [](const Probe& x, const Probe& y) { return x.addr < y.addr; });
    g_probes.erase(std::unique(g_probes.begin(), g_probes.end(), [](const Probe& x, const Probe& y) { return x.addr == y.addr; }),
                   g_probes.end());
    AddVectoredExceptionHandler(1, Handler);
    for (auto& p : g_probes) {
        DWORD prot;
        VirtualProtect(reinterpret_cast<void*>(p.addr), 1, PAGE_EXECUTE_READWRITE, &prot);
    }
    for (auto& p : g_probes) { p.armed = 1; PokeByte(p.addr, 0xCC); }
    Log("shadow: %zu functions probed, %d samples each; results -> shadow_results.tsv", g_probes.size(), g_maxSamples);
    CreateThread(nullptr, 0, Reporter, nullptr, 0, nullptr);
}

void Stop() {
    if (!g_probes.empty()) WriteReport();
}

}  // namespace shadow
