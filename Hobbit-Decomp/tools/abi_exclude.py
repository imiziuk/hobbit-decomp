"""Units that the static ABI audits prove wrong -> auto/abi_exclude.txt (read by gen_registry like the blacklist).
 1) stack cleanup: the original's `ret N` (or, with no own ret, its tail-jump target's) != what our version pops
    (e.g. 0046aaf0: writes its stack arg then jmp to a ret-4 function; Ghidra saw no param -> ours pops 0).
 2) callee typed __fastcall/thiscall that never reads ECX but reads more stack args than we pass
    (e.g. CRT 006c1327 isspace-like: our call puts the char in ECX, callee reads [esp+4]).
Usage: tools/.venv/Scripts/python tools/abi_exclude.py"""
import glob, os, re, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from x86scan import ROOT, scan, reads_ecx, max_arg

reg = re.compile(r'Registrar r_([0-9a-f]{8})\(.*?"AUTO_\w+", (\d+), hook::Ret::(\w+), hook::Conv::(\w+), (true|false)\)')
out = {}
for line in open(os.path.join(ROOT, "src", "auto_registry.cpp")):
    m = reg.search(line)
    if not m:
        continue
    a, nb, conv = m.group(1), int(m.group(2)), m.group(4)
    rets, tails = scan(int(a, 16))
    expect = 0 if conv == "Cdecl" else nb
    if rets and expect not in rets:
        out[a] = f"own ret {sorted(rets)} != ours {expect}"
    if not rets:
        for t in tails:
            if re.fullmatch(r"[0-9a-f]{8}", t):
                tr, _ = scan(int(t, 16))
                if tr and expect not in tr:
                    out[a] = f"tail jmp {t} pops {sorted(tr)} != ours {expect}"
wrap = re.compile(r"\(__fastcall\*\)\(([^)]*)\)\)0x([0-9a-f]{8})\)")
need = {}
for p in glob.glob(os.path.join(ROOT, "auto", "ok", "*.c")):
    u = os.path.basename(p)[:8]
    for sig, c in set(wrap.findall(open(p, encoding="utf-8", errors="replace").read())):
        if c not in need:
            need[c] = None if reads_ecx(int(c, 16)) else max_arg(int(c, 16))
        passed = max(len([x for x in sig.split(",") if x.strip()]) - 2, 0) * 4
        if need[c] is not None and need[c] > passed:
            out[u] = f"calls {c} as thiscall (ECX unused) reading stack args to {need[c]} > passed {passed}"
with open(os.path.join(ROOT, "auto", "abi_exclude.txt"), "w") as f:
    for a in sorted(out):
        f.write(f"AUTO_{a}\t{out[a]}\n")
print(len(out), "units excluded -> auto/abi_exclude.txt")
