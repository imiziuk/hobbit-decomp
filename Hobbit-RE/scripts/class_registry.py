"""List classes registered via RegisterClass (0x0054b5e0) and name their factories.

Each call site looks like:
  6a 01 / 68 <size> / 68 <typeid> / 68 <factory> / 68 <name> / 6a <n> / b9 <rec> / e8 <call>
Usage: python -I class_registry.py <Meridian.exe> [--apply]
"""
import re, struct, sys, requests

G = "http://127.0.0.1:8080/"
REG = 0x0054B5E0
exe = open(sys.argv[1], "rb").read()
pe = struct.unpack_from("<I", exe, 0x3C)[0]
nsec = struct.unpack_from("<H", exe, pe + 6)[0]
opt = struct.unpack_from("<H", exe, pe + 20)[0]
base = struct.unpack_from("<I", exe, pe + 24 + 28)[0]
secs = [struct.unpack_from("<8sIIII", exe, pe + 24 + opt + 40 * k) for k in range(nsec)]

def off(va):
    rva = va - base
    for _, vsz, vaddr, rsz, raw in secs:
        if vaddr <= rva < vaddr + max(vsz, rsz):
            return raw + rva - vaddr

def cstr(va):
    o = off(va)
    return exe[o:exe.index(b"\0", o)].decode("latin-1")

rows = []
for line in requests.get(G + "xrefs_to", params={"address": f"{REG:08x}", "limit": 2000}).text.splitlines():
    m = re.match(r"From ([0-9a-f]+)", line)
    if not m:
        continue
    call = int(m[1], 16)
    o = off(call)
    # decode 6 pushes (6a imm8 | 68 imm32) followed by mov ecx,imm32 ending right at the call
    args = None
    for start in range(o - 40, o - 5):
        i, vals = start, []
        while i < o - 5 and len(vals) < 6:
            if exe[i] == 0x6A: vals.append(struct.unpack_from("<b", exe, i + 1)[0] & 0xFFFFFFFF); i += 2
            elif exe[i] == 0x68: vals.append(struct.unpack_from("<I", exe, i + 1)[0]); i += 5
            else: break
        if len(vals) == 6 and i == o - 5 and exe[i] == 0xB9:
            args = vals; break
    if not args:
        rows.append((call, None)); continue
    _, size, typeid, factory, name, code = args
    rows.append((call, (cstr(name), factory, typeid, size, code)))

for call, r in sorted(rows, key=lambda x: (x[1] or ("~",))[0].lower()):
    if r is None:
        print(f"{call:08x}  (pattern mismatch)"); continue
    name, factory, typeid, size, code = r
    print(f"{name:28s} factory {factory:08x}  type {typeid:08x}  size {size:#x}  code {code:#04x}")
    if "--apply" in sys.argv:
        safe = re.sub(r"\W", "_", name)
        requests.post(G + "rename_function_by_address",
                      data={"function_address": f"{factory:08x}", "new_name": f"Create_{safe}"})
print(len(rows), "registrations")
