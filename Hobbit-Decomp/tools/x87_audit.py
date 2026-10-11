"""x87 stack audit. For every original function: the x87 stack depth change at its returns (path analysis:
fld/fild/fld1.. push, fstp/faddp/fcomp.. pop, fcompp/fucompp pop 2, call X adds net(X); fixpoint over the call
graph). net = +1 on every ret = returns a float in ST0.
A call wrapper in our generated code that types the callee as float while it returns nothing (ours then pops an
empty stack), or as int/void while it returns a float (the value is never popped), drifts the x87 stack; after
a few calls float math turns to garbage (replay: 127 "x87 depth" failures; sdbase endless loops).
Output: auto/returns_st0_path.txt (functions returning ST0), auto/x87_mismatch.txt (units to exclude).
Usage: tools/.venv/Scripts/python tools/x87_audit.py"""
import glob, os, re, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from x86scan import ROOT, ins_at, STARTS

PUSH = {"fld", "fild", "fld1", "fldz", "fldpi", "fldl2e", "fldl2t", "fldlg2", "fldln2", "fbld"}
POP1 = {"fstp", "fistp", "fbstp", "faddp", "fsubp", "fsubrp", "fmulp", "fdivp", "fdivrp", "fcomp", "fucomp",
        "ficomp", "fcomip", "fucomip", "ffreep"}
POP2 = {"fcompp", "fucompp"}

def depths_at_ret(entry, net):
    """set of x87 depth changes seen at the function's `ret`s (None if unknown: indirect jumps etc.)"""
    out, seen, todo = set(), set(), [(entry, 0)]
    while todo and len(seen) < 20000:
        a, d = todo.pop()
        while (a, d) not in seen:
            seen.add((a, d))
            ins = ins_at(a)
            if ins is None:
                return None
            m = ins.mnemonic
            if m in PUSH:
                d += 1
            elif m in POP1:
                d -= 1
            elif m in POP2:
                d -= 2
            elif m == "call":
                try:
                    d += net.get(int(ins.op_str, 16), 0)
                except ValueError:
                    pass                                   # indirect call: assume 0
            elif m == "ret":
                out.add(d); break
            elif m.startswith("j"):
                try:
                    t = int(ins.op_str, 16)
                except ValueError:
                    return None
                if m == "jmp" and t in STARTS and t != entry:  # tail jump: callee's net decides
                    out.add(d + net.get(t, 0)); break
                todo.append((t, d))
                if m == "jmp":
                    break
            if abs(d) > 8:
                return None
            a = ins.address + ins.size
    return out

funcs = sorted(STARTS)
net = {}
for it in range(4):                                       # fixpoint: callees' float returns propagate
    changed = 0
    for f in funcs:
        if f >= 0x006A0000 and f not in net:
            pass
        ds = depths_at_ret(f, net)
        n = 1 if ds == {1} else 0
        if net.get(f, 0) != n:
            net[f] = n; changed += 1
    if not changed:
        break
ret_st0 = {f for f, n in net.items() if n == 1}
# recorded ground truth wins over the static analysis (tools/x87_truth.py; the analysis was wrong on 24 of 33)
_tp = os.path.join(ROOT, "auto", "x87_truth.tsv")
if os.path.exists(_tp):
    for l in open(_tp):
        a, t = l.split()
        (ret_st0.add if t == "float" else ret_st0.discard)(int(a, 16))
# definite facts for Ghidra return-type fixes (tools/proto_fixes_ret.py): {1} on every ret = returns ST0,
# {0} on every ret = leaves the x87 stack as it found it; anything else (mixed / unknown) is left alone
with open(os.path.join(ROOT, "auto", "x87_net.tsv"), "w") as o:
    for f in funcs:
        ds = depths_at_ret(f, net)
        o.write(f"{f:08x}\t{'?' if ds is None else ','.join(map(str, sorted(ds)))}\n")
open(os.path.join(ROOT, "auto", "returns_st0_path.txt"), "w").write("\n".join(f"{f:08x}" for f in sorted(ret_st0)) + "\n")

W = re.compile(r"static (?:__inline )?([\w ]+?\**)\s+\w+\([^)]*\)\s*\{[^}]*?\(\(([\w ]+?\**)\s*\(__\w+\*\)\([^)]*\)\)0x([0-9a-f]{8})\)")
bad = {}
for p in glob.glob(os.path.join(ROOT, "auto", "ok", "*.c")):
    u = os.path.basename(p)[:8]
    for _, rt, c in W.findall(open(p, encoding="utf-8", errors="replace").read()):
        typed_float = bool(re.search(r"\b(float|float10|double|longdouble)\b", rt)) and "*" not in rt
        real = int(c, 16) in ret_st0
        if typed_float != real:
            bad.setdefault(u, f"callee {c} {'typed float, returns nothing' if typed_float else 'returns ST0, typed ' + rt}")
# the unit's own return: typed float but the original returns nothing in ST0, or the other way round
for l in open(os.path.join(ROOT, "auto", "units.tsv"), encoding="utf-8"):
    r = l.rstrip("\n").split("\t")
    if len(r) > 5 and r[2] == "ok":
        own_float = r[5] == "float"
        if own_float != (int(r[0], 16) in ret_st0):
            bad.setdefault(r[0], "own return " + ("typed float, original returns nothing" if own_float
                                                   else "original returns ST0, typed " + r[5]))
open(os.path.join(ROOT, "auto", "x87_mismatch.txt"), "w").write(
    "\n".join(f"AUTO_{u}\t{w}" for u, w in sorted(bad.items())) + "\n")
print(f"{len(ret_st0)} functions return in ST0 (path analysis); {len(bad)} units call a callee with the wrong "
      f"x87 typing -> auto/x87_mismatch.txt")
