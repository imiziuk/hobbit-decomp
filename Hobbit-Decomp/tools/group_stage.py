"""Staged enabling, one functionality at a time (top-down), on top of an ever-growing accepted set.
  python tools/group_stage.py status                       accepted / eligible per subsystem and file
  python tools/group_stage.py try "<subsystem>" ["<file>"] [--loads N]
        live = accepted + eligible functions of that subsystem (optionally one source file); rebuild, install,
        N load checks (default 3). Prints LOADED/CRASH per run and the crash signature.
  python tools/group_stage.py accept                       append the last tried set to the accepted list
  python tools/group_stage.py install-accepted             build + install the accepted set only (for play)
Files: auto/groups.tsv (tools/group_map.py), auto/eligible.txt (gen_registry.py),
       auto/stage_accepted.txt, auto/stage_last.txt, auto/stage_log.tsv"""
import collections, os, shutil, subprocess, sys, time
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import load_check as lc
ROOT = lc.ROOT
AUTO = os.path.join(ROOT, "auto")
CMAKE = r"C:\Program Files\Microsoft Visual Studio\18\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
ACC, LAST, LOG = (os.path.join(AUTO, n) for n in ("stage_accepted.txt", "stage_last.txt", "stage_log.tsv"))

def read(p):
    return set(open(p).read().split()) if os.path.exists(p) else set()

groups = {}
for l in list(open(os.path.join(AUTO, "groups.tsv"), encoding="utf-8"))[1:]:
    r = l.rstrip("\n").split("\t")
    groups[r[0]] = (r[2], r[3].rstrip("~"), int(r[5]))
eligible = read(os.path.join(AUTO, "eligible.txt"))
# gameplay subsystems (everything after 1. game loop / 2. levels) only with a real-data PASS from a shadow play
# session: the emulator's random inputs miss the paths that only run during real moves (stage 3: 00437b60,
# 0044cb00, 00428aa0 passed the emulator, failed on real data; combat states crashed without any evidence)
from shadow_evidence import valid as _valid
_ev = _valid()
EVIDENCE_FREE = ("1.", "2.")
# real-data evidence = a live shadow PASS or an offline replay PASS on recorded capsules (tools/replay.py)
_rp = os.path.join(AUTO, "replay_results.tsv")
_replay_pass = {l.split("\t")[0] for l in open(_rp, encoding="utf-8") if l.split("\t")[6:7] == ["PASS"]} \
    if os.path.exists(_rp) else set()
eligible = {a for a in eligible if groups.get(a, ("",))[0].startswith(EVIDENCE_FREE) or _ev.get(a) == "PASS"
            or a in _replay_pass}
accepted = read(ACC)

def build_install(live):
    p = os.path.join(AUTO, "stage_live.txt")
    open(p, "w").write("\n".join(sorted(live)) + "\n")
    env = dict(os.environ, HOBBIT_STAGE=p)
    out = subprocess.run([sys.executable, os.path.join(ROOT, "tools", "gen_registry.py")], env=env,
                         capture_output=True, text=True, check=True).stdout.strip().splitlines()[-1]
    r = subprocess.run([CMAKE, "--build", os.path.join(ROOT, "build"), "--config", "Release", "--", "/m"],
                       capture_output=True, text=True)
    if " error " in r.stdout:
        sys.exit("build failed:\n" + "\n".join(l for l in r.stdout.splitlines() if " error " in l)[:2000])
    shutil.copy(os.path.join(ROOT, "build", "Release", "dinput8.dll"), os.path.join(lc.G, "dinput8.dll"))
    return out

def signature():
    data = open(lc.LOG, "rb").read()
    tail = data[data.rfind(b"---- Hobbit-Decomp loaded ----"):].decode("utf-8", "replace")
    i = tail.find("!!! ACCESS VIOLATION")
    if i >= 0:
        return " ".join(tail[i:].split("\n")[0].split()[3:6])
    hang = [l for l in tail.splitlines() if l.startswith("watchdog") and "top calls:" in l and l.rstrip().endswith("calls:")]
    return f"hang? ({hang[-1][:60]})" if hang else "no AV logged"

def status():
    acc_by, el_by = collections.Counter(), collections.Counter()
    for a in eligible:
        el_by[groups.get(a, ("?",))[0]] += 1
    for a in accepted:
        acc_by[groups.get(a, ("?",))[0]] += 1
    print(f"accepted {len(accepted)} of {len(eligible)} eligible")
    for s in sorted(el_by):
        print(f"  {s:40s} {acc_by[s]:5d} / {el_by[s]:5d}")

if __name__ == "__main__":
    cmd = sys.argv[1] if len(sys.argv) > 1 else "status"
    if cmd == "status":
        status()
    elif cmd == "try":
        sub = sys.argv[2]
        f = sys.argv[3] if len(sys.argv) > 3 and not sys.argv[3].startswith("--") else None
        n = int(sys.argv[sys.argv.index("--loads") + 1]) if "--loads" in sys.argv else 3
        new = {a for a in eligible if groups.get(a, ("",))[0].startswith(sub) and (f is None or groups[a][1] == f)} - accepted
        open(LAST, "w").write("\n".join(sorted(new)) + "\n")
        print(f"trying {sub} {f or '(all files)'}: +{len(new)} on top of {len(accepted)} accepted", flush=True)
        print(" ", build_install(accepted | new), flush=True)
        lc.start_hotkey()
        res = []
        for i in range(n):
            r = lc.check(play=True, max_wait=400)
            res.append(r if r == "LOADED" else f"{r} [{signature()}]")
            print(f"  load {i + 1}: {res[-1]}", flush=True)
        lc.restore_folder()
        ok = all(r == "LOADED" for r in res)
        open(LOG, "a").write(f"{time.strftime('%Y-%m-%d %H:%M')}\t{sub}\t{f or '*'}\t{len(new)}\t{'OK' if ok else 'FAIL'}\t{'; '.join(res)}\n")
        print("RESULT:", "OK -> run `accept`" if ok else "FAIL -> split this group by file")
    elif cmd == "accept":
        new = read(LAST)
        open(ACC, "w").write("\n".join(sorted(accepted | new)) + "\n")
        print(f"accepted +{len(new)} -> {len(accepted | new)}")
    elif cmd == "install-accepted":
        print(build_install(accepted))
