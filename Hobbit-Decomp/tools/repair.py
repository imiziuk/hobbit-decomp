"""Brute-force repair of units held back for a known bug class (the maintainer's idea): generate educated-guess
variants, compile them into the DLL, let tools/equiv.py compare each with the original machine code, keep
the ones that pass. Units that pass nothing stay original.

Classes:
  varargs   calls to variadic functions lost their extra arguments -> append them from decomp_hl
            (plain Ghidra output keeps the full list) and make the wrapper variadic.

Usage: python tools/repair.py varargs --apply     rewrite auto/ok/<addr>.c for every candidate
       python tools/repair.py varargs --test      build the DLL, run equiv on them, record results
Results: auto/repaired.tsv (addr, class, verdict); originals backed up in auto/repair_backup/<class>/."""
import os, re, shutil, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
AUTO = os.path.join(ROOT, "auto")
HL = os.path.join(ROOT, "..", "Hobbit-RE", "db", "decomp_hl")

def call_args(text, start):
    """args of the call whose '(' is at text[start-1]; returns (list_of_arg_strings, end_index)"""
    depth, cur, args, i = 1, "", [], start
    while i < len(text) and depth:
        c = text[i]
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
            if depth == 0:
                break
        if c == "," and depth == 1:
            args.append(cur.strip()); cur = ""
        else:
            cur += c
        i += 1
    if cur.strip():
        args.append(cur.strip())
    return args, i

def hl_signature_is_this(hl):
    return bool(re.search(r"__thiscall", hl.split("{", 1)[0]))

def hl_param_types(hl):
    """param_k -> its C type in the plain Ghidra signature"""
    sig = hl.split("{", 1)[0].strip()
    m = re.search(r"\((.*)\)\s*$", sig, re.S)
    out = {}
    for part in (m.group(1).split(",") if m else []):
        q = re.match(r"\s*(.+?)\s*\b(param_\d+)\s*$", part.strip())
        if q:
            out[q.group(2)] = q.group(1).strip()
    return out

def translate(arg, thiscall, types):
    """decomp_hl names -> our names, cast to the HL type (ours may differ, e.g. void* vs int):
    for thiscall units HL param_1 is `this`, param_k is our param_(k-1)"""
    def ren(m):
        k = int(m.group(1))
        ours = ("this" if k == 1 else f"param_{k - 1}") if thiscall else f"param_{k}"
        t = types.get(f"param_{k}")
        return f"(({t}){ours})" if t else ours
    return re.sub(r"\bparam_(\d+)\b", ren, arg)

def variadic_set():
    out = set()
    for fn in os.listdir(HL):
        if re.search(r"&stack0x[0-9a-f]+", open(os.path.join(HL, fn), errors="replace").read()):
            out.add(fn[:8])
    return out

def fix_varargs(addr, variadic):
    p = os.path.join(AUTO, "ok", addr + ".c")
    hp = os.path.join(HL, addr + ".c")
    if not (os.path.exists(p) and os.path.exists(hp)):
        return None, "no source"
    ours, hl = open(p, encoding="utf-8", errors="surrogateescape").read(), open(hp, errors="replace").read()
    # HL param_1 = `this` only when our signature also names it `this` (else ours kept param_1)
    thiscall = hl_signature_is_this(hl) and f"AUTO_{addr}(void *this" in ours
    types = hl_param_types(hl)
    changed = False
    for callee in sorted(set(re.findall(r"\bFUN_([0-9a-f]{8})\s*\(", ours)) & variadic):
        name = "FUN_" + callee
        # the wrapper must accept extra args: only possible for cdecl (caller cleans the stack)
        w = re.search(r"^static __inline (.+?) " + name + r"\((.*?)\) \{ return \(\((.+?)\(__cdecl\*\)\((.*?)\)\)0x" + callee + r"\)\(.*$", ours, re.M)
        if not w:
            return None, f"wrapper for {name} not cdecl"
        ret, ptypes = w.group(1), w.group(4)
        ours = ours.replace(w.group(0), f"#define {name} (({ret}(__cdecl*)({ptypes}, ...))0x{callee})  /* variadic */")
        body_start = ours.index(w.group(0)[:0] or "{", ours.index("AUTO_" + addr))
        hl_calls = [call_args(hl, m.end()) [0] for m in re.finditer(r"\b" + name + r"\s*\(", hl)]
        our_calls = list(re.finditer(r"\b" + name + r"\s*\(", ours[body_start:]))
        if len(hl_calls) != len(our_calls):
            return None, f"{name}: {len(hl_calls)} calls in Ghidra vs {len(our_calls)} ours"
        # rewrite from the last call backwards so earlier offsets stay valid
        for m, hargs in reversed(list(zip(our_calls, hl_calls))):
            s = body_start + m.end()
            oargs, end = call_args(ours, s)
            if len(hargs) <= len(oargs):
                continue
            extra = [translate(x, thiscall, types) for x in hargs[len(oargs):]]
            ours = ours[:end] + ", " + ", ".join(extra) + ours[end:]
            changed = True
    if changed:
        ours = define_missing_globals(ours)
    return (ours if changed else None), ("ok" if changed else "nothing to add")

