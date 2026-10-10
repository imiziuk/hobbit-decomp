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
def autotest(on):
    src, dst = (AT_OFF, AT) if on else (AT, AT_OFF)
    if os.path.exists(src):
        os.replace(src, dst)
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

def check(disabled=()):
    while True:
        wait_unpaused()
        kill(); time.sleep(2)
        set_disabled("".join(f"AUTO_{a}\n" for a in sorted(disabled))); autotest(True)
        start = os.path.getsize(LOG)
        subprocess.Popen(["cmd", "/c", os.path.join(G, "Play Hobbit.bat")], cwd=G)
        paused = False
        for i in range(103):                          # up to ~5 min
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
