"""Offline replay of recorded real-game capsules (shadow.txt `record`, core/shadow.cpp Record()).

For each capsule: the memory pages the ORIGINAL call tree touched (content before the call), the entry
registers, and the original's outputs. Two runs in Unicorn:
  A  the original code again       -> must reproduce its own recorded outputs (determinism gate; else the
                                       capsule is not used: INCONCLUSIVE)
  B  OUR function from the current build (build/Release/dinput8.dll, entered through the same register-
     preserving thunk as in the game) -> compared with the recorded outputs:
     ESP after return, EBX/ESI/EDI/EBP, x87 depth, return value by return kind (EAX low byte only for bools,
     ST0 with tolerance), the final value of every byte the original wrote, and every byte ours wrote that the
     original did not (must still hold its old value). Frame, TEB, our DLL and emulator pages are excluded.
Outcomes: PASS / FAIL / INCONCLUSIVE (memory outside the capsule, external code, limits, A not reproducible).
Callees run as ORIGINAL code (isolated equivalence of each function).

Usage: tools/.venv/Scripts/python tools/replay.py <capsule dir> [--only addr,...] [--max-per-func N] [--jobs N]
Output: auto/replay_results.tsv  (addr name caps a_ok pass fail inconclusive verdict detail)"""
import argparse, collections, mmap, multiprocessing, os, re, struct, sys
import pefile
from unicorn import Uc, UcError, UC_ARCH_X86, UC_MODE_32, UC_PROT_ALL, UC_HOOK_MEM_UNMAPPED, UC_HOOK_MEM_WRITE, \
    UC_HOOK_BLOCK
from unicorn.x86_const import *

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GAME = os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean")
SENT, GDT = 0xBADC0000, 0xBADB0000
THUNK_PAGE = 0xBADA0000
MAX_INSNS = 3_000_000
RET = {0: "Void", 1: "Int32", 2: "Int64", 3: "Float", 4: "VoidPass"}

# ------------------------------------------------------------------ capsule file format (see BuildCapsule)
def parse_caps(path):
    data = open(path, "rb").read()
    i, out = 0, []
    while i + 12 <= len(data):
        magic, ver, ln = struct.unpack_from("<III", data, i)
        if magic != 0x53504143:
            break
        body = data[i + 12: i + 12 + ln]
        i += 12 + ln
        if len(body) < ln:
            break
        o = 0
        func, caller, ret, nb, teb, flo, fhi = struct.unpack_from("<7I", body, o); o += 28
        regs = struct.unpack_from("<10I", body, o); o += 40
        fsave = body[o:o + 112]; o += 112
        outr = struct.unpack_from("<9I", body, o); o += 36
        sw, cw = struct.unpack_from("<HH", body, o); o += 4
        st0 = body[o:o + 10]; o += 10
        (np_,) = struct.unpack_from("<I", body, o); o += 4
        pages = []
        for _ in range(np_):
            a, h = struct.unpack_from("<IQ", body, o); o += 12
            pages.append((a, h))
        (nw,) = struct.unpack_from("<I", body, o); o += 4
        written = {}
        for _ in range(nw):
            a, b = struct.unpack_from("<IB", body, o); o += 5
            written[a] = b
        out.append(dict(func=func, caller=caller, ret=ret, nb=nb, teb=teb, flo=flo, fhi=fhi, regs=regs,
                        cw=struct.unpack_from("<H", fsave, 0)[0], out=outr, sw=sw, st0=st0, pages=pages,
                        written=written))
    return out

def page_index(path):
    idx, f = {}, open(path, "rb")
    size = os.path.getsize(path)
    for off in range(0, size - 4103, 4104):
        f.seek(off)
        idx[struct.unpack("<Q", f.read(8))[0]] = off + 8
    return idx

