// Autotest: Claude drives the game without a human (only when `autotest.txt` exists in the game folder).
//
// Input: our dinput8.dll proxy wraps IDirectInput8::CreateDevice and the devices' GetDeviceState /
// GetDeviceData, and ORs scripted key presses into the keyboard state (works without window focus;
// if the real device is unacquired because the window is in the background we still return our keys).
// Eyes: a probe line every 500 ms in hobbit_decomp.log (Bilbo pointer, position, state, health, weapon,
// stone count) so results can be checked from the log.
//
// Script (autotest.txt, one command per line, `#` comments):
//   sleep <ms>                     wait
//   key <NAME|0xDIK> [hold_ms]     press and release (default 120 ms)
//   hold <NAME> / release <NAME>   keep a key down / let go
//   wait_bilbo [timeout_ms]        wait until g_pBilbo != 0 (level loaded)
//   wait_nobilbo [timeout_ms]      wait until g_pBilbo == 0 (back in the menu / loading)
//   setf <addr> <float>            write memory (e.g. health 0x0075BDBC 0 -> test death/respawn)
//   seti <addr> <int>
//   mark <text>                    write a marker line to the log
//   quit                           TerminateProcess (call counts are dumped first)
#include "core/hook.h"
#include "core/log.h"

#define DIRECTINPUT_VERSION 0x0800
#include <windows.h>
#include <dinput.h>

#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

