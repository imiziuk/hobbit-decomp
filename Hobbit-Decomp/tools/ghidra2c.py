"""Turns Ghidra decompiler units (ExportDecompUnits.java JSON) into standalone C files that modern MSVC
compiles, one per original function, for the automatic decompilation pipeline.

  auto/ghidra_types.h     : type section of Ghidra's C export header, sanitized for MSVC C mode
  auto/units/<addr>.c     : one function each:
        - every referenced global becomes  #define NAME (*(TYPE*)0xADDR)  (arrays: ((ELEM*)0xADDR))
        - every callee becomes a static __inline wrapper calling the ORIGINAL address with the right
          convention (__thiscall -> __fastcall with a dummy EDX)
        - the function itself is renamed AUTO_<addr> and made __fastcall/__stdcall/__cdecl to match
        - SEH bookkeeping (ExceptionList, puStack_8 = &LAB_...) is removed
  auto/units.tsv          : addr, status (ok / skip:<reason>), callconv, stack-arg bytes, return kind

Usage: python tools/ghidra2c.py <units_json_dir> <ghidra_header.h>
"""
import json, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
IAT = {}           # import name -> IAT slot address in Meridian.exe
GLOBAL_TYPES = {}   # addr -> {"type":..., "array":bool, "elem":..., "len":...} from ExportGlobals.java (globals.json)
OUT = os.path.join(ROOT, "auto")
UNITS = os.path.join(OUT, "units")

C_KEYWORDS = {"if", "while", "for", "switch", "return", "sizeof", "do", "else", "case", "goto"}

def sanitize_header(src, dst):
    text = open(src, encoding="utf-8", errors="replace").read()
    # keep everything before the first function prototype (types / enums / structs / typedefs)
    m = re.search(r"^(?:[\w\*]+[ \t]+)+(?:__thiscall|__stdcall|__cdecl|__fastcall)?[ \t]*\*?[A-Za-z_]\w*\(.*\);\s*$", text, re.M)
    types = text[: m.start()] if m else text
    types = re.sub(r"(struct|union) (\w+) \{([^{}]*?)\};",
                   lambda k: f"{k[1]} {k[2]} {{{k[3]}}};" if re.search(r"\w\s*;", k[3])
                   else f"{k[1]} {k[2]} {{ char _placeholder; }};", types)
    types = types.replace("typedef pointer32 ImageBaseOffset32;", "typedef unsigned int ImageBaseOffset32;")
    types = re.sub(r"^typedef short +wchar_t;", "", types, flags=re.M)
    types = re.sub(r"^typedef unsigned char +bool;", "", types, flags=re.M)
    types = re.sub(r"^typedef [^;]*\bfloat10;", "", types, flags=re.M)
    types = re.sub(r"^\s*float10\s*$", "", types, flags=re.M)        # stray builtin-type line
    types = re.sub(r"^#define +float10 .*$", "", types, flags=re.M)
    with open(dst, "w", encoding="utf-8") as f:
        f.write("#pragma once\n#include \"ghidra_compat.h\"\n" + types)

def ckind(ret):
    r = ret.strip()
    if r == "void": return "void"
    if r in ("float", "double", "float10", "longdouble"): return "float"
    # 64-bit returns come back in EDX:EAX; misclassifying them as int32 made the thunk restore EDX and
    # wipe the high half of every returned GUID (infinite object-creation loop at startup)
    if r in ("undefined8", "longlong", "ulonglong", "__int64", "GUID", "unkuint9", "long long",
             "unsigned long long", "ulong long", "int64_t", "uint64_t", "unsigned __int64", "double"):
        return "int64" if r != "double" else "float"
    return "int32"

def fix_ret(t):
    # Ghidra's `undefined` return = "unknown", not "1 byte"; as a C type it is unsigned char and would
    # truncate EAX (obj lookup -1 -> 255 -> crash in bilbo::Platform_CollideWithPlatforms). Keep all of EAX.
    t = fix_type(t)
    return "undefined4" if t == "undefined" else t

def fix_type(t):
    t = t.replace("longlong", "long long").replace("ulong long", "unsigned long long")
    t = re.sub(r"\bulonglong\b", "unsigned long long", t)
    return t

def size_of_param(t):
    t = t.strip()
    if "*" in t: return 4
    if t in ("undefined8", "longlong", "ulonglong", "double", "GUID", "unkuint9", "long long"): return 8
    if t in ("float10",): return 8
    return 4

