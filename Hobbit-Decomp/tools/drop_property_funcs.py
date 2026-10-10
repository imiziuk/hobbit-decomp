"""Removes property-enumeration functions (they build "%s\\Name" property paths, used when level
objects import their settings) from auto/allow.txt and adds them to the crash blacklist."""
import os, re

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
allow = [l.strip() for l in open(os.path.join(ROOT, "auto", "allow.txt")) if l.strip()]
cat = {}
for l in open(os.path.join(ROOT, "..", "Hobbit-RE", "db", "catalog.tsv"), encoding="utf-8"):
    p = l.rstrip("\n").split("\t")
    if re.match(r"[0-9a-f]{8}$", p[0]):
        cat[p[0]] = p
bad = []
for n in allow:
    a = n[5:]
    strs = cat[a][9] if a in cat and len(cat[a]) > 9 else ""
    if "%s" + chr(92) in strs or "IDS_OPTIONS" in strs or n in ("AUTO_0062cab0", "AUTO_00517b10"):
        bad.append(n)
keep = [n for n in allow if n not in bad]
open(os.path.join(ROOT, "auto", "allow.txt"), "w").write("\n".join(keep) + "\n")
open(os.path.join(ROOT, "auto", "crash_blacklist.txt"), "a").write("\n".join(bad) + "\n")
print(len(bad), "property functions removed:", bad)
print("allow now", len(keep))