namespace {

std::atomic<unsigned char> g_keys[256];      // scripted keys currently held
std::atomic<unsigned char> g_prev[256];      // what buffered readers have already been told
std::atomic<DWORD> g_seq{1};
std::atomic<long> g_mdx{0}, g_mdy{0};          // pending relative mouse motion (consumed per poll)
std::atomic<unsigned char> g_mbtn[3];
std::atomic<long> g_cx{-1}, g_cy{-1};           // scripted cursor (client coords); -1 = real cursor
using GetCursorPos_t = BOOL(WINAPI*)(LPPOINT);
GetCursorPos_t g_realGetCursorPos = nullptr;
HWND GameWindow();
BOOL WINAPI MyGetCursorPos(LPPOINT p) {
    if (g_cx < 0) return g_realGetCursorPos(p);
    POINT q{g_cx, g_cy};
    ClientToScreen(GameWindow(), &q);
    *p = q;
    return TRUE;
}
bool g_on = false;

// ---- game state probes (addresses from Hobbit-RE-notes.md) ----
constexpr DWORD kBilbo = 0x0075BA3C;          // g_pBilbo
constexpr DWORD kHealth = 0x0075BDBC;         // inventory counts[4]
constexpr DWORD kStones = 0x0075BBE0 + 0x1CC + 2 * 4;
template <class T> bool Peek(DWORD a, T& out) {
    __try { out = *reinterpret_cast<volatile T*>(a); return true; } __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
}

// ---- DirectInput wrapping (vtable patch: all devices of a class share one vtable) ----
using GetState_t = HRESULT(STDMETHODCALLTYPE*)(IDirectInputDevice8A*, DWORD, LPVOID);
using GetData_t = HRESULT(STDMETHODCALLTYPE*)(IDirectInputDevice8A*, DWORD, LPDIDEVICEOBJECTDATA, LPDWORD, DWORD);
using CreateDev_t = HRESULT(STDMETHODCALLTYPE*)(IDirectInput8A*, REFGUID, LPDIRECTINPUTDEVICE8A*, LPUNKNOWN);
GetState_t g_realState = nullptr;
using Acquire_t = HRESULT(STDMETHODCALLTYPE*)(IDirectInputDevice8A*);
Acquire_t g_realAcquire = nullptr;
std::atomic<long> g_kbdPolls{0};
HRESULT STDMETHODCALLTYPE MyAcquire(IDirectInputDevice8A* d) {
    HRESULT hr = g_realAcquire(d);
    return FAILED(hr) ? DI_OK : hr;                     // background window: pretend we own the device
}
// keep the game "active" while it is in the background (it ignores input / pauses otherwise)
WNDPROC g_realWndProc = nullptr;
LRESULT CALLBACK MyWndProc(HWND h, UINT m, WPARAM w, LPARAM l) {
    if ((m == WM_ACTIVATEAPP && !w) || (m == WM_ACTIVATE && LOWORD(w) == WA_INACTIVE) || m == WM_KILLFOCUS)
        return 0;
    return CallWindowProcA(g_realWndProc, h, m, w, l);
}
GetData_t g_realData = nullptr;
CreateDev_t g_realCreate = nullptr;

void PatchSlot(void** vtbl, int slot, void* fn, void** old) {
    DWORD prot;
    VirtualProtect(&vtbl[slot], sizeof(void*), PAGE_EXECUTE_READWRITE, &prot);
    if (old && !*old) *old = vtbl[slot];
    vtbl[slot] = fn;
    VirtualProtect(&vtbl[slot], sizeof(void*), prot, &prot);
}

HRESULT STDMETHODCALLTYPE MyGetState(IDirectInputDevice8A* d, DWORD size, LPVOID buf) {
    HRESULT hr = g_realState(d, size, buf);
    static DWORD seen[8];
    for (int i = 0; i < 8; ++i) {
        if (seen[i] == size) break;
        if (!seen[i]) { seen[i] = size; Log("autotest: GetDeviceState size=%lu hr=%08lX", size, hr); break; }
    }
    if (size == sizeof(DIMOUSESTATE2) || size == sizeof(DIMOUSESTATE)) {   // mouse
        if (FAILED(hr)) { memset(buf, 0, size); hr = DI_OK; }
        auto* m = static_cast<DIMOUSESTATE*>(buf);
        long dx = g_mdx.load(), dy = g_mdy.load();
        long sx = dx > 8 ? 8 : dx < -8 ? -8 : dx, sy = dy > 8 ? 8 : dy < -8 ? -8 : dy;   // 8 px per poll
        g_mdx -= sx; g_mdy -= sy;
        m->lX += sx; m->lY += sy;
        for (int i = 0; i < 3; ++i) if (g_mbtn[i]) m->rgbButtons[i] |= 0x80;
    }
    if (size == 256) {                                  // keyboard
        ++g_kbdPolls;
        if (FAILED(hr)) { memset(buf, 0, 256); hr = DI_OK; }
        auto* k = static_cast<unsigned char*>(buf);
        for (int i = 0; i < 256; ++i)
            if (g_keys[i]) k[i] |= 0x80;
    }
    return hr;
}

HRESULT STDMETHODCALLTYPE MyGetData(IDirectInputDevice8A* d, DWORD cb, LPDIDEVICEOBJECTDATA data, LPDWORD n,
                                    DWORD flags) {
    DWORD cap = n ? *n : 0;
    HRESULT hr = g_realData(d, cb, data, n, flags);
    DIDEVICEINSTANCEA di{};
    di.dwSize = sizeof(di);
    bool info = SUCCEEDED(d->GetDeviceInfo(&di));
    static DWORD seenT[8];
    for (int i = 0; i < 8 && info; ++i) {
        DWORD t = GET_DIDEVICE_TYPE(di.dwDevType);
        if (seenT[i] == t) break;
        if (!seenT[i]) { seenT[i] = t; Log("autotest: GetDeviceData devtype=%lu cb=%lu hr=%08lX", t, cb, hr); break; }
    }
    if (!n || flags & DIGDD_PEEK || !info || GET_DIDEVICE_TYPE(di.dwDevType) != DI8DEVTYPE_KEYBOARD)
        return hr;
    if (FAILED(hr)) { *n = 0; hr = DI_OK; }
    for (int i = 0; i < 256 && data && *n < cap; ++i) {
        unsigned char now = g_keys[i], was = g_prev[i];
        if (now == was) continue;
        DIDEVICEOBJECTDATA& e = *reinterpret_cast<DIDEVICEOBJECTDATA*>(reinterpret_cast<char*>(data) + *n * cb);
        memset(&e, 0, cb);
        e.dwOfs = i;
        e.dwData = now ? 0x80 : 0;
        e.dwTimeStamp = GetTickCount();
        e.dwSequence = g_seq++;
        ++*n;
        g_prev[i] = now;
    }
    return hr;
}

HRESULT STDMETHODCALLTYPE MyCreateDevice(IDirectInput8A* di, REFGUID g, LPDIRECTINPUTDEVICE8A* out, LPUNKNOWN u) {
    HRESULT hr = g_realCreate(di, g, out, u);
    if (SUCCEEDED(hr) && out && *out) {
        void** vt = *reinterpret_cast<void***>(*out);
        if (vt[9] != reinterpret_cast<void*>(&MyGetState)) {
            PatchSlot(vt, 9, reinterpret_cast<void*>(&MyGetState), reinterpret_cast<void**>(&g_realState));
            PatchSlot(vt, 10, reinterpret_cast<void*>(&MyGetData), reinterpret_cast<void**>(&g_realData));
            PatchSlot(vt, 7, reinterpret_cast<void*>(&MyAcquire), reinterpret_cast<void**>(&g_realAcquire));
            Log("autotest: device input wrapped");
        }
    }
    return hr;
}

// ---- script ----
struct KeyName { const char* n; int dik; };
const KeyName kNames[] = {
    {"ESCAPE", DIK_ESCAPE}, {"RETURN", DIK_RETURN}, {"ENTER", DIK_RETURN}, {"SPACE", DIK_SPACE}, {"TAB", DIK_TAB},
    {"UP", DIK_UP}, {"DOWN", DIK_DOWN}, {"LEFT", DIK_LEFT}, {"RIGHT", DIK_RIGHT}, {"LSHIFT", DIK_LSHIFT},
    {"LCONTROL", DIK_LCONTROL}, {"LALT", DIK_LMENU}, {"BACK", DIK_BACK},
    {"A", DIK_A}, {"B", DIK_B}, {"C", DIK_C}, {"D", DIK_D}, {"E", DIK_E}, {"F", DIK_F}, {"G", DIK_G}, {"H", DIK_H},
    {"I", DIK_I}, {"J", DIK_J}, {"K", DIK_K}, {"L", DIK_L}, {"M", DIK_M}, {"N", DIK_N}, {"O", DIK_O}, {"P", DIK_P},
    {"Q", DIK_Q}, {"R", DIK_R}, {"S", DIK_S}, {"T", DIK_T}, {"U", DIK_U}, {"V", DIK_V}, {"W", DIK_W}, {"X", DIK_X},
    {"Y", DIK_Y}, {"Z", DIK_Z}, {"1", DIK_1}, {"2", DIK_2}, {"3", DIK_3}, {"4", DIK_4}, {"5", DIK_5}, {"6", DIK_6},
    {"7", DIK_7}, {"8", DIK_8}, {"9", DIK_9}, {"0", DIK_0}, {"F1", DIK_F1}, {"F2", DIK_F2}, {"F3", DIK_F3},
};
int Dik(const char* s) {
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) return static_cast<int>(strtol(s, nullptr, 16));
    for (auto& k : kNames) if (_stricmp(k.n, s) == 0) return k.dik;
    return -1;
}

