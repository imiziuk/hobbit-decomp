"""Compare how many argument bytes each ORIGINAL function pops (`ret N`) with what our registered
replacement pops (units.tsv conv + arg bytes). A mismatch unbalances ESP -> corrupted EBP crashes.
Usage: tools/.venv/Scripts/python tools/stack_balance.py [addr ...]   (default: every registered unit)"""
import bisect, os, re, sys
import pefile
from capstone import CS_ARCH_X86, CS_MODE_32, Cs
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean", "Meridian.exe")
pe = pefile.PE(EXE); base = pe.OPTIONAL_HEADER.ImageBase
def read(va, n):
    return pe.get_data(va - base, n)
starts = sorted(int(l[:8], 16) for l in open(os.path.join(ROOT, "..", "Hobbit-RE", "db", "catalog.tsv"))
                if re.match(r"[0-9a-f]{8}\t", l))
info = {r.split("\t")[0]: r.rstrip("\n").split("\t") for r in open(os.path.join(ROOT, "auto", "units.tsv"))}
cs = Cs(CS_ARCH_X86, CS_MODE_32)
def rets(a):
    lo = int(a, 16); i = bisect.bisect_right(starts, lo); hi = starts[i] if i < len(starts) else lo + 0x4000
    code = read(lo, hi - lo); out = set()
    for ins in cs.disasm(code, lo):
        if ins.mnemonic == "ret":
            out.add(int(ins.op_str, 16) if ins.op_str else 0)
    return out
addrs = sys.argv[1:] or re.findall(r"r_([0-9a-f]{8})\(", open(os.path.join(ROOT, "src", "auto_registry.cpp")).read())
bad = 0
for a in addrs:
    if a not in info: continue
    conv, tb = info[a][3], int(info[a][4])      # col 4 = stack arg bytes (what the thunk/callee pops)
    ours = tb if conv in ("__stdcall", "__fastcall", "__thiscall") else 0
    r = rets(a)
    if r and ours not in r:
        bad += 1; print(f"{a}\t{info[a][1]}\t{conv}\targbytes={tb}\tours_pop={ours}\torig_ret={sorted(r)}")
print(f"# {bad} mismatches of {len(addrs)}", file=sys.stderr)