def wrapper(cal, used_names):
    """C wrapper for a callee: same name the decompiled text uses, calls the original address.
    Imported functions (Windows, Bink, Miles...) are called through the game's own import table."""
    name, addr = cal.get("name"), cal["addr"]
    if not name or name in used_names:
        return None
    if cal.get("external"):
        iat = IAT.get(name)
        if not iat:
            return f"#error unknown import {name}"
        ret, params = fix_ret(cal.get("ret", "undefined4")), [fix_type(p) for p in cal.get("params", [])]
        cc = cal.get("cc") if cal.get("cc") in ("__cdecl", "__stdcall", "__fastcall") else "__stdcall"
        if cal.get("variadic"):
            return f"#define {name} (*({ret}(__cdecl**)({', '.join(params + ['...'])}))0x{iat:08x})"
        decl = ", ".join(f"{p} p{i}" for i, p in enumerate(params)) or "void"
        rv = "" if ret == "void" else "return "
        return (f"static __inline {ret} {name}({decl}) {{ {rv}(*({ret}({cc}**)({', '.join(params) or 'void'}))"
                f"0x{iat:08x})({', '.join(f'p{i}' for i in range(len(params)))}); }}")
    ret, cc, params = fix_ret(cal.get("ret", "undefined4")), cal.get("cc", "__cdecl"), [fix_type(p) for p in cal.get("params", [])]
    if cc in ("unknown", "default", None, "__default"):
        cc = "__cdecl"
    if cal.get("variadic"):
        ps = ", ".join(params + ["..."]) if params else ""   # C needs a named param before "...": use ()
        return f"#define {name} (({ret}(__cdecl*)({ps}))0x{addr})"
    decl = ", ".join(f"{p} p{i}" for i, p in enumerate(params)) or "void"
    rv = "" if ret == "void" else "return "
    if cc == "__thiscall":
        if not params:
            return f"static __inline {ret} {name}(void) {{ {rv}(({ret}(__cdecl*)(void))0x{addr})(); }}"
        types = ", ".join([params[0], "int"] + params[1:])
        args = ", ".join(["p0", "0"] + [f"p{i}" for i in range(1, len(params))])
        return f"static __inline {ret} {name}({decl}) {{ {rv}(({ret}(__fastcall*)({types}))0x{addr})({args}); }}"
    types = ", ".join(params) or "void"
    args = ", ".join(f"p{i}" for i in range(len(params)))
    return f"static __inline {ret} {name}({decl}) {{ {rv}(({ret}({cc}*)({types}))0x{addr})({args}); }}"

def global_define(g):
    name, addr, typ = g["name"], g["addr"], fix_type(g.get("type", "undefined4"))
    # a function/label used as a VALUE (callback, destructor for `eh vector destructor iterator`):
    # it is the address itself, never the code bytes there (0x8B crash on exit-to-menu, AUTO_00436d00)
    if re.match(r"(FUN|LAB|thunk_FUN)_", name):
        return f"#define {name} ((void*)0x{addr})"   # `&NAME` in the body is rewritten to NAME (convert)
    if g.get("array"):
        return f"#define {name} (({fix_type(g['elem'])}*)0x{addr})"
    if typ in ("string", "TerminatedCString", "char[]"):
        return f"#define {name} ((char*)0x{addr})"
    if typ in ("unicode", "TerminatedUnicode", "unicode32"):
        return f"#define {name} ((wchar_t*)0x{addr})"
    if typ.startswith("undefined") and typ[9:].isdigit() and int(typ[9:] or 0) > 8:
        return f"#define {name} ((unsigned char*)0x{addr})"
    return f"#define {name} (*({typ}*)0x{addr})"

VCALL = re.compile(r"(\(float10\)\s*)?\(\*\*?\(code \*\*?\)(?:\((?:\*(\w+)\s*\+\s*(0x[0-9a-f]+|\d+)|\*(\w+))\)|\*(\w+))\)\(")
FLOAT_LIT = re.compile(r"^-?\d+\.\d*(e[-+]?\d+)?$")

def split_args(s, i):
    """s[i] is just after '('. Returns (list of arg strings, index after matching ')')."""
    depth, start, args = 0, i, []
    while i < len(s):
        ch = s[i]
        if ch in "([{":
            depth += 1
        elif ch in ")]}":
            if depth == 0:
                if s[start:i].strip():
                    args.append(s[start:i].strip())
                return args, i + 1
            depth -= 1
        elif ch == "," and depth == 0:
            args.append(s[start:i].strip())
            start = i + 1
        i += 1
    return None, i

