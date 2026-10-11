import os, re, sys
__file__ = os.path.abspath("tools/abi_audit.py"); exec(open("tools/abi_audit.py").read().split("reg = re.compile")[0])
def max_arg(entry):
    """highest entry-stack argument byte offset read along any path (esp tracked through push/pop/sub/add)"""
    best, seen, todo = 0, set(), [(entry, 0)]
    while todo and len(seen) < 4000:
        a, d = todo.pop()
        while a not in seen:
            seen.add(a)
            ins = next(md.disasm(img[a - BASE:a - BASE + 16], a), None)
            if ins is None: break
            m, op = ins.mnemonic, ins.op_str
            for mm in re.finditer(r"\[esp(?: \+ (0x[0-9a-f]+|\d+))?\]", op):
                off = int(mm.group(1), 0) if mm.group(1) else 0
                k = off - d                            # offset relative to entry esp (ret addr at 0)
                if k >= 4 and not (m == "lea"): best = max(best, k)
            if m == "push": d += 4
            elif m == "pop": d -= 4
            elif m == "sub" and op.startswith("esp, "): d += int(op[5:], 0)
            elif m == "add" and op.startswith("esp, "): d -= int(op[5:], 0)
            elif m == "ret": break
            elif m.startswith("j"):
                try: todo.append((int(op, 16), d))
                except ValueError: pass
                if m == "jmp": break
            elif "ebp" in op and m == "mov" and op.startswith("ebp, esp"): break   # frame pointer: stop tracking
            a = ins.address + ins.size
    return best
for c, ours in [l.split()[0:2] for l in """006c1327 0
006c12ff 0
00491810 0
004e2050 0
0053f1c0 0
00562370 0
0056bb90 0
0063cbf0 12
0063cd20 8
0063ce20 12""".splitlines()]:
    print(c, "reads args up to byte", max_arg(int(c, 16)), "ours passes", ours)