# ------------------------------------------------------------------ images
class Images:
    def __init__(self):
        exe = pefile.PE(os.path.join(GAME, "Meridian.exe"), fast_load=True)
        self.exe_base = exe.OPTIONAL_HEADER.ImageBase
        self.exe_img = exe.get_memory_mapped_image()
        self.exe_code = [(self.exe_base + s.VirtualAddress, self.exe_base + s.VirtualAddress + s.Misc_VirtualSize)
                         for s in exe.sections if s.Characteristics & 0x20000000]          # executable sections
        dll = pefile.PE(os.path.join(ROOT, "build", "Release", "dinput8.dll"), fast_load=True)
        self.dll_base = dll.OPTIONAL_HEADER.ImageBase
        self.dll_img = dll.get_memory_mapped_image()
        self.dll_hi = self.dll_base + len(self.dll_img)
        self.sym = {}
        for line in open(os.path.join(ROOT, "build", "dinput8.map"), encoding="latin-1"):
            m = re.match(r"\s*000[0-9]:[0-9a-f]+\s+(\S+)\s+([0-9a-f]{8})\s", line)
            if m:
                self.sym.setdefault(m.group(1), int(m.group(2), 16))
        self.auto = {}
        for name, a in self.sym.items():
            m = re.match(r"[@_]AUTO_([0-9a-f]{8})(?:@\d+)?$", name)
            if m:
                self.auto[int(m.group(1), 16)] = a
        self.reg = {}
        rx = re.compile(r'Registrar r_([0-9a-f]{8})\(.*?"AUTO_\w+", (\d+), hook::Ret::(\w+), hook::Conv::(\w+)')
        for line in open(os.path.join(ROOT, "src", "auto_registry.cpp")):
            m = rx.search(line)
            if m:
                self.reg[int(m.group(1), 16)] = (int(m.group(2)), m.group(3), m.group(4))

    def exe_code_page(self, page):
        return any(lo <= page < hi for lo, hi in self.exe_code)

def thunk_bytes(im, target, nb, ret, conv):
    """the same thunk as core/hook.cpp MakeThunk (without the call counter)"""
    b = bytearray()
    for reg_store, sym in ((b"\xA3", "___entry_eax"), (b"\x89\x0D", "___entry_ecx"), (b"\x89\x15", "___entry_edx"),
                           (b"\x89\x1D", "___entry_ebx"), (b"\x89\x35", "___entry_esi"), (b"\x89\x3D", "___entry_edi")):
        if sym in im.sym:
            b += reg_store + struct.pack("<I", im.sym[sym])
    b += b"\x55\x8B\xEC\x50\x51\x52"
    for off in range(nb - 4, -1, -4):
        b += b"\xFF\xB5" + struct.pack("<I", 8 + off)
    b += b"\x8B\x4D\xF8\x8B\x55\xF4"
    b += b"\xE8" + struct.pack("<I", (target - (THUNK_PAGE + len(b) + 5)) & 0xFFFFFFFF)   # rel32 wraps
    if ret in ("Void", "Float"):
        b += b"\x8B\x45\xFC"
    b += b"\x8B\x4D\xF8"
    if ret != "Int64":
        b += b"\x8B\x55\xF4"
    b += b"\x8B\xE5\x5D"
    pop = 0 if conv == "Cdecl" else nb
    b += (b"\xC2" + struct.pack("<H", pop)) if pop else b"\xC3"
    return bytes(b)

# ------------------------------------------------------------------ one run
def gdt_desc(base, limit, code, dpl=3):
    g = limit > 0xFFFFF
    if g:
        limit >>= 12
    flags = 0x40 | (0x80 if g else 0) | ((limit >> 16) & 0xF)
    typ = 0x80 | (dpl << 5) | 0x10 | (0xB if code else 0x3)
    return struct.pack("<HHBBBB", limit & 0xFFFF, base & 0xFFFF, (base >> 16) & 0xFF, typ, flags, base >> 24)

