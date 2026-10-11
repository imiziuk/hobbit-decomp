"""Unattended staged enabling, top-down: for each subsystem try it whole; if it fails, try each source file;
if a file fails, bisect its functions (deterministic crash: 1 load per step) and accept the good ones.
Bad functions -> auto/stage_rejected.tsv. Resumable (accepted/rejected lists persist). Ctrl+Alt+P pauses.
Usage: python tools/stage_all.py [subsystem prefixes in order, default: all top-down]"""
import os, subprocess, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import group_stage as gs
import load_check as lc
ORDER = sys.argv[1:] or ["1.", "2.", "3.", "5.", "6.", "4.", "D.", "7.", "8.", "9.", "A.", "B.", "C.", "E."]
REJ = os.path.join(gs.AUTO, "stage_rejected.tsv")
rejected = {l.split("\t")[0] for l in open(REJ)} if os.path.exists(REJ) else set()

def ok(live, n=2):
    gs.build_install(live)
    for _ in range(n):
        if lc.check(play=True, max_wait=400) != "LOADED":
            return False, gs.signature()
    return True, ""

def accept(fs):
    gs.accepted |= set(fs)
    open(gs.ACC, "w").write("\n".join(sorted(gs.accepted)) + "\n")

def reject(a, why):
    rejected.add(a)
    open(REJ, "a").write(f"{a}\t{gs.groups.get(a, ('?', '?'))[1]}\t{why}\n")

def bisect_file(fs):
    """accept the largest good subsets; fs crashes as a whole (on top of accepted)"""
    if len(fs) == 1:
        good, sig = ok(gs.accepted | set(fs), 2)
        if good: accept(fs)
        else: reject(fs[0], sig)
        return
    h = len(fs) // 2
    for part in (fs[:h], fs[h:]):
        good, sig = ok(gs.accepted | set(part))
        if good:
            accept(part); print(f"    +{len(part)} accepted", flush=True)
        else:
            bisect_file(part)

lc.start_hotkey()
try:
    for sub in ORDER:
        todo = sorted(a for a in gs.eligible - gs.accepted - rejected if gs.groups.get(a, ("",))[0].startswith(sub))
        if not todo:
            continue
        print(f"== {sub}: {len(todo)} functions", flush=True)
        good, sig = ok(gs.accepted | set(todo), 3)
        if good:
            accept(todo); print("   whole subsystem OK", flush=True); continue
        print(f"   subsystem FAIL [{sig}] -> per file", flush=True)
        files = {}
        for a in todo:
            files.setdefault(gs.groups[a][1], []).append(a)
        for f, fs in sorted(files.items(), key=lambda kv: min(gs.groups[a][2] for a in kv[1])):   # top-down by depth
            good, sig = ok(gs.accepted | set(fs))
            if good:
                accept(fs); print(f"   {f}: +{len(fs)} OK", flush=True)
            else:
                print(f"   {f}: FAIL [{sig}] -> bisect {len(fs)}", flush=True)
                bisect_file(sorted(fs))
        # whole-subsystem recheck of what got accepted (interactions between files)
        good, sig = ok(gs.accepted, 3)
        print(f"   recheck accepted ({len(gs.accepted)}): {'OK' if good else 'FAIL ' + sig}", flush=True)
        if not good:
            print("STOP: accepted set fails as a whole (interaction) - needs a look", flush=True); break
finally:
    lc.restore_folder()
print("accepted:", len(gs.accepted), "rejected:", len(rejected))