def transform_vcalls(body):
    """C++ virtual calls print as (**(code **)(*obj + off))(args): `this` = obj is implicit (ECX).
    Rewrite to a __thiscall-compatible call: ((R(__fastcall*)(void*, int, typeof(args)...))
    ((void**)*(int*)obj)[off/4])(obj, 0, args...). typeof keeps float arguments as floats (C23)."""
    out, pos = [], 0
    f10 = set(re.findall(r"^\s*float10\s+(\w+)\s*;", body, re.M))   # x87 temporaries: pushed as 4-byte floats
    for m in VCALL.finditer(body):
        if m.start() < pos:
            continue
        obj = m[2] or m[4] or m[5]
        off = int(m[3], 0) if m[3] else 0
        args, end = split_args(body, m.end())
        if args is None or off % 4:
            return None
        args = [f"(float){a}" if FLOAT_LIT.match(a) or a in f10 else a for a in args]
        ret = "float10" if m[1] else "int"
        types = ", ".join(["void*", "int"] + [f"typeof({a})" for a in args])
        call = (f"(({ret}(__fastcall*)({types}))((void**)(*(int*)({obj})))[{off // 4}])"
                f"((void*)({obj}), 0{''.join(', ' + a for a in args)})")
        out.append(body[pos:m.start()] + (f"(float10)" if m[1] else "") + call)
        pos = end
    out.append(body[pos:])
    return "".join(out)

def count_args(text, i):
    """number of arguments of the call whose '(' ends at text[i-1]"""
    depth, n, seen = 1, 0, False
    while i < len(text) and depth:
        ch = text[i]
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
        elif ch == "," and depth == 1:
            n += 1
        if depth and not ch.isspace():
            seen = True
        i += 1
    return n + 1 if seen else 0

INDEX = {}   # function addr -> {"cc","ret","params"} parsed from its own decompiled C signature

def sig_from_c(c, name):
    """(ret, cc, [param types]) from the first line of a unit's decompiled C, or None"""
    m = re.search(r"^([^\n{;}]*?)\b(__thiscall|__fastcall|__stdcall|__cdecl)?\s*\b" + re.escape(name) +
                  r"\s*\(([^)]*)\)\s*\n?\{", c, re.M)
    if not m:
        return None
    ret = " ".join(re.sub(r"\b__(thiscall|fastcall|stdcall|cdecl)\b", "", m.group(1)).split()) or "undefined4"
    cc = m.group(2) or "__cdecl"
    plist = [] if m.group(3).strip() in ("", "void") else [x.strip() for x in m.group(3).split(",")]
    if "..." in plist:
        return None
    types = [re.sub(r"\s*\b\w+$", "", x).strip() or x for x in plist]   # "void *param_1" -> "void *"
    return {"ret": ret, "cc": cc, "params": types}

TAIL = {}      # function addr -> addresses it tail-jumps to (its result is theirs)
RET_POP = {}   # function addr -> bytes its `ret N` pops (ground truth from the binary), None if unknown

def load_ret_pops():
    import bisect, pefile
    from capstone import CS_ARCH_X86, CS_MODE_32, Cs
    exe = os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean", "Meridian.exe")
    pe = pefile.PE(exe, fast_load=True)
    img, base = pe.get_memory_mapped_image(), pe.OPTIONAL_HEADER.ImageBase
    starts = sorted(int(l[:8], 16) for l in open(os.path.join(ROOT, "..", "Hobbit-RE", "db", "catalog.tsv"),
                                                 encoding="utf-8") if re.match(r"[0-9a-f]{8}\t", l))
    cs = Cs(CS_ARCH_X86, CS_MODE_32)
    S = set(starts)
    for i, a in enumerate(starts):
        hi = starts[i + 1] if i + 1 < len(starts) else a + 0x1000
        ins = list(cs.disasm(img[a - base: hi - base], a))
        pops = {int(x.op_str, 16) if x.op_str else 0 for x in ins if x.mnemonic == "ret"}
        RET_POP[f"{a:08x}"] = pops.pop() if len(pops) == 1 else None
        # tail calls: `jmp other_function` = the callee's EAX is this function's result
        tails = {int(x.op_str, 16) for x in ins if x.mnemonic == "jmp" and re.fullmatch(r"0x[0-9a-f]+", x.op_str)
                 and int(x.op_str, 16) in S and int(x.op_str, 16) != a}
        if tails:
            TAIL[f"{a:08x}"] = {f"{t:08x}" for t in tails}

