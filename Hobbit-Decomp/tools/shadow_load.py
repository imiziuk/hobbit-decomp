"""Automated shadow run of the New Game load (no human): shadow.txt + autotest, N loads, results stored as
evidence (tools/shadow_evidence.py) for the current auto/ok sources. Ctrl+Alt+P pauses (folder restored).
Usage: python tools/shadow_load.py [runs=3] [name]"""
import os, shutil, sys, time
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import load_check as lc
from shadow_evidence import add, valid
runs = int(sys.argv[1]) if len(sys.argv) > 1 else 3
name = sys.argv[2] if len(sys.argv) > 2 else time.strftime("load_%Y%m%d_%H%M")
lc.EXTRA = ["shadow.txt"]
cfg = os.path.join(lc.G, "shadow.txt.off")
open(cfg, "w").write("samples 6\n")
# shadow mode is slow (INT3 + emulation on every probed call): longer waits than the plain load check
at = os.path.join(lc.G, "autotest.txt.off")
at_orig = open(at).read()
# the slowed-down intro video starts late: the single Enter of the normal script lands before it, so press
# Enter a few more times over the first ~90 s (the pre-load intro is safe to skip)
extra = "".join("sleep 15000\nkey RETURN 150\n" for _ in range(6))
open(at, "w").write(at_orig.replace("mark intro skipped\n", "mark intro skipped\n" + extra)
                           .replace("wait_bilbo 200000", "wait_bilbo 900000"))
lc.start_hotkey()
res = os.path.join(lc.G, "shadow_results.tsv")
try:
    for i in range(runs):
        if os.path.exists(res):
            os.remove(res)
        r = lc.check(raw="", max_wait=1200)
        print(f"run {i + 1}: {r}", flush=True)
        if os.path.exists(res):
            add(f"{name}_{i + 1}", res)
finally:
    lc.restore_folder()
    open(at, "w").write(at_orig)
v = valid()
print(f"valid on current sources: {sum(x == 'PASS' for x in v.values())} PASS, {sum(x == 'FAIL' for x in v.values())} FAIL")
