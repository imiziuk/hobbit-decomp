"""Build a function catalog from the decompile dump.

Inputs : <db>/funcs.tsv, <db>/decomp/*.c, the exe, Ghidra strings (HTTP).
Output : <db>/catalog.tsv  addr name lines category srcfile(how) class callers callees strings
         <db>/modules.txt  per-source-file address ranges and counts
         <db>/vtables.tsv  vtable addr, ctor, slots
Usage  : python -I analyze.py <db> <Meridian.exe>
"""
import collections, os, re, struct, sys, requests

db, exe_path = sys.argv[1], sys.argv[2]
G = "http://127.0.0.1:8080/"

# ---------- functions ----------
funcs = {}                      # addr(int) -> dict
for line in open(os.path.join(db, "funcs.tsv"), encoding="utf-8"):
    a, n, l = line.rstrip("\n").split("\t")
    funcs[int(a, 16)] = dict(name=n, lines=int(l), callees=set(), callers=set(),
                             strings=[], src=None, how="", cls="", cat="")
hl = os.path.join(db, "decomp_hl")
for fn in (os.listdir(hl) if os.path.isdir(hl) else []):
    a = int(fn[:8], 16)
    if a not in funcs:                     # function created only in the headless copy (vtable slots)
        t = open(os.path.join(hl, fn), encoding="utf-8").read()
        m = re.search(r"\b((?:FUN|thunk_FUN)_[0-9a-f]{8}|\w+)\s*\(", t)
        funcs[a] = dict(name=m[1] if m else f"FUN_{a:08x}", lines=t.count("\n"), callees=set(),
                        callers=set(), strings=[], src=None, how="", cls="", cat="")
order = sorted(funcs)
name2addr = {f["name"]: a for a, f in funcs.items()}

def text(a):
    for d in ("decomp", "decomp_hl"):          # HTTP dump has current names; headless fills gaps
        p = os.path.join(db, d, f"{a:08x}.c")
        if os.path.exists(p) and os.path.getsize(p) > 0:
            return open(p, encoding="utf-8").read()
    return ""

# ---------- strings ----------
strings = {}
for line in requests.get(G + "strings", params={"offset": 0, "limit": 100000}, timeout=120).text.splitlines():
    m = re.match(r'([0-9a-f]{8}): "(.*)"$', line.strip())
    if m:
        strings[int(m[1], 16)] = m[2]
path_re = re.compile(r'([A-Za-z0-9_]+\.(?:cpp|c|h))$')
src_of_string = {a: path_re.search(s)[1] for a, s in strings.items() if path_re.search(s)}

# ---------- per-function parse ----------
tok = re.compile(r'\b([A-Za-z_][A-Za-z0-9_]*)\s*\(')
saddr = re.compile(r'\b(?:s|u)_\w*?_([0-9a-f]{8})\b')
names = set(name2addr)
for a in order:
    t = text(a)
    f = funcs[a]
    f["lines"] = t.count(chr(10))
    body = t.split("{", 1)[1] if "{" in t else ""
    for n in tok.findall(body):
        m = re.match(r"(?:thunk_)?FUN_([0-9a-f]{8})$", n)
        c = int(m[1], 16) if m else name2addr.get(n)
        if c in funcs and c != a:
            f["callees"].add(c)
    for sa in saddr.findall(body):
        sa = int(sa, 16)
        if sa in strings:
            f["strings"].append(strings[sa])
            if sa in src_of_string and not f["src"]:
                f["src"], f["how"] = src_of_string[sa], "assert"
for a in order:
    for c in funcs[a]["callees"]:
        funcs[c]["callers"].add(a)

# ---------- label-named functions: map class -> file using tagged ones ----------
# ---------- gap fill: linker keeps a .cpp's functions contiguous ----------
tagged = [a for a in order if funcs[a]["src"]]
for x, y in zip(tagged, tagged[1:]):
    if funcs[x]["src"] == funcs[y]["src"]:
        for a in order[order.index(x) + 1: order.index(y)]:
            if not funcs[a]["src"]:
                funcs[a]["src"], funcs[a]["how"] = funcs[x]["src"], "between"

