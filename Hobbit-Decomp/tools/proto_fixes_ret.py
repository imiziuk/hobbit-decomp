"""Return-type fixes for Ghidra from the x87 path analysis (tools/x87_audit.py -> auto/x87_net.tsv):
  returns ST0 on every ret ({1}) but typed non-float -> float
  leaves x87 untouched on every ret ({0}) but typed float -> undefined4 if callers read EAX, else void
Output: auto/proto_fixes_ret.tsv (addr, type) for Hobbit-RE/scripts/ApplyRetFixes.java.
Usage: python tools/proto_fixes_ret.py  (NOTE: the 2026-10-11 run used every function of the units5 export)"""
import os
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
net = dict(l.rstrip("\n").split("\t") for l in open(os.path.join(ROOT, "auto", "x87_net.tsv")))
eax = set(open(os.path.join(ROOT, "auto", "returns_eax.txt")).read().split())
kind = {}
for l in open(os.path.join(ROOT, "auto", "units.tsv"), encoding="utf-8"):
    r = l.rstrip("\n").split("\t")
    if len(r) > 5 and r[5]:
        kind[r[0]] = r[5]
out = []
for a, k in sorted(kind.items()):
    n = net.get(a)
    if n == "1" and k != "float":
        out.append((a, "float"))
    elif n == "0" and k == "float":
        out.append((a, "undefined4" if a in eax else "void"))
open(os.path.join(ROOT, "auto", "proto_fixes_ret.tsv"), "w").write("".join(f"{a}\t{t}\n" for a, t in out))
from collections import Counter
print(len(out), "return-type fixes:", dict(Counter(t for _, t in out)))
