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
    # (b) virtual calls: `call [reg+off]` whose result is read -> every vtable method in slot off/4 returns
    #     (conservative: unrelated classes sharing the slot index are included too)
    vt_slots = {}
    for l in open(os.path.join(ROOT, "..", "Hobbit-RE", "db", "vtables.tsv"), encoding="utf-8"):
        r = l.rstrip("\n").split("\t")
        for k, m in enumerate(r[3].split() if len(r) > 3 else []):
            vt_slots.setdefault(k, set()).add(int(m, 16))
    virt = set()
    tails = {}                                           # function -> callee whose EAX it passes straight through
    for i, a in enumerate(starts):
        hi = starts[i + 1] if i + 1 < len(starts) else a + 0x1000
        insns = list(cs.disasm(img[a - base: hi - base], a))
        for k, ins in enumerate(insns):
            if ins.mnemonic != "call" or not ins.operands:
                continue
            op = ins.operands[0]
            if op.type == X86_OP_IMM:
                # (a) pass-through: call X ; (add esp,N | pop r)* ; ret   -> this function returns X's EAX
                rest = insns[k + 1: k + 6]
                for nxt in rest:
                    if nxt.mnemonic == "ret":
                        tails.setdefault(a, set()).add(op.imm); break
                    if not (nxt.mnemonic == "pop" and nxt.op_str != "eax" or
                            nxt.mnemonic == "add" and nxt.op_str.startswith("esp,")):
                        break
                continue
            m = re.fullmatch(r"dword ptr \[(e[a-d]x|e[sd]i|ebp)(?: \+ (0x[0-9a-f]+|\d+))?\]", ins.op_str)
            if not m:
                continue
            off = int(m.group(2), 0) if m.group(2) else 0
            for nxt in insns[k + 1: k + 8]:
                read, written = nxt.regs_access()
                if EAXES & set(read):
                    virt |= vt_slots.get(off // 4, set()) if off % 4 == 0 else set()
                    break
                if EAXES & set(written) or nxt.mnemonic in ("ret", "jmp", "call") or nxt.mnemonic.startswith("j"):
                    break
    # (b) is far too broad (unrelated classes share slot numbers: 67 play-tested functions would be flagged);
    # kept only as a report. (c) instead: every `ret` of the function is directly preceded (ignoring pops and
    # `add esp`) by an instruction that WRITES EAX -> it deliberately returns a value (void code has no reason to)
    open(os.path.join(ROOT, "auto", "returns_eax_virtual_broad.txt"), "w").write(
        "\n".join(f"{t:08x}" for t in sorted(virt)) + "\n")
    explicit = set()
    for i, a in enumerate(starts):
        hi = starts[i + 1] if i + 1 < len(starts) else a + 0x1000
        insns = list(cs.disasm(img[a - base: hi - base], a))
        rets = [k for k, x in enumerate(insns) if x.mnemonic == "ret"]
        if not rets:
            continue
        def sets_eax(k):
            j = k - 1
            while j >= 0 and (insns[j].mnemonic == "pop" and insns[j].op_str != "eax" or
                              insns[j].mnemonic == "add" and insns[j].op_str.startswith("esp,")):
                j -= 1
            if j < 0 or insns[j].mnemonic in ("call", "jmp") or insns[j].mnemonic.startswith("j"):
                return False
            _, written = insns[j].regs_access()
            return bool(EAXES & set(written))
        if all(sets_eax(k) for k in rets):
            explicit.add(a)
    open(os.path.join(ROOT, "auto", "returns_eax_explicit.txt"), "w").write(
        "\n".join(f"{t:08x}" for t in sorted(explicit)) + "\n")
    direct = set(returns)
    if os.environ.get("EAX_RULES", "a") .find("c") >= 0:
        returns |= explicit
    # (a) pass-through closure: opt-in only. Since Ret::VoidPass (thunk keeps our EAX for every void unit whose
    # original touches EAX) a pass-through value survives anyway, so it no longer needs to exclude units.
    changed = "a" in os.environ.get("EAX_RULES", "")
    while changed:                                       # pass-through of a returning callee returns too
        changed = False
        for f, cs_ in tails.items():
            if f not in returns and cs_ & returns:
                returns.add(f); changed = True
    with open(os.path.join(ROOT, "auto", "returns_eax.txt"), "w") as f:
        f.write("\n".join(f"{t:08x}" for t in sorted(returns)) + "\n")
    print(f"{len(returns)} functions have callers that use EAX after the call")

if __name__ == "__main__":
    main()
