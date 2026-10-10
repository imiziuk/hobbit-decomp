"""Compiler-guided repair of Ghidra's pointer<->float casts (they mean "reinterpret the 32 bits"; C rejects them).
Given a unit's text and its MSVC errors (with /diagnostics:column), rewrite the cast at each
`C2440 'type cast': cannot convert from 'X *' to 'float'` (or float -> pointer) into __p2f / __f2p
(auto/ghidra_compat.h). Used by build_units.py in a compile-fix-recompile loop.

fix(text, errors) -> new text, or None if nothing could be fixed."""
import re

def operand_end(s, i):
    """end index (exclusive) of the C unary expression starting at s[i] (the operand of a cast)"""
    while i < len(s) and s[i] in " \n":
        i += 1
    start = i
    while i < len(s) and s[i] in "*&-!~":           # prefix operators
        i += 1
        while i < len(s) and s[i] == " ":
            i += 1
    if i < len(s) and s[i] == "(":
        i = close(s, i) + 1
        if i <= 0:
            return -1
        if s[start] == "(" and re.match(r"\s*[\w(*&]", s[i:]) and re.fullmatch(r"\([\w\s\*]+\)", s[start:i]):
            return operand_end(s, i)                  # it was a cast itself: (T)(...) -> include its operand
    else:
        m = re.match(r"[\w.]+", s[i:])
        if not m:
            return -1
        i += m.end()
    while i < len(s):                                 # postfix: [..] (..) .x ->x
        if s[i] in "[(":
            i = close(s, i) + 1
            if i <= 0:
                return -1
        elif s.startswith("->", i) or s[i] == ".":
            m = re.match(r"(->|\.)\w+", s[i:])
            i += m.end() if m else 1
        else:
            break
    return i

def close(s, i):
    pair = {"(": ")", "[": "]"}[s[i]]
    depth = 0
    for j in range(i, len(s)):
        if s[j] in "([":
            depth += 1
        elif s[j] in ")]":
            depth -= 1
            if depth == 0:
                return j
    return -2

CAST = re.compile(r"\((float|[\w ]+\*+)\)")

def fix(text, errors):
    """operates on the whole text: a cast's operand may continue on the next lines"""
    starts = [0]
    for line in text.split("\n"):
        starts.append(starts[-1] + len(line) + 1)
    edits = []
    for ln, col, frm, to in errors:
        lo, hi = starts[ln - 1], starts[ln] - 1
        to_float = to == "float"
        cands = [m for m in CAST.finditer(text, lo, hi) if (m.group(1) == "float") == to_float]
        if not cands:
            continue
        best = min(cands, key=lambda m: abs(m.start() - (lo + col - 1)))   # nearest to the reported column
        end = operand_end(text, best.end())
        if end < 0:
            continue
        edits.append((best.start(), best.end(), end, best.group(1), to_float))
    if not edits:
        return None
    for start, cend, end, typ, to_float in sorted(set(edits), reverse=True):   # right to left
        operand = text[cend:end].strip()
        new = f"__p2f({operand})" if to_float else f"(({typ})__f2p({operand}))"
        text = text[:start] + new + text[end:]
    return text

ERR = re.compile(r"\((\d+),(\d+)\): error C2440: 'type cast': cannot convert from '([^']+)' to '([^']+)'")

def parse_errors(stdout):
    out = []
    for m in ERR.finditer(stdout):
        frm, to = m.group(3), m.group(4)
        if (frm.endswith("*") and to == "float") or (frm in ("float", "double") and to.endswith("*")):
            out.append((int(m.group(1)), int(m.group(2)), frm, "float" if to == "float" else "ptr"))
    # several errors on one line: fix right-most first so earlier columns stay valid
    return sorted(out, key=lambda e: (e[0], -e[1]))