class Run:
    def __init__(self, cap, pages, im, mode):
        self.cap, self.pages, self.im, self.mode = cap, pages, im, mode
        self.why = ""
        self.writes = []
        uc = self.uc = Uc(UC_ARCH_X86, UC_MODE_32)
        self.mapped = set()
        uc.hook_add(UC_HOOK_MEM_UNMAPPED, self.on_unmapped)
        uc.hook_add(UC_HOOK_MEM_WRITE, self.on_write)
        uc.hook_add(UC_HOOK_BLOCK, self.on_block)
        gdt = b"\0" * 8 + gdt_desc(0, 0xFFFFFFFF, True) + gdt_desc(0, 0xFFFFFFFF, False) + \
            gdt_desc(cap["teb"], 0xFFF, False) + gdt_desc(0, 0xFFFFFFFF, False, 0)
        uc.mem_map(GDT, 0x1000)
        uc.mem_write(GDT, gdt.ljust(64, b"\0"))
        uc.reg_write(UC_X86_REG_GDTR, (0, GDT, 63, 0))
        uc.reg_write(UC_X86_REG_SS, 4 << 3)
        uc.reg_write(UC_X86_REG_DS, (2 << 3) | 3)
        uc.reg_write(UC_X86_REG_ES, (2 << 3) | 3)
        uc.reg_write(UC_X86_REG_FS, (3 << 3) | 3)
        uc.mem_map(SENT, 0x1000)
        uc.mem_map(THUNK_PAGE, 0x1000)
        for a, data in pages.items():
            self.map(a, data)
        if mode == "B":                                   # our whole DLL image (code + data)
            n = (len(im.dll_img) + 0xFFF) & ~0xFFF
            uc.mem_map(im.dll_base, n)
            uc.mem_write(im.dll_base, im.dll_img)
            for p in range(im.dll_base, im.dll_base + n, 0x1000):
                self.mapped.add(p)
        esp = cap["regs"][7]
        if (esp & ~0xFFF) not in self.mapped:
            self.why = "stack page missing"
            return
        uc.mem_write(esp, struct.pack("<I", SENT))
        r = cap["regs"]
        for reg, v in zip((UC_X86_REG_EAX, UC_X86_REG_EBX, UC_X86_REG_ECX, UC_X86_REG_EDX, UC_X86_REG_ESI,
                           UC_X86_REG_EDI, UC_X86_REG_EBP, UC_X86_REG_ESP), r[:8]):
            uc.reg_write(reg, v)
        uc.reg_write(UC_X86_REG_EFLAGS, r[9] & ~0x100)
        uc.reg_write(UC_X86_REG_FPCW, cap["cw"] or 0x027F)

    def map(self, a, data):
        self.uc.mem_map(a, 0x1000)
        self.uc.mem_write(a, data)
        self.mapped.add(a)

    def on_unmapped(self, uc, access, addr, size, value, user):
        for p in range(addr & ~0xFFF, addr + max(size, 1), 0x1000):
            if p in self.mapped:
                continue
            if self.im.exe_code_page(p):                  # original code never changes: from the file
                off = p - self.im.exe_base
                self.map(p, bytes(self.im.exe_img[off:off + 0x1000]).ljust(0x1000, b"\0"))
                continue
            self.why = f"memory outside the capsule {addr:08X}"
            return False
        return True

    def on_write(self, uc, access, addr, size, value, user):
        self.writes.append((addr, size))

    def on_block(self, uc, addr, size, user):
        im = self.im
        if im.exe_base <= addr < im.exe_base + len(im.exe_img) or addr == SENT or addr & ~0xFFF == THUNK_PAGE \
                or (self.mode == "B" and im.dll_base <= addr < im.dll_hi):
            return
        self.why = f"external code {addr:08X}"
        uc.emu_stop()

    def go(self, start):
        if self.why:
            return
        try:
            self.uc.emu_start(start, SENT, count=MAX_INSNS)
        except UcError as e:
            if not self.why:
                self.why = f"uc: {e}"
            return
        if not self.why and self.uc.reg_read(UC_X86_REG_EIP) != SENT:
            self.why = "instruction limit"

    def reg(self, r):
        return self.uc.reg_read(r)

    def fptop(self):
        return (self.uc.reg_read(UC_X86_REG_FPSW) >> 11) & 7

    def st0(self):
        sw = self.uc.reg_read(UC_X86_REG_FPSW)
        v = self.uc.reg_read(UC_X86_REG_FP0 + ((sw >> 11) & 7))
        return v if isinstance(v, tuple) else v

def ext80_to_float(b):
    mant = int.from_bytes(b[:8], "little")
    ex = int.from_bytes(b[8:10], "little")
    if (ex & 0x7FFF) == 0 and mant == 0:
        return 0.0
    if (ex & 0x7FFF) == 0x7FFF:
        return float("nan")
    import math
    v = math.ldexp(mant / 2**63, (ex & 0x7FFF) - 16383)
    return -v if ex & 0x8000 else v

