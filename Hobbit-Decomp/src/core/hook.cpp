#include "core/hook.h"
#include "core/log.h"

#include <windows.h>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <initializer_list>
#include <set>
#include <string>

extern "C" {
// caller's registers at the last entry into a replacement (written by every thunk, read by generated code)
unsigned __entry_eax, __entry_ecx, __entry_edx, __entry_ebx, __entry_esi, __entry_edi;
}

namespace hook {

Entry*& Registry() {
    static Entry* head = nullptr;
    return head;
}

static std::set<std::string> LoadDisabled() {
    std::set<std::string> out;
    std::ifstream f("hooks_disabled.txt");
    for (std::string line; std::getline(f, line);) {
        if (!line.empty() && line.back() == '\r') line.pop_back();
        if (!line.empty() && line[0] != '#') out.insert(line);
    }
    return out;
}

static bool WriteJump(uint32_t from, void* to) {
    uint8_t patch[5] = {0xE9};
    int32_t rel = static_cast<int32_t>(reinterpret_cast<uint32_t>(to) - (from + 5));
    memcpy(patch + 1, &rel, 4);
    DWORD old;
    if (!VirtualProtect(reinterpret_cast<void*>(from), 5, PAGE_EXECUTE_READWRITE, &old)) return false;
    memcpy(reinterpret_cast<void*>(from), patch, 5);
    VirtualProtect(reinterpret_cast<void*>(from), 5, old, &old);
    FlushInstructionCache(GetCurrentProcess(), reinterpret_cast<void*>(from), 5);
    return true;
}

// Generated per replacement:
//   push ebp / mov ebp,esp / push eax / push ecx / push edx      ; [ebp-4]=eax [ebp-8]=ecx [ebp-12]=edx
//   push dword [ebp+8+k] ... (copy the stack args)               ; target gets its own copy
//   mov ecx,[ebp-8] / mov edx,[ebp-12] / call target
//   restore every volatile register that is not a return register
//   mov esp,ebp / pop ebp / ret N (N = args for callee-pops conventions, 0 for cdecl)
static void* MakeThunk(Entry& e) {
    static uint8_t* pool = nullptr;
    static size_t used = 0, cap = 0;
    const size_t need = 120 + 7 * (e.stackArgBytes / 4);
    if (used + need > cap) {
        cap = 64 * 1024;
        pool = static_cast<uint8_t*>(VirtualAlloc(nullptr, cap, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE));
        used = 0;
        if (!pool) return nullptr;
    }
    uint8_t* start = pool + used;
    uint8_t* p = start;
    auto b = [&](std::initializer_list<uint8_t> bytes) { for (uint8_t x : bytes) *p++ = x; };
    auto d = [&](uint32_t v) { memcpy(p, &v, 4); p += 4; };

    b({0xF0, 0xFF, 0x05});  // lock inc dword [&entry.calls]  (call counter for every replacement)
    d(reinterpret_cast<uint32_t>(&e.calls));
    // registers exactly as the caller left them (generated code reads in_EAX/unaff_ESI... from here: inside
    // the compiled C function the prologue may already have reused them, tools/hidden_regs.py)
    b({0xA3}); d(reinterpret_cast<uint32_t>(&__entry_eax));        // mov [__entry_eax], eax
    b({0x89, 0x0D}); d(reinterpret_cast<uint32_t>(&__entry_ecx));  // mov [__entry_ecx], ecx
    b({0x89, 0x15}); d(reinterpret_cast<uint32_t>(&__entry_edx));  // mov [__entry_edx], edx
    b({0x89, 0x1D}); d(reinterpret_cast<uint32_t>(&__entry_ebx));  // mov [__entry_ebx], ebx
    b({0x89, 0x35}); d(reinterpret_cast<uint32_t>(&__entry_esi));  // mov [__entry_esi], esi
    b({0x89, 0x3D}); d(reinterpret_cast<uint32_t>(&__entry_edi));  // mov [__entry_edi], edi
    b({0x55, 0x8B, 0xEC, 0x50, 0x51, 0x52});
    for (int off = e.stackArgBytes - 4; off >= 0; off -= 4) {
        b({0xFF, 0xB5});  // push dword [ebp+disp32]
        d(8 + off);
    }
    b({0x8B, 0x4D, 0xF8, 0x8B, 0x55, 0xF4});  // mov ecx,[ebp-8] / mov edx,[ebp-12]
    *p++ = 0xE8;                              // call rel32
    d(reinterpret_cast<uint32_t>(e.replacement) - (reinterpret_cast<uint32_t>(p) + 4));
    const bool keepEax = e.ret == Ret::Void || e.ret == Ret::Float;
    const bool keepEdx = e.ret != Ret::Int64;
    if (keepEax) b({0x8B, 0x45, 0xFC});  // mov eax,[ebp-4]
    b({0x8B, 0x4D, 0xF8});               // mov ecx,[ebp-8]  (never a return register)
    if (keepEdx) b({0x8B, 0x55, 0xF4});  // mov edx,[ebp-12]
    b({0x8B, 0xE5, 0x5D});               // mov esp,ebp / pop ebp
    const uint16_t pop = e.conv == Conv::Cdecl ? 0 : e.stackArgBytes;
    if (pop) {
        b({0xC2});
        memcpy(p, &pop, 2);
        p += 2;
    } else {
        b({0xC3});
    }
    used += (p - start + 15) & ~size_t(15);
    return start;
}

// hooks_disabled.txt lines: a function name, "auto" (all generated AUTO_* functions), or an
// address range "00400000-00450000" (for bisecting a crash across thousands of functions).
static bool IsDisabled(const std::set<std::string>& disabled, const Entry& e) {
    if (disabled.count(e.name)) return true;
    if (disabled.count("auto") && strncmp(e.name, "AUTO_", 5) == 0) return true;
    for (const std::string& line : disabled) {
        unsigned lo, hi;
        if (sscanf(line.c_str(), "%x-%x", &lo, &hi) == 2 && e.address >= lo && e.address < hi) return true;
    }
    return false;
}

void* Thunk(Entry& e) {
    struct Cache { Entry* e; void* t; };
    static Cache* cache = nullptr;
    static size_t n = 0, cap = 0;
    for (size_t i = 0; i < n; ++i) if (cache[i].e == &e) return cache[i].t;
    if (n == cap) {
        cap = cap ? cap * 2 : 1024;
        cache = static_cast<Cache*>(realloc(cache, cap * sizeof(Cache)));
    }
    void* t = MakeThunk(e);
    cache[n++] = {&e, t};
    return t;
}

bool ShadowMode() {
    static int on = -1;
    if (on < 0) on = GetFileAttributesA("shadow.txt") != INVALID_FILE_ATTRIBUTES;
    return on == 1;
}

int InstallAll() {
    if (ShadowMode()) {
        Log("shadow mode: no replacements installed (original game code runs)");
        return 0;
    }
    auto disabled = LoadDisabled();
    int n = 0;
    for (Entry* e = Registry(); e; e = e->next) {
        if (!e->live) continue;
        if (IsDisabled(disabled, *e)) {
            Log("  skip    %08X %s (disabled)", e->address, e->name);
            continue;
        }
        void* thunk = Thunk(*e);
        if (thunk && WriteJump(e->address, thunk)) {
            Log("  replace %08X %-32s args=%u ret=%d", e->address, e->name, e->stackArgBytes, (int)e->ret);
            ++n;
        } else {
            Log("  FAILED  %08X %s", e->address, e->name);
        }
    }
    return n;
}

Entry* Find(void* replacement) noexcept {
    for (Entry* e = Registry(); e; e = e->next)
        if (e->replacement == replacement) return e;
    return nullptr;
}

void DumpCallCounts() {
    Log("call counts:");
    for (Entry* e = Registry(); e; e = e->next) Log("  %10ld  %08X %s", e->calls, e->address, e->name);
}

}  // namespace hook