HWND GameWindow();
DWORD g_t0 = 0;
void Probe(const char* why) {
    DWORD b = 0;
    Peek(kBilbo, b);
    float x = 0, y = 0, z = 0, hp = -1, stones = -1;
    int state = -1, wst = -1, wsg = -1, wsf = -1;
    if (b) {
        Peek(b + 0x14, x); Peek(b + 0x18, y); Peek(b + 0x1C, z);
        Peek(b + 0x8D4, state); Peek(b + 0x3B0, wst); Peek(b + 0x3C0, wsg); Peek(b + 0x3D0, wsf);
    }
    Peek(kHealth, hp);
    Peek(kStones, stones);
    Log("probe kbdpolls=%ld t=%lu %s bilbo=%08lX pos=(%.1f,%.1f,%.1f) state=%d hp=%.1f stones=%.0f weapon[stone,sting,staff]=%d,%d,%d",
        g_kbdPolls.exchange(0), (GetTickCount() - g_t0) / 100 * 100, why, b, x, y, z, state, hp, stones, wst, wsg, wsf);
}

DWORD WINAPI Prober(void*) {
    for (;;) {
        Sleep(500);
        static int reactivate = 0;
        if (g_realWndProc && ++reactivate % 6 == 0) {   // every 3 s, in case the game re-checks
            HWND w = GameWindow();
            PostMessageA(w, WM_ACTIVATEAPP, TRUE, 0);
            PostMessageA(w, WM_ACTIVATE, WA_ACTIVE, 0);
        }
        if (!g_realWndProc) {                           // subclass the game window once it exists
            if (HWND w = GameWindow()) {
                g_realWndProc = reinterpret_cast<WNDPROC>(
                    SetWindowLongPtrA(w, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(&MyWndProc)));
                Log("autotest: window %p subclassed (stays active in background)", w);
                // it was created behind another window and never saw an activation: tell it now
                PostMessageA(w, WM_ACTIVATEAPP, TRUE, 0);
                PostMessageA(w, WM_ACTIVATE, WA_ACTIVE, 0);
                PostMessageA(w, WM_SETFOCUS, 0, 0);
            }
        }
        Probe("");
    }
}