# ---------- vtables from raw exe ----------
exe = open(exe_path, "rb").read()
pe = struct.unpack_from("<I", exe, 0x3C)[0]
nsec = struct.unpack_from("<H", exe, pe + 6)[0]
opt = struct.unpack_from("<H", exe, pe + 20)[0]
base = struct.unpack_from("<I", exe, pe + 24 + 28)[0]
secs = [struct.unpack_from("<8sIIII", exe, pe + 24 + opt + 40 * k) for k in range(nsec)]
text_lo = min(base + s[2] for s in secs if s[0].startswith(b".text"))
text_hi = max(base + s[2] + s[1] for s in secs if s[0].startswith(b".text"))
vt_refs = collections.defaultdict(set)   # vtable addr -> functions that write it (ctors/dtors)
for a in order:
    for v in re.findall(r'&PTR_\w*?_([0-9a-f]{8})\b|&(vtbl_\w+)', text(a)):
        if v[0]:
            vt_refs[int(v[0], 16)].add(a)
vtables = {}
for name, vsz, vaddr, rsz, raw in secs:
    if not name.startswith(b".rdata"):
        continue
    for va in vt_refs:
        if base + vaddr <= va < base + vaddr + rsz:
            o, slots = raw + va - base - vaddr, []
            while True:
                p = struct.unpack_from("<I", exe, o + 4 * len(slots))[0]
                if not (text_lo <= p < text_hi) or len(slots) > 300:
                    break
                slots.append(p)
            if len(slots) >= 2:
                vtables[va] = slots

# class name for a vtable: Create_<X> factory -> ctor -> vtable, or label "X::X" in the ctor
cls_of_vt = {}
for a in order:
    n = funcs[a]["name"]
    if n.startswith("Create_"):
        for c in funcs[a]["callees"]:
            for va, writers in vt_refs.items():
                if c in writers and va in vtables:
                    cls_of_vt.setdefault(va, n[7:])
for va, writers in vt_refs.items():
    for w in writers:
        m = re.match(r'(\w+?)__(ctor|dtor)', funcs[w]["name"])
        if m and va in vtables:
            cls_of_vt.setdefault(va, m[1])
for va, slots in vtables.items():
    c = cls_of_vt.get(va, f"vt_{va:08x}")
    for i, p in enumerate(slots):
        if p in funcs and not funcs[p]["cls"]:
            funcs[p]["cls"] = f"{c}[{i}]"

# ---------- categories ----------
LIB = re.compile(r'^(_|__|operator_|Catch|Unwind|thunk_|`|std::|FID_|entry$)|^(memcpy|memset|strlen|strcmp|free|malloc)')
for a in order:
    f = funcs[a]
    if LIB.match(f["name"]) or a >= 0x6a0000 and not f["src"] and "__" not in f["name"]:
        f["cat"] = "lib?"
    elif f["lines"] <= 12:
        f["cat"] = "tiny"
    elif not f["name"].startswith("FUN_"):
        f["cat"] = "named"
    else:
        f["cat"] = "unknown"

# ---------- write ----------
with open(os.path.join(db, "catalog.tsv"), "w", encoding="utf-8") as fh:
    fh.write("addr\tname\tlines\tcat\tsrc\thow\tclass\tncallers\tncallees\tstrings\n")
    for a in order:
        f = funcs[a]
        s = " | ".join(x[:50] for x in f["strings"][:4])
        fh.write(f"{a:08x}\t{f['name']}\t{f['lines']}\t{f['cat']}\t{f['src'] or ''}\t{f['how']}\t"
                 f"{f['cls']}\t{len(f['callers'])}\t{len(f['callees'])}\t{s}\n")
with open(os.path.join(db, "callgraph.tsv"), "w", encoding="utf-8") as fh:
    for a in order:
        fh.write(f"{a:08x}\t" + " ".join(f"{c:08x}" for c in sorted(funcs[a]["callees"])) + "\n")
with open(os.path.join(db, "vtables.tsv"), "w", encoding="utf-8") as fh:
    for va, slots in sorted(vtables.items()):
        fh.write(f"{va:08x}\t{cls_of_vt.get(va, '')}\t{len(slots)}\t"
                 + " ".join(f"{p:08x}" for p in slots) + "\n")
mods = collections.defaultdict(list)
for a in order:
    if funcs[a]["src"]:
        mods[funcs[a]["src"]].append(a)
with open(os.path.join(db, "modules.txt"), "w", encoding="utf-8") as fh:
    for m, xs in sorted(mods.items(), key=lambda kv: kv[1][0]):
        fh.write(f"{m:28s} {xs[0]:08x}-{xs[-1]:08x}  {len(xs):5d} funcs\n")

cats = collections.Counter(f["cat"] for f in funcs.values())
print("funcs", len(funcs), dict(cats))
print("with source file", sum(1 for f in funcs.values() if f["src"]),
      "(assert", sum(1 for f in funcs.values() if f["how"] == "assert"), ")")
print("vtables", len(vtables), "named", len(cls_of_vt),
      "funcs in vtables", sum(1 for f in funcs.values() if f["cls"]))
