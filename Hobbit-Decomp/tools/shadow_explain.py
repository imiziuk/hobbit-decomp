"""Explain shadow-mode failures: for each capsule (game folder shadow_fail/<addr>.txt) show the verdict, the
first write where the original (A) and ours (B) disagree, and the line of OUR C that made B's write
(the unit is recompiled with an assembly listing /FAsc; the instruction offset is looked up in it).

Usage: python tools/shadow_explain.py [addr ...]        (default: all capsules)  -> also auto/shadow_explain.txt"""
import glob, os, re, subprocess, sys, tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GAME = os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean")
FLAGS = ["/nologo", "/c", "/TC", "/O2", "/arch:IA32", "/fp:precise", "/GS-", "/W0", "/std:clatest"]

syms = sorted((int(p[2], 16), p[1]) for p in (l.split() for l in open(os.path.join(ROOT, "build", "dinput8.map")))
              if len(p) >= 4 and p[0].startswith("0001:") and re.fullmatch(r"[0-9a-f]{8}", p[2]))

def our_function(eip):
    best = max((s for s in syms if s[0] <= eip), default=None)
    return best

def msvc_env():
    out = subprocess.run([os.path.join(ROOT, "tools", "vcenv.bat")], capture_output=True, text=True).stdout
    return dict(line.split("=", 1) for line in out.splitlines() if "=" in line)

ENV = None

def source_line(unit, offset):
    """C line of unit auto/ok/<unit>.c whose code contains byte `offset` from the function start"""
    global ENV
    ENV = ENV or msvc_env()
    tmp = tempfile.mkdtemp()
    src = os.path.join(ROOT, "auto", "ok", unit + ".c")
    cl = next(os.path.join(d, "cl.exe") for d in ENV.get("Path", ENV.get("PATH", "")).split(";")
              if os.path.exists(os.path.join(d, "cl.exe")))
    subprocess.run([cl, *FLAGS, "/FAsc", f"/Fa{tmp}\\u.cod", f"/Fo{tmp}\\u.obj", src], env=ENV, capture_output=True,
                   cwd=os.path.join(ROOT, "auto", "ok"))
    try:
        cod = open(os.path.join(tmp, "u.cod"), errors="replace").read().splitlines()
    except OSError:
        return None, None
    lines = open(src, errors="replace").read().splitlines()
    in_fn, base, cur = False, None, None
    for l in cod:
        if re.match(rf"_?@?AUTO_{unit}\S* PROC", l):
            in_fn = True
            continue
        if not in_fn:
            continue
        if re.search(r"\bENDP\b", l):
            break
        m = re.match(r"; (\d+)\s*:", l)
        if m:
            cur = int(m.group(1))
            continue
        m = re.match(r"\s+([0-9a-f]{5,8})\s", l)
        if m:
            off = int(m.group(1), 16)
            if base is None:
                base = off
            if off - base > offset:
                break
            hit = cur
    else:
        pass
    try:
        return hit, lines[hit - 1].strip() if hit else None
    except (NameError, IndexError):
        return None, None

def explain(path):
    t = open(path, errors="replace").read()
    name = re.search(r"^function (\S+) (\S+)", t, re.M)
    verdict = re.search(r"^verdict (.*)$", t, re.M).group(1)
    out = [f"{name.group(2)}: {verdict}"]
    fd = re.search(r"^first_divergence (.*)$", t, re.M).group(1)
    out.append(f"  first divergence: {fd}")
    m = re.search(r"B:eip=([0-9A-F]{8})", fd)
    if m:
        eip = int(m.group(1), 16)
        fn = our_function(eip)
        if fn and "AUTO_" in fn[1]:
            unit = re.search(r"AUTO_([0-9a-f]{8})", fn[1]).group(1)
            ln, code = source_line(unit, eip - fn[0])
            out.append(f"  ours wrote it in {fn[1]} +0x{eip - fn[0]:X}: {unit}.c line {ln}: {code}")
    # for each final difference: the last write by each run that touched it (order-independent)
    wb = [(int(e, 16), int(a, 16), int(n), v) for e, a, n, v in re.findall(r"^wb (\S+) (\S+) (\S+) (\S+)$", t, re.M)]
    wa = [(int(e, 16), int(a, 16), int(n), v) for e, a, n, v in re.findall(r"^wa (\S+) (\S+) (\S+) (\S+)$", t, re.M)]
    def last(ws, x):
        hit = None
        for e, a, n, v in ws:
            if a <= x + 3 and x < a + n:
                hit = (e, v)
        return hit
    for d in re.findall(r"^diff (\S+) (A=\S+ B=\S+)$", t, re.M)[:4]:
        x = int(d[0], 16)
        line = f"  diff {d[0]} {d[1]}"
        hb, ha = last(wb, x), last(wa, x)
        if ha:
            line += f"   original wrote it at {ha[0]:08X}"
        if hb:
            fn = our_function(hb[0])
            if fn and "AUTO_" in fn[1] and 0x10000000 <= hb[0] < 0x11000000:
                unit = re.search(r"AUTO_([0-9a-f]{8})", fn[1]).group(1)
                ln, code = source_line(unit, hb[0] - fn[0])
                line += f"\n      ours: {unit}.c line {ln}: {code}"
            else:
                line += f"   ours wrote it at {hb[0]:08X} (game code)"
        out.append(line)
    return "\n".join(out)

if __name__ == "__main__":
    caps = sorted(glob.glob(os.path.join(GAME, "shadow_fail", "*.txt")))
    if sys.argv[1:]:
        caps = [c for c in caps if os.path.basename(c)[:8].lower() in [a.lower() for a in sys.argv[1:]]]
    text = "\n\n".join(explain(c) for c in caps)
    open(os.path.join(ROOT, "auto", "shadow_explain.txt"), "w").write(text + "\n")
    print(text)