BOOL CALLBACK FindMine(HWND h, LPARAM out) {
    DWORD pid = 0;
    GetWindowThreadProcessId(h, &pid);
    if (pid == GetCurrentProcessId() && IsWindowVisible(h)) { *reinterpret_cast<HWND*>(out) = h; return FALSE; }
    return TRUE;
}
HWND GameWindow() {
    HWND h = nullptr;
    EnumWindows(FindMine, reinterpret_cast<LPARAM>(&h));
    return h;
}

bool WaitBilbo(bool want, DWORD timeout) {
    for (DWORD t = 0; t < timeout; t += 100) {
        DWORD b = 0;
        Peek(kBilbo, b);
        if ((b != 0) == want) return true;
        Sleep(100);
    }
    return false;
}

DWORD WINAPI Runner(void* p) {
    std::string path = static_cast<const char*>(p);
    FILE* f = nullptr;
    if (fopen_s(&f, path.c_str(), "r") || !f) return 0;
    std::string all;                                  // read it all now: the file stays editable
    char line[256];
    while (fgets(line, sizeof line, f)) all += line;
    fclose(f);
    f = nullptr;
    Sleep(1000);
    size_t pos = 0;
    while (pos < all.size()) {
        size_t e = all.find('\n', pos);
        std::string ln = all.substr(pos, e == std::string::npos ? std::string::npos : e - pos);
        pos = e == std::string::npos ? all.size() : e + 1;
        strncpy_s(line, ln.c_str(), _TRUNCATE);
        char cmd[32] = "", a[64] = "", b2[64] = "";
        if (sscanf_s(line, "%31s %63s %63s", cmd, (unsigned)sizeof cmd, a, (unsigned)sizeof a, b2, (unsigned)sizeof b2) < 1 ||
            cmd[0] == '#')
            continue;
        if (!_stricmp(cmd, "sleep")) Sleep(atoi(a));
        else if (!_stricmp(cmd, "key") || !_stricmp(cmd, "hold") || !_stricmp(cmd, "release")) {
            int k = Dik(a);
            if (k < 0) { Log("autotest: unknown key %s", a); continue; }
            if (!_stricmp(cmd, "release")) g_keys[k] = 0;
            else {
                g_keys[k] = 1;
                if (!_stricmp(cmd, "key")) { Sleep(b2[0] ? atoi(b2) : 120); g_keys[k] = 0; Sleep(60); }
            }
        } else if (!_stricmp(cmd, "wait_bilbo") || !_stricmp(cmd, "wait_nobilbo")) {
            bool ok = WaitBilbo(!_stricmp(cmd, "wait_bilbo"), a[0] ? atoi(a) : 120000);
            Log("autotest: %s %s", cmd, ok ? "ok" : "TIMEOUT");
            Probe(cmd);
        } else if (!_stricmp(cmd, "setf") || !_stricmp(cmd, "seti")) {
            DWORD addr = strtoul(a, nullptr, 16), prot;
            VirtualProtect(reinterpret_cast<void*>(addr), 4, PAGE_READWRITE, &prot);
            if (!_stricmp(cmd, "setf")) *reinterpret_cast<float*>(addr) = static_cast<float>(atof(b2));
            else *reinterpret_cast<int*>(addr) = static_cast<int>(strtol(b2, nullptr, 0));
            VirtualProtect(reinterpret_cast<void*>(addr), 4, prot, &prot);
            Log("autotest: %s %s = %s", cmd, a, b2);
        } else if (!_stricmp(cmd, "vkey")) {          // WM_KEYDOWN/UP to the game window (menus)
            HWND w = GameWindow();
            UINT vk = strtoul(a, nullptr, 0);
            UINT sc = MapVirtualKeyA(vk, MAPVK_VK_TO_VSC);
            PostMessageA(w, WM_KEYDOWN, vk, 1 | (sc << 16));
            Sleep(100);
            PostMessageA(w, WM_KEYUP, vk, 1 | (sc << 16) | 0xC0000000);
            Log("autotest: vkey 0x%X -> hwnd %p", vk, w);
        } else if (!_stricmp(cmd, "click")) {         // left click at client coordinates
            HWND w = GameWindow();
            LPARAM xy = MAKELPARAM(atoi(a), atoi(b2));
            PostMessageA(w, WM_MOUSEMOVE, 0, xy);
            Sleep(50);
            PostMessageA(w, WM_LBUTTONDOWN, MK_LBUTTON, xy);
            Sleep(100);
            PostMessageA(w, WM_LBUTTONUP, 0, xy);
            Log("autotest: click %s,%s -> hwnd %p", a, b2, w);
        } else if (!_stricmp(cmd, "mouse")) {          // relative DirectInput mouse motion
            g_mdx += atol(a); g_mdy += atol(b2);
            while (g_mdx || g_mdy) Sleep(20);
        } else if (!_stricmp(cmd, "cursor")) {         // fake GetCursorPos (client coords)
            g_cx = atol(a); g_cy = atol(b2);
            PostMessageA(GameWindow(), WM_MOUSEMOVE, 0, MAKELPARAM(g_cx, g_cy));
            Log("autotest: cursor %ld,%ld", g_cx.load(), g_cy.load());
        } else if (!_stricmp(cmd, "mclick")) {         // DirectInput mouse button (0 = left)
            int bi = a[0] ? atoi(a) : 0;
            g_mbtn[bi] = 1; Sleep(150); g_mbtn[bi] = 0; Sleep(100);
        } else if (!_stricmp(cmd, "mark")) {
            Log("autotest: MARK %s", line + 5);
            Probe("mark");
        } else if (!_stricmp(cmd, "quit")) {
            Log("autotest: quit");
            hook::DumpCallCounts();
            TerminateProcess(GetCurrentProcess(), 0);
        }
    }
    Log("autotest: script finished");
    return 0;
}

}  // namespace