def define_missing_globals(code):
    """extra args copied from decomp_hl may name globals our unit never needed: define them like Ghidra
    types them (DAT_ = `undefined` = 1 byte, so `&DAT_x + n*4` keeps byte arithmetic; s_ = string)"""
    have = set(re.findall(r"^#define (\w+)", code, re.M))
    need = sorted(set(re.findall(r"\b((?:_?DAT|s|PTR_\w*?|PTR)_\w*?([0-9a-f]{8}))\b", code)))
    adds = []
    for n, a in need:
        if n in have:
            continue
        typ = "((char*)0x%s)" if n.startswith("s_") else "(*(void**)0x%s)" if n.startswith("PTR") else "(*(undefined*)0x%s)"
        adds.append(f"#define {n} {typ % a}")
        have.add(n)
    if not adds:
        return code
    i = code.index("\n", code.index("#include")) + 1
    return code[:i] + "\n".join(adds) + "\n" + code[i:]

def apply(cls):
    todo = [a for a in open(os.path.join(AUTO, "vararg_dropped.txt")).read().split()]
    variadic = variadic_set()
    bak = os.path.join(AUTO, "repair_backup", cls)
    os.makedirs(bak, exist_ok=True)
    done, why = [], {}
    for a in todo:
        new, msg = fix_varargs(a, variadic)
        if new is None:
            why[msg.split(":")[0]] = why.get(msg.split(":")[0], 0) + 1
            continue
        src = os.path.join(AUTO, "ok", a + ".c")
        if not os.path.exists(os.path.join(bak, a + ".c")):
            shutil.copy(src, bak)
        open(src, "w", encoding="utf-8", errors="surrogateescape").write(new)
        done.append(a)
    open(os.path.join(AUTO, f"repair_{cls}_candidates.txt"), "w").write("\n".join(done) + "\n")
    print(f"{cls}: rewrote {len(done)} of {len(todo)}; skipped: {why}")

# ---- class voidret: Ghidra typed it void, but callers read EAX (auto/returns_eax.txt) ----
# variant "this":  return the object / first parameter (setters and builders that `return this`)
# variant "last":  return the value of the last call that ran (pass-through wrappers)
def fix_voidret(src, variant):
    m = re.search(r"^void (__\w+ )?AUTO_([0-9a-f]{8})\((.*?)\)\s*\n\{", src, re.M)
    if not m:
        return None
    params = m.group(3)
    first = "this" if "void *this" in params else ("param_1" if re.search(r"\bparam_1\b", params) else None)
    head = src[:m.start()] + m.group(0).replace("void ", "int ", 1)
    body = src[m.end():]
    if variant == "this":
        if not first:
            return None
        val = f"(int){first}"
        decl = ""
    else:
        # capture every call statement's result: `FUN_x(...);` -> `__last = (int)(FUN_x(...));`
        body, n = re.subn(r"^(\s+)((?:FUN|thunk_FUN)_[0-9a-f]{8}\(.*\));\s*$", r"\1__last = (int)(\2);", body, flags=re.M)
        if not n:
            return None
        val, decl = "__last", "\n  int __last = 0;"
    body = re.sub(r"\breturn;", f"return {val};", body)
    # fall-through end of the function (the body ends with the function's closing brace)
    end = body.rstrip().rfind("}")
    if not re.search(r"return [^;]*;\s*$", body[:end].rstrip() + "\n"):
        body = body[:end] + f"  return {val};\n" + body[end:]
    return head + decl + body

def apply_voidret(variant):
    ret = set(open(os.path.join(AUTO, "returns_eax.txt")).read().split())
    void = {l.split("\t")[0] for l in open(os.path.join(AUTO, "units.tsv")) if l.split("\t")[2:3] == ["ok"] and l.split("\t")[5] == "void"}
    done_ok = {l.split()[0] for l in open(os.path.join(AUTO, "repaired.tsv")) if l.split()[1:] == ["voidret", "PASS"]} \
        if os.path.exists(os.path.join(AUTO, "repaired.tsv")) else set()
    bak = os.path.join(AUTO, "repair_backup", "voidret")
    os.makedirs(bak, exist_ok=True)
    done = []
    for a in sorted((ret & void) - done_ok):
        src = os.path.join(AUTO, "ok", a + ".c")
        if not os.path.exists(src):
            continue
        if not os.path.exists(os.path.join(bak, a + ".c")):
            shutil.copy(src, bak)
        orig = open(os.path.join(bak, a + ".c"), encoding="utf-8", errors="surrogateescape").read()
        new = fix_voidret(orig, variant)
        if new is None:
            shutil.copy(os.path.join(bak, a + ".c"), src)
            continue
        open(src, "w", encoding="utf-8", errors="surrogateescape").write(new)
        done.append(a)
    open(os.path.join(AUTO, "repair_voidret_candidates.txt"), "w").write("\n".join(done) + "\n")
    print(f"voidret/{variant}: rewrote {len(done)} of {len((ret & void) - done_ok)}")

