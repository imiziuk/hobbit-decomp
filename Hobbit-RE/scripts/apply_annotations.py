"""Push Hobbit-RE/annotations.tsv into Ghidra: rename functions + put the description
as a decompiler comment at the function entry.

annotations.tsv columns: addr <TAB> name <TAB> description   (# lines ignored)
Usage: python apply_annotations.py [annotations.tsv]
"""
import sys, requests

G = "http://127.0.0.1:8080/"
path = sys.argv[1] if len(sys.argv) > 1 else "Hobbit-RE/annotations.tsv"
ok = bad = 0
for line in open(path, encoding="utf-8"):
    if not line.strip() or line.startswith("#"):
        continue
    addr, name, desc = (line.rstrip("\n").split("\t") + ["", ""])[:3]
    if name:
        r = requests.post(G + "rename_function_by_address",
                          data={"function_address": addr, "new_name": name}, timeout=60)
        if "success" not in r.text.lower():
            print("rename failed", addr, name, r.text.strip()); bad += 1; continue
    if desc:
        requests.post(G + "set_decompiler_comment", data={"address": addr, "comment": desc}, timeout=60)
    ok += 1
print(f"applied {ok}, failed {bad}")
