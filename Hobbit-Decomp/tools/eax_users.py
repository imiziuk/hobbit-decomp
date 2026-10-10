"""Ground truth for return values: a function returns something in EAX if any caller READS EAX after
the call before overwriting it (mov [x],eax / test eax,eax / push eax / mov ecx,eax / cmp ...).
Writes auto/returns_eax.txt (one address per line) for ghidra2c/gen_registry to distrust `void`.
Usage: python tools/eax_users.py
"""
import bisect, os, re
import pefile
from capstone import CS_ARCH_X86, CS_MODE_32, Cs
from capstone.x86_const import X86_OP_IMM, X86_REG_EAX, X86_REG_AX, X86_REG_AL, X86_REG_AH

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean", "Meridian.exe")
EAXES = {X86_REG_EAX, X86_REG_AX, X86_REG_AL, X86_REG_AH}

def main():
    pe = pefile.PE(EXE, fast_load=True)
    img, base = pe.get_memory_mapped_image(), pe.OPTIONAL_HEADER.ImageBase
    starts = sorted(int(l[:8], 16) for l in open(os.path.join(ROOT, "..", "Hobbit-RE", "db", "catalog.tsv"),
                                                 encoding="utf-8") if re.match(r"[0-9a-f]{8}\t", l))
    cs = Cs(CS_ARCH_X86, CS_MODE_32)
    cs.detail = True
    returns = set()
    for i, a in enumerate(starts):
        hi = starts[i + 1] if i + 1 < len(starts) else a + 0x1000
        insns = list(cs.disasm(img[a - base: hi - base], a))
        for k, ins in enumerate(insns):
            if ins.mnemonic != "call" or not ins.operands or ins.operands[0].type != X86_OP_IMM:
                continue
            target = ins.operands[0].imm
            for nxt in insns[k + 1: k + 8]:          # look at what happens to EAX right after the call
                read, written = nxt.regs_access()
                if EAXES & set(read):
                    returns.add(target)
                    break
                if EAXES & set(written) or nxt.mnemonic in ("ret", "jmp", "call") or nxt.mnemonic.startswith("j"):
                    break
    with open(os.path.join(ROOT, "auto", "returns_eax.txt"), "w") as f:
        f.write("\n".join(f"{t:08x}" for t in sorted(returns)) + "\n")
    print(f"{len(returns)} functions have callers that use EAX after the call")

if __name__ == "__main__":
    main()
