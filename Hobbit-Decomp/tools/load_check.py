"""Level-load check without a human: autotest.txt clicks New Game, waits for Bilbo, stays 20 s, quits.
Prints LOADED / CRASH / TIMEOUT. Usage: python tools/load_check.py [hooks_disabled entries file]
Pause: Ctrl+Alt+P (after start_hotkey()) or the file auto/PAUSE. Pausing kills the game, puts the game folder
back to normal (autotest off, hooks_disabled=auto) and redoes the interrupted check after resume."""
import ctypes, ctypes.wintypes, os, subprocess, sys, threading, time
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
G = os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean")
LOG = os.path.join(G, "hobbit_decomp.log")
PAUSE = os.path.join(ROOT, "auto", "PAUSE")
AT, AT_OFF = os.path.join(G, "autotest.txt"), os.path.join(G, "autotest.txt.off")

def running():
    return "Meridian.exe" in subprocess.run(["tasklist", "/FI", "IMAGENAME eq Meridian.exe"], capture_output=True, text=True).stdout
def kill():
    subprocess.run(["taskkill", "/F", "/IM", "Meridian.exe"], capture_output=True)
def set_disabled(text):
    open(os.path.join(G, "hooks_disabled.txt"), "w").write(text)
EXTRA = []          # other mode files (e.g. "shadow.txt") switched on with autotest and off by restore_folder
def autotest(on):
    if not on and os.path.exists(AT + ".load"):   # a play check swapped the script in: restore the load script
        os.replace(AT + ".load", AT)
    for name in ["autotest.txt"] + EXTRA:
        a, b = os.path.join(G, name), os.path.join(G, name + ".off")
        src, dst = (b, a) if on else (a, b)
        if os.path.exists(src):
            os.replace(src, dst)
    if not on:                                   # restore_folder: every known mode file off
        for name in ("shadow.txt", "devmode.txt"):
            a = os.path.join(G, name)
            if os.path.exists(a) and name in EXTRA:
                os.replace(a, a + ".off")
def restore_folder():
    """the game folder as the maintainer expects it: pure original, no autotest"""
    autotest(False); set_disabled("auto\n")

def start_hotkey():
    """Ctrl+Alt+P toggles auto/PAUSE (global hotkey; low beep = paused, high beep = resumed)"""
    def loop():
        u = ctypes.windll.user32
        if not u.RegisterHotKey(None, 1, 0x0001 | 0x0002 | 0x4000, ord("P")):   # MOD_ALT|MOD_CONTROL|NOREPEAT
            print("hotkey Ctrl+Alt+P not available (taken?) -> use the auto/PAUSE file", flush=True); return
        msg = ctypes.wintypes.MSG()
        while u.GetMessageW(ctypes.byref(msg), None, 0, 0) > 0:
            if msg.message == 0x0312:                                           # WM_HOTKEY
                if os.path.exists(PAUSE):
                    os.remove(PAUSE); ctypes.windll.kernel32.Beep(880, 250)
                else:
                    open(PAUSE, "w").close(); ctypes.windll.kernel32.Beep(330, 400)
    threading.Thread(target=loop, daemon=True).start()

def wait_unpaused():
    if not os.path.exists(PAUSE):
        return
    kill(); time.sleep(1); restore_folder()
    print(f"  PAUSED {time.strftime('%H:%M')} (Ctrl+Alt+P or delete auto/PAUSE to resume)", flush=True)
    while os.path.exists(PAUSE):
        time.sleep(1)
    print(f"  resumed {time.strftime('%H:%M')}", flush=True)

PLAY_SCRIPT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "play_script.txt")

def check(disabled=(), raw=None, max_wait=300, play=False):
    """raw: exact hooks_disabled.txt text (e.g. '00000000-ffffffff' = every replacement off)"""
    while True:
        wait_unpaused()
        kill(); time.sleep(2)
        set_disabled(raw if raw is not None else "".join(f"AUTO_{a}\n" for a in sorted(disabled))); autotest(True)
        if play:                                  # play script instead of the plain load script (put back on disable)
            import shutil
            shutil.copy(AT, AT + ".load"); shutil.copy(PLAY_SCRIPT, AT)
        start = os.path.getsize(LOG)
        subprocess.Popen(["cmd", "/c", os.path.join(G, "Play Hobbit.bat")], cwd=G)
        paused = False
        for i in range(3 + max_wait // 3):            # up to max_wait seconds
            time.sleep(3 if i >= 3 else 8 / 3)
            if os.path.exists(PAUSE):
                paused = True; break
            if i >= 3 and not running():
                break
        else:
            kill(); restore_folder(); return "TIMEOUT"
        if paused:
            continue                                  # interrupted: doesn't count, redo after resume
        restore_folder()
        with open(LOG, "rb") as f:          # binary: `start` is a byte offset (text mode would shift it)
            f.seek(start)
            tail = f.read().decode("utf-8", "replace")
        if "autotest: wait_bilbo ok" in tail and "autotest: MARK 20s in level" in tail and "autotest: quit" in tail:
            return "LOADED"
        return "CRASH"

if __name__ == "__main__":
    start_hotkey()
    dis = open(sys.argv[1]).read().split() if len(sys.argv) > 1 else []
    print(check(dis))
