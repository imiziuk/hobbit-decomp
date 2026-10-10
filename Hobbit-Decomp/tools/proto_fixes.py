"""Derives corrected prototypes from ground truth in the binary, for Ghidra to apply
(Hobbit-RE/scripts/ApplyProtoFixes.java). Output: auto/proto_fixes.tsv  addr  cc  nstack  [reason]

Rules (x86 MSVC):
  * the function's own `ret N` = bytes of stack arguments it cleans up (thiscall/stdcall/fastcall)
  * decompiled code reading ECX before setting it (`in_ECX`) = it takes `this` in ECX (thiscall)
  * `in_EDX` together with in_ECX = __fastcall with two register arguments
Functions with other hidden inputs (in_EAX, unaff_*) are left alone (custom conventions).
Usage: python tools/proto_fixes.py
"""
import json, os, re, sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import ghidra2c as g

UNITS = os.path.join(g.ROOT, "..", "Hobbit-RE", "db", "units")

def main():
    g.load_ret_pops()
    out, stats = [], {}
    for fn in sorted(os.listdir(UNITS)):
        u = json.load(open(os.path.join(UNITS, fn), encoding="utf-8"))
        c, addr = u.get("c") or "", u["addr"]
        real = g.RET_POP.get(addr)
        if real is None or real % 4:
            continue
        hidden = set(re.findall(r"\b(in_|unaff_|extraout_)(\w+)", c))
        regs = {r for _, r in hidden}
        if hidden - {("in_", "ECX"), ("in_", "EDX")}:
            continue                                   # custom convention: needs a human
        # parameters from the decompiled signature (the "proto" string omits the auto `this`)
        m = re.search(r"\b" + re.escape(u["name"]) + r"\s*\(([^)]*)\)\s*\n?\{", c)
        if not m:
            continue
        params = [p.strip().rsplit(" ", 1)[0] for p in (m[1].split(",") if m[1].strip() not in ("", "void") else [])]
        cc = u.get("cc")
        nstack = real // 4
        if "ECX" in regs and "EDX" in regs:
            new, why = "__fastcall", "reads ECX+EDX"
        elif "ECX" in regs:
            new, why = "__thiscall", "reads ECX"
        elif real != g.expected_pop(cc, params):
            why = f"ret {real} vs signature"
            if cc == "__fastcall" and len(params) >= 2:
                new = "__fastcall"                     # ECX+EDX in use: keep both, fix stack part
            elif cc in ("__fastcall", "__thiscall") and params:
                new = "__thiscall"                     # ECX in use as `this`, fix stack part
            else:
                new = "__stdcall" if real else "__cdecl"
        else:
            continue
        if new == "__cdecl":
            nstack = max(0, len(params) - (1 if cc == "__thiscall" else 2 if cc == "__fastcall" else 0))
        out.append(f"{addr}\t{new}\t{nstack}\t{why}")
        stats[new] = stats.get(new, 0) + 1
    open(os.path.join(g.ROOT, "auto", "proto_fixes.tsv"), "w").write("\n".join(out) + "\n")
    print(f"{len(out)} prototype fixes: {stats}")

if __name__ == "__main__":
    main()
