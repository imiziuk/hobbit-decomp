"""Retype GUESSED globals that the decompiled body uses as floats.

ghidra2c guesses `undefined4` (an int) for globals without a Ghidra data type. When the body uses one in
float context, C converts its value instead of reading float bits: `timer == 1.0f` became
`1065353216 == 1.0f`, never true -> bilbo::DEATH_OnUpdate 0x440ec0 never left the death screen.
Float context = NAN(g), or g on a line together with a float operand (fVar*, float casts/derefs, float10,
a known-float global).

Usage: python tools/float_globals.py auto/ok          (rewrites in place; idempotent)
       from float_globals import apply                 (ghidra2c.convert)"""
import glob, os, re, sys

FLOATY = re.compile(r"\bfVar\d+|\bfStack_\w+|\(float\s*\*?\)|\*\(float \*\)|\bfloat10\b|\bdVar\d+|\(double\)")

def apply(code):
    m = re.search(r"^/\* GUESSED global types: (.*?) \*/$", code, re.M)
    if not m:
        return code
    guessed = m.group(1).split()
    floats = {g for g in re.findall(r"^#define (\w+) \(\*\(float\*\)", code, re.M)}
    body_lines = [l for l in code.splitlines() if not l.startswith(("#define", "/*", "static __inline"))]
    changed = True
    found = set()
    while changed:                                   # propagate: a guessed global next to a float one
        changed = False
        for g in guessed:
            if g in found:
                continue
            pat = re.compile(r"\b" + re.escape(g) + r"\b")
            for l in body_lines:
                if not pat.search(l):
                    continue
                if re.search(r"NAN\(\s*" + re.escape(g) + r"\b", l) or FLOATY.search(l) or \
                        any(re.search(r"\b" + re.escape(f) + r"\b", l) for f in floats | found if f != g):
                    found.add(g); changed = True
                    break
    if not found:
        return code
    for g in found:
        code = re.sub(r"^#define " + re.escape(g) + r" \(\*\((?:undefined4|int|uint)\*\)(0x[0-9a-f]+)\)",
                      r"#define " + g + r" (*(float*)\1)  /* float: used in float context */", code, flags=re.M)
    return code

if __name__ == "__main__":
    n = 0
    files = glob.glob(os.path.join(sys.argv[1], "*.c")) if os.path.isdir(sys.argv[1]) else sys.argv[1:]
    for p in files:
        s = open(p, encoding="utf-8", errors="replace").read()
        t = apply(s)
        if t != s:
            open(p, "w", encoding="utf-8").write(t); n += 1
    print(f"{n} of {len(files)} units retyped")
