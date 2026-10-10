"""Variadic callees (body takes &stack0x.. past its last parameter = va_list, e.g. x_string format 0x649920)
lose their extra arguments in the generated C when Ghidra's prototype is fixed-arity. For every generated
unit, compare each call to a variadic function: argument count in the plain Ghidra decompile (decomp_hl)
vs in our unit. Mismatch -> auto/vararg_dropped.txt (excluded by gen_registry).
Usage: python tools/vararg_check.py"""
import glob, os, re
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
HL = os.path.join(ROOT, "..", "Hobbit-RE", "db", "decomp_hl")

def split_args(s, i):
    depth, args, cur = 1, [], ""
    while i < len(s) and depth:
        c = s[i]
        if c == "(": depth += 1
        elif c == ")":
            depth -= 1
            if depth == 0: break
        if c == "," and depth == 1: args.append(cur); cur = ""
        else: cur += c
        i += 1
    if cur.strip(): args.append(cur)
    return len(args)

variadic = set()
for p in glob.glob(os.path.join(HL, "*.c")):
    s = open(p, errors="replace").read()
    if re.search(r"&stack0x[0-9a-f]+", s):
        variadic.add(os.path.basename(p)[:8])
calls_re = lambda a: re.compile(r"\b(?:FUN|thunk_FUN)_" + a + r"\s*\(")
bad = []
for p in glob.glob(os.path.join(ROOT, "auto", "ok", "*.c")):
    u = os.path.basename(p)[:8]
    hp = os.path.join(HL, u + ".c")
    if not os.path.exists(hp): continue
    ours = open(p, errors="replace").read(); hl = open(hp, errors="replace").read()
    body = "\n".join(l for l in ours.splitlines() if not l.startswith("static __inline"))
    for a in set(re.findall(r"\bFUN_([0-9a-f]{8})\s*\(", body)) & variadic:
        r = calls_re(a)
        n_hl = sorted(split_args(hl, m.end()) for m in r.finditer(hl))
        n_us = sorted(split_args(body, m.end()) - (1 if re.search(r"FUN_" + a + r"\(void \* p0", ours) and False else 0)
                      for m in r.finditer(body))
        if n_hl and n_us and max(n_hl) > max(n_us):
            bad.append(u); break
open(os.path.join(ROOT, "auto", "vararg_dropped.txt"), "w").write("\n".join(sorted(bad)) + "\n")
print(f"{len(variadic)} variadic functions; {len(bad)} units drop variadic args -> auto/vararg_dropped.txt")
