"""Deterministic-crash cleanup after promoting new functions: load once; on CRASH map the crash EIP + "(ours)"
stack frames through the linker map and blacklist the innermost one that is NEWLY live (not in the known-good
baseline set); rebuild; repeat until it loads twice in a row or no new suspect is found.
Usage: python tools/auto_culprit.py <baseline_live.txt> [max_rounds=15]"""
import bisect, os, re, subprocess, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import load_check as lc
ROOT = lc.ROOT
CMAKE = r"C:\Program Files\Microsoft Visual Studio\18\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
base = set(open(sys.argv[1]).read().split())
rounds = int(sys.argv[2]) if len(sys.argv) > 2 else 15

def build():
    subprocess.run([sys.executable, os.path.join(ROOT, "tools", "gen_registry.py")], check=True, capture_output=True)
    r = subprocess.run([CMAKE, "--build", os.path.join(ROOT, "build"), "--config", "Release", "--", "/m"], capture_output=True, text=True)
    if " error " in r.stdout:
        sys.exit("build failed")
    import shutil
    shutil.copy(os.path.join(ROOT, "build", "Release", "dinput8.dll"), os.path.join(lc.G, "dinput8.dll"))

def live():
    return set(re.findall(r"r_([0-9a-f]{8})\(.*true\);", open(os.path.join(ROOT, "src", "auto_registry.cpp")).read()))

def syms():
    out = []
    for line in open(os.path.join(ROOT, "build", "dinput8.map"), encoding="latin-1"):
        m = re.match(r"\s*0001:[0-9a-f]+\s+(\S+)\s+([0-9a-f]{8})\s+f\s", line)
        if m:
            out.append((int(m[2], 16), m[1]))
    return sorted(out)

def last_crash_frames():
    """EIP + stack values of the first access violation of the last session, in order"""
    data = open(lc.LOG, "rb").read()
    s = data.rfind(b"---- Hobbit-Decomp loaded ----")
    tail = data[s:].decode("utf-8", "replace")
    m = re.search(r"!!! ACCESS VIOLATION at ([0-9A-F]{8}).*?\n((?:    .*\n)+)", tail)
    if not m:
        return []
    return [int(m.group(1), 16)] + [int(x, 16) for x in re.findall(r"stack\[\s*\d+\] ([0-9A-F]{8})", m.group(2))]

lc.start_hotkey()
bl = os.path.join(ROOT, "auto", "crash_blacklist.txt")
good = 0
for rnd in range(rounds):
    r = lc.check()
    print(f"round {rnd + 1}: {r}", flush=True)
    if r == "LOADED":
        good += 1
        if good >= 2:
            print("loads twice in a row: done"); break
        continue
    good = 0
    S = syms(); K = [a for a, _ in S]
    cur = live()
    pick = None
    for v in last_crash_frames():
        if 0x10000000 <= v < 0x11000000:
            i = bisect.bisect_right(K, v) - 1
            m = re.search(r"AUTO_([0-9a-f]{8})", S[i][1]) if i >= 0 else None
            if m and m.group(1) in cur and m.group(1) not in base:
                pick = m.group(1); break
        elif f"{v:08x}" in cur and f"{v:08x}" not in base:     # crash EIP at a replaced entry
            pick = f"{v:08x}"; break
    if not pick:
        print("no newly-live function on the crash stack: stop (needs a human look)"); break
    print("  blacklist", pick, flush=True)
    open(bl, "a").write(f"AUTO_{pick}\n")
    build()
lc.restore_folder()
print("live now:", len(live()))
