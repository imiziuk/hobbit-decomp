"""Functional-equivalence tester: runs the ORIGINAL machine code of a game function and OUR compiled
reimplementation side by side in an x86 emulator (Unicorn) on the same random inputs, and compares
everything observable: return value, memory writes, and calls made to other game functions.

How the "random world" works:
  * Meridian.exe and our dinput8.dll are mapped at their real bases (exe 0x400000, dll 0x10000000).
  * Writable exe data (.data/.bss) is filled with seeded random bytes, so globals take random values.
  * Any read of unmapped memory maps that page on the fly, filled with bytes derived from (seed, page).
    Random pointers therefore always point at deterministic random data.
  * Calls from either version into game code are NOT executed: they are recorded (target, ECX, EDX,
    stack args) and answered by a stub returning seeded values (EAX/EDX, and an x87 value when the
    callee returns a float), popping the callee's real argument bytes.
Two versions are equivalent on a trial when return registers, memory writes outside the stack, and
the recorded call sequence all match. Usage:
    tools/.venv/Scripts/python tools/equiv.py [--trials N] [name_or_address ...]
"""
import x86scan
import argparse, bisect, gc, glob, hashlib, json, os, re, struct, sys

import pefile
from capstone import CS_ARCH_X86, CS_MODE_32, Cs
from unicorn import UC_ARCH_X86, UC_HOOK_CODE, UC_HOOK_MEM_UNMAPPED, UC_HOOK_MEM_WRITE, UC_MODE_32, Uc, UcError
from unicorn.x86_const import *

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
EXE = os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean", "Meridian.exe")
DLL = os.path.join(ROOT, "build", "Release", "dinput8.dll")
MAP = os.path.join(ROOT, "build", "dinput8.map")
CATALOG = os.path.join(ROOT, "..", "Hobbit-RE", "db", "catalog.tsv")
DECOMP = [os.path.join(ROOT, "..", "Hobbit-RE", "db", d) for d in ("decomp", "decomp_hl")]

PAGE = 0x1000
STACK_LO, STACK_HI = 0x00E00000, 0x01000000
ESP0 = 0x00FFE000
SENTINEL = 0x0BAD0000       # return address of the function under test
STUB = 0x0BAE0000           # code page used to answer stubbed calls
CONST = 0x0BAF0000          # data page holding the float a stub returns
MAX_INSNS = 200_000
GARBAGE = {0x13579BDF, 0x2468ACE0, 0x11223344, 0x55667788}  # initial EAX/EBX/ESI/EDI values

# ------------------------------------------------------------------ static info
def seeded(seed, key, n):
    out, i = b"", 0
    while len(out) < n:
        out += hashlib.blake2b(f"{seed}:{key}:{i}".encode(), digest_size=64).digest()
        i += 1
    return out[:n]

func_starts = sorted(int(l[:8], 16) for l in open(CATALOG, encoding="utf-8") if re.match(r"[0-9a-f]{8}\t", l))

def orig_range(a):
    i = bisect.bisect_right(func_starts, a)
    return a, func_starts[i] if i < len(func_starts) else a + 0x1000

exe_pe = pefile.PE(EXE, fast_load=True)
exe_img = exe_pe.get_memory_mapped_image()
EXE_BASE, EXE_SIZE = exe_pe.OPTIONAL_HEADER.ImageBase, exe_pe.OPTIONAL_HEADER.SizeOfImage
dll_pe = pefile.PE(DLL, fast_load=True)
dll_img = dll_pe.get_memory_mapped_image()
DLL_BASE, DLL_SIZE = dll_pe.OPTIONAL_HEADER.ImageBase, dll_pe.OPTIONAL_HEADER.SizeOfImage
cs = Cs(CS_ARCH_X86, CS_MODE_32)
csd = Cs(CS_ARCH_X86, CS_MODE_32)
csd.detail = True
from capstone.x86_const import X86_OP_MEM, X86_REG_INVALID
_insn_cache = {}
REGMAP = {}  # capstone reg id -> unicorn reg id (filled lazily by name)

UNITS_DIR = os.environ.get("HOBBIT_UNITS", os.path.join(ROOT, "..", "Hobbit-RE", "db", "units"))

