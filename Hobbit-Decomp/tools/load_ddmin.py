"""Find a MINIMAL set of live functions that together crash New Game (delta debugging, ddmin).
Why not load_bisect: the crash needs functions from BOTH halves (all enabled: 15/15 crash, any half: ~3%),
and the base game flow itself crashes ~5% of loads, so single-culprit bisect walks into noise.
A config "crashes" only if it crashes twice in a row (noise: ~0.25%); one LOADED = it doesn't.
Pause/resume: Ctrl+Alt+P (see load_check). Progress in auto/ddmin_state.txt (restart resumes from it).
Usage: python tools/load_ddmin.py <live.txt>"""
import os, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from load_check import check, start_hotkey, restore_folder
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
STATE = os.path.join(ROOT, "auto", "ddmin_state.txt")
start_hotkey()
everything = [l.strip() for l in open(sys.argv[1]) if l.strip()]

def crashes(enabled):
    off = set(everything) - set(enabled)
    for i in range(2):
        r = check(off)
        print(f"  {len(enabled):5d} enabled -> {r}", flush=True)
        if r == "LOADED":
            return False
    return True

def save(s, n):
    open(STATE, "w").write(f"{n}\n" + "\n".join(s) + "\n")

if os.path.exists(STATE):
    lines = open(STATE).read().split()
    n, s = int(lines[0]), lines[1:]
    print(f"resuming: {len(s)} functions, granularity {n}", flush=True)
else:
    s, n = list(everything), 2
    if not crashes(s):
        sys.exit("all enabled does not crash twice in a row: nothing to minimise")
while len(s) >= 2:
    chunks = [s[i * len(s) // n:(i + 1) * len(s) // n] for i in range(n)]
    for c in chunks:                       # try dropping each chunk (keep the complement)
        rest = [a for a in s if a not in set(c)]
        if rest and crashes(rest):
            s, n = rest, max(n - 1, 2)
            break
    else:
        if n >= len(s):
            break
        n = min(len(s), n * 2)
    save(s, n)
    print(f"now {len(s)} functions, granularity {n}", flush=True)
open(os.path.join(ROOT, "auto", "ddmin_result.txt"), "w").write("\n".join(s) + "\n")
restore_folder()
print("minimal crashing set:", s)
