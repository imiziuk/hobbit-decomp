// Logs the first access violation (address, registers, stack words) before the game's own exception
// handler (0x0065EA60) runs: that handler itself crashes while printing, hiding the real fault.
#include "core/hook.h"
#include "core/log.h"

#include <windows.h>

static LONG CALLBACK FirstChance(EXCEPTION_POINTERS* ep) {
    static volatile long logged = 0;
    const EXCEPTION_RECORD* er = ep->ExceptionRecord;
    if (er->ExceptionCode != EXCEPTION_ACCESS_VIOLATION) return EXCEPTION_CONTINUE_SEARCH;
    // the shadow tester's emulator takes (and handles) access violations of its own: not the game's crash
    static HMODULE uc = GetModuleHandleA("unicorn.dll");
    if (!uc) uc = GetModuleHandleA("unicorn.dll");
    HMODULE at = nullptr;
    if (uc && GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                                 reinterpret_cast<LPCSTR>(ep->ContextRecord->Eip), &at) && at == uc)
        return EXCEPTION_CONTINUE_SEARCH;
    if (_InterlockedIncrement(&logged) > 8) return EXCEPTION_CONTINUE_SEARCH;   // later ones may be the real crash
    const CONTEXT* c = ep->ContextRecord;
    Log("!!! ACCESS VIOLATION at %08X (%s %08X)", c->Eip,
        er->ExceptionInformation[0] ? "writing" : "reading", (unsigned)er->ExceptionInformation[1]);
    HMODULE where = nullptr;
    char modName[MAX_PATH] = "?";
    if (GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                           reinterpret_cast<LPCSTR>(c->Eip), &where) && where)
        GetModuleFileNameA(where, modName, MAX_PATH);
    Log("    in %s +0x%X", modName, c->Eip - reinterpret_cast<DWORD>(where));
    Log("    eax=%08X ebx=%08X ecx=%08X edx=%08X esi=%08X edi=%08X ebp=%08X esp=%08X", c->Eax, c->Ebx,
        c->Ecx, c->Edx, c->Esi, c->Edi, c->Ebp, c->Esp);
    // Return addresses into the game code (0x401000..0x6C0000) on the stack = rough call stack.
    const DWORD* sp = reinterpret_cast<const DWORD*>(c->Esp);
    // Our DLL's address range: return addresses inside it name the reimplementation that was running
    // (tools/crash_culprit.py maps them through the linker map file).
    HMODULE self = nullptr;
    GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                       reinterpret_cast<LPCSTR>(&FirstChance), &self);
    const DWORD dll_lo = reinterpret_cast<DWORD>(self);
    const auto* nt = reinterpret_cast<const IMAGE_NT_HEADERS*>(
        reinterpret_cast<const BYTE*>(self) + reinterpret_cast<const IMAGE_DOS_HEADER*>(self)->e_lfanew);
    const DWORD dll_hi = dll_lo + nt->OptionalHeader.SizeOfImage;
    for (int i = 0, shown = 0; i < 512 && shown < 32; ++i) {
        DWORD v;
        if (!ReadProcessMemory(GetCurrentProcess(), sp + i, &v, 4, nullptr)) break;
        if ((v >= 0x401000 && v < 0x6C0000) || (v >= dll_lo && v < dll_hi)) {
            Log("    stack[%3d] %08X%s", i, v, v >= dll_lo && v < dll_hi ? "  (ours)" : "");
            ++shown;
        }
    }
    hook::DumpCallCounts();
    return EXCEPTION_CONTINUE_SEARCH;
}

static struct InstallCrashLog {
    InstallCrashLog() { AddVectoredExceptionHandler(1, FirstChance); }
} g_installCrashLog;
