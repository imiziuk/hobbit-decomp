"""Float returns: a function returns a value in x87 ST0 if any caller's first x87 instruction after the
call READS ST0 (fstp/fst/fcomp/fadd/fmul/fxch...; a plain fld pushes and does not count).
Ghidra often types such pass-through functions `void` (Inventory_GetCountByName 0x434cd0), and the C
version drops the value -> every inventory count read as garbage (no weapons, stick never counted).
Writes auto/returns_st0.txt.   Usage: tools/.venv/Scripts/python tools/st0_users.py"""
import os, re
import pefile
from capstone import CS_ARCH_X86, CS_MODE_32, Cs
from capstone.x86_const import X86_OP_IMM
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean", "Meridian.exe")
pe = pefile.PE(EXE, fast_load=True)
img, base = pe.get_memory_mapped_image(), pe.OPTIONAL_HEADER.ImageBase
starts = sorted(int(l[:8], 16) for l in open(os.path.join(ROOT, "..", "Hobbit-RE", "db", "catalog.tsv"),
                                             encoding="utf-8") if re.match(r"[0-9a-f]{8}\t", l))
cs = Cs(CS_ARCH_X86, CS_MODE_32); cs.detail = True
returns = set()
for i, a in enumerate(starts):
    hi = starts[i + 1] if i + 1 < len(starts) else a + 0x1000
    insns = list(cs.disasm(img[a - base: hi - base], a))
    for k, ins in enumerate(insns):
        if ins.mnemonic != "call" or not ins.operands or ins.operands[0].type != X86_OP_IMM:
            continue
        for nxt in insns[k + 1: k + 6]:
            m = nxt.mnemonic
            if m in ("call", "ret", "jmp") or m.startswith("j"):
                break
            if m.startswith("f"):
                if not m.startswith(("fld", "fild", "fnstcw", "fldcw", "fwait", "fnclex", "finit", "fninit")):
                    returns.add(ins.operands[0].imm)
                break
open(os.path.join(ROOT, "auto", "returns_st0.txt"), "w").write("\n".join(f"{a:08x}" for a in sorted(returns)) + "\n")
info = {l.split("\t")[0]: l.split("\t") for l in open(os.path.join(ROOT, "auto", "units.tsv"))}
bad = sorted(f"{a:08x}" for a in returns if info.get(f"{a:08x}", [""] * 6)[2:3] == ["ok"] and info[f"{a:08x}"][5] != "float")
open(os.path.join(ROOT, "auto", "void_but_returns_st0.txt"), "w").write("\n".join(bad) + "\n")
print(f"{len(returns)} functions return in ST0; {len(bad)} generated units are not typed float -> auto/void_but_returns_st0.txt")
