"""Writes src/auto_registry.cpp: REPLACE entries for every generated unit that PASSED the
equivalence test (auto/verified.tsv) and is not already reimplemented by hand in src/.
Usage: python tools/gen_registry.py"""
import glob, os, re

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
manual = set()
for p in glob.glob(os.path.join(ROOT, "src", "**", "*.cpp"), recursive=True):
    manual |= {m.lower() for m in re.findall(r"REPLACE\(0x([0-9A-Fa-f]{8})", open(p, encoding="utf-8").read())}
info = {}
for line in open(os.path.join(ROOT, "auto", "units.tsv"), encoding="utf-8"):
    r = line.rstrip("\n").split("\t")
    if len(r) >= 7 and r[2] == "ok":
        info[r[0]] = r
passed = [l.split("\t")[0] for l in open(os.path.join(ROOT, "auto", "verified.tsv"), encoding="utf-8")
          if l.split("\t")[2:3] == ["PASS"]]
# shadow mode (core/shadow.cpp) compared these against the original on REAL game state while the maintainer played:
# that beats the random-memory test, so they count as passed too; real-state FAILs are always dropped
def lines(name):
    q = os.path.join(ROOT, "auto", name)
    return set(open(q).read().split()) if os.path.exists(q) else set()
shadow_pass, shadow_fail = lines("shadow_promote.txt"), lines("shadow_fail.txt")
# a shadow result is only evidence for the code that was tested: auto/shadow_tested_src/auto/ok holds the sources
# of the build the maintainer played; a unit whose source changed since (generator fixes) needs fresh evidence
# (AUTO_00592190 passed 18/18 in play, was regenerated with a wrong callee prototype, crashed live)
import filecmp
REF = os.path.join(ROOT, "auto", "shadow_tested_src", "auto", "ok")
def unchanged(a):
    r, c = os.path.join(REF, a + ".c"), os.path.join(ROOT, "auto", "ok", a + ".c")
    if not (os.path.exists(r) and os.path.exists(c)):
        return False
    norm = lambda q: open(q, "rb").read().replace(b"\r\n", b"\n")    # line endings differ (Syncthing/git)
    return norm(r) == norm(c)
if os.path.isdir(REF):
    shadow_pass = {a for a in shadow_pass if unchanged(a)}
passed = sorted((set(passed) | shadow_pass) - shadow_fail)
# the 5-byte JMP must fit before the next function
import bisect
starts = sorted(int(l[:8], 16) for l in open(os.path.join(ROOT, "..", "Hobbit-RE", "db", "catalog.tsv"),
                                             encoding="utf-8") if re.match(r"[0-9a-f]{8}\t", l))
def fits(a):
    i = bisect.bisect_right(starts, int(a, 16))
    return i >= len(starts) or starts[i] - int(a, 16) >= 5
too_small = [a for a in passed if not fits(a)]
passed = [a for a in passed if fits(a)]
# functions found to crash the game (tools/bisect_crash.py)
bl = os.path.join(ROOT, "auto", "crash_blacklist.txt")
blacklist = {l.strip()[5:] for l in open(bl)} if os.path.exists(bl) else set()
passed = [a for a in passed if a not in blacklist]
# 0x006A0000+ is the statically linked MSVC C runtime (startup, heap, atexit, locale...): never
# replaced automatically — a rebuilt game links its own runtime instead
passed = [a for a in passed if int(a, 16) < 0x006A0000]
# 0x0063D000..0x006A0000: engine base library (text/bin parsers, x_string, files, memory, threads).
# Random-memory equivalence cannot validate it (parsers need real file data) and three startup
# crashes came from here: kept original until it is tested with replayed real game state.
passed = [a for a in passed if int(a, 16) < 0x0063D000]
# Ghidra typed these `void` but the binary shows they return a value in EAX (callers read EAX, or the
# function passes a callee's result through): the C version would drop it (tools/eax_users.py)
vb = os.path.join(ROOT, "auto", "void_but_returns.txt")
void_bad = set(open(vb).read().split()) if os.path.exists(vb) else set()
# same for x87: Ghidra typed `void` but callers read ST0 (tools/st0_users.py; Inventory_GetCountByName)
vs = os.path.join(ROOT, "auto", "void_but_returns_st0.txt")
void_bad |= set(open(vs).read().split()) if os.path.exists(vs) else set()
# calls to variadic functions (x_string format 0x649920...) that lost their extra args (tools/vararg_check.py)
va = os.path.join(ROOT, "auto", "vararg_dropped.txt")
# ...unless tools/repair.py restored the arguments and equiv.py confirmed the repaired version
repaired = {}
rp = os.path.join(ROOT, "auto", "repaired.tsv")
if os.path.exists(rp):
    for l in open(rp):
        r = l.split()
        if len(r) == 3:
            repaired[(r[0], r[1])] = r[2]      # last result wins
