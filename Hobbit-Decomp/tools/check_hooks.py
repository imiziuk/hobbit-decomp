"""Safety check for REPLACE(addr, fn): the 5-byte JMP must fit before the next function, and no
address may be replaced twice. Uses the function list from Hobbit-RE/db/catalog.tsv.
Usage: python tools/check_hooks.py   (from Hobbit-Decomp/)
"""
import bisect, glob, re, sys

starts = sorted(int(l.split("\t")[0], 16) for l in open("../Hobbit-RE/db/catalog.tsv", encoding="utf-8")
                if re.match(r"[0-9a-f]{8}\t", l))
seen, bad = {}, 0
for path in glob.glob("src/**/*.cpp", recursive=True):
    for m in re.finditer(r"REPLACE\(0x([0-9A-Fa-f]{8}),\s*(\w+)\)", open(path, encoding="utf-8").read()):
        a, fn = int(m[1], 16), m[2]
        if a in seen:
            print(f"DUPLICATE {a:08X} {fn} / {seen[a]}"); bad += 1
        seen[a] = fn
        i = bisect.bisect_right(starts, a)
        if a not in starts:
            print(f"NOT A FUNCTION START {a:08X} {fn}"); bad += 1
        elif i < len(starts) and starts[i] - a < 5:
            print(f"TOO SMALL {a:08X} {fn}: next function at {starts[i]:08X}"); bad += 1
print(f"{len(seen)} replacements checked, {bad} problems")
sys.exit(1 if bad else 0)
