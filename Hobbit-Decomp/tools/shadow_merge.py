"""Merge several shadow_results.tsv files (different play sessions / players) into one verdict per function:
FAIL if any sample anywhere failed, PASS if it passed somewhere and never failed, else INCOMPLETE / NEVER.
Writes auto/shadow_merged.tsv, auto/shadow_promote.txt (PASS with >=2 passing samples) and auto/shadow_fail.txt.
Usage: python tools/shadow_merge.py auto/shadow_results_play1.tsv auto/shadow_results_play2.tsv ..."""
import os, sys
from collections import Counter
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
agg = {}
for path in sys.argv[1:]:
    for l in list(open(path, encoding="utf-8"))[1:]:
        r = l.rstrip("\n").split("\t")
        if len(r) < 8: continue
        a = r[0].lower()
        g = agg.setdefault(a, {"name": r[1], "samples": 0, "pass": 0, "near": 0, "fail": 0, "inc": 0, "detail": ""})
        for k, i in (("samples", 2), ("pass", 3), ("near", 4), ("fail", 5), ("inc", 6)):
            g[k] += int(r[i])
        if r[7] == "FAIL" and not g["detail"]:
            g["detail"] = r[8] if len(r) > 8 else ""
def verdict(g):
    if g["fail"]: return "FAIL"
    if g["pass"] + g["near"]: return "PASS"
    return "INCOMPLETE" if g["samples"] else "NEVER"
rows = sorted(agg.items())
with open(os.path.join(ROOT, "auto", "shadow_merged.tsv"), "w") as f:
    for a, g in rows:
        f.write(f"{a}\t{g['name']}\t{g['samples']}\t{g['pass']}\t{g['near']}\t{g['fail']}\t{g['inc']}\t{verdict(g)}\t{g['detail']}\n")
open(os.path.join(ROOT, "auto", "shadow_promote.txt"), "w").write(
    "\n".join(a for a, g in rows if verdict(g) == "PASS" and g["pass"] + g["near"] >= 2) + "\n")
old_fail = set(open(os.path.join(ROOT, "auto", "shadow_fail.txt")).read().split()) if os.path.exists(os.path.join(ROOT, "auto", "shadow_fail.txt")) else set()
fails = old_fail | {a for a, g in rows if verdict(g) == "FAIL"}
open(os.path.join(ROOT, "auto", "shadow_fail.txt"), "w").write("\n".join(sorted(fails)) + "\n")
print(dict(Counter(verdict(g) for _, g in rows)), "| promotable:", sum(1 for a, g in rows if verdict(g) == "PASS" and g["pass"] + g["near"] >= 2))