def load_callee_sigs():
    """addr -> (stack arg words, 'none'|'ecx'|'ecx+edx'), collected from every callee signature Ghidra
    reported in the unit export (cached in auto/callee_sigs.json)."""
    cache = os.path.join(ROOT, "auto", "callee_sigs.json")
    # keyed to the export it was built from: a new Ghidra export changes callee prototypes
    stamp = os.path.join(ROOT, "auto", "callee_sigs.src")
    if os.path.exists(cache) and os.path.exists(stamp) and open(stamp).read() == UNITS_DIR:
        return {int(k, 16): tuple(v) for k, v in json.load(open(cache)).items()}
    units = UNITS_DIR
    sigs = {}
    big = ("undefined8", "longlong", "ulonglong", "double", "GUID", "float10")
    for fn in os.listdir(units) if os.path.isdir(units) else []:
        u = json.load(open(os.path.join(units, fn), encoding="utf-8"))
        for c in u.get("callees", []):
            if "params" not in c or c.get("variadic"):
                continue
            ps, cc = c["params"], c.get("cc")
            if cc == "__thiscall":
                regs, stack = "ecx", ps[1:]
            elif cc == "__fastcall":
                regs, stack = ("ecx+edx" if len(ps) > 1 else "ecx" if ps else "none"), ps[2:]
            else:
                regs, stack = "none", ps
            sigs[c["addr"]] = (sum(2 if p.strip() in big else 1 for p in stack), regs)
    json.dump(sigs, open(cache, "w"))
    open(stamp, "w").write(UNITS_DIR)
    return {int(k, 16): v for k, v in sigs.items()}

CALLEE_SIGS = load_callee_sigs()

