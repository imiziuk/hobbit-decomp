"""Fast crash localization: launch the game once, read the crash log, and map every stack entry that
points into our DLL to the reimplemented function containing it (via the linker map). The innermost
AUTO_ function is blacklisted, the DLL is rebuilt without it, and the loop repeats until the game
survives startup. One launch per culprit instead of ~14 for bisection.
Usage: python tools/crash_culprit.py [--wait 25] [--max 50]
"""
import bisect, os, re, subprocess, sys, time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GAME = os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean")
LOG = os.path.join(GAME, "hobbit_decomp.log")
PY = os.path.join(ROOT, "tools", ".venv", "Scripts", "python.exe")
CMAKE = r"C:\Program Files\Microsoft Visual Studio\18\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
WAIT = int(sys.argv[sys.argv.index("--wait") + 1]) if "--wait" in sys.argv else 25
MAX = int(sys.argv[sys.argv.index("--max") + 1]) if "--max" in sys.argv else 50

def map_symbols():
    syms = []
    for line in open(os.path.join(ROOT, "build", "dinput8.map"), encoding="latin-1"):
        m = re.match(r"\s*0001:[0-9a-f]+\s+(\S+)\s+([0-9a-f]{8})\s+f\s", line)
        if m:
            syms.append((int(m[2], 16), m[1]))
    syms.sort()
    return syms

def run_game():
    if os.path.exists(LOG):
        os.remove(LOG)
    p = subprocess.Popen([os.path.join(GAME, "Meridian.exe")], cwd=GAME)
    t0 = time.time()
    while time.time() - t0 < WAIT:
        time.sleep(1)
        if os.path.exists(LOG) and "call counts" in open(LOG, errors="replace").read():
            break                                  # crash logger finished writing
        if p.poll() is not None:
            break
    subprocess.run(["taskkill", "/F", "/IM", "Meridian.exe"], capture_output=True)
    time.sleep(2)
    return open(LOG, errors="replace").read() if os.path.exists(LOG) else ""

def main():
    disabled = os.path.join(GAME, "hooks_disabled.txt")
    if os.path.exists(disabled):
        os.remove(disabled)
    for round_ in range(MAX):
        subprocess.run([PY, "tools/gen_registry.py"], cwd=ROOT, check=True, capture_output=True)
        b = subprocess.run([CMAKE, "--build", "build", "--config", "Release", "--parallel"], cwd=ROOT,
                           capture_output=True, text=True)
        if b.returncode:
            raise SystemExit("build failed:\n" + b.stdout[-1500:])
        import shutil
        shutil.copy(os.path.join(ROOT, "build", "Release", "dinput8.dll"), GAME)
        log = run_game()
        if "ACCESS VIOLATION" not in log:
            print(f"round {round_}: no crash within {WAIT}s — startup is clean", flush=True)
            return
        syms = map_symbols()
        addrs = [a for a, _ in syms]
        hits = []
        for v in re.findall(r"stack\[\s*\d+\] ([0-9A-F]{8})  \(ours\)", log):
            i = bisect.bisect_right(addrs, int(v, 16)) - 1
            if i >= 0:
                name = re.sub(r"^[?@_]+", "", syms[i][1]).split("@")[0]
                hits.append(name)
        eip = re.search(r"ACCESS VIOLATION at ([0-9A-F]{8})", log)[1]
        i = bisect.bisect_right(addrs, int(eip, 16)) - 1
        at = re.sub(r"^[?@_]+", "", syms[i][1]).split("@")[0] if i >= 0 and int(eip, 16) >= 0x10000000 else None
        print(f"round {round_}: crash at {eip} ({at or 'not in our code'}); our frames: {hits[:6]}", flush=True)
        if not at or not at.startswith("AUTO_"):
            # only a crash INSIDE a generated function identifies it with certainty; stack frames above
            # a crash in game code are usually innocent callers
            print("crash is not inside a generated function — stopping for manual analysis")
            return
        culprit = at
        with open(os.path.join(ROOT, "auto", "crash_blacklist.txt"), "a") as f:
            f.write(culprit + "\n")
        print(f"  blacklisted {culprit}", flush=True)
    print("stopped after max rounds")

if __name__ == "__main__":
    main()
