"""Units typed `void` whose original returns a value in EAX (some caller reads EAX: auto/returns_eax.txt from
tools/eax_users.py) -> auto/void_but_returns.txt (excluded by gen_registry; tools/repair.py voidret can fix them).
Usage: python tools/void_returns.py"""
import os
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
eax = set(open(os.path.join(ROOT, "auto", "returns_eax.txt")).read().split())
bad = []
for l in open(os.path.join(ROOT, "auto", "units.tsv"), encoding="utf-8"):
    r = l.rstrip("\n").split("\t")
    if len(r) > 5 and r[2] == "ok" and r[5] == "void" and r[0] in eax:
        bad.append(r[0])
open(os.path.join(ROOT, "auto", "void_but_returns.txt"), "w").write("\n".join(sorted(bad)) + "\n")
print(len(bad), "void-typed units return EAX -> auto/void_but_returns.txt")
