"""Static helpers over the original Meridian.exe (capstone): ret sizes, tail jumps, ECX use, stack-arg reads."""
import os, re, capstone, pefile
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
pe = pefile.PE(os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean", "Meridian.exe"), fast_load=True)
BASE, img = pe.OPTIONAL_HEADER.ImageBase, pe.get_memory_mapped_image()
md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32); md.detail = True
STARTS = {int(l.split("\t")[0], 16) for l in open(os.path.join(ROOT, "..", "Hobbit-RE", "db", "funcs.tsv"))
          if re.match(r"[0-9a-f]{8}\t", l)}
ECX = {capstone.x86.X86_REG_ECX, capstone.x86.X86_REG_CX, capstone.x86.X86_REG_CL, capstone.x86.X86_REG_CH}

def ins_at(a):
    return next(md.disasm(img[a - BASE:a - BASE + 16], a), None)

def scan(entry):
    """(set of `ret N` sizes, set of tail-jump targets) reachable from entry, following jumps not calls"""
    rets, tails, seen, todo = set(), set(), set(), [entry]
    while todo and len(seen) < 20000:
        a = todo.pop()
        while a not in seen:
            seen.add(a)
            ins = ins_at(a)
            if ins is None: break
            m = ins.mnemonic
            if m == "ret":
                rets.add(int(ins.op_str, 16) if ins.op_str else 0); break
            if m.startswith("j"):
                try:
                    t = int(ins.op_str, 16)
                except ValueError:
                    if m == "jmp" and not ("dword ptr [" in ins.op_str and "*4" in ins.op_str):
                        tails.add(ins.op_str)
                    if m == "jmp": break
                    t = None
                if t is not None:
                    if m == "jmp" and t != entry and t in STARTS:
                        tails.add(f"{t:08x}"); break
                    todo.append(t)
                if m == "jmp": break
            a = ins.address + ins.size
    return rets, tails

def reads_ecx(entry):
    """True if some path reads ECX before writing it (calls end the path: ECX is caller-saved)"""
    seen, todo = set(), [entry]
    while todo and len(seen) < 3000:
        a = todo.pop()
        while a not in seen:
            seen.add(a)
            ins = ins_at(a)
            if ins is None: break
            r, w = ins.regs_access()
            # `push ecx` at entry is MSVC's 4-byte local reservation, not a use of ECX
            if ECX & set(r) and not (ins.mnemonic == "xor" and ins.op_str == "ecx, ecx")                     and not (ins.mnemonic == "push" and ins.op_str == "ecx"):
                return True
            if ECX & set(w) or ins.mnemonic in ("call", "ret"): break
            if ins.mnemonic.startswith("j"):
                try: todo.append(int(ins.op_str, 16))
                except ValueError: pass
                if ins.mnemonic == "jmp": break
            a = ins.address + ins.size
    return False

def max_arg(entry):
    """highest entry-relative stack argument byte read ([esp+k], esp tracked through push/pop/sub/add)"""
    best, seen, todo = 0, set(), [(entry, 0)]
    while todo and len(seen) < 4000:
        a, d = todo.pop()
        while a not in seen:
            seen.add(a)
            ins = ins_at(a)
            if ins is None: break
            m, op = ins.mnemonic, ins.op_str
            if m != "lea":
                for mm in re.finditer(r"\[esp(?: \+ (0x[0-9a-f]+|\d+))?\]", op):
                    k = (int(mm.group(1), 0) if mm.group(1) else 0) - d
                    if k >= 4: best = max(best, k)
            if m == "push": d += 4
            elif m == "pop": d -= 4
            elif m == "sub" and op.startswith("esp, "): d += int(op[5:], 0)
            elif m == "add" and op.startswith("esp, "): d -= int(op[5:], 0)
            elif m == "ret": break
            elif m == "mov" and op.startswith("ebp, esp"): break
            elif m.startswith("j"):
                try: todo.append((int(op, 16), d))
                except ValueError: pass
                if m == "jmp": break
            a = ins.address + ins.size
    return best

EAX = {capstone.x86.X86_REG_EAX, capstone.x86.X86_REG_AX, capstone.x86.X86_REG_AL, capstone.x86.X86_REG_AH}

def touches_eax(entry):
    """True if any path from the entry writes EAX or calls/jumps out (a call clobbers EAX): then EAX at return
    is NOT the caller's value, so a caller may be using what the function left there"""
    seen, todo = set(), [entry]
    while todo and len(seen) < 20000:
        a = todo.pop()
        while a not in seen:
            seen.add(a)
            ins = ins_at(a)
            if ins is None:
                return True
            if ins.mnemonic == "call":
                return True
            _, w = ins.regs_access()
            if EAX & set(w):
                return True
            if ins.mnemonic == "ret":
                break
            if ins.mnemonic.startswith("j"):
                try:
                    t = int(ins.op_str, 16)
                except ValueError:
                    return True                       # indirect jump: unknown
                if ins.mnemonic == "jmp" and t in STARTS and t != entry:
                    return True                       # tail jump into another function
                todo.append(t)
                if ins.mnemonic == "jmp":
                    break
            a = ins.address + ins.size
    return False

def pops(entry):
    """stack bytes the callee removes on return: its own `ret N` sizes, or those of its tail-jump targets"""
    rets, tails = scan(entry)
    out = set(rets)
    for t in tails:
        if re.fullmatch(r"[0-9a-f]{8}", t):
            out |= scan(int(t, 16))[0]
    return out
