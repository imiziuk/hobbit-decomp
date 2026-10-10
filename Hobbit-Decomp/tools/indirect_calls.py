"""Rewrite the indirect calls transform_vcalls (ghidra2c) cannot handle into calls through __callsafe
(src/core/callsafe.cpp), which works for any calling convention because it restores ESP itself.

  (**(code **)(X))(args)     X = address of the function pointer (vtable slot)  -> fn = *(void**)(X)
  (*(code *)Y)(args)         Y = the function pointer itself                     -> fn = (void*)(Y)
ECX (the object of a C++ virtual call): X = `VT + off` or `VT` with VT = `*OBJ` -> OBJ; VT a plain variable
-> the OBJ of its last `VT = *OBJ;` before the call; otherwise 0 (plain function pointers ignore ECX).
A `(float10)` cast in front of the call means an x87 result -> __callsafe_f.

transform(c) -> new text, or None if a call could not be parsed."""
import re

def match_paren(s, i):
    """s[i] == '(' -> index of its matching ')'"""
    depth = 0
    for j in range(i, len(s)):
        if s[j] == "(":
            depth += 1
        elif s[j] == ")":
            depth -= 1
            if depth == 0:
                return j
    return -1

def split_args(s, i):
    """s[i] == '(' -> (list of argument strings, index of the matching ')')"""
    end = match_paren(s, i)
    if end < 0:
        return None, -1
    inner, args, depth, cur = s[i + 1:end], [], 0, ""
    for ch in inner:
        if ch in "([":
            depth += 1
        elif ch in ")]":
            depth -= 1
        if ch == "," and depth == 0:
            args.append(cur.strip()); cur = ""
        else:
            cur += ch
    if cur.strip():
        args.append(cur.strip())
    return args, end

def strip_parens(x):
    x = x.strip()
    while x.startswith("(") and match_paren(x, 0) == len(x) - 1:
        x = x[1:-1].strip()
    return x

def object_of(x, text_before):
    vt = strip_parens(x)
    m = re.match(r"^(.*?)\s*\+\s*(0x[0-9a-f]+|\d+)$", vt)
    if m:
        vt = strip_parens(m.group(1))
    if vt.startswith("*"):
        return vt[1:].strip()
    if re.fullmatch(r"\w+", vt):
        found = re.findall(r"\b" + re.escape(vt) + r"\s*=\s*\*(?!=)([^;]+);", text_before)
        if found:
            return found[-1].strip()
    return "0"

PREFIXES = ("(**(code **)", "(*(code *)")

def pointer_calls(c):
    """`(*NAME)(args)` where NAME is a `code *` local or a global holding a function pointer (DAT_/PTR_):
    the same safe call (Ghidra's `code` is void, so C cannot call through it)"""
    names = set(re.findall(r"\bcode\s*\*\s*(\w+)\s*;", c))
    for m in reversed(list(re.finditer(r"\(\*(\w+)\)\s*\(", c))):
        name = m.group(1)
        if name not in names and not re.match(r"_?(DAT|PTR)_\w+$", name):
            continue
        args, end = split_args(c, m.end() - 1)
        if args is None:
            return None
        helper = "__callsafe_f" if c[:m.start()].rstrip().endswith("(float10)") else "__callsafe"
        words = "".join(f", __W({a})" for a in args)
        c = c[:m.start()] + f"{helper}((void*)({name}), 0, {len(args)}{words})" + c[end + 1:]
    return c

def transform(c):
    c = pointer_calls(c)
    if c is None or "(code *" not in c:
        return c
    starts = [m.start() for m in re.finditer(r"\(\*\*\(code \*\*\)|\(\*\(code \*\)", c)]
    for i in reversed(starts):                      # innermost/last first: earlier offsets stay valid
        end1 = match_paren(c, i)
        if end1 < 0:
            return None
        j = end1 + 1
        while j < len(c) and c[j] in " \t\n":
            j += 1
        if j >= len(c) or c[j] != "(":
            return None                             # a code pointer used as a value, not called
        args, end2 = split_args(c, j)
        if args is None:
            return None
        inside = c[i + 1:end1]
        if inside.startswith("**(code **)"):
            x = inside[len("**(code **)"):]
            fn, obj = f"*(void**)({x})", object_of(x, c[:i])
        else:
            fn, obj = f"(void*)({inside[len('*(code *)'):]})", "0"
        before = c[:i].rstrip()
        helper = "__callsafe"
        if before.endswith("(float10)"):
            helper = "__callsafe_f"
        words = "".join(f", __W({a})" for a in args)
        call = f"{helper}({fn}, (unsigned)({obj}), {len(args)}{words})"
        c = c[:i] + call + c[end2 + 1:]
    return c
