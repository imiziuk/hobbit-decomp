// Test mode (environment variable HOBBIT_AUTOSTART=1): skip the front-end menu and start a new game,
// so tools can reproduce level-loading crashes without a human clicking "New Game".
// The front end loops `while (FUN_0052ac00() == 0)` (RunFrontEnd, 0x004FE3E0); this replacement
// says "not yet" for a while (so the menu finishes initializing) and then "start".
#include "core/hook.h"

#include <cstdlib>

static int AutoStart_MenuDone(int) {
    static int frames = 0;
    return ++frames > 200 ? 1 : 0;
}

static hook::Registrar* g_autostart =
    std::getenv("HOBBIT_AUTOSTART")
        ? new hook::Registrar(0x0052AC00, reinterpret_cast<void*>(&AutoStart_MenuDone), "autostart_menu_done", 4,
                              hook::Ret::Int32, hook::Conv::Cdecl)
        : nullptr;
