"""Check every `static __inline` wrapper in generated units: the stack bytes the wrapper's cast expects the
CALLEE to pop must equal the original callee's `ret N`. A mismatch shifts ESP inside our function.
Usage: tools/.venv/Scripts/python tools/callee_balance.py [unit_addr ...]   (default: all of auto/ok)"""
import bisect, glob, os, re, sys
import pefile
from capstone import CS_ARCH_X86, CS_MODE_32, Cs
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
pe = pefile.PE(os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean", "Meridian.exe"))
base = pe.OPTIONAL_HEADER.ImageBase
starts = sorted(int(l[:8], 16) for l in open(os.path.join(ROOT, "..", "Hobbit-RE", "db", "catalog.tsv"))
                if re.match(r"[0-9a-f]{8}\t", l))
cs = Cs(CS_ARCH_X86, CS_MODE_32); cache = {}
def rets(lo):
    if lo in cache: return cache[lo]
    i = bisect.bisect_right(starts, lo); hi = starts[i] if i < len(starts) else lo + 0x4000
    out = set()
    try:
        for ins in cs.disasm(pe.get_data(lo - base, min(hi - lo, 0x8000)), lo):
            if ins.mnemonic == "ret": out.add(int(ins.op_str, 16) if ins.op_str else 0)
    except Exception: pass
    cache[lo] = out; return out
W = re.compile(r"static __inline .*?\(\((?:[^()]|\([^()]*\))*?\((__\w+)\*\)\(([^)]*)\)\)0x([0-9a-f]{8})\)")
units = sys.argv[1:] or [os.path.basename(p)[:8] for p in glob.glob(os.path.join(ROOT, "auto", "ok", "*.c"))]
bad = []
for u in units:
    for line in open(os.path.join(ROOT, "auto", "ok", u + ".c"), encoding="utf-8", errors="replace"):
        m = W.search(line)
        if not m: continue
        conv, params, addr = m.group(1), [p for p in m.group(2).split(",") if p.strip() not in ("", "void")], int(m.group(3), 16)
        if addr >= 0x6A0000: continue
        n = len(params)
        pop = 0 if conv == "__cdecl" else 4 * n if conv == "__stdcall" else 4 * max(0, n - 2)
        r = rets(addr)
        if r and pop not in r:
            bad.append((u, f"{addr:08x}", conv, n, pop, sorted(r)))
for b in bad: print(*b, sep="\t")
print(f"# {len(bad)} wrapper mismatches in {len(units)} units", file=sys.stderr)
