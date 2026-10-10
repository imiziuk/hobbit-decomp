"""Makes the registered set start and run without crashing or hanging, removing culprits one by one.

Each round: rebuild with the current blacklist, launch the game for WAIT seconds, then
  * crash INSIDE a generated function            -> blacklist it (certain)
  * crash elsewhere / hang (watchdog)            -> binary-search only the generated functions that
                                                    actually ran in that launch (call counts)
  * no crash, no hang (main thread not stuck)    -> done
Usage: python tools/stabilize.py [--wait 40] [--rounds 60]
"""
import bisect, os, re, shutil, subprocess, sys, time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GAME = os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean")
LOG = os.path.join(GAME, "hobbit_decomp.log")
DISABLED = os.path.join(GAME, "hooks_disabled.txt")
BL = os.path.join(ROOT, "auto", "crash_blacklist.txt")
PY = os.path.join(ROOT, "tools", ".venv", "Scripts", "python.exe")
CMAKE = r"C:\Program Files\Microsoft Visual Studio\18\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
WAIT = int(sys.argv[sys.argv.index("--wait") + 1]) if "--wait" in sys.argv else 40
ROUNDS = int(sys.argv[sys.argv.index("--rounds") + 1]) if "--rounds" in sys.argv else 60

def say(*a):
    print(*a, flush=True)

def rebuild():
    subprocess.run([PY, "tools/gen_registry.py"], cwd=ROOT, check=True, capture_output=True)
    b = subprocess.run([CMAKE, "--build", "build", "--config", "Release", "--parallel"], cwd=ROOT,
                       capture_output=True, text=True)
    if b.returncode:
        raise SystemExit("build failed:\n" + b.stdout[-1500:])
    shutil.copy(os.path.join(ROOT, "build", "Release", "dinput8.dll"), GAME)

def registered():
    return re.findall(r'"(AUTO_[0-9a-f]{8})"', open(os.path.join(ROOT, "src", "auto_registry.cpp"), encoding="utf-8").read())

def launch(disabled=()):
    """Run the game; returns (outcome, log) with outcome 'crash' | 'hang' | 'ok'."""
    with open(DISABLED, "w") as f:
        f.write("\n".join(disabled) + "\n")
    if os.path.exists(LOG):
        os.remove(LOG)
    p = subprocess.Popen([os.path.join(GAME, "Meridian.exe")], cwd=GAME)
    t0, hung = time.time(), 0
    while time.time() - t0 < WAIT and p.poll() is None:
        time.sleep(1)
        if os.path.exists(LOG) and "call counts" in open(LOG, errors="replace").read():
            break
        if time.time() - t0 > 15:   # Windows' own verdict: window not processing messages
            st = subprocess.run(["tasklist", "/V", "/FI", "IMAGENAME eq Meridian.exe"], capture_output=True, text=True).stdout
            hung = hung + 1 if "Not Responding" in st else 0
            if hung >= 5:
                break
    subprocess.run(["taskkill", "/F", "/IM", "Meridian.exe"], capture_output=True)
    time.sleep(2)
    log = open(LOG, errors="replace").read() if os.path.exists(LOG) else ""
    if "ACCESS VIOLATION" in log or (p.poll() not in (None, 0, 1) and "watchdog" not in log[-300:]):
        return "crash", log
    if hung >= 5:            # Windows reported "Not Responding" for 5 consecutive seconds
        return "hang", log
    return "ok", log

def ran_in(log):
    part = log.split("call counts:")[-1] if "call counts:" in log else ""
    ran = {m[1] for m in re.finditer(r"^\s+(\d+)\s+[0-9A-F]{8} (AUTO_[0-9a-f]{8})", part, re.M) if int(m[0].split()[0]) > 0}
    if not ran:   # hang: no dump; use watchdog's busiest functions over the whole run
        ran = set(re.findall(r"(AUTO_[0-9a-f]{8})=\d+", log))
    return ran

def inside_ours(log):
    m = re.search(r"ACCESS VIOLATION at ([0-9A-F]{8})", log)
    if not m or int(m[1], 16) < 0x10000000:
        return None
    syms = []
    for line in open(os.path.join(ROOT, "build", "dinput8.map"), encoding="latin-1"):
        mm = re.match(r"\s*0001:[0-9a-f]+\s+(\S+)\s+([0-9a-f]{8})\s+f\s", line)
        if mm:
            syms.append((int(mm[2], 16), mm[1]))
    syms.sort()
    i = bisect.bisect_right([a for a, _ in syms], int(m[1], 16)) - 1
    name = re.sub(r"^[?@_]+", "", syms[i][1]).split("@")[0]
    return name if name.startswith("AUTO_") else None

def bisect_ran(suspects, everything, outcome):
    """Halve the suspects (everything else disabled) until one function reproduces `outcome`."""
    pool = sorted(suspects)
    while len(pool) > 1:
        half = pool[: len(pool) // 2]
        res, _ = launch(sorted(set(everything) - set(half)))
        say(f"    {len(half):4d} enabled -> {res}")
        pool = half if res == outcome else pool[len(pool) // 2:]
    return pool[0] if pool else None

def main():
    for r in range(ROUNDS):
        rebuild()
        everything = registered()
        outcome, log = launch()
        say(f"round {r}: {len(everything)} registered -> {outcome}")
        if outcome == "ok":
            os.remove(DISABLED)
            say("STABLE: no crash and no hang for", WAIT, "seconds")
            return
        culprit = inside_ours(log) if outcome == "crash" else None
        if culprit:
            say(f"  crash inside {culprit}")
        else:
            suspects = ran_in(log) & set(everything)
            say(f"  {outcome} not inside our code; searching {len(suspects)} functions that ran")
            culprit = bisect_ran(suspects, everything, outcome)
        if not culprit:
            say("  could not isolate a culprit — stopping")
            return
        with open(BL, "a") as f:
            f.write(culprit + "\n")
        say(f"  blacklisted {culprit}")
    say("stopped after max rounds")

if __name__ == "__main__":
    main()
