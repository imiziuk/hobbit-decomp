"""Prototype fixes from binary facts (tools/x86scan.py) for the callees tools/callee_audit.py flagged and the
functions tools/abi_exclude.py flagged. Treats the facts as constraints (review advice): skips anything
inconsistent instead of guessing.
  pops  = own `ret N`, or the tail-jump target's            -> callee-cleaned bytes
  ecx   = reads ECX before writing it (not `push ecx`)      -> thiscall
  marg  = highest entry-relative [esp+k] argument read
Rules: ecx & pops>=marg -> __thiscall nstack=pops/4 | !ecx & pops>=marg>0... -> __stdcall pops/4 |
       !ecx & pops==0 -> __cdecl marg/4 | else skip (ecx with caller-cleaned args, multiple pop sizes, ...).
Output: auto/proto_fixes2.tsv (same format as proto_fixes.tsv: addr cc nstack reason)."""
import os, re, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from x86scan import ROOT, pops, reads_ecx, max_arg

targets = {}
for l in open(os.path.join(ROOT, "auto", "callee_audit.tsv")).read().splitlines()[1:]:
    targets[l.split("\t")[0]] = "callee_audit: " + l.split("\t")[4]
for l in open(os.path.join(ROOT, "auto", "abi_exclude.txt")):
    a, why = l.split("\t", 1)
    if why.startswith(("own ret", "tail jmp")):
        targets.setdefault(a[5:], "abi_exclude: " + why.strip())
out, skipped = [], {}
for a in sorted(targets):
    e = int(a, 16)
    ps, ecx, marg = pops(e), reads_ecx(e), max_arg(e)
    if len(ps) != 1:
        skipped["pop sizes " + str(len(ps))] = skipped.get("pop sizes " + str(len(ps)), 0) + 1; continue
    p = next(iter(ps))
    if p % 4 or marg % 4 and marg > p:
        skipped["odd sizes"] = skipped.get("odd sizes", 0) + 1; continue
    if p and marg > p:
        skipped["reads beyond pops"] = skipped.get("reads beyond pops", 0) + 1; continue
    if ecx:
        if p == 0 and marg:
            skipped["ecx + caller-cleaned"] = skipped.get("ecx + caller-cleaned", 0) + 1; continue
        cc, n = "__thiscall", p // 4
    elif p:
        cc, n = "__stdcall", p // 4
    else:
        cc, n = "__cdecl", (marg + 3) // 4
    out.append(f"{a}\t{cc}\t{n}\t{targets[a]}")
open(os.path.join(ROOT, "auto", "proto_fixes2.tsv"), "w").write("\n".join(out) + "\n")
print(len(out), "fixes,", "skipped:", skipped)
