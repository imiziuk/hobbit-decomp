"""Compile one generated unit and print its first errors with the offending source lines.
Usage: python tools/cc_one.py <addr> [auto/units|auto/ok]"""
import os, re, subprocess, sys, tempfile
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FLAGS = ["/nologo", "/c", "/TC", "/O2", "/arch:IA32", "/fp:precise", "/GS-", "/W1", "/std:clatest"]
out = subprocess.run([os.path.join(ROOT, "tools", "vcenv.bat")], capture_output=True, text=True).stdout
env = dict(l.split("=", 1) for l in out.splitlines() if "=" in l)
cl = next(os.path.join(d, "cl.exe") for d in env.get("Path", env.get("PATH", "")).split(";") if os.path.exists(os.path.join(d, "cl.exe")))
d = os.path.join(ROOT, *(sys.argv[2].split("/") if len(sys.argv) > 2 else ["auto", "units"]))
src = os.path.join(d, sys.argv[1] + ".c")
r = subprocess.run([cl, *FLAGS, os.path.join(tempfile.gettempdir(), "cc_one.obj").join(["/Fo", ""]), src], capture_output=True, text=True, env=env, cwd=d)
lines = open(src, errors="replace").read().splitlines()
for l in [l for l in r.stdout.splitlines() if " error " in l][:4]:
    m = re.search(r"\((\d+)[,)]", l)
    print(l.split(": ", 1)[-1][:140])
    if m: print("    ", lines[int(m.group(1)) - 1].strip()[:200])
