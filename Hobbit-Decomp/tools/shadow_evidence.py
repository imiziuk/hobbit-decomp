"""Shadow-mode evidence store: each run = auto/shadow_evidence/<name>/{results.tsv, src_hash.tsv}.
A PASS/FAIL only counts for the exact unit source it was measured on (sha1 of the .c, CRLF-normalized).
  python tools/shadow_evidence.py add <name> <shadow_results.tsv> [<src_dir>]   (src_dir default auto/ok)
  python tools/shadow_evidence.py import-legacy        (play1-3 merged results vs auto/shadow_tested_src)
gen_registry.py calls valid() to get {addr: 'PASS'|'FAIL'} for the CURRENT auto/ok sources."""
import hashlib, os, shutil, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EV = os.path.join(ROOT, "auto", "shadow_evidence")

def h(path):
    return hashlib.sha1(open(path, "rb").read().replace(b"\r\n", b"\n")).hexdigest()

def hashes(src):
    return {f[:8]: h(os.path.join(src, f)) for f in os.listdir(src) if f.endswith(".c")}

def add(name, results, src=os.path.join(ROOT, "auto", "ok")):
    d = os.path.join(EV, name)
    os.makedirs(d, exist_ok=True)
    shutil.copy(results, os.path.join(d, "results.tsv"))
    with open(os.path.join(d, "src_hash.tsv"), "w") as f:
        for a, x in sorted(hashes(src).items()):
            f.write(f"{a}\t{x}\n")
    print("evidence", name, "stored")

def valid(min_pass_samples=2):
    """per address: FAIL if any run on the current source failed, PASS if >= min samples passed on it"""
    cur = hashes(os.path.join(ROOT, "auto", "ok"))
    agg = {}
    for name in sorted(os.listdir(EV)) if os.path.isdir(EV) else []:
        d = os.path.join(EV, name)
        src = dict(l.split() for l in open(os.path.join(d, "src_hash.tsv")))
        for l in open(os.path.join(d, "results.tsv"), encoding="utf-8"):
            if l.startswith("addr	"):
                continue
            r = l.rstrip("\n").split("\t")
            if len(r) < 8:
                continue
            a = r[0].lower()
            if a not in cur or src.get(a) != cur[a]:
                continue                                   # measured on different code: no evidence
            g = agg.setdefault(a, [0, 0])
            g[0] += int(r[3]) + int(r[4])                  # pass + near
            g[1] += int(r[5])                              # fail
    return {a: ("FAIL" if f else "PASS") for a, (p, f) in agg.items() if f or p >= min_pass_samples}

if __name__ == "__main__":
    if sys.argv[1] == "add":
        add(sys.argv[2], sys.argv[3], *(sys.argv[4:5]))
    elif sys.argv[1] == "import-legacy":
        add("legacy_play123", os.path.join(ROOT, "auto", "shadow_merged.tsv"),
            os.path.join(ROOT, "auto", "shadow_tested_src", "auto", "ok"))
    v = valid()
    print(f"valid on current sources: {sum(x == 'PASS' for x in v.values())} PASS, {sum(x == 'FAIL' for x in v.values())} FAIL")
