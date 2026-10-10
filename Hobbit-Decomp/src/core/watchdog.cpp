// Hang finder: a background thread samples the game's main thread every 2 s (where is it executing,
// and which replacements were called most since the last sample) and writes it to the log.
// tools/crash_culprit.py maps the sampled addresses to functions through the linker map.
#include "core/hook.h"
#include "core/log.h"

#include <windows.h>
#include <algorithm>
#include <vector>

static HANDLE g_main = nullptr;

static DWORD WINAPI Watch(void*) {
    Sleep(5000);
    std::vector<long> last;
    for (int tick = 0; tick < 600; ++tick) {
        Sleep(2000);
        CONTEXT c{};
        c.ContextFlags = CONTEXT_CONTROL;
        DWORD eip = 0;
        if (SuspendThread(g_main) != (DWORD)-1) {
            if (GetThreadContext(g_main, &c)) eip = c.Eip;
            ResumeThread(g_main);
        }
        // biggest call-count increases since the previous sample
        std::vector<std::pair<long, const hook::Entry*>> d;
        size_t i = 0;
        for (hook::Entry* e = hook::Registry(); e; e = e->next, ++i) {
            if (last.size() <= i) last.push_back(0);
            long now = e->calls;
            if (now - last[i] > 0) d.push_back({now - last[i], e});
            last[i] = now;
        }
        std::sort(d.begin(), d.end(), [](auto& a, auto& b) { return a.first > b.first; });
        char top[512] = "";
        for (size_t k = 0; k < d.size() && k < 5; ++k) {
            char one[96];
            sprintf_s(one, " %s=%ld", d[k].second->name, d[k].first);
            strcat_s(top, one);
        }
        Log("watchdog %3d: main EIP=%08X  top calls:%s", tick, eip, top);
        if (tick == 10) {   // ~25 s in (menu): which replacements have run at all so far
            Log("ran-so-far:");
            for (hook::Entry* e = hook::Registry(); e; e = e->next)
                if (e->calls) Log("  ran %s", e->name);
        }
        // call stack of the main thread: return addresses into the game (0x401000..) or our DLL (0x10000000..)
        if (eip) {
            char stk[1024] = "";
            const DWORD* sp = reinterpret_cast<const DWORD*>(c.Esp);
            for (int k = 0, shown = 0; k < 2048 && shown < 24; ++k) {
                DWORD v;
                if (!ReadProcessMemory(GetCurrentProcess(), sp + k, &v, 4, nullptr)) break;
                if ((v >= 0x401000 && v < 0x6C0000) || (v >= 0x10000000 && v < 0x10400000)) {
                    char one[16];
                    sprintf_s(one, " %08X", v);
                    strcat_s(stk, one);
                    ++shown;
                }
            }
            Log("watchdog %3d: stack%s", tick, stk);
        }
    }
    return 0;
}

void StartWatchdog() {
    DuplicateHandle(GetCurrentProcess(), GetCurrentThread(), GetCurrentProcess(), &g_main,
                    THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT, FALSE, 0);
    CloseHandle(CreateThread(nullptr, 0, Watch, nullptr, 0, nullptr));
}
