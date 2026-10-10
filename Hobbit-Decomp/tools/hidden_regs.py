"""Hidden register inputs/outputs in Ghidra output (`in_EAX`, `unaff_ESI`, `extraout_ECX`, `extraout_var`...).

MSVC6 optimised across functions in one .cpp: a callee may read a register the caller set (in_/unaff_) and a
caller may use a register a callee left behind (extraout_). Ghidra declares these as locals; they only need
work when they are READ before being written:
  in_/unaff_ EAX ECX EDX EBX ESI EDI   -> `__asm mov var, reg` as the first statement (our thunk passes all
                                          of them through unchanged; EBP is not: the thunk changes it)
  extraout_EAX/ECX/EDX                 -> value of that register after the last call: every callee wrapper of
                                          the unit saves EAX/ECX/EDX right after its call
  extraout_var (undefined3/2/1)        -> the upper bytes of EAX after a call (CONCAT31(extraout_var, bVar))
  extraout_var (4 bytes)               -> EDX after a call (CONCAT44(extraout_var, x))
Anything else (unaff_EBP, unaff_retaddr, x87 ST0/ST1 inputs, FPU control/status words, flags) -> None (skip).

transform(c) is called by ghidra2c.convert on the raw Ghidra C; returns (new_c, needs_capture) or (None, reason)."""
import re

REGS = {"EAX", "ECX", "EDX", "EBX", "ESI", "EDI"}
SIZE = {"undefined1": 1, "byte": 1, "char": 1, "bool": 1, "undefined2": 2, "short": 2, "ushort": 2,
        "undefined3": 3, "uint3": 3, "int3": 3, "undefined4": 4, "uint": 4, "int": 4, "float": 4,
        "undefined *": 4, "void *": 4}

def _decls(c):
    """{name: (type, line_index)} for every in_/unaff_/extraout_ declaration"""
    out = {}
    for i, l in enumerate(c.splitlines()):
        m = re.match(r"^\s+([\w ]+?\s*\**)\s*\b((?:in|unaff|extraout)_\w+)\s*;\s*$", l)
        if m:
            out[m.group(2)] = (m.group(1).strip(), i)
    return out

def _read_first(body, name):
    """True if the first use of `name` in the statements is a read (not `name = ...`)"""
    m = re.search(r"\b" + re.escape(name) + r"\b(\s*=(?!=))?", body)
    return bool(m) and not m.group(1)

def transform(c):
    used = set(re.findall(r"\b((?:in|unaff|extraout)_\w+)", c))
    if not used:
        return c, False
    decls = _decls(c)
    lines = c.splitlines()
    try:
        brace = next(i for i, l in enumerate(lines) if l.strip() == "{")
    except StopIteration:
        return None, "skip:hidden-register-input"
    stmt = brace + 1                       # first statement = first line after the declaration block
    while stmt < len(lines) and (not lines[stmt].strip() or re.match(r"^\s+[\w ]+\**\s*\**\w+(\s*\[\w+\])?\s*;\s*$", lines[stmt])):
        stmt += 1
    body = "\n".join(lines[stmt:])
    asm, capture, defines, drop = [], False, [], set()
    for name in sorted(used):
        typ, line = decls.get(name, (None, None))
        if typ is None:
            return None, f"skip:hidden-register-input:{name}"
        reads_first = _read_first(body, name)
        kind, _, rest = name.partition("_")
        reg = re.sub(r"_\d+$", "", rest)
        # the ORIGINAL call frame, reached through our thunk's fixed layout (core/hook.cpp MakeThunk):
        # our entry ESP E = _AddressOfReturnAddress(); thunk pushed EBP,EAX,ECX,EDX + a copy of the args,
        # so the original entry ESP (its return address) is E + 4 + __NARGS + 16 (__NARGS: ghidra2c)
        orig = "((unsigned char*)_AddressOfReturnAddress() + 20 + __NARGS)"
        m = re.fullmatch(r"in_stack_([0-9a-f]{8})", name)
        if m and int(m.group(1), 16) < 0x80000000:
            defines.append(f"#define {name} (*({typ}*)({orig} + 0x{m.group(1)}))")
            drop.add(line)
            continue
        if name == "unaff_retaddr" and SIZE.get(typ, 4 if typ.endswith("*") else 0) == 4:
            defines.append(f"#define {name} (*({typ}*){orig})")
            drop.add(line)
            continue
        if re.fullmatch(r"unaff_EBP(_\d+)?", name) and reads_first and SIZE.get(typ, 4 if typ.endswith("*") else 0) == 4:
            defines.append(f"#define {name} (*({typ}*)({orig} - 4))")     # the thunk saved the caller's EBP there
            drop.add(line)
            continue
        if kind in ("in", "unaff"):
            if not reads_first:
                continue                   # plain local Ghidra named after a register
            if reg not in REGS or SIZE.get(typ, 4 if typ.endswith("*") else 0) != 4:
                return None, f"skip:hidden-register-input:{name}"
            asm.append(f"  *(unsigned *)&{name} = __entry_{reg.lower()};   /* saved by our thunk at entry */")
        else:                              # extraout_
            if not reads_first:
                continue
            capture = True
            size = SIZE.get(typ, 4 if typ.endswith("*") else 0)
            if reg in ("EAX", "ECX", "EDX") and size == 4:
                src = f"__rx_{reg.lower()}"
            elif reg == "var" and size in (1, 2, 3):
                src = f"(__rx_eax >> {8 * (4 - size)})"
            elif reg == "var" and size == 4:
                src = "__rx_edx"
            else:
                return None, f"skip:hidden-register-input:{name}"
            defines.append(f"#define {name} (({typ}){src})")
            drop.add(line)
    if not asm and not capture:
        return c, False
    lines = [l for i, l in enumerate(lines) if i not in drop]
    stmt -= sum(1 for d in drop if d < stmt)
    lines[stmt:stmt] = asm
    out = "\n".join(lines)
    if defines:
        out = "\n".join(defines) + "\n" + out
    return out, capture

CAPTURE_DECL = "static unsigned int __rx_eax, __rx_ecx, __rx_edx;   /* registers right after the last call */"

def capturing_wrapper(w):
    """`static __inline T F(params) { return (cast)(args); }` -> a wrapper that also saves EAX/ECX/EDX"""
    m = re.match(r"static __inline (.+?) (\w+)\((.*?)\) \{ (return )?(.*); \}$", w)
    if not m:
        return w
    ret, name, params, has_ret, call = m.groups()
    save = "__asm { mov __rx_eax, eax } __asm { mov __rx_ecx, ecx } __asm { mov __rx_edx, edx }"
    if has_ret and ret != "void":
        return f"static {ret} {name}({params}) {{ {ret} __r = {call}; {save} return __r; }}"
    return f"static {ret} {name}({params}) {{ {call}; {save} }}"
