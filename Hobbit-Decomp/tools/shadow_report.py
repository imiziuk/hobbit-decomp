"""Summarize a shadow-mode run (shadow_results.tsv) against the current live set.
Usage: python tools/shadow_report.py auto/shadow_results_play1.tsv"""
import os, re, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
rows = [l.rstrip("\n").split("\t") for l in open(sys.argv[1], encoding="utf-8")][1:]
res = {r[0].lower(): r for r in rows}
live = set(re.findall(r'r_([0-9a-f]{8})\(0x[0-9a-f]{8}, [^;]*, true\);', open(os.path.join(ROOT, "src", "auto_registry.cpp")).read()))
verified = {l.strip()[5:] for l in open(os.path.join(ROOT, "auto", "allow_stable660.txt")) if l.startswith("AUTO_")}
def v(a): return res[a][7] if a in res else "NOT-PROBED"
from collections import Counter
print("live functions by verdict:", dict(Counter(v(a) for a in live)))
print("live + FAIL (should be removed):")
for a in sorted(live):
    if v(a) == "FAIL":
        print(f"  {a} {'(play-verified)' if a in verified else ''} {res[a][8]}")
promote = sorted(a for a, r in res.items() if r[7] == "PASS" and a not in live and int(r[3]) + int(r[4]) >= 2)
print(f"not live + PASS with >=2 samples (promotable): {len(promote)}")
open(os.path.join(ROOT, "auto", "shadow_promote.txt"), "w").write("\n".join(promote) + "\n")
open(os.path.join(ROOT, "auto", "shadow_fail.txt"), "w").write("\n".join(sorted(a for a, r in res.items() if r[7] == "FAIL")) + "\n")