def expected_pop(cc, params):
    """Bytes a function with this Ghidra signature would pop on return."""
    sizes = [size_of_param(p) for p in params]
    if cc == "__thiscall":
        return sum(sizes[1:])
    if cc == "__fastcall":
        return sum(sizes[2:])
    if cc == "__stdcall":
        return sum(sizes)
    return 0

def convert(u):
    addr, c = u["addr"], u.get("c")
    if u.get("error") or not c:
        return None, "skip:decompile-error"
    # registers passed between MSVC6 functions outside the calling convention (tools/hidden_regs.py)
    from hidden_regs import transform as hidden_regs, capturing_wrapper, CAPTURE_DECL
    c, capture = hidden_regs(c)
    if c is None:
        return None, capture
    if "halt_baddata" in c or "Could not recover jumptable" in c:
        return None, "skip:bad-decompile"
    if re.search(r"\(\*\*?\(code \*\*?\)", c):
        c2 = transform_vcalls(c)
        if c2 is not None and re.search(r"\(\*\*?\(code \*\*?\)", c2):
            # the rest (complex objects, plain function pointers, COM): through __callsafe (tools/indirect_calls.py)
            from indirect_calls import transform as callsafe
            c2 = callsafe(c2)
        if c2 is None or re.search(r"\(\*\*?\(code \*\*?\)", c2):
            return None, "skip:indirect-call"
        c = c2
    else:
        from indirect_calls import pointer_calls        # `(*pcVar1)(...)`, `(*DAT_x)(...)`
        c2 = pointer_calls(c)
        if c2 is None:
            return None, "skip:indirect-call"
        c = c2
    if re.search(r"\bswi\(|\bin\(|\bout\(|LOCK\(\)|UNLOCK\(\)|\bsegment\(|\bfptan\(|\bfpatan\(|\bpmaddwd\(|\bffree\("
                 r"|CxxThrowException|CallSettingFrame|\bSUB10\d\(", c):
        return None, "skip:special-instruction"
    # callee prototypes: the database copy is often stale ("undefined f()", cc unknown); the callee's own
    # decompiled signature is what this body's call sites were printed against
    for cal in u.get("callees", []):
        idx = INDEX.get(cal["addr"])
        # ...but only if it agrees with how this body calls it (number of arguments at every call site)
        if idx and cal.get("name"):
            counts = {count_args(c, m.end()) for m in re.finditer(r"\b" + re.escape(cal["name"]) + r"\s*\(", c)}
            if counts and counts != {len(idx["params"])}:
                # neither prototype matches the call sites: if they agree among themselves, use that arity
                # (4-byte args); the ret-N check below still rejects it if the stack bytes do not match
                idx = {**idx, "params": ["undefined4"] * counts.pop()} if len(counts) == 1 else None
        if idx and not cal.get("external") and not cal.get("variadic"):
            # its own signature often says void although callers use EAX (eax_users.py): keep 4 bytes then
            cal.update(cc=idx["cc"], params=list(idx["params"]), ret=idx["ret"] if idx["ret"] != "void" else "undefined4")
    # functions called in the body but only listed as globals (address taken too): add them as callees
    known = {cal.get("name") for cal in u.get("callees", [])}
    for nm, a in set(re.findall(r"\b((?:FUN|thunk_FUN)_([0-9a-f]{8}))\s*\(", c)):
        if nm not in known and a in INDEX and nm != u["name"]:
            u.setdefault("callees", []).append({"addr": a, "name": nm, **INDEX[a], "variadic": False, "external": False})
            known.add(nm)
    # strip SEH frame bookkeeping
    # Whole statements go; an assignment embedded in an expression (`if (a && (ExceptionList = &local_c, b))`)
    # is cut out of the expression - dropping that whole line used to delete real code (00419d80 lost its `if`)
    c = re.sub(r"\bExceptionList\s*=\s*[^,;()]+,\s*", "", c)              # `ExceptionList = x, ` inside ( , )
    lines = []
    for line in c.splitlines():
        if re.match(r"^\s*(ExceptionList\s*=[^;]*|\w+\s*=\s*ExceptionList|puStack_\w+\s*=\s*&LAB_\w+);\s*$", line):
            continue
        lines.append(line)
    body = "\n".join(lines)
    if re.search(r"\bExceptionList\b", body):
        return None, "skip:seh-in-expression"
    # signature: rename to AUTO_<addr>, map calling convention
    # return type may sit on its own line before the name when the parameter list is long
    sig_m = re.search(r"^([^\n{;}]*\n?[^\n{;}]*?)\b" + re.escape(u["name"]) + r"\s*\(([^)]*)\)\s*\n?\{", body, re.M)
    if not sig_m:
        return None, "skip:no-signature"
    head, params = sig_m[1].strip(), sig_m[2].strip()
    cc = u.get("cc") or "__cdecl"
    head = re.sub(r"/\*.*?\*/|//[^\n]*", "", head, flags=re.S)
    head = " ".join(re.sub(r"\b__(thiscall|fastcall|stdcall|cdecl)\b", "", head).split())
    ret = fix_type(head)
    # Ghidra says void, but the original ends in `jmp callee`: the callee's EAX IS the result (NPC vtable method
    # 004a5760 = `mov ecx,[ecx+0x304]; jmp 00592190` returned an animation handle; ours returned garbage ->
    # PhysController::SetAnim crash on every New Game). Keep the tail callee's value and return it.
    if ret == "void" and TAIL.get(addr):
        names = [n for t in TAIL[addr] for n in (f"FUN_{t}", f"thunk_FUN_{t}") if re.search(r"\b" + n + r"\s*\(", body)]
        if names:
            ret = "int"
            pat = r"^(\s*)((?:" + "|".join(names) + r")\s*\(.*\));\s*$"
            body = re.sub(pat, r"\1__tail = (int)(\2);", body, flags=re.M)
            body = re.sub(r"\breturn;", "return __tail;", body)
            end = body.rstrip().rfind("}")
            if not re.search(r"return [^;]*;\s*$", body[:end].rstrip() + "\n"):
                body = body[:end] + "  return __tail;\n" + body[end:]
            body = re.sub(r"(\b" + re.escape(u["name"]) + r"\s*\([^)]*\)\s*\n?\{\n)", r"\1  int __tail;\n", body, count=1)
    plist = [] if params in ("", "void") else [p.strip() for p in params.split(",")]
    if any(p == "..." for p in plist):
        return None, "skip:variadic"
    if cc == "__thiscall":
        if not plist:
            return None, "skip:thiscall-no-this"
        newparams = [plist[0], "int _edx_unused"] + plist[1:]
        conv = "__fastcall"
        stack_bytes = sum(size_of_param(p.rsplit(" ", 1)[0]) for p in plist[1:])
    elif cc == "__fastcall":
        newparams, conv = plist, "__fastcall"
        stack_bytes = sum(size_of_param(p.rsplit(" ", 1)[0]) for p in plist[2:])
    elif cc == "__stdcall":
        newparams, conv = plist, "__stdcall"
        stack_bytes = sum(size_of_param(p.rsplit(" ", 1)[0]) for p in plist)
    else:
        newparams, conv = plist, "__cdecl"
        stack_bytes = sum(size_of_param(p.rsplit(" ", 1)[0]) for p in plist)
    total_bytes = sum(size_of_param(p.rsplit(" ", 1)[0]) if p != "int _edx_unused" else 4 for p in newparams)
    # ground truth: our function must pop exactly what the original's `ret N` pops, and every callee
    # wrapper must match its callee's real ret N, or the stack goes out of balance (crash)
    own_pop = 0 if conv == "__cdecl" else stack_bytes
    real = RET_POP.get(addr)
    if real is not None and real != own_pop:
        return None, f"skip:proto-mismatch:ret{real}-vs-{own_pop}"
    for cal in u.get("callees", []):
        if cal.get("external") or "params" not in cal or cal.get("variadic"):
            continue
        creal = RET_POP.get(cal["addr"])
        if creal is not None and creal != expected_pop(cal.get("cc"), cal["params"]) \
                and re.search(r"\b" + re.escape(cal.get("name", "?")) + r"\s*\(", body):
            return None, f"skip:callee-proto-mismatch:{cal['addr']}"
    if newparams and newparams[0] == "void *this" and re.search(r"(?<![\w)])\*this\b|\bthis\[", body[sig_m.end():]):
        newparams = ["undefined4 *this"] + newparams[1:]      # Ghidra prints *this for a 4-byte read
    newsig = f"{ret} {conv} AUTO_{addr}({', '.join(fix_type(p) for p in newparams) or 'void'})\n{{"
    body = body[: sig_m.start()] + newsig + body[sig_m.end():]
    # function/label addresses are plain pointer constants: `&FUN_x` means the same address (MSVC rejects & on it)
    body = re.sub(r"&\s*((?:FUN|LAB|thunk_FUN)_[0-9a-f]{8})\b(?!\s*\()", r"\1", body)
    # Ghidra partial-variable access  X._O_S_  = S bytes of X starting at byte O
    PT = {1: "unsigned char", 2: "unsigned short", 4: "unsigned int", 8: "unsigned long long"}
    def partial(m):
        var, off, size = m[1], int(m[2]), int(m[3])
        if size in PT:
            return f"(*({PT[size]}*)((unsigned char*)&{var} + {off}))"
        mask = (1 << (8 * size)) - 1          # 3/5/6/7-byte pieces: read-only form
        return f"((*(unsigned long long*)((unsigned char*)&{var} + {off})) & 0x{mask:x}ull)"
    # writes to odd-sized pieces (3/5/6/7 bytes) have no C lvalue: store them byte by byte
    body = re.sub(r"\b(\w+)\._(\d+)_([3567])_\s*=(?!=)\s*([^;]+);",
                  lambda m: f"__setn(&{m[1]}, {m[2]}, (unsigned long long)({m[4]}), {m[3]});", body)
    body = re.sub(r"\b(\w+)\._(\d+)_(\d+)_", partial, body)
    body = re.sub(r"\bNAN\b(?!\s*\()", "__NAN_VALUE", body)     # a NaN constant, not the NAN(x) test
    # a label must label a statement (one right before `}` or a declaration is a syntax error): add `;`
    body = re.sub(r"^(\s*(?:LAB|switchD|caseD|joined_r)\w*:)[ \t]*$", r"\1 ;", body, flags=re.M)
    body = re.sub(r"\blonglong\b", "long long", body)
    body = re.sub(r"\bulonglong\b", "unsigned long long", body)
    # self-recursion calls the original address too (keeps one implementation)
    out = [f"/* {u['name']} @ 0x{addr}  ({cc})  — generated by tools/ghidra2c.py, do not edit */",
           '#include "../ghidra_types.h"']
    if capture:                       # extraout_ registers: every call wrapper saves EAX/ECX/EDX after its call
        out.append(CAPTURE_DECL)
    if "_AddressOfReturnAddress" in body:   # reads of the original call frame (in_stack_/unaff_retaddr/unaff_EBP)
        out += ["void *_AddressOfReturnAddress(void);", "#pragma intrinsic(_AddressOfReturnAddress)",
                f"#define __NARGS {stack_bytes}   /* argument bytes our thunk copies */"]
    used = {u["name"]}
    called = {cal.get("name") for cal in u.get("callees", []) if not cal.get("external")}
    for g in u.get("globals", []):
        if re.search(r"\b" + re.escape(g["name"]) + r"\b", body):
            if g["name"] in called and re.search(r"\b" + re.escape(g["name"]) + r"\s*\(", body):
                if not re.search(r"\b" + re.escape(g["name"]) + r"\b(?!\s*\()", body):
                    continue                                   # only called: the wrapper below covers it
                body = re.sub(r"\b" + re.escape(g["name"]) + r"(\s*\()", g["name"] + r"__call\1", body)
                cal = next(x for x in u["callees"] if x.get("name") == g["name"])
                w = wrapper({**cal, "name": g["name"] + "__call"}, used)
                if w:
                    out.append(capturing_wrapper(w) if capture else w)
            out.append(global_define(g))
            used.add(g["name"])
    for cal in u.get("callees", []):
        w = wrapper(cal, used)
        if w and cal.get("name") and re.search(r"\b" + re.escape(cal["name"]) + r"\b", body):
            out.append(capturing_wrapper(w) if capture else w)
            used.add(cal["name"])
    # globals the decompiler printed but did not list (address constants): type from listing if known,
    # else guessed from the auto-name prefix (unit marked "guessed" so a wrong guess is easy to revisit)
    guessed = []
    for name in sorted(set(re.findall(r"\b((?:_?DAT|s|u|PTR_\w+?|PTR|BYTE|WORD|DWORD|FLOAT|uRam|iRam|pcRam|fRam)_\w*?([0-9a-f]{8}))\b", body)), key=lambda x: x[0]):
        n, a = name
        if n in used:
            continue
        t = GLOBAL_TYPES.get(a)
        if t:
            out.append(global_define({"name": n, "addr": a, **t}))
        elif n.startswith("s_"):
            out.append(f"#define {n} ((char*)0x{a})")
        elif n.startswith("u_"):
            out.append(f"#define {n} ((wchar_t*)0x{a})")
        elif n.startswith("PTR"):
            out.append(f"#define {n} (*(undefined**)0x{a})")   # Ghidra's `undefined *`: byte-addressed
        else:
            out.append(f"#define {n} (*(undefined4*)0x{a})")
            guessed.append(n)
        used.add(n)
    if guessed:
        out.insert(1, f"/* GUESSED global types: {' '.join(guessed)} */")
    # imported functions are called through the IAT (call [slot]) so they are not in the callee list:
    # route every remaining import name through the game's own import table
    for name in sorted(set(re.findall(r"\b([A-Za-z_]\w*)\s*\(", body))):
        if name in IAT and name not in used:
            out.append(f"#define {name} (*(int(__stdcall**)())0x{IAT[name]:08x})")
            used.add(name)
    if u["name"] in body[body.index("{") + 1:]:
        out.append(f"#define {u['name']} AUTO_{addr}")
    out.append(body)
    from frame_layout import apply as frame_layout      # stack locals at their original frame offsets
    from float_globals import apply as float_globals    # guessed globals used as floats
    return float_globals(frame_layout("\n".join(out))) + "\n", ("ok", conv, stack_bytes, ckind(ret), total_bytes)

