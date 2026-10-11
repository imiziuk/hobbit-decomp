"""Static ABI audit of every registered generated function: the original's `ret N` (found by recursive
descent from the entry, following jumps, not calls) vs the stack bytes our registrar/prototype assumes
(callee-pops for stdcall/fastcall(thiscall), 0 for cdecl). Also flags tail jumps (`jmp` to another function).
Usage: tools/.venv/Scripts/python tools/abi_audit.py  -> auto/abi_audit.tsv"""
import os, re, capstone, pefile
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
pe = pefile.PE(os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean", "Meridian.exe"), fast_load=True)
BASE = pe.OPTIONAL_HEADER.ImageBase
img = pe.get_memory_mapped_image()
md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
starts = sorted(int(l.split("\t")[0], 16) for l in open(os.path.join(ROOT, "..", "Hobbit-RE", "db", "funcs.tsv"))
                if re.match(r"[0-9a-f]{8}\t", l))
startset = set(starts)

def scan(entry):
    rets, tails, seen, todo = set(), set(), set(), [entry]
    while todo and len(seen) < 20000:
        a = todo.pop()
        while a not in seen:
            seen.add(a)
            ins = next(md.disasm(img[a - BASE:a - BASE + 16], a), None)
            if ins is None:
                break
            m = ins.mnemonic
            if m == "ret":
                rets.add(int(ins.op_str, 16) if ins.op_str else 0); break
            if m == "jmp" or m.startswith("j"):
                try:
                    t = int(ins.op_str, 16)
                except ValueError:
                    if m == "jmp":
                        if "dword ptr [" in ins.op_str and "*4" in ins.op_str:   # switch table: give up on this path
                            pass
                        else:
                            tails.add(ins.op_str)
                        break
                    t = None
                if t is not None:
                    if m == "jmp" and t != entry and t in startset:
                        tails.add(f"{t:08x}"); break
                    todo.append(t)
                if m == "jmp":
                    break
            a = ins.address + ins.size
    return rets, tails

reg = re.compile(r'Registrar r_([0-9a-f]{8})\(.*?"AUTO_\w+", (\d+), hook::Ret::(\w+), hook::Conv::(\w+), (true|false)\)')
rows, bad = [], 0
for line in open(os.path.join(ROOT, "src", "auto_registry.cpp")):
    m = reg.search(line)
    if not m:
        continue
    a, nb, ret, conv, live = m.group(1), int(m.group(2)), m.group(3), m.group(4), m.group(5) == "true"
    rets, tails = scan(int(a, 16))
    expect = 0 if conv == "Cdecl" else nb
    issue = []
    if len(rets) > 1: issue.append("multiple ret sizes")
    if rets and expect not in rets: issue.append(f"ret {sorted(rets)} but ours pops {expect}")
    if tails: issue.append("tail jmp " + ",".join(sorted(tails)))
    if not rets and not tails: issue.append("no ret found")
    rows.append((a, live, conv, nb, sorted(rets), ";".join(issue)))
with open(os.path.join(ROOT, "auto", "abi_audit.tsv"), "w") as f:
    f.write("addr\tlive\tconv\tnb\trets\tissue\n")
    for r in rows:
        f.write("\t".join(map(str, r)) + "\n")
live = [r for r in rows if r[1]]
def count(rs, word): return sum(1 for r in rs if word in r[5])
print(f"{len(rows)} registered, {len(live)} live")
for w in ("but ours pops", "multiple ret", "tail jmp", "no ret"):
    print(f"  {w:15s} all={count(rows, w):5d} live={count(live, w):4d}")

# tail-jumping functions: the target's `ret N` pops OUR caller's arguments, so it must equal our nb too
print("\nlive tail-jump functions whose target pops a different amount:")
n = 0
for a, lv, conv, nb, rets, issue in rows:
    if not lv or "tail jmp" not in issue:
        continue
    for t in issue.split("tail jmp ")[1].split(","):
        if not re.fullmatch(r"[0-9a-f]{8}", t):
            print(f"  {a} {conv} nb={nb}: indirect tail jmp {t}"); n += 1; continue
        trets, _ = scan(int(t, 16))
        expect = 0 if conv == "Cdecl" else nb
        if trets and expect not in trets:
            print(f"  {a} {conv} nb={nb} own_rets={rets}: tail -> {t} pops {sorted(trets)}"); n += 1
print(n, "flagged")