def run_st0(run):
    sw = run.uc.reg_read(UC_X86_REG_FPSW)
    v = run.uc.reg_read(UC_X86_REG_FP0 + ((sw >> 11) & 7))       # (mantissa, exponent)
    if isinstance(v, tuple):
        mant, ex = v
        return ext80_to_float(mant.to_bytes(8, "little") + (ex & 0xFFFF).to_bytes(2, "little"))
    return float("nan")

# ------------------------------------------------------------------ compare
def excluded(x, cap, im, mode):
    return (cap["flo"] <= x < cap["fhi"]) or (cap["teb"] <= x < cap["teb"] + 0x1000) or x >= 0xBAD00000 or \
        (mode == "B" and im.dll_base <= x < im.dll_hi)

def check_outputs(run, cap, im, kind, pages):
    """None if the run reproduces the recorded original outputs, else a description"""
    o = cap["out"]       # eax ebx ecx edx esi edi ebp esp eflags
    if run.reg(UC_X86_REG_ESP) != o[7]:
        return f"esp after return {run.reg(UC_X86_REG_ESP):08X} vs {o[7]:08X}"
    for r, v, n in ((UC_X86_REG_EBX, o[1], "ebx"), (UC_X86_REG_ESI, o[4], "esi"), (UC_X86_REG_EDI, o[5], "edi"),
                    (UC_X86_REG_EBP, o[6], "ebp")):
        if run.reg(r) != v:
            return f"{n} {run.reg(r):08X} vs {v:08X}"
    if run.fptop() != (cap["sw"] >> 11) & 7:
        return f"x87 depth {run.fptop()} vs {(cap['sw'] >> 11) & 7}"
    if kind in ("Int32", "Int64"):
        a, b = run.reg(UC_X86_REG_EAX), o[0]
        if a != b and not (kind == "Int32" and (a & 0xFF) == (b & 0xFF)):
            return f"eax {a:08X} vs {b:08X}"
        if kind == "Int64" and run.reg(UC_X86_REG_EDX) != o[3]:
            return f"edx {run.reg(UC_X86_REG_EDX):08X} vs {o[3]:08X}"
    if kind == "Float":
        x, y = run_st0(run), ext80_to_float(cap["st0"])
        if not (x == y or (x == x and y == y and abs(x - y) <= 1e-5 * max(1.0, abs(x), abs(y)))):
            return f"st0 {x:g} vs {y:g}"
    # memory: every byte the original wrote must hold its final value; bytes only we wrote must be unchanged
    rec = cap["written"]
    mine = set()
    for a, s in run.writes:
        for x in range(a, a + s):
            if not excluded(x, cap, im, run.mode):
                mine.add(x)
    for x in sorted(set(rec) | mine):
        try:
            got = run.uc.mem_read(x, 1)[0]
        except UcError:
            return f"memory {x:08X} unreadable"
        want = rec.get(x)
        if want is None:
            pg = pages.get(x & ~0xFFF)
            want = pg[x & 0xFFF] if pg is not None else None
            if want is None:
                continue
        if got != want:
            # float tolerance on the aligned dword
            al = x & ~3
            try:
                g4 = struct.unpack("<f", bytes(run.uc.mem_read(al, 4)))[0]
                w4b = bytes(rec.get(al + k, (pages.get(al & ~0xFFF) or b"\0" * 4096)[(al + k) & 0xFFF]) for k in range(4))
                w4 = struct.unpack("<f", w4b)[0]
                if g4 == g4 and w4 == w4 and abs(g4 - w4) <= 1e-5 * max(1.0, abs(g4), abs(w4)):
                    continue
            except Exception:
                pass
            return f"memory {x:08X} {got:02X} vs {want:02X} ({len(rec)} bytes written by the original)"
    return None

