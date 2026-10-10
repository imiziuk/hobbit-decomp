// dinput8.dll proxy: forwards DirectInput8Create to the real system DLL and installs our functions.
#include "core/hook.h"
#include "core/log.h"

#include <windows.h>

using DirectInput8Create_t = HRESULT(WINAPI*)(HINSTANCE, DWORD, REFIID, LPVOID*, void*);
static DirectInput8Create_t g_RealCreate = nullptr;
void StartWatchdog();  // core/watchdog.cpp
namespace autotest { void Start(); void WrapDirectInput(void*); }  // core/autotest.cpp
namespace shadow { void Start(); void Stop(); }  // core/shadow.cpp
namespace devmode { void Start(); }  // core/devmode.cpp

static void LoadRealDInput() {
    char path[MAX_PATH];
    GetSystemDirectoryA(path, MAX_PATH);  // SysWOW64 for a 32-bit process
    strcat_s(path, "\\dinput8.dll");
    HMODULE real = LoadLibraryA(path);
    if (real) g_RealCreate = reinterpret_cast<DirectInput8Create_t>(GetProcAddress(real, "DirectInput8Create"));
    Log("real dinput8: %s (%s)", path, g_RealCreate ? "ok" : "MISSING");
}

extern "C" HRESULT WINAPI Proxy_DirectInput8Create(HINSTANCE inst, DWORD ver, REFIID iid, LPVOID* out,
                                                   void* outer) {
    if (!g_RealCreate) return E_FAIL;
    HRESULT hr = g_RealCreate(inst, ver, iid, out, outer);
    if (SUCCEEDED(hr) && out) autotest::WrapDirectInput(*out);
    return hr;
}

BOOL APIENTRY DllMain(HMODULE, DWORD reason, LPVOID) {
    if (reason == DLL_PROCESS_ATTACH) {
        Log("---- Hobbit-Decomp loaded ----");
        LoadRealDInput();
        int n = hook::InstallAll();
        Log("%d functions replaced", n);
        StartWatchdog();  // DllMain runs on the main thread: the watchdog samples this thread
        autotest::Start();
        shadow::Start();
        devmode::Start();
    } else if (reason == DLL_PROCESS_DETACH) {
        hook::DumpCallCounts();
        shadow::Stop();
    }
    return TRUE;
}
