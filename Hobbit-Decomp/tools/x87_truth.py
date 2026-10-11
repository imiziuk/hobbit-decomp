"""Ground truth for float returns from recorded capsules (core/shadow.cpp record mode): the ORIGINAL's x87 TOP at
return (entry stack empty) is 7 on every recorded call -> returns a float in ST0; 0 on every call -> does not.
The static path analysis (tools/x87_audit.py) was wrong on 24 of 33 checkable cases (e.g. sin/cos helper
0064c8e0 stores through pointers), so Ghidra return types are fixed only from this truth.
Usage: tools/.venv/Scripts/python tools/x87_truth.py <capsule dir> -> auto/x87_truth.tsv"""
import collections, os, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from replay import parse_caps, ROOT
top = collections.defaultdict(set)
for c in parse_caps(os.path.join(sys.argv[1], "caps.bin")):
    top[c["func"]].add((c["sw"] >> 11) & 7)
with open(os.path.join(ROOT, "auto", "x87_truth.tsv"), "w") as o:
    for f, s in sorted(top.items()):
        if s in ({7}, {0}):
            o.write(f"{f:08x}\t{'float' if s == {7} else 'none'}\n")
print(sum(1 for s in top.values() if s == {7}), "float-returning,", sum(1 for s in top.values() if s == {0}), "not")
