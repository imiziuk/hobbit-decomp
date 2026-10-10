"""Rename FUN_* functions from profiler-scope labels like "bilbo::OnAdvanceLogic".

Rule: the label is referenced <= MAX_OFF bytes after the function entry, the
function references exactly one label, and it still has a default name.
Usage: python name_from_labels.py [--apply]
"""
import re, sys, json, collections, requests

G = "http://127.0.0.1:8080/"
MAX_OFF = 0x80
LABEL = re.compile(r'^([0-9a-f]+): "[>=D]?([A-Za-z_]\w*)::([A-Za-z_~][\w?]*)"$')
XREF = re.compile(r'From ([0-9a-f]+) in (\S+)')

def get(ep, **p):
    return requests.get(G + ep, params=p, timeout=30).text.splitlines()

labels = {}
for line in get("strings", offset=0, limit=100000):
    m = LABEL.match(line.strip())
    if m:
        labels[m[1]] = f"{m[2]}::{m[3]}"

by_func = collections.defaultdict(set)   # func name -> labels near its entry
for addr, lab in labels.items():
    for x in get("xrefs_to", address=addr, limit=200):
        m = XREF.search(x)
        if not m:
            continue
        frm, fn = int(m[1], 16), m[2]
        fm = re.search(r'([0-9a-f]{8})$', fn)
        if fm and frm - int(fm[1], 16) <= MAX_OFF:
            by_func[fn].add(lab)

renames, skipped = {}, {}
for fn, labs in sorted(by_func.items()):
    if not fn.startswith("FUN_"):
        skipped[fn] = sorted(labs) + ["(already named)"]
    elif len(labs) != 1:
        skipped[fn] = sorted(labs)
    else:
        renames[fn] = next(iter(labs)).replace("::", "__").replace("?", "")

# two functions claiming the same name -> suffix them
count = collections.Counter(renames.values())
seen = collections.Counter()
for fn, new in list(renames.items()):
    if count[new] > 1:
        seen[new] += 1
        renames[fn] = f"{new}_{seen[new]}"

if "--apply" in sys.argv:
    for fn, new in renames.items():
        r = requests.post(G + "renameFunction", data={"oldName": fn, "newName": new}, timeout=30)
        if "success" not in r.text.lower() and "renamed" not in r.text.lower():
            print("FAIL", fn, new, r.text.strip())

json.dump({"renamed": renames, "skipped": skipped}, open("label_renames.json", "w"), indent=1)
print(f"labels {len(labels)}  funcs-with-label {len(by_func)}  rename {len(renames)}  skipped {len(skipped)}")
