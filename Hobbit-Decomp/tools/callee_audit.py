"""Every direct call our generated code makes goes through a typed wrapper:
    static __inline R FUN_x(...) { return ((R(__conv*)(types))0xADDR)(args); }
Check each wrapper against the ORIGINAL callee:
  pops   - callee-cleans (`ret N`) but we pass a different number of stack bytes, or we type it cdecl
           while it cleans (and vice versa) -> caller's ESP is off after the call
  this   - we type it __cdecl/__stdcall but the callee reads ECX before writing it (lost `this`,
           e.g. 004b83e0 -> 00659c80: original sets ECX=0x7eb850 and pushes 2 args, ours pushes 1)
  stack  - typed thiscall/fastcall but ECX unused and it reads more stack args than we pass
Writes auto/callee_audit.tsv (callee, conv, ours, original, kind, units) and auto/abi_exclude2.txt (units)."""
import glob, os, re, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from x86scan import ROOT, pops, reads_ecx, max_arg
W = re.compile(r"\(\w[\w ]*\(__(cdecl|stdcall|fastcall)\*\)\(([^)]*)\)\)0x([0-9a-f]{8})\)")
SIZE8 = re.compile(r"\b(double|longlong|ulonglong|__int64|undefined8|float8)\b")

def stack_bytes(conv, types):
    ts = [t.strip() for t in types.split(",") if t.strip() and t.strip() != "void"]
    if conv == "fastcall":
        ts = ts[2:]
    return sum(8 if SIZE8.search(t) and "*" not in t else 4 for t in ts)

info, uses = {}, {}
for p in glob.glob(os.path.join(ROOT, "auto", "ok", "*.c")):
    u = os.path.basename(p)[:8]
    for conv, types, c in set(W.findall(open(p, encoding="utf-8", errors="replace").read())):
        uses.setdefault((c, conv, stack_bytes(conv, types)), set()).add(u)
rows, bad_units = [], {}
for (c, conv, sb), us in sorted(uses.items()):
    if c not in info:
        info[c] = (pops(int(c, 16)), reads_ecx(int(c, 16)), max_arg(int(c, 16)))
    rets, recx, need = info[c]
    kinds = []
    if rets:
        if conv == "cdecl" and 0 not in rets:
            kinds.append(f"pops: callee ret {sorted(rets)}, ours cdecl")
        elif conv != "cdecl" and sb not in rets:
            kinds.append(f"pops: callee ret {sorted(rets)}, ours passes {sb}")
    if conv != "fastcall" and recx:
        kinds.append("this: callee reads ECX, ours " + conv)
    # callee reads stack args we never pass (fastcall: only when ECX is unused, else `this` absorbs one)
    if need > sb and (conv != "fastcall" or not recx):
        kinds.append(f"stack: callee reads args to {need}, ours passes {sb}")
    for k in kinds:
        rows.append((c, conv, sb, sorted(rets), k, sorted(us)))
        for u in us:
            bad_units.setdefault(u, k + f" ({c})")
with open(os.path.join(ROOT, "auto", "callee_audit.tsv"), "w") as f:
    f.write("callee\tconv\tours_bytes\tcallee_rets\tkind\tunits\n")
    for r in rows:
        f.write("\t".join([r[0], r[1], str(r[2]), str(r[3]), r[4], " ".join(r[5])]) + "\n")
with open(os.path.join(ROOT, "auto", "abi_exclude2.txt"), "w") as f:
    for u in sorted(bad_units):
        f.write(f"AUTO_{u}\t{bad_units[u]}\n")
live = set(open(os.path.join(ROOT, "auto", "live_fix2.txt")).read().split())
import collections
cnt = collections.Counter(r[4].split(":")[0] for r in rows)
print(f"{len(info)} callees, {len(rows)} bad (callee,typing) pairs: {dict(cnt)}")
print(f"units affected: {len(bad_units)}, LIVE: {len(set(bad_units) & live)}")
for u in sorted(set(bad_units) & live):
    print(" ", u, bad_units[u])
