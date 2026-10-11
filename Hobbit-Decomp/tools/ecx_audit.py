"""Find callees our generated code calls as __fastcall/thiscall (`this` in ECX) whose ORIGINAL code never
reads ECX before overwriting it, i.e. really cdecl/stdcall (e.g. CRT 0x006c1327 isspace-like, reads [esp+4]).
Our call then passes the first argument in ECX instead of on the stack -> callee reads garbage.
Usage: tools/.venv/Scripts/python tools/ecx_audit.py -> auto/ecx_mistyped.tsv (callee, n_units, live_units)"""
import glob, os, re, capstone, pefile
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
pe = pefile.PE(os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean", "Meridian.exe"), fast_load=True)
BASE, img = pe.OPTIONAL_HEADER.ImageBase, pe.get_memory_mapped_image()
md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32); md.detail = True
ECX = {capstone.x86.X86_REG_ECX, capstone.x86.X86_REG_CX, capstone.x86.X86_REG_CL, capstone.x86.X86_REG_CH}

def reads_ecx(entry):
    """True if some path from the entry reads ECX before writing it (follows jumps, not calls)."""
    seen, todo = set(), [entry]
    while todo and len(seen) < 3000:
        a = todo.pop()
        while a not in seen:
            seen.add(a)
            ins = next(md.disasm(img[a - BASE:a - BASE + 16], a), None)
            if ins is None:
                break
            r, w = ins.regs_access()
            if ECX & set(r) and not (ins.mnemonic == "xor" and ins.op_str in ("ecx, ecx",)):
                return True
            if ECX & set(w):
                break                                  # overwritten first on this path
            m = ins.mnemonic
            if m == "ret" or m == "call" and False:
                break
            if m == "call":                            # a call clobbers ECX (caller-saved): ECX dead after
                break
            if m.startswith("j"):
                try:
                    todo.append(int(ins.op_str, 16))
                except ValueError:
                    pass
                if m == "jmp":
                    break
            if m == "ret":
                break
            a = ins.address + ins.size
    return False

live = set(open(os.path.join(ROOT, "auto", "live_tailfix.txt")).read().split())
wrap = re.compile(r"\(__fastcall\*\)\([^)]*\)\)0x([0-9a-f]{8})\)")
users = {}
for p in glob.glob(os.path.join(ROOT, "auto", "ok", "*.c")):
    u = os.path.basename(p)[:8]
    for c in set(wrap.findall(open(p, encoding="utf-8", errors="replace").read())):
        users.setdefault(c, set()).add(u)
bad = []
for c, us in users.items():
    if not reads_ecx(int(c, 16)):
        bad.append((c, us))
with open(os.path.join(ROOT, "auto", "ecx_mistyped.tsv"), "w") as f:
    for c, us in sorted(bad):
        f.write(f"{c}\t{len(us)}\t{' '.join(sorted(us & live))}\n")
lu = set().union(*[us & live for _, us in bad]) if bad else set()
print(f"{len(users)} callees typed fastcall/thiscall; {len(bad)} never read ECX; "
      f"{sum(len(us) for _, us in bad)} unit uses, LIVE units affected: {len(lu)}")
print(" ".join(sorted(lu)))
