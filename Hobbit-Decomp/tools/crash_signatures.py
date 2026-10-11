"""Group the game sessions in hobbit_decomp.log by outcome and crash signature (first access violation:
EIP + module + first game return addresses). Usage: python tools/crash_signatures.py [last_N_sessions]"""
import collections, os, re, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
LOG = os.path.join(ROOT, "..", "The.Hobbit.-.Clean", "The Hobbit - Clean", "hobbit_decomp.log")
N = int(sys.argv[1]) if len(sys.argv) > 1 else 600
sessions, cur = [], None
with open(LOG, "rb") as f:
    for raw in f:
        if b"Hobbit-Decomp loaded" in raw:
            cur = {"live": 0, "off": 0, "marks": [], "av": None, "stack": [], "wd_empty": False}
            sessions.append(cur)
            if len(sessions) > N:
                sessions.pop(0)
            continue
        if cur is None:
            continue
        if raw.startswith(b"  replace ") and b"AUTO_" in raw:
            cur["live"] += 1
        elif raw.startswith(b"  skip ") and b"AUTO_" in raw:
            cur["off"] += 1
        elif raw.startswith(b"autotest: MARK") or raw.startswith(b"autotest: wait_bilbo ok") or raw.startswith(b"autotest: quit"):
            cur["marks"].append(raw[10:].decode(errors="replace").strip())
        elif b"!!! ACCESS VIOLATION" in raw and cur["av"] is None:
            cur["av"] = raw.decode(errors="replace").split("!!! ")[1].strip()
            cur["grab"] = 1
        elif cur.get("grab") and raw.startswith(b"    "):
            s = raw.decode(errors="replace").strip()
            if s.startswith("in "):
                s = "in " + os.path.basename(s[3:].split(" +")[0]) + " +" + s.split(" +")[-1]
                
                cur["mod"] = s
            elif s.startswith("stack[") and len(cur["stack"]) < 6:
                cur["stack"].append(re.match(r"stack\[\s*\d+\]\s+(\w+)", s).group(1) + ("*" if "ours" in s else ""))
        elif cur.get("grab"):
            cur["grab"] = 0
        if raw.startswith(b"watchdog") and raw.rstrip().endswith(b"top calls:"):
            cur["wd_empty"] = True
def outcome(s):
    m = " ".join(s["marks"])
    if "quit" in m: return "LOADED"
    if "wait_bilbo ok" in m: return "CRASH_IN_LEVEL"
    if "intro skipped" in m: return "CRASH_LOADING"
    return "CRASH_MENU"
def bucket(n):
    return "all(>=2000 live)" if n >= 2000 else "half(500-1999)" if n >= 500 else "few(<500)"
tab = collections.Counter()
sig = collections.defaultdict(collections.Counter)
for s in sessions:
    o = outcome(s); b = bucket(s["live"]); tab[(b, o)] += 1
    if o != "LOADED":
        key = (s["av"] or ("FROZE(no AV)" if s["wd_empty"] else "no AV logged")) + " | " + s.get("mod", "") + " | " + " ".join(s["stack"][:6])
        sig[b][re.sub(r"\((reading|writing) [0-9A-F]+\)", r"(\1)", key)] += 1
print(len(sessions), "sessions")
for k, v in sorted(tab.items()): print(f"  {k[0]:18s} {k[1]:15s} {v}")
for b in sig:
    print("\n==", b)
    for k, v in sig[b].most_common(12): print(f"  {v:3d}  {k}")
