"""Finds generated functions that crash the game at startup by binary search over the registry.

Each round writes hooks_disabled.txt (the game folder) listing every AUTO_ function that is NOT in the
candidate half, launches Meridian.exe, waits, and checks hobbit_decomp.log for an access violation.
Culprits found are appended to auto/crash_blacklist.txt (gen_registry.py skips them).
Usage: python tools/bisect_crash.py [--wait 25]
"""
import os, re, subprocess, sys, time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GAME = os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean")
LOG = os.path.join(GAME, "hobbit_decomp.log")
DISABLED = os.path.join(GAME, "hooks_disabled.txt")
WAIT = int(sys.argv[sys.argv.index("--wait") + 1]) if "--wait" in sys.argv else 25

def crashes(enabled, everything):
    """Launch with only `enabled` AUTO functions active. True if an access violation is logged."""
    with open(DISABLED, "w") as f:
        f.write("\n".join(sorted(set(everything) - set(enabled))) + "\n")
    if os.path.exists(LOG):
        os.remove(LOG)
    p = subprocess.Popen([os.path.join(GAME, "Meridian.exe")], cwd=GAME)
    t0, crashed = time.time(), False
    while time.time() - t0 < WAIT:
        time.sleep(1)
        if os.path.exists(LOG) and "ACCESS VIOLATION" in open(LOG, errors="replace").read():
            crashed = True
            break
        if p.poll() is not None:
            crashed = p.returncode != 0
            break
    subprocess.run(["taskkill", "/F", "/IM", "Meridian.exe"], capture_output=True)
    time.sleep(2)
    print(f"  {len(enabled):5d} enabled -> {'CRASH' if crashed else 'ok'}", flush=True)
    return crashed

def main():
    reg = open(os.path.join(ROOT, "src", "auto_registry.cpp"), encoding="utf-8").read()
    everything = re.findall(r'"(AUTO_[0-9a-f]{8})"', reg)
    print(f"{len(everything)} generated functions registered")
    bl = os.path.join(ROOT, "auto", "crash_blacklist.txt")
    known = {l.strip() for l in open(bl)} if os.path.exists(bl) else set()
    everything_ok = [x for x in everything if x not in known]
    culprits, pool = [], list(everything_ok)
    first = None
    if "--suspects" in sys.argv:              # resume: a previous run narrowed the crash to these
        first = [l.strip() for l in open(sys.argv[sys.argv.index("--suspects") + 1]) if l.strip()]
    elif not crashes(pool, everything):
        print("no crash with everything enabled")
        return
    while pool and (first is not None or crashes(pool, everything)):
        lo, hi = [], first or pool            # find one culprit inside `pool` by halving
        first = None
        while len(hi) > 1:
            half = hi[: len(hi) // 2]
            if crashes(half, everything):
                hi = half
            else:
                hi = hi[len(hi) // 2:]
        culprit = hi[0]
        print(f"CULPRIT {culprit}", flush=True)
        culprits.append(culprit)
        with open(os.path.join(ROOT, "auto", "crash_blacklist.txt"), "a") as f:
            f.write(culprit + "\n")
        pool = [x for x in pool if x != culprit]
    os.remove(DISABLED)
    print(f"done: {len(culprits)} culprit(s): {culprits}; remaining set starts cleanly")

if __name__ == "__main__":
    main()
