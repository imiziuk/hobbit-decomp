"""Bisect a level-load crash with tools/load_check.py (New Game via autotest, no human).
Finds every culprit: after one is found it STAYS disabled while the search goes on (an earlier version
re-enabled it, so every later configuration crashed and 51 innocent functions were "found").
Sanity check each round: all remaining suspects + culprits disabled must load, else stop.
Usage: python tools/load_bisect.py <suspects.txt> [--tries N] [--known a,b,...]  -> auto/load_culprits.txt"""
import os, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from load_check import check, start_hotkey, restore_folder
start_hotkey()
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TRIES = int(sys.argv[sys.argv.index("--tries") + 1]) if "--tries" in sys.argv else 1
culprits = sys.argv[sys.argv.index("--known") + 1].split(",") if "--known" in sys.argv else []
sus = [l.strip() for l in open(sys.argv[1]) if l.strip() and l.strip() not in culprits]

def crash(disabled):
    """intermittent crashes: a configuration only counts as good if it loads TRIES times in a row"""
    disabled = set(disabled) | set(culprits)
    for _ in range(TRIES):
        r = check(disabled)
        print(f"  {len(disabled):5d} disabled -> {r}", flush=True)
        if r != "LOADED":
            return True
    return False

def save():
    open(os.path.join(ROOT, "auto", "load_culprits.txt"), "w").write("\n".join(culprits) + "\n")

print(len(sus), "suspects, known culprits:", culprits, flush=True)
while True:
    if not crash(set()):
        print("loads with every remaining suspect enabled: done"); break
    if crash(set(sus)):
        print("SANITY: crashes with all suspects + culprits disabled -> not caused by the suspects; stop"); break
    s = list(sus)
    while len(s) > 1:                  # invariant: enabling all of s (rest disabled) crashes
        half = s[: len(s) // 2]
        s = half if crash(set(sus) - set(half)) else s[len(s) // 2:]
    culprits.append(s[0]); sus.remove(s[0]); save()
    print("culprit:", s[0], flush=True)
save()
restore_folder()
print("culprits:", culprits)
