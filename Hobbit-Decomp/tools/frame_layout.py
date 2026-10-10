"""Give every Ghidra stack local its ORIGINAL frame offset.

Ghidra names stack locals by their offset below the return address (local_28 = [entry ESP - 0x28]) and often
splits one object into pieces: e.g. a 3-float vector written by a callee becomes `undefined1 local_28[4]` +
`float fStack_24`. Compiled as separate variables, the callee's 12-byte write overflows a 4-byte array into
whatever MSVC put next (saved EBP -> crash; bilbo::Platform_CheckForPlatform 0x446ed0).
Fix: one byte array `_frame` holds all stack locals at their original offsets, so pieces alias like in the
original and oversized writes land in the same neighbours.

Usage: python tools/frame_layout.py auto/ok/*.c      (rewrites in place; idempotent)
       from frame_layout import apply  (used by ghidra2c.convert)"""
import re, sys

SIZES = {"undefined1": 1, "char": 1, "uchar": 1, "byte": 1, "bool": 1, "undefined": 1, "sbyte": 1,
         "undefined2": 2, "short": 2, "ushort": 2, "word": 2, "wchar_t": 2, "wchar16": 2,
         "undefined4": 4, "int": 4, "uint": 4, "float": 4, "dword": 4, "long": 4, "ulong": 4,
         "undefined3": 3, "undefined5": 5, "undefined6": 6, "undefined7": 7,
         "undefined8": 8, "double": 8, "long long": 8, "unsigned long long": 8, "qword": 8,
         "float10": 10}
DECL = re.compile(r"^(\s+)([A-Za-z_][\w ]*?)\s*(\*+)?\s*\b((?:local|[a-z]{1,3}Stack)_([0-9a-f]+))(?:\s*\[(\w+)\])?\s*;\s*$")

def apply(code):
    if "_frame[" in code:
        return code
    lines = code.split("\n")
    try:
        start = next(i for i, l in enumerate(lines) if l.strip() == "{" or l.endswith("\n{")) + 1
    except StopIteration:
        return code
    decls, i = [], start
    while i < len(lines) and (lines[i].strip() == "" or re.match(r"^\s+[\w ]+\**\s*\w+(\s*\[\w+\])?\s*;\s*$", lines[i])):
        m = DECL.match(lines[i])
        if m:
            base, ptr, name, off, n = m[2].strip(), m[3] or "", m[4], int(m[5], 16), m[6]
            esize = 4 if ptr else SIZES.get(base)
            if esize is None:
                return code                       # struct / unknown type: leave function as Ghidra wrote it
            count = int(n, 0) if n else 1
            decls.append((i, m[1], base + (" " + ptr if ptr else ""), name, off, esize, count, bool(n)))
        i += 1
    # `stack0xNNNNNNNN` = Ghidra's name for "the stack slot at entry ESP + N" when it made no variable for it:
    # negative N lies in this function's frame (same _frame array), positive N is one of its stack arguments
    refs = sorted({int(x, 16) for x in re.findall(r"\bstack0x([0-9a-f]{8})\b", code)})
    neg = [v for v in refs if v >= 0x80000000]
    pos = [v for v in refs if v < 0x80000000]
    if not decls and not refs:
        return code
    F = max([d[4] for d in decls] + [0x100000000 - v for v in neg] + [4])
    F = (F + 15) // 16 * 16
    arrays = {d[3] for d in decls if d[7]}
    for (ln, ind, typ, name, off, esize, count, is_arr) in decls:
        addr = f"(_frame + 0x{F - off:x})"
        lines[ln] = (f"{ind}#define {name} (({typ}*){addr})" if is_arr
                     else f"{ind}#define {name} (*({typ}*){addr})")
    extra = [f"#define stack0x{v:08x} (*(undefined*)(_frame + 0x{F - (0x100000000 - v):x}))" for v in neg]
    if pos:
        sig = re.search(r"\b(__\w+) AUTO_[0-9a-f]{8}\((.*?)\)\s*\n\{", code)
        if not sig:
            return code
        names = [re.search(r"(\w+)\s*$", p).group(1) for p in sig.group(2).split(",") if p.strip() not in ("", "void")]
        stack = names[2:] if sig.group(1) == "__fastcall" else names
        nargs = 4 * len(stack)                        # bytes our thunk copies (4 per declared stack argument)
        for v in pos:
            k, rem = divmod(v - 4, 4)
            if v < 4:
                return code
            if k < len(stack):
                extra.append(f"#define stack0x{v:08x} (*(undefined*)((unsigned char*)&{stack[k]} + {rem}))")
            else:
                # beyond the declared arguments: the ORIGINAL call frame, through the thunk's fixed layout
                # (our entry ESP + 4 + copied args + 16 = original entry ESP; see tools/hidden_regs.py)
                extra.append(f"#define stack0x{v:08x} (*(undefined*)((unsigned char*)_AddressOfReturnAddress() + "
                             f"{20 + nargs} + 0x{v:x}))")
    first = decls[0][0] if decls else start
    ind = decls[0][1] if decls else "  "
    if decls or neg:
        lines.insert(first, f"{ind}__declspec(align(16)) unsigned char _frame[0x{F:x}];  /* original stack frame */")
        first += 1
    for e in reversed(extra):
        lines.insert(first, ind + e)
    out = "\n".join(lines)
    for a in arrays:                              # &array -> array (the macro is already a pointer)
        out = re.sub(r"&\s*" + a + r"\b(?!\s*\[)", a, out)
    if any("_AddressOfReturnAddress" in e for e in extra) and "_AddressOfReturnAddress(void);" not in out:
        hdr = out.index("\n", out.index("#include")) + 1
        out = out[:hdr] + "void *_AddressOfReturnAddress(void);\n#pragma intrinsic(_AddressOfReturnAddress)\n" + out[hdr:]
    return out

if __name__ == "__main__":
    changed = 0
    for p in sys.argv[1:]:
        s = open(p, encoding="utf-8", errors="replace").read()
        t = apply(s)
        if t != s:
            open(p, "w", encoding="utf-8").write(t); changed += 1
    print(f"{changed} of {len(sys.argv) - 1} units rewritten")