def replay_one(cap, pagefile, idx, im):
    pages = {}
    with open(pagefile, "rb") as f:
        for a, h in cap["pages"]:
            off = idx.get(h)
            if off is None:
                return "INCONCLUSIVE", "page missing from store"
            f.seek(off)
            pages[a] = f.read(4096)
    kind = RET.get(cap["ret"], "Void")
    # A: the original must reproduce its recording
    a = Run(cap, pages, im, "A")
    a.go(cap["func"])
    if a.why:
        return "INCONCLUSIVE", "A: " + a.why
    d = check_outputs(a, cap, im, kind, pages)
    if d:
        return "INCONCLUSIVE", "A not reproducible: " + d
    # B: ours through the thunk
    target = im.auto.get(cap["func"])
    reg = im.reg.get(cap["func"])
    if target is None or reg is None:
        return "INCONCLUSIVE", "not in the current build"
    nb, ret, conv = reg
    b = Run(cap, pages, im, "B")
    b.uc.mem_write(THUNK_PAGE, thunk_bytes(im, target, nb, ret, conv))
    b.go(THUNK_PAGE)
    if b.why:
        if b.why.startswith(("memory outside", "external code")):
            return "INCONCLUSIVE", "B: " + b.why
        return "FAIL", "ours: " + b.why
    d = check_outputs(b, cap, im, "Int32" if ret == "Int32" else ret, pages)
    return ("FAIL", d) if d else ("PASS", "")

# ------------------------------------------------------------------ driver
_G = {}
def _init(capdir):
    _G["im"] = Images()
    _G["idx"] = page_index(os.path.join(capdir, "pages.bin"))
    _G["pf"] = os.path.join(capdir, "pages.bin")

def _work(cap):
    try:
        v, d = replay_one(cap, _G["pf"], _G["idx"], _G["im"])
    except Exception as e:
        v, d = "INCONCLUSIVE", f"replay error {type(e).__name__}: {e}"
    return cap["func"], v, d

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("capdir")
    ap.add_argument("--only", default="")
    ap.add_argument("--max-per-func", type=int, default=0)
    ap.add_argument("--jobs", type=int, default=max(1, os.cpu_count() - 1))
    ap.add_argument("--out", default=os.path.join(ROOT, "auto", "replay_results.tsv"))
    opt = ap.parse_args()
    caps = parse_caps(os.path.join(opt.capdir, "caps.bin"))
    if opt.only:
        want = {int(x, 16) for x in opt.only.split(",")}
        caps = [c for c in caps if c["func"] in want]
    if opt.max_per_func:
        seen = collections.Counter()
        keep = []
        for c in caps:
            if seen[c["func"]] < opt.max_per_func:
                seen[c["func"]] += 1
                keep.append(c)
        caps = keep
    print(f"{len(caps)} capsules for {len({c['func'] for c in caps})} functions", flush=True)
    res = collections.defaultdict(lambda: {"n": 0, "PASS": 0, "FAIL": 0, "INCONCLUSIVE": 0, "fail": "", "inc": ""})
    with multiprocessing.Pool(opt.jobs, initializer=_init, initargs=(opt.capdir,)) as pool:
        for k, (f, v, d) in enumerate(pool.imap_unordered(_work, caps, chunksize=8)):
            r = res[f]
            r["n"] += 1
            r[v] += 1
            if v == "FAIL" and not r["fail"]:
                r["fail"] = d
            if v == "INCONCLUSIVE" and not r["inc"]:
                r["inc"] = d
            if (k + 1) % 2000 == 0:
                print(f"  {k + 1}/{len(caps)}", flush=True)
    names = {}
    for l in open(os.path.join(ROOT, "auto", "units.tsv"), encoding="utf-8"):
        p = l.split("\t")
        if len(p) > 1:
            names[p[0]] = p[1]
    tot = collections.Counter()
    with open(opt.out, "w", encoding="utf-8") as o:
        o.write("addr\tname\tcaps\tpass\tfail\tinconclusive\tverdict\tdetail\n")
        for f in sorted(res):
            r = res[f]
            v = "FAIL" if r["FAIL"] else "PASS" if r["PASS"] else "INCONCLUSIVE"
            tot[v] += 1
            o.write(f"{f:08x}\t{names.get(f'{f:08x}', '?')}\t{r['n']}\t{r['PASS']}\t{r['FAIL']}\t{r['INCONCLUSIVE']}\t{v}\t"
                    f"{r['fail'] if v == 'FAIL' else r['inc'] if v == 'INCONCLUSIVE' else ''}\n")
    print("functions:", dict(tot), "->", opt.out)

if __name__ == "__main__":
    main()