_real_cache = {}
def callee_real_inputs(a):
    """(stack arg words the original reads, reads ECX?) from the binary itself (tools/x86scan.py)"""
    if a not in _real_cache:
        lo, _ = orig_range(a)
        _real_cache[a] = (x86scan.max_arg(lo) // 4, x86scan.reads_ecx(lo)) if EXE_BASE <= lo < EXE_BASE + EXE_SIZE else (0, False)
    return _real_cache[a]

_callee_cache = {}
def callee_info(a):
    """(bytes popped by the callee's ret, returns float?) for a game function at a."""
    if a in _callee_cache:
        return _callee_cache[a]
    lo, hi = orig_range(a)
    pop, isfloat = 0, False
    if EXE_BASE <= lo < EXE_BASE + EXE_SIZE:
        # real cleanup incl. tail-jump targets (a linear "first ret" missed e.g. 00659c80: plain ret on a
        # side path, ret 8 through its tail jump) - a wrong pop here hid callers passing too few args
        ps = x86scan.pops(lo)
        pop = max(ps) if ps else 0
        for d in DECOMP:
            p = os.path.join(d, f"{lo:08x}.c")
            if os.path.exists(p):
                head = open(p, encoding="utf-8").read(400)
                isfloat = bool(re.search(r"^\s*(float10|float|double)\s", head, re.M))
                break
    _callee_cache[a] = (pop, isfloat)
    return _callee_cache[a]

# ------------------------------------------------------------------ our functions
def parse_map():
    syms = []
    for line in open(MAP, encoding="latin-1"):
        m = re.match(r"\s*0001:[0-9a-f]+\s+(\S+)\s+([0-9a-f]{8})\s+f\s", line)
        if m:
            syms.append((int(m[2], 16), m[1]))
    syms.sort()
    return syms

SIZES = {"f32": 4, "float": 4, "double": 8, "u64": 8, "s64": 8, "guid": 8}
def parse_sources():
    """name -> (orig addr, conv, stack arg bytes, ret kind, [param types])"""
    out = {}
    for path in glob.glob(os.path.join(ROOT, "src", "**", "*.cpp"), recursive=True):
        text = open(path, encoding="utf-8", errors="replace").read()
        sigs = {}
        for m in re.finditer(r"^([\w\s\*:<>]+?)\s+(?:(__fastcall|__stdcall|__cdecl)\s+)?(\w+)\(([^)]*)\)\s*(?:noexcept\s*)?\{",
                             text, re.M):
            ret, conv, name, params = m[1].strip(), m[2] or "__cdecl", m[3], m[4]
            ptypes = [p.strip().rsplit(" ", 1)[0] if " " in p.strip() else p.strip()
                      for p in params.split(",") if p.strip() and p.strip() != "void"]
            skip = 2 if conv == "__fastcall" else 0
            nbytes = sum(8 if t in SIZES and SIZES[t] == 8 else 4 for t in ptypes[skip:])
            rk = ("void" if ret == "void" else "float" if ret in ("f32", "float", "double")
                  else "int64" if ret in ("u64", "s64", "guid") else "int32")
            sigs[name] = (conv, nbytes, rk, ptypes)
        for m in re.finditer(r"REPLACE\(0x([0-9A-Fa-f]{8}),\s*(\w+)\)", text):
            if m[2] in sigs:
                out[m[2]] = (int(m[1], 16),) + sigs[m[2]]
    return out

# ------------------------------------------------------------------ one emulated run
class Run:
    def __init__(self, seed):
        self.seed = seed
        uc = self.uc = Uc(UC_ARCH_X86, UC_MODE_32)
        for sec in exe_pe.sections:               # code + constants mapped for real ...
            va = EXE_BASE + sec.VirtualAddress
            n = (max(sec.Misc_VirtualSize, sec.SizeOfRawData) + PAGE - 1) & ~(PAGE - 1)
            if sec.Characteristics & 0x80000000 and not sec.Characteristics & 0x20000000:
                continue                          # ... writable data stays unmapped: filled lazily (random)
            uc.mem_map(va, n)
            uc.mem_write(va, bytes(exe_img[va - EXE_BASE: va - EXE_BASE + n]))
        uc.mem_map(EXE_BASE, PAGE)
        uc.mem_write(EXE_BASE, bytes(exe_img[:PAGE]))
        uc.mem_map(DLL_BASE, (DLL_SIZE + PAGE - 1) & ~(PAGE - 1))
        uc.mem_write(DLL_BASE, bytes(dll_img[:DLL_SIZE]))
        uc.mem_map(STACK_LO, STACK_HI - STACK_LO)   # zero-filled (deterministic)
        for a in (SENTINEL, STUB, CONST):
            uc.mem_map(a, PAGE)
        uc.mem_write(SENTINEL, b"\xf4")           # hlt
        uc.hook_add(UC_HOOK_MEM_UNMAPPED, self.on_unmapped)
        uc.hook_add(UC_HOOK_MEM_WRITE, self.on_write)
        self.writes, self.before, self.calls, self.insns, self.ncalls = {}, {}, [], 0, 0
        self.garbage = False

    def on_unmapped(self, uc, access, addr, size, value, data):
        # map every page the access touches (a read can straddle a mapped and an unmapped page)
        mapped = self.mapped_ranges(uc)
        try:
            for base in range(addr & ~(PAGE - 1), ((addr + max(size, 1) - 1) & ~(PAGE - 1)) + PAGE, PAGE):
                base &= 0xFFFFFFFF
                if any(lo <= base < hi for lo, hi in mapped):
                    continue
                uc.mem_map(base, PAGE)
                uc.mem_write(base, seeded(self.seed, f"page{base:x}", PAGE))
            return True
        except UcError:
            return False

    def mapped_ranges(self, uc):
        return [(r[0], r[1] + 1) for r in uc.mem_regions()]

    def on_write(self, uc, access, addr, size, value, data):
        if STACK_LO <= addr < STACK_HI or DLL_BASE <= addr < DLL_BASE + DLL_SIZE or addr >= STUB and addr < CONST + PAGE:
            return
        # the write hook runs before Unicorn maps the page, so map it here before reading the old value
        self.on_unmapped(uc, 0, addr, size, 0, None)
        for i in range(size):
            if addr + i not in self.before:       # remember the byte's value before the first write
                self.before[addr + i] = bytes(uc.mem_read(addr + i, 1))[0]
            self.writes[addr + i] = (value >> (8 * i)) & 0xFF

    def premap(self, uc, addr, size):
        """Unicorn does not call the unmapped-memory hook for x87 memory operands, so map ahead."""
        ins = _insn_cache.get(addr)
        if ins is None:
            got = list(csd.disasm(bytes(uc.mem_read(addr, size)), addr, 1))
            ins = _insn_cache[addr] = got[0] if got else False
        if not ins:
            return
        for op in ins.operands:
            if op.type != X86_OP_MEM:
                continue
            m = op.mem
            ea = m.disp
            for reg, mul in ((m.base, 1), (m.index, m.scale)):
                if reg != X86_REG_INVALID:
                    name = ins.reg_name(reg).upper()
                    ur = REGMAP.setdefault(name, globals().get(f"UC_X86_REG_{name}"))
                    ea += uc.reg_read(ur) * mul
            ea &= 0xFFFFFFFF
            for page in {ea & ~(PAGE - 1), (ea + max(op.size, 1) - 1) & ~(PAGE - 1)}:
                self.on_unmapped(uc, 0, page, 1, 0, None)

    def on_code(self, uc, addr, size, data):
        # only hooked OUTSIDE the function under test (range hooks), so code inside runs at full speed
        if addr == SENTINEL or (STUB <= addr < STUB + PAGE):
            return
        if self.lo <= addr < self.hi:
            return
        if DLL_BASE <= addr < DLL_BASE + DLL_SIZE and self.allow_dll:
            return                                  # our own helpers run for real
        self.stub_call(uc, addr)

    def stub_call(self, uc, target):
        esp = uc.reg_read(UC_X86_REG_ESP)
        pop, isfloat = callee_info(target)
        sig = CALLEE_SIGS.get(target)
        if sig:   # Ghidra knows the callee's convention/params: compare exactly the real inputs
            nwords, regs = sig
        else:     # unknown callee: what its ret pops (callee-cleaned) or a guess of 4 words
            nwords, regs = (pop // 4 if pop else 4), "ecx"
        # ... but never fewer than the ORIGINAL callee really uses: stack args it reads / pops, and ECX if
        # it reads ECX. Ghidra's prototype can be short (ours then passes too few args or loses `this`
        # and both sides looked equal).
        real_words, real_ecx = callee_real_inputs(target)
        nwords = max(nwords, real_words, pop // 4)
        if real_ecx and regs not in ("ecx", "ecx+edx"):
            regs = "ecx"
        args = struct.unpack(f"<{nwords}I", bytes(uc.mem_read(esp + 4, 4 * nwords))) if nwords else ()
        ecx = uc.reg_read(UC_X86_REG_ECX) if regs in ("ecx", "ecx+edx") else None
        edx = uc.reg_read(UC_X86_REG_EDX) if regs == "ecx+edx" else None
        # pointers to locals: same meaning, different stack offset in each compiler's frame layout
        norm = lambda v: "STACK" if v is not None and STACK_LO <= v < STACK_HI else v
        self.calls.append((target, norm(ecx), norm(edx), tuple(norm(x) for x in args)))
        if target in GARBAGE:
            self.garbage = True        # called through an uninitialized value: not comparable
        self.ncalls += 1
        r = seeded(self.seed, f"ret{target:x}:{self.ncalls}", 12)
        code = b"\xb8" + r[:4] + b"\xba" + r[4:8]   # mov eax, imm32 / mov edx, imm32
        if isfloat:
            uc.mem_write(CONST, struct.pack("<f", (r[8] - 128) / 4.0))
            code += b"\xd9\x05" + struct.pack("<I", CONST)  # fld dword [CONST]
        code += (b"\xc2" + struct.pack("<H", pop)) if pop else b"\xc3"
        # fresh 32-byte slot per call + explicit cache flush: Unicorn caches translated blocks, so
        # rewriting one stub address would keep executing the previous call's stub (wrong ret N)
        slot = STUB + (self.ncalls % (PAGE // 32)) * 32
        uc.mem_write(slot, code)
        uc.ctl_remove_cache(slot, slot + 32)
        uc.reg_write(UC_X86_REG_EIP, slot)

    def call(self, entry, lo, hi, ecx, edx, args, allow_dll):
        uc = self.uc
        self.lo, self.hi, self.allow_dll, self.status = lo, hi, allow_dll, "ok"
        esp = ESP0 - 4 * len(args)
        uc.mem_write(esp, struct.pack(f"<{len(args)}I", *args) if args else b"")
        esp -= 4
        uc.mem_write(esp, struct.pack("<I", SENTINEL))
        for reg, v in ((UC_X86_REG_ESP, esp), (UC_X86_REG_EBP, ESP0 + 0x100), (UC_X86_REG_ECX, ecx),
                       (UC_X86_REG_EDX, edx), (UC_X86_REG_EAX, 0x13579BDF), (UC_X86_REG_EBX, 0x2468ACE0),
                       (UC_X86_REG_ESI, 0x11223344), (UC_X86_REG_EDI, 0x55667788)):
            uc.reg_write(reg, v)
        # x87 in single precision, as Direct3D 8 leaves it in the running game
        uc.reg_write(UC_X86_REG_FPCW, 0x007F)
        # Python callbacks only for code OUTSIDE the function under test (stubs / exits)
        if lo > 0:
            uc.hook_add(UC_HOOK_CODE, self.on_code, begin=0, end=lo - 1)
        uc.hook_add(UC_HOOK_CODE, self.on_code, begin=hi, end=0xFFFFFFFF)
        pc, budget = entry, MAX_INSNS
        for _ in range(64):
            try:
                uc.emu_start(pc, SENTINEL, timeout=2_000_000, count=budget)  # 2 s: rep-prefixed ops count as 1 insn
                pc = uc.reg_read(UC_X86_REG_EIP)
                if pc != SENTINEL:
                    self.status = "timeout"
                break
            except UcError as e:
                # x87 memory operands do not trigger the unmapped hook: map the page, resume there
                pc = uc.reg_read(UC_X86_REG_EIP)
                if "UNMAPPED" not in str(e) or pc in (0, SENTINEL):
                    self.status = f"fault {e}"
                    break
                before = len(list(uc.mem_regions()))
                self.premap(uc, pc, 16)
                if len(list(uc.mem_regions())) == before:
                    self.status = f"fault {e}"
                    break
        else:
            self.status = "fault: too many page faults"
        st0 = uc.reg_read(UC_X86_REG_FP0)
        changed = {a: v for a, v in self.writes.items() if self.before.get(a) != v}  # same-value writes are no-ops
        return dict(status=self.status if not self.garbage else "garbage", eax=uc.reg_read(UC_X86_REG_EAX),
                    edx=uc.reg_read(UC_X86_REG_EDX), st0=st0, writes=changed, calls=self.calls,
                    esp=uc.reg_read(UC_X86_REG_ESP),
                    # callee-saved registers, x87 stack depth (TOP) and the direction flag at return:
                    # the original MSVC6 code relies on all of them across calls
                    saved=tuple(uc.reg_read(r) for r in (UC_X86_REG_EBX, UC_X86_REG_ESI, UC_X86_REG_EDI,
                                                         UC_X86_REG_EBP)),
                    fptop=(uc.reg_read(UC_X86_REG_FPSW) >> 11) & 7,
                    df=(uc.reg_read(UC_X86_REG_EFLAGS) >> 10) & 1)

# ------------------------------------------------------------------ comparison
def make_args(seed, trial, n):
    """Mix of small ints, pointers into random memory, plausible floats, and raw random dwords."""
    r = seeded(seed, f"args{trial}", 4 * n + 8)
    out = []
    for i in range(n):
        v = struct.unpack_from("<I", r, 4 * i)[0]
        kind = (trial + i) % 4
        out.append(v % 256 if kind == 0 else 0x20000000 | (v & 0x0FFFF000) if kind == 1
                   else struct.unpack("<I", struct.pack("<f", ((v % 20000) - 10000) / 7.0))[0] if kind == 2 else v)
    ecx = 0x20000000 | (struct.unpack_from("<I", r, 4 * n)[0] & 0x0FFFF000)
    return ecx, struct.unpack_from("<I", r, 4 * n + 4)[0], out

def close_float(x, y, rel=1e-6):
    try:
        x, y = float(x), float(y)
    except (TypeError, ValueError):
        return False
    return abs(x - y) <= rel * max(abs(x), abs(y), 1e-30)

def writes_equal_within_ulp(wa, wb, max_ulp=2):
    """Memory writes may differ only in the last bits of 32-bit floats (x87 intermediate rounding of
    MSVC 6 vs modern MSVC). Every differing byte must belong to an aligned dword that both versions
    wrote, and the two dwords read as floats must be within max_ulp units in the last place."""
    bad = {k for k in set(wa) | set(wb) if wa.get(k) != wb.get(k)}
    for base in {k & ~3 for k in bad}:
        if not all(base + i in wa and base + i in wb for i in range(4)):
            return False
        ia = int.from_bytes(bytes(wa[base + i] for i in range(4)), "little")
        ib = int.from_bytes(bytes(wb[base + i] for i in range(4)), "little")
        if (ia ^ ib) & 0x80000000 or (ia & 0x7F800000) == 0x7F800000 or abs(ia - ib) > max_ulp:
            return False
    return True

def compare(a, b, rk):
    if "garbage" in (a["status"], b["status"]):
        return None                     # uninitialized-value call: no verdict (counts as not ok)
    if a["status"] != b["status"]:
        return f"status {a['status']} vs {b['status']}"
    if a["status"] != "ok":
        return None
    # ESP after return = how many argument bytes the function popped (ret N): a mismatch unbalances
    # every caller's stack (0046aaf0: original pops 4 via its tail target, ours popped 0)
    if a.get("esp") != b.get("esp"):
        return f"stack cleanup: esp after return {a.get('esp', 0):08x} vs {b.get('esp', 0):08x}"
    if a.get("saved") != b.get("saved"):
        return f"callee-saved regs (ebx,esi,edi,ebp) {[hex(x) for x in a['saved']]} vs {[hex(x) for x in b['saved']]}"
    if a.get("fptop") != b.get("fptop"):
        return f"x87 stack depth (TOP) {a['fptop']} vs {b['fptop']}"
    if a.get("df") != b.get("df"):
        return f"direction flag {a['df']} vs {b['df']}"
    if rk in ("int32", "int64") and a["eax"] != b["eax"]:
        return f"eax {a['eax']:08x} vs {b['eax']:08x}"
    if rk == "int64" and a["edx"] != b["edx"]:
        return f"edx {a['edx']:08x} vs {b['edx']:08x}"
    if rk == "float" and a["st0"] != b["st0"] and not close_float(a["st0"], b["st0"]):
        return f"st0 {a['st0']} vs {b['st0']}"
    if a["writes"] != b["writes"] and not writes_equal_within_ulp(a["writes"], b["writes"]):
        diff = sorted(set(a["writes"].items()) ^ set(b["writes"].items()))[:4]
        return f"memory writes differ, e.g. {[(hex(k), v) for k, v in diff]}"
    if a["calls"] != b["calls"]:
        fmt = lambda c: (hex(c[0]), None if c[1] is None else hex(c[1]), None if c[2] is None else hex(c[2]),
                         [hex(x) for x in c[3]]) if c else None
        i = next(i for i in range(max(len(a["calls"]), len(b["calls"])))
                 if i >= len(a["calls"]) or i >= len(b["calls"]) or a["calls"][i] != b["calls"][i])
        get = lambda cl: cl[i] if i < len(cl) else None
        return (f"call #{i} of {len(a['calls'])}/{len(b['calls'])} differs: "
                f"{fmt(get(a['calls']))} vs {fmt(get(b['calls']))}")
    return None

def parse_auto():
    """Generated units that compiled (auto/ok) with signature info from auto/units.tsv."""
    out = {}
    okdir = os.path.join(ROOT, "auto", "ok")
    if not os.path.isdir(okdir):
        return out
    have = {f[:8] for f in os.listdir(okdir)}
    # callers read EAX after these (tools/eax_users.py) even where Ghidra said void: compare EAX for them
    rp = os.path.join(ROOT, "auto", "returns_eax.txt")
    returns_eax = set(open(rp).read().split()) if os.path.exists(rp) else set()
    for line in open(os.path.join(ROOT, "auto", "units.tsv"), encoding="utf-8"):
        r = line.rstrip("\n").split("\t")
        if len(r) >= 6 and r[2] == "ok" and r[0] in have:
            conv = {"__fastcall": "__fastcall", "__stdcall": "__stdcall"}.get(r[3], "__cdecl")
            rk = "int32" if r[5] == "void" and r[0] in returns_eax else r[5]
            out[f"AUTO_{r[0]}"] = (int(r[0], 16), conv, int(r[4]), rk, [])
    return out

def test_one(job):
    """Runs all trials for one function; returns (verdict, report line, console text)."""
    name, orig, nbytes, rk, b_lo, b_hi, trials = job
    a_lo, a_hi = orig_range(orig)
    fail, ok_trials = None, 0
    try:
        for t in range(trials):
            seed = f"{name}:{t}"
            ecx, edx, args = make_args(seed, t, nbytes // 4)
            ra = Run(seed).call(a_lo, a_lo, a_hi, ecx, edx, args, allow_dll=False)
            rb = Run(seed).call(b_lo, b_lo, b_hi, ecx, edx, args, allow_dll=True)
            gc.collect()  # Run <-> Uc hook closures form cycles; free emulator memory now
            why = compare(ra, rb, rk)
            if why:
                fail = f"trial {t} (ecx={ecx:08x} args={[hex(x) for x in args]}): {why}"
                break
            ok_trials += ra["status"] == "ok" and rb["status"] == "ok"
            if t >= 4 and ok_trials == 0:
                break                       # 5 trials, none comparable (timeouts/garbage): stop early
    except Exception as e:  # emulator trouble counts as inconclusive, not as a pass
        return "INCONCLUSIVE", f"{orig:08x}\t{name}\tINCONCLUSIVE\t0/{trials}\ttester error {e}", \
               f"INCON {orig:08X} {name}: tester error {e}"
    verdict = "FAIL" if fail else "PASS" if ok_trials else "INCONCLUSIVE"
    text = f"{verdict:5s} {orig:08X} {name:34s} {ok_trials}/{trials} ok" + (f"\n      {fail}" if fail else "")
    return verdict, f"{orig:08x}\t{name}\t{verdict}\t{ok_trials}/{trials}\t{fail or ''}", text

def main():
    import multiprocessing
    ap = argparse.ArgumentParser()
    ap.add_argument("--trials", type=int, default=200)
    ap.add_argument("--auto", action="store_true", help="test generated units (auto/ok) instead of src/")
    ap.add_argument("--jobs", type=int, default=os.cpu_count())
    ap.add_argument("--quiet", action="store_true", help="print only failures")
    ap.add_argument("only", nargs="*")
    opt = ap.parse_args()
    syms = parse_map()
    sym_addrs = [a for a, _ in syms]
    by_name = {}
    for a, s in syms:
        m = re.match(r"[?@_]+(\w+?)(?:@|$)", s)
        if m:
            by_name.setdefault(m[1], a)
    ours = parse_auto() if opt.auto else parse_sources()
    jobs = []
    for name, (orig, conv, nbytes, rk, ptypes) in sorted(ours.items(), key=lambda kv: kv[1][0]):
        if opt.only and name not in opt.only and f"{orig:08X}" not in [o.upper() for o in opt.only]:
            continue
        b_lo = by_name.get(name)
        if b_lo is None:
            print(f"?     {orig:08X} {name}: not in map")
            continue
        i = bisect.bisect_right(sym_addrs, b_lo)
        b_hi = sym_addrs[i] if i < len(sym_addrs) else b_lo + 0x1000
        jobs.append((name, orig, nbytes, rk, b_lo, b_hi, opt.trials))
    results, report = {"PASS": 0, "FAIL": 0, "INCONCLUSIVE": 0}, []
    # --auto: results are appended to auto/verified_partial.tsv as they arrive, so an interrupted run
    # (sleep, crash) resumes where it stopped; the partial file is keyed to the DLL build it tested.
    partial = os.path.join(ROOT, "auto", "verified_partial.tsv")
    stamp = f"# dll {os.path.getmtime(DLL):.0f}"
    done = {}
    if opt.auto and os.path.exists(partial):
        lines = open(partial, encoding="utf-8").read().splitlines()
        if lines and lines[0] == stamp:
            done = {l.split("\t")[1]: l for l in lines[1:] if l.count("\t") >= 3}
    if opt.auto and not done:
        open(partial, "w", encoding="utf-8").write(stamp + "\n")
    for name, line in done.items():
        results[line.split("\t")[2]] += 1
        report.append(line)
    jobs = [j for j in jobs if j[0] not in done]
    total = len(jobs) + len(done)
    print(f"testing {len(jobs)} functions ({len(done)} already done)", flush=True)
    with multiprocessing.Pool(opt.jobs) as pool, open(partial, "a", encoding="utf-8") if opt.auto else open(os.devnull, "w") as pf:
        for k, (verdict, line, text) in enumerate(pool.imap_unordered(test_one, jobs, chunksize=2), 1):
            results[verdict] += 1
            report.append(line)
            pf.write(line + "\n")
            pf.flush()
            if not opt.quiet or verdict != "PASS":
                print(text, flush=True)
            if (k + len(done)) % 100 == 0:
                print(f"--- progress {k + len(done)}/{total}: {results}", flush=True)
    if opt.auto:
        report.sort()
        open(os.path.join(ROOT, "auto", "verified.tsv"), "w", encoding="utf-8").write("\n".join(report) + "\n")
    print(results)

if __name__ == "__main__":
    main()
