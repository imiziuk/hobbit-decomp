"""Summarize the last N game sessions in hobbit_decomp.log: crash (first access violation + named stack) or hang
(where the main thread is stuck, last watchdog stack), with our functions (*) named through the linker map.
Usage: python tools/session_report.py [N=5]"""
import bisect, os, re, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
LOG = os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean", "hobbit_decomp.log")
syms = []
for line in open(os.path.join(ROOT, "build", "dinput8.map"), encoding="latin-1"):
    m = re.match(r"\s*0001:[0-9a-f]+\s+(\S+)\s+([0-9a-f]{8})\s+f\s", line)
    if m:
        syms.append((int(m[2], 16), m[1]))
syms.sort(); K = [a for a, _ in syms]
rows = [l.split("\t") for l in open(os.path.join(ROOT, "..", "Hobbit-RE", "db", "funcs.tsv")) if re.match(r"[0-9a-f]{8}\t", l)]
ST = sorted((int(r[0], 16), r[1]) for r in rows); KK = [a for a, _ in ST]
def name(v):
    if 0x10000000 <= v < 0x11000000:
        i = bisect.bisect_right(K, v) - 1
        return (syms[i][1] + "*") if i >= 0 else "?"
    j = bisect.bisect_right(KK, v) - 1
    return ST[j][1] if 0x401000 <= v < 0x6C0000 and j >= 0 else f"{v:08X}"
N = int(sys.argv[1]) if len(sys.argv) > 1 else 5
log = open(LOG, "rb").read().decode("utf-8", "replace").split("---- Hobbit-Decomp loaded ----")[-N:]
for n, t in enumerate(log, 1):
    marks = re.findall(r"devmode: (switching to level \d+|fly \w+)", t)
    print(f"===== session {n}  ({len(t.splitlines())} log lines) {marks[-3:]}")
    m = None
    for m in list(re.finditer(r"!!! ACCESS VIOLATION at ([0-9A-F]{8}) \((\w+) ([0-9A-F]+)\)", t))[:2]:
        seg = t[m.start():m.start() + 2000].splitlines()
        print(f"  CRASH at {m.group(1)} {name(int(m.group(1), 16))} ({m.group(2)} {m.group(3)})")
        st = [re.search(r"\] ([0-9A-F]{8})", l).group(1) for l in seg if "    stack[" in l][:12]
        print("   stack:", " <- ".join(name(int(v, 16)) for v in st))
    eips = re.findall(r"watchdog +\d+: main EIP=([0-9A-F]{8})  top calls:(.*)", t)
    stuck = [e for e, calls in eips[-4:] if not calls.strip()]
    if len(stuck) >= 3:
        print("  HANG: main thread at", {name(int(e, 16)) for e in stuck})
        stk = re.findall(r"watchdog +\d+: stack (.*)", t)
        if stk:
            print("   stack:", " <- ".join(name(int(v, 16)) for v in stk[-1].split()[:12]))
    if not m and len(stuck) < 3:
        print("  no crash / hang recorded (closed normally?)")
