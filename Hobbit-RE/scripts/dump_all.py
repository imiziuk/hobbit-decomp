"""Decompile every function into decomp/<addr>.c and write funcs.tsv (addr, name, lines).

Resumable: skips files that already exist. Usage: python dump_all.py <outdir>
"""
import os, re, sys, requests
from concurrent.futures import ThreadPoolExecutor

G = "http://127.0.0.1:8080/"
out = sys.argv[1]
os.makedirs(os.path.join(out, "decomp"), exist_ok=True)

funcs = []
for line in requests.get(G + "list_functions", timeout=120).text.splitlines():
    m = re.match(r"(\S+) at ([0-9a-f]{8})", line)
    if m:
        funcs.append((m[2], m[1]))

def work(f):
    addr, name = f
    path = os.path.join(out, "decomp", addr + ".c")
    if not os.path.exists(path):
        try:
            txt = requests.get(G + "decompile_function", params={"address": addr}, timeout=120).text
        except Exception as e:
            txt = f"/* DECOMPILE FAILED: {e} */"
        with open(path, "w", encoding="utf-8") as fh:
            fh.write(txt)
    with open(path, encoding="utf-8") as fh:
        return addr, name, sum(1 for _ in fh)

with ThreadPoolExecutor(4) as ex:
    rows = list(ex.map(work, funcs))

with open(os.path.join(out, "funcs.tsv"), "w", encoding="utf-8") as fh:
    for r in rows:
        fh.write("\t".join(map(str, r)) + "\n")
print(len(rows), "functions dumped")