namespace autotest {

// called from DllMain: starts only if autotest.txt sits next to the exe
void Start() {
    static char path[MAX_PATH];
    GetModuleFileNameA(nullptr, path, MAX_PATH);
    if (char* s = strrchr(path, '\\')) strcpy_s(s + 1, MAX_PATH - (s + 1 - path), "autotest.txt");
    if (GetFileAttributesA(path) == INVALID_FILE_ATTRIBUTES) return;
    g_on = true;
    // the front end reads the Windows cursor: route the game's GetCursorPos import through us
    auto** iat = reinterpret_cast<void**>(0x006E9208);
    DWORD prot;
    VirtualProtect(iat, 4, PAGE_READWRITE, &prot);
    g_realGetCursorPos = reinterpret_cast<GetCursorPos_t>(*iat);
    *iat = reinterpret_cast<void*>(&MyGetCursorPos);
    VirtualProtect(iat, 4, prot, &prot);
    g_t0 = GetTickCount();
    Log("autotest: ON (%s)", path);
    CreateThread(nullptr, 0, Prober, nullptr, 0, nullptr);
    CreateThread(nullptr, 0, Runner, path, 0, nullptr);
}

// called from Proxy_DirectInput8Create with the created IDirectInput8 object
void WrapDirectInput(void* di) {
    if (!g_on || !di) return;
    void** vt = *reinterpret_cast<void***>(di);
    if (vt[3] != reinterpret_cast<void*>(&MyCreateDevice))
        PatchSlot(vt, 3, reinterpret_cast<void*>(&MyCreateDevice), reinterpret_cast<void**>(&g_realCreate));
}

}  // namespace autotest