def main():
    src, header = sys.argv[1], sys.argv[2]
    import pefile
    pe = pefile.PE(os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean", "Meridian.exe"))
    for dll in pe.DIRECTORY_ENTRY_IMPORT:
        for imp in dll.imports:
            if imp.name:
                n = imp.name.decode()
                IAT[n] = imp.address
                IAT[n.replace("@", "_")] = imp.address   # Ghidra spells _BinkOpen@8 as _BinkOpen_8
    load_ret_pops()
    for fn in os.listdir(src):
        if fn.endswith(".json"):
            j = json.load(open(os.path.join(src, fn), encoding="utf-8"))
            if j.get("c"):
                sg = sig_from_c(j["c"], j["name"])
                if sg:
                    # no keyword printed = Ghidra's default convention: take the database one, else infer it
                    # from what the function really pops (ret N): popping all params = __stdcall
                    if not re.search(r"__(thiscall|fastcall|stdcall|cdecl)", j["c"].split("{", 1)[0]):
                        if j.get("cc") in ("__thiscall", "__fastcall", "__stdcall", "__cdecl"):
                            sg["cc"] = j["cc"]
                        else:
                            pop = RET_POP.get(j["addr"])
                            sg["cc"] = "__stdcall" if pop and pop == expected_pop("__stdcall", sg["params"]) else "__cdecl"
                    INDEX[j["addr"]] = sg
    gpath = os.path.join(os.path.dirname(os.path.abspath(src)), "globals.json")
    if os.path.exists(gpath):
        GLOBAL_TYPES.update(json.load(open(gpath, encoding="utf-8")))
    os.makedirs(UNITS, exist_ok=True)
    sanitize_header(header, os.path.join(OUT, "ghidra_types.h"))
    rows, stats = [], {}
    for fn in sorted(os.listdir(src)):
        if not fn.endswith(".json"):
            continue
        u = json.load(open(os.path.join(src, fn), encoding="utf-8"))
        code, info = convert(u)
        if code:
            open(os.path.join(UNITS, f"{u['addr']}.c"), "w", encoding="utf-8").write(code)
            status, conv, nb, rk, tb = info
            rows.append(f"{u['addr']}\t{u['name']}\tok\t{conv}\t{nb}\t{rk}\t{tb}")
            stats["ok"] = stats.get("ok", 0) + 1
        else:
            rows.append(f"{u['addr']}\t{u['name']}\t{info}\t\t\t\t")
            stats[info] = stats.get(info, 0) + 1
    open(os.path.join(OUT, "units.tsv"), "w", encoding="utf-8").write("\n".join(rows) + "\n")
    for k, v in sorted(stats.items(), key=lambda kv: -kv[1]):
        print(f"{v:6d} {k}")

if __name__ == "__main__":
    main()