def restore_failed(cls):
    """after a round: units whose variant did not PASS go back to the original source"""
    last = {}
    for l in open(os.path.join(AUTO, "repaired.tsv")):
        r = l.split()
        if len(r) == 3 and r[1] == cls:
            last[r[0]] = r[2]
    bak = os.path.join(AUTO, "repair_backup", cls)
    for a, v in last.items():
        if v != "PASS" and os.path.exists(os.path.join(bak, a + ".c")):
            shutil.copy(os.path.join(bak, a + ".c"), os.path.join(AUTO, "ok", a + ".c"))

def test(cls):
    cands = open(os.path.join(AUTO, f"repair_{cls}_candidates.txt")).read().split()
    cmake = r"C:\Program Files\Microsoft Visual Studio\18\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
    b = subprocess.run([cmake, "--build", os.path.join(ROOT, "build"), "--config", "Release", "--", "/m"],
                       capture_output=True, text=True)
    errs = sorted(set(re.findall(r"auto[\\/]ok[\\/]([0-9a-f]{8})\.c\(\d+[,\d]*\): error", b.stdout)))
    if errs:   # restore units that do not compile, rebuild
        for a in errs:
            shutil.copy(os.path.join(AUTO, "repair_backup", cls, a + ".c"), os.path.join(AUTO, "ok", a + ".c"))
        cands = [a for a in cands if a not in errs]
        print(f"{len(errs)} variants did not compile (restored): {errs[:10]}")
        b = subprocess.run([cmake, "--build", os.path.join(ROOT, "build"), "--config", "Release", "--", "/m"],
                           capture_output=True, text=True)
    if "error" in b.stdout and "dinput8.vcxproj ->" not in b.stdout:
        sys.exit("build failed:\n" + b.stdout[-3000:])
    keep = os.path.join(AUTO, "verified.tsv")
    shutil.copy(keep, keep + ".bak")           # equiv --auto rewrites verified.tsv with only what it tested
    py = os.path.join(ROOT, "tools", ".venv", "Scripts", "python.exe")
    r = subprocess.run([py, os.path.join(ROOT, "tools", "equiv.py"), "--auto", "--quiet", "--trials", "200",
                        *[f"AUTO_{a}" for a in cands]], capture_output=True, text=True)
    tested = {l.split("\t")[0]: l for l in open(keep, encoding="utf-8").read().splitlines() if l.count("\t") >= 2}
    old = {l.split("\t")[0]: l for l in open(keep + ".bak", encoding="utf-8").read().splitlines() if l.count("\t") >= 2}
    old.update(tested)
    open(keep, "w", encoding="utf-8").write("\n".join(v for _, v in sorted(old.items())) + "\n")
    verdict = {a: tested.get(a, "\t\tNOTRUN").split("\t")[2] for a in cands}
    os.makedirs(os.path.join(AUTO, "repaired_src"), exist_ok=True)
    for a, v in verdict.items():         # keep confirmed variants: build_units.py prefers them on every rebuild
        if v == "PASS":
            shutil.copy(os.path.join(AUTO, "ok", a + ".c"), os.path.join(AUTO, "repaired_src", a + ".c"))
    with open(os.path.join(AUTO, "repaired.tsv"), "a") as f:
        for a, v in sorted(verdict.items()):
            f.write(f"{a}\t{cls}\t{v}\n")
    from collections import Counter
    print(f"{cls}: {dict(Counter(verdict.values()))}")
    print(r.stdout[-1500:])

if __name__ == "__main__":
    cls = sys.argv[1]
    if cls == "voidret":
        # every round: apply one guess to the not-yet-repaired units, build, equiv, put failures back
        for variant in [v for v in ("this", "last") if not sys.argv[2:] or v in sys.argv[2:]]:
            apply_voidret(variant)
            test(cls)
            restore_failed(cls)
        sys.exit()
    if "--apply" in sys.argv:
        apply(cls)
    if "--test" in sys.argv:
        test(cls)
