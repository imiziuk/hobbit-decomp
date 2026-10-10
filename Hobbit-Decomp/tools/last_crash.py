"""Show the last run's crash(es) from hobbit_decomp.log with our addresses mapped to functions.
Usage: python tools/last_crash.py"""
import bisect, csv, os, re
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
LOG = os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean", "hobbit_decomp.log")
lines = open(LOG, errors="replace").read().splitlines()
start = max(i for i, l in enumerate(lines) if "Hobbit-Decomp loaded" in l)
syms = sorted((int(p[2], 16), p[1]) for p in (l.split() for l in open(os.path.join(ROOT, "build", "dinput8.map")))
              if len(p) >= 4 and p[0].startswith("0001:") and re.fullmatch(r"[0-9a-f]{8}", p[2]))
game = sorted((int(r[0], 16), r[1]) for r in csv.reader(open(os.path.join(ROOT, "..", "Hobbit-RE", "db", "catalog.tsv")),
              delimiter="\t") if re.fullmatch(r"[0-9a-f]{8}", r[0]))
def name(a):
    tbl = syms if 0x10000000 <= a < 0x11000000 else game
    i = bisect.bisect_right(tbl, (a, "\uffff")) - 1
    return tbl[i][1] if i >= 0 else "?"
summary = [l for l in lines[start:] if l.startswith("shadow: PASS") or "functions replaced" in l]
print("\n".join(summary[-2:]))
for l in lines[start:]:
    if "call counts" in l: break
    if "!!!" in l or "stack[" in l or l.strip().startswith("in "):
        m = re.findall(r"\b([0-9A-F]{8})\b", l)
        a = int(m[0], 16) if m else 0
        print(l.strip()[:70], "->", name(a) if m and ("!!!" in l or "stack[" in l) else "")
