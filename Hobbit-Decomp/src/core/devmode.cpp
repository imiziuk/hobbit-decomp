// Developer mode + test hotkeys (only when `devmode.txt` exists in the game folder).
//
// The shipped game still contains Meridian's developer code, switched off by a flag nothing ever sets:
//   0x007600E8  dev flag: enables the debug key checks in Game_ProcessInput / bilbo movement (fly toggle)
//               and the developer SysMenu (FUN_00500ae0: level jumps Ch00..Ch11, Exit Level,
//               EnableFlyMode, Invulnerability, CHEAT All Pickups, NukeNearbyEnemies, FPS, Bilbo pos...).
//   0x0075FB98  1 = Game_LevelLoop opens the SysMenu on the next frame (FUN_00500740).
//   0x00720F84  fly flag (bilbo__ComputeMoveVector 0x4329e2 toggles it and copies it to Bilbo+0x364).
//   0x00762B5C  level to load next; 0x00760354 = 0 ends the running level (Game_LevelLoop exits).
//   0x0075BA3C  g_pBilbo;  health 0x0075BDBC, max health 0x0075C714.
// Hotkeys (game window must be in front):
//   F5 fly on/off   F6 developer SysMenu   F7 refill health
//   PageUp / PageDown  next / previous level   Home  restart current level
#include "core/log.h"

#include <windows.h>

// key presses injected by core/autotest.cpp (`devkey F5`): the test script cannot reach GetAsyncKeyState
volatile LONG g_devInject[256];

namespace {

template <class T> T& At(DWORD a) { return *reinterpret_cast<T*>(a); }

bool Readable(DWORD a) {
    MEMORY_BASIC_INFORMATION mi{};
    return VirtualQuery(reinterpret_cast<void*>(a), &mi, sizeof mi) && mi.State == MEM_COMMIT &&
           !(mi.Protect & (PAGE_NOACCESS | PAGE_GUARD));
}

bool Pressed(int vk) {                          // edge-triggered: true once per key press
    if (InterlockedExchange(&g_devInject[vk & 0xFF], 0)) return true;
    static SHORT prev[256];
    SHORT now = GetAsyncKeyState(vk);
    bool down = (now & 0x8000) && !(prev[vk] & 0x8000);
    prev[vk] = now;
    return down;
}

bool GameInFront() {
    DWORD pid = 0;
    GetWindowThreadProcessId(GetForegroundWindow(), &pid);
    return pid == GetCurrentProcessId();
}

// Ending a level during a cutscene or while it loads crashes the ORIGINAL game too (the maintainer: switching during
// Hobbiton's opening cutscene). So a switch waits until normal play: not loading (0x76035C == 0), Bilbo
// exists and is not in BILBO_STATE 34 = CINEMATIC (Bilbo+0x8D4), stable for ~1 s.
int g_pending = -1;
int g_safeTicks = 0;

bool SafeToSwitch() {
    DWORD bilbo = At<DWORD>(0x0075BA3C);
    bool ok = At<int>(0x0076035C) == 0 && bilbo && Readable(bilbo + 0x8D4) && At<int>(bilbo + 0x8D4) != 34;
    g_safeTicks = ok ? g_safeTicks + 1 : 0;
    return g_safeTicks > 33;                    // 33 x 30 ms
}

void GoToLevel(int level) {
    if (level < 0) level = 0;
    g_pending = level;
    Log("devmode: level %d requested%s", level, SafeToSwitch() ? "" : " (waiting for cutscene/loading to end)");
}

void ApplyPending() {
    if (g_pending < 0 || !SafeToSwitch()) return;
    At<int>(0x00762B5C) = g_pending;
    At<int>(0x00760354) = 0;                    // end the running level -> the game loads the chosen one
    Log("devmode: switching to level %d", g_pending);
    g_pending = -1;
    g_safeTicks = 0;
}

DWORD WINAPI Hotkeys(void*) {
    for (;;) {
        Sleep(30);
        At<int>(0x007600E8) = 1;                // keep dev mode on (cheap, survives anything resetting it)
        bool front = GameInFront();
        // read every key each tick so edges are not stored up while the game is in the background
        bool f5 = Pressed(VK_F5), f6 = Pressed(VK_F6), f7 = Pressed(VK_F7), pgup = Pressed(VK_PRIOR),
             pgdn = Pressed(VK_NEXT), home = Pressed(VK_HOME);
        LONG force = InterlockedExchange(&g_devInject[0], 0);   // autotest `devkey FLYON` = 1 / `FLYOFF` = 2
        bool injected = force || f5 || f6 || f7 || pgup || pgdn || home;   // script presses count in the background
        if (!front && !(injected && GetFileAttributesA("autotest.txt") != INVALID_FILE_ATTRIBUTES)) {
            SafeToSwitch(); ApplyPending(); continue;
        }
        DWORD bilbo = At<DWORD>(0x0075BA3C);
        if (f5 || force) {
            int fly = force ? (force == 1) : (At<int>(0x00720F84) ? 0 : 1);
            At<int>(0x00720F84) = fly;
            if (bilbo && Readable(bilbo + 0x364)) At<int>(bilbo + 0x364) = fly;
            Log("devmode: fly %s", fly ? "ON" : "OFF");
        }
        if (f6) {
            At<int>(0x0075FB98) = 1;
            Log("devmode: SysMenu requested");
        }
        if (f7) {
            At<float>(0x0075BDBC) = At<float>(0x0075C714);
            Log("devmode: health refilled to %.0f", At<float>(0x0075C714));
        }
        int cur = g_pending >= 0 ? g_pending : At<int>(0x00762B5C);
        if (pgup) GoToLevel(cur + 1);
        if (pgdn) GoToLevel(cur - 1);
        if (home) GoToLevel(At<int>(0x00762B5C));
        ApplyPending();
    }
}

}  // namespace

namespace devmode {

void Start() {
    char path[MAX_PATH];
    GetModuleFileNameA(nullptr, path, MAX_PATH);
    if (char* s = strrchr(path, '\\')) strcpy_s(s + 1, MAX_PATH - (s + 1 - path), "devmode.txt");
    if (GetFileAttributesA(path) == INVALID_FILE_ATTRIBUTES) return;
    At<int>(0x007600E8) = 1;
    Log("devmode: ON  (F5 fly, F6 dev menu, F7 health, PageUp/PageDown level, Home restart level)");
    CreateThread(nullptr, 0, Hotkeys, nullptr, 0, nullptr);
}

}  // namespace devmode
