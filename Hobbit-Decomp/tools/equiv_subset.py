"""Re-run the emulator equivalence test (tools/equiv.py --auto) for a subset of units and MERGE the results into
auto/verified.tsv (equiv --auto alone rewrites the whole file with only the tested subset).
Usage: tools/.venv/Scripts/python tools/equiv_subset.py <file with addresses> [--trials 30]
   or: tools/.venv/Scripts/python tools/equiv_subset.py --changed <old auto/ok snapshot dir>   (units whose
       source differs from the snapshot)"""
import os, shutil, subprocess, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
AUTO = os.path.join(ROOT, "auto")

def norm(p):
    return open(p, "rb").read().replace(b"\r\n", b"\n")

if sys.argv[1] == "--changed":
    old = sys.argv[2]
    todo = []
    for f in os.listdir(os.path.join(AUTO, "ok")):
        o = os.path.join(old, f)
        if not os.path.exists(o) or norm(o) != norm(os.path.join(AUTO, "ok", f)):
            todo.append(f[:8])
else:
    todo = open(sys.argv[1]).read().split()
trials = sys.argv[sys.argv.index("--trials") + 1] if "--trials" in sys.argv else "30"
print(len(todo), "units to re-test", flush=True)
ver = os.path.join(AUTO, "verified.tsv")
keep = os.path.join(AUTO, "verified_merge_base.tsv")
shutil.copy(ver, keep)
lst = os.path.join(AUTO, "equiv_subset_list.txt")
open(lst, "w").write("\n".join(todo) + "\n")
if os.path.exists(os.path.join(AUTO, "verified_partial.tsv")):
    os.remove(os.path.join(AUTO, "verified_partial.tsv"))
env = dict(os.environ)
env.setdefault("HOBBIT_UNITS", os.path.join(ROOT, "..", "Hobbit-RE", "db", "units5"))
# equiv.py takes the units on the command line: chunks keep it under the Windows command-line limit
new = {}
for i in range(0, len(todo), 1500):
    chunk = todo[i:i + 1500]
    args = [os.path.join(ROOT, "tools", ".venv", "Scripts", "python"), os.path.join(ROOT, "tools", "equiv.py"),
            "--auto", "--trials", trials, "--quiet"] + chunk
    if os.path.exists(os.path.join(AUTO, "verified_partial.tsv")):
        os.remove(os.path.join(AUTO, "verified_partial.tsv"))
    r = subprocess.run(args, env=env, capture_output=True, text=True)
    print(f"  chunk {i // 1500 + 1}:", r.stdout.strip().splitlines()[-1] if r.stdout.strip() else r.stderr[-1500:], flush=True)
    new.update({l.split("\t")[0]: l for l in open(ver, encoding="utf-8") if "\t" in l})
merged = []
for l in open(keep, encoding="utf-8"):
    a = l.split("\t")[0]
    merged.append(new.pop(a, l))
merged += list(new.values())
open(ver, "w", encoding="utf-8").write("".join(x if x.endswith("\n") else x + "\n" for x in sorted(merged)))
print(f"merged {len(todo)} results into auto/verified.tsv ({len(merged)} rows)")