fixed_varargs = {a for (a, c), v in repaired.items() if c == "varargs" and v == "PASS"}
void_bad |= (set(open(va).read().split()) if os.path.exists(va) else set()) - fixed_varargs
# tools/repair.py voidret: now returns EAX ("return this" / "return last call") and equiv.py confirmed it
fixed_voidret = {a for (a, c), v in repaired.items() if c == "voidret" and v == "PASS"}
void_bad -= fixed_voidret
passed = [a for a in passed if a not in void_bad]
# MSVC helpers with register inputs that Ghidra does not model: __ftol reads x87 ST0, __allshl/__allshr/
# __aullshr read the value in EDX:EAX (+ count in CL). The generated call drops those inputs, so it works
# on leftover register garbage (FUN_005c90f0 slot allocator -> level-load crash at 0x558622).
# Kept original until ApplyProtoFixes gives these helpers custom-storage prototypes.
REG_HELPER = re.compile(r"\b(__ftol|__allshl|__allshr|__aullshr)\(")
def uses_reg_helper(a):
    p = os.path.join(ROOT, "auto", "units", a + ".c")
    if not os.path.exists(p):
        return False
    body = open(p, encoding="utf-8", errors="replace").read()
    return any(not l.startswith("static __inline") and REG_HELPER.search(l) for l in body.splitlines())
reg_helper = [a for a in passed if uses_reg_helper(a)]
passed = [a for a in passed if a not in set(reg_helper)]
# optional allowlist (auto/allow.txt): only functions proven in real play are registered
al = os.path.join(ROOT, "auto", "allow.txt")
if os.path.exists(al):
    allow = {l.strip()[5:] for l in open(al) if l.strip().startswith("AUTO_")} | shadow_pass
    passed = [a for a in passed if a in allow]
decls, regs = [], []
RET = {"void": "Void", "int32": "Int32", "int64": "Int64", "float": "Float"}
live = set(passed)
returns_eax = lines("returns_eax.txt")
# shadow candidates: every compiled unit outside the C runtime (core/shadow.cpp compares them on real game
# state; live=false ones are never installed in normal play)
compiled = {os.path.basename(p)[:8] for p in glob.glob(os.path.join(ROOT, "auto", "ok", "*.c"))}
candidates = sorted(a for a in compiled if a in info and int(a, 16) < 0x006A0000)
for a in candidates:
    if a in manual:
        continue
    _, name, _, conv, nb, rk, tb = info[a][:7]
    if rk == "void" and a in returns_eax:
        rk = "int32"            # callers read EAX: shadow mode must compare it (never live: excluded above)
    conv = conv if conv in ("__fastcall", "__stdcall") else "__cdecl"
    params = ", ".join(["int"] * (int(tb) // 4)) or "void"
    decls.append(f"void {conv} AUTO_{a}({params});  // {name}")
    regs.append(f'static hook::Registrar r_{a}(0x{a}, reinterpret_cast<void*>(&AUTO_{a}), "AUTO_{a}", {nb}, '
                f'hook::Ret::{RET[rk]}, hook::Conv::{conv[2:].capitalize()}, {"true" if a in live else "false"});')
src = ["// GENERATED by tools/gen_registry.py from auto/verified.tsv — do not edit.",
       '#include "core/hook.h"', 'extern "C" {', *decls, "}", *regs, ""]
import time
for attempt in range(20):          # Syncthing can hold the file briefly while it syncs (Errno 22)
    try:
        open(os.path.join(ROOT, "src", "auto_registry.cpp"), "w", encoding="utf-8").write("\n".join(src))
        break
    except OSError:
        time.sleep(0.5)
else:
    raise SystemExit("could not write src/auto_registry.cpp")
print(f"{len(regs)} generated functions registered: {len(live - manual)} live, the rest shadow-only "
      f"({len(manual)} hand-written skipped)")
