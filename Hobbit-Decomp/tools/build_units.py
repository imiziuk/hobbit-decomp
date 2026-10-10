"""Compiles every auto/units/<addr>.c on its own (parallel). Units that compile are copied to auto/ok/
(which CMake builds into the DLL, unregistered); failures get "skip:compile:<first error>" in units.tsv.
Usage: python tools/build_units.py [-j N]
"""
import concurrent.futures, os, re, shutil, subprocess, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
AUTO = os.path.join(ROOT, "auto")
VCVARS = r"C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars32.bat"
FLAGS = ["/nologo", "/c", "/TC", "/O2", "/arch:IA32", "/fp:precise", "/GS-", "/W1", "/std:clatest"]

def msvc_env():
    out = subprocess.run([os.path.join(ROOT, "tools", "vcenv.bat")], capture_output=True, text=True).stdout
    env = dict(line.split("=", 1) for line in out.splitlines() if "=" in line)
    return env

def main():
    jobs = int(sys.argv[sys.argv.index("-j") + 1]) if "-j" in sys.argv else os.cpu_count()
    env = msvc_env()
    global CL
    CL = next(os.path.join(d, "cl.exe") for d in env.get("Path", env.get("PATH", "")).split(";")
              if os.path.exists(os.path.join(d, "cl.exe")))
    objdir, okdir = os.path.join(AUTO, "obj"), os.path.join(AUTO, "ok")
    os.makedirs(objdir, exist_ok=True)
    shutil.rmtree(okdir, ignore_errors=True)
    os.makedirs(okdir)
    rows = [l.rstrip("\n").split("\t") for l in open(os.path.join(AUTO, "units.tsv"), encoding="utf-8")]

    def build(row):
        addr = row[0]
        src = os.path.join(AUTO, "units", f"{addr}.c")
        # tools/repair.py variants confirmed by equiv.py replace the plain generated unit
        fixed = os.path.join(AUTO, "repaired_src", f"{addr}.c")
        if os.path.exists(fixed):
            src = fixed
        for attempt in range(8):
            r = subprocess.run([CL, *FLAGS, "/diagnostics:column", f"/Fo{os.path.join(objdir, addr + '.obj')}", src],
                               capture_output=True, text=True, env=env, cwd=os.path.join(AUTO, "units"))
            errs = [l for l in r.stdout.splitlines() if " error " in l]
            if not errs or src == fixed:
                break
            # Ghidra's pointer<->float "same bits" casts: let the compiler point at them, rewrite, retry
            from fix_casts import fix, parse_errors
            new = fix(open(src, encoding="utf-8", errors="surrogateescape").read(), parse_errors(r.stdout))
            if new is None:
                break
            open(src, "w", encoding="utf-8", errors="surrogateescape").write(new)
        return addr, errs

    todo = [r for r in rows if len(r) > 2 and r[2] == "ok"]
    results = {}
    with concurrent.futures.ThreadPoolExecutor(jobs) as ex:
        for addr, errs in ex.map(build, todo):
            results[addr] = errs
    ok = 0
    for r in rows:
        if r[0] in results:
            if results[r[0]]:
                msg = re.sub(r"^.*?error (C\d+): ", r"\1 ", results[r[0]][0])[:90]
                r[2] = f"skip:compile:{msg}"
            else:
                fixed = os.path.join(AUTO, "repaired_src", f"{r[0]}.c")
                shutil.copy(fixed if os.path.exists(fixed) else os.path.join(AUTO, "units", f"{r[0]}.c"), okdir)
                ok += 1
    open(os.path.join(AUTO, "units.tsv"), "w", encoding="utf-8").write("\n".join("\t".join(r) for r in rows) + "\n")
    codes = {}
    for r in rows:
        if r[2].startswith("skip:compile:"):
            k = r[2].split(":")[2].split()[0]
            codes[k] = codes.get(k, 0) + 1
    print(f"compiled {ok}/{len(todo)}; top compile errors: {sorted(codes.items(), key=lambda kv: -kv[1])[:8]}")

if __name__ == "__main__":
    main()
