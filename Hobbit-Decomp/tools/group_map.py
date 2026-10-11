"""Functional map of the whole game: every function -> subsystem / source file / class, plus call depth from the
main loop, so functions can be enabled one functionality at a time, top-down.

Evidence, strongest first:
  1. leaked source file names (catalog `src`, from asserts/profiler strings) -> file anchors
  2. class-prefixed names (`bilbo__OnAdvanceLogic`, annotations) and class_registry factories -> class anchors
  3. MSVC links one .obj after another: functions between two anchors of the same file belong to that file
  4. call graph vote for the rest (callers/callees already labelled), then nearest anchor (low confidence)
Output: auto/groups.tsv  (addr name subsystem file class depth conf status)  and  auto/groups_tree.md
Usage: python tools/group_map.py"""
import bisect, collections, os, re

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DB = os.path.join(ROOT, "..", "Hobbit-RE", "db")
CRT = 0x006A0000

# ---------------------------------------------------------------- inputs
cat = {}
for l in list(open(os.path.join(DB, "catalog.tsv"), encoding="utf-8"))[1:]:
    r = l.rstrip("\n").split("\t")
    cat[r[0]] = {"name": r[1], "kind": r[3], "src": r[4], "vt": r[6]}
for l in open(os.path.join(ROOT, "..", "Hobbit-RE", "annotations.tsv"), encoding="utf-8"):
    r = l.rstrip("\n").split("\t")
    if len(r) >= 2 and re.fullmatch(r"[0-9a-f]{8}", r[0]) and r[0] in cat:
        cat[r[0]]["name"] = r[1]
calls = collections.defaultdict(set)
callers = collections.defaultdict(set)
for l in open(os.path.join(DB, "callgraph.tsv"), encoding="utf-8"):
    r = l.rstrip("\n").split("\t")
    for c in (r[1].split() if len(r) > 1 else []):
        calls[r[0]].add(c); callers[c].add(r[0])
vtables = {}
for l in open(os.path.join(DB, "vtables.tsv"), encoding="utf-8"):
    r = l.rstrip("\n").split("\t")
    vtables[r[0]] = r[3].split() if len(r) > 3 else []
factories = {}
for l in open(os.path.join(ROOT, "..", "Hobbit-RE", "class_registry.txt"), encoding="utf-8"):
    m = re.match(r"(\w+)\s+factory ([0-9a-f]{8})", l)
    if m:
        factories[m.group(2)] = m.group(1)
status = {}
for l in open(os.path.join(ROOT, "auto", "units.tsv"), encoding="utf-8"):
    r = l.rstrip("\n").split("\t")
    if len(r) > 2:
        status[r[0]] = r[2]
for l in open(os.path.join(ROOT, "auto", "verified.tsv"), encoding="utf-8"):
    r = l.split("\t")
    if len(r) > 2 and status.get(r[0]) == "ok":
        status[r[0]] = "equiv-" + r[2]

addrs = sorted(cat)
A = [int(a, 16) for a in addrs]

def cls_of_name(n):
    m = re.match(r"([A-Za-z]\w*?)__\w", n)
    return m.group(1) if m and not n.startswith(("FUN_", "thunk_", "Unwind")) else ""

# ---------------------------------------------------------------- 1+2: anchors
file_of, cls_of, conf = {}, {}, {}
for a, c in cat.items():
    if c["src"]:
        file_of[a], conf[a] = c["src"], "src"
    k = cls_of_name(c["name"])
    if k:
        cls_of[a] = k
for a, k in factories.items():
    if a in cat:
        cls_of[a] = k
# class -> file, from functions that have both
votes = collections.defaultdict(collections.Counter)
for a in cls_of:
    if a in file_of:
        votes[cls_of[a].lower()][file_of[a]] += 1
class_file = {k: v.most_common(1)[0][0] for k, v in votes.items()}
for a, k in cls_of.items():
    if a not in file_of:
        f = class_file.get(k.lower())
        file_of[a] = f or f"{k}.cpp?"
        conf[a] = "class"
# vtable methods: a method's HOME is the smallest (most basic) vtable containing it (base-class methods are
# inherited into every derived vtable); a vtable's class comes only from labelled methods whose home it is
home = {}
for vt, ms in vtables.items():
    for m in ms:
        if m not in home or len(vtables[vt]) < len(vtables[home[m]]):
            home[m] = vt
vt_class = {}
for vt in vtables:
    ks = collections.Counter(cls_of[m] for m in set(vtables[vt]) if m in cls_of and home.get(m) == vt)
    if ks:
        vt_class[vt] = ks.most_common(1)[0][0]
for m, vt in home.items():
    k = vt_class.get(vt)
    if k and m in cat and m not in cls_of and int(m, 16) < CRT:
        cls_of[m] = k
        if m not in file_of:
            file_of[m] = class_file.get(k.lower(), f"{k}.cpp?"); conf[m] = "vtable"

# ---------------------------------------------------------------- 3: between two anchors of the same file
anch = [i for i, a in enumerate(addrs) if a in file_of]
for x, y in zip(anch, anch[1:]):
    fa, fb = file_of[addrs[x]], file_of[addrs[y]]
    if fa == fb:
        for i in range(x + 1, y):
            if addrs[i] not in file_of:
                file_of[addrs[i]], conf[addrs[i]] = fa, "between"

# ---------------------------------------------------------------- special ranges
for a in addrs:
    n = cat[a]["name"]
    if int(a, 16) >= CRT and a not in file_of:
        file_of[a], conf[a] = "msvc_crt", "range"
    elif n.startswith("Unwind@"):
        file_of[a], conf[a] = "unwind_stubs", "name"

# ---------------------------------------------------------------- 4: call-graph vote, then nearest anchor
for it in range(6):
    changed = 0
    for a in addrs:
        if a in file_of:
            continue
        v = collections.Counter(file_of[n] for n in (calls[a] | callers[a]) if n in file_of
                                and file_of[n] not in ("msvc_crt", "unwind_stubs") and not file_of[n].startswith("x_"))
        if v:
            f, k = v.most_common(1)[0]
            # only if the voted file is also near in the address space (same .obj neighbourhood)
            i = bisect.bisect_left(A, int(a, 16))
            near = {file_of.get(addrs[j]) for j in range(max(0, i - 40), min(len(addrs), i + 40))}
            if f in near:
                file_of[a], conf[a] = f, "callgraph"; changed += 1
    if not changed:
        break
for i, a in enumerate(addrs):
    if a in file_of:
        continue
    lo = next((addrs[j] for j in range(i - 1, -1, -1) if conf.get(addrs[j]) in ("src", "class", "vtable", "between")), None)
    hi = next((addrs[j] for j in range(i + 1, len(addrs)) if conf.get(addrs[j]) in ("src", "class", "vtable", "between")), None)
    best = min([x for x in (lo, hi) if x], key=lambda x: abs(int(x, 16) - int(a, 16)), default=None)
    file_of[a] = (file_of[best] + "~") if best else "unknown"
    conf[a] = "nearest"

# one name per file: "treasure_chest.cpp?" / "TreasureChest.cpp?" / "TreasureChest.cpp" -> the real one if known
def key(f):
    return re.sub(r"[_~?]|\.cpp", "", f.lower())
canon = {}
for f in sorted(set(file_of.values()), key=lambda f: ("?" in f, "~" in f, f)):
    canon.setdefault(key(f), f.rstrip("~"))
for a in file_of:
    file_of[a] = canon[key(file_of[a])] + ("~" if file_of[a].endswith("~") else "")

# ---------------------------------------------------------------- subsystems
SUB = [  # (regex on file/class name, subsystem); first match wins, so specific rules come first
    (r"^msvc_crt", "Z. C runtime (MSVC, never replaced)"), (r"^unwind_stubs", "Z. Exception unwind stubs"),
    (r"^(main|winmain|game|systemmenu|vram_viewer|pause|logic_mgr|loadscreen|globals)", "1. Game loop & front end"),
    (r"^level", "2. Levels (per-level scripts)"),
    (r"^bilbo", "3. Player (Bilbo)"),
    (r"camera", "5. Camera"),
    (r"(conversation|cinema|subtitle|dialog)", "6. Cinematics & dialogue"),
    (r"(anim|track_controller)", "8. Animation"),
    (r"(phys|coll|spatial|sdbase|geom|occluder|selset|pool|navmesh|volume|wall|^path|motion|slider|breakaway|line_seg|playsurface)", "7. Physics & collision"),
    (r"(render|d3d|mesh|poly|material|bitmap|texture|vram|draw|decal|rigid_?instance|skybox|light|fog|static_bitmap)", "9. Rendering"),
    (r"(audio|music|sound|voice)", "A. Audio"),
    (r"(^ui|dlg_|textbox|font|menu|hud)", "B. UI & menus"),
    (r"^(x_|e_|io_|bin|text|tokenizer|bitstream|vm_|rsc_mgr|modifier)", "C. Engine base library"),
    (r"(npc|^ai|goal|state|sense|nav|smaug|troll|spider|goblin|enemy|character|combat|eel)", "4. NPCs & AI"),
    (r"(object|trigger|rope|projectile|fx|pickup|treasure|switch|web|door|lever|boulder|water|clutter|weather|"
     r"emitter|ambient|layer|event|save|load|mine_?cart|push_?box|plant|prop|marker|tree|special_surfaces)", "D. Game objects & world"),
]
def subsystem(f):
    s = f.lower().lstrip("~")
    for rx, name in SUB:
        if re.search(rx, s):
            return name
    return "E. Other / unclassified"

# ---------------------------------------------------------------- call depth from the main loop
roots = [a for a in addrs if cat[a]["name"] in ("Game_LevelLoop", "Game_RunLogic", "logic_mgr__SingleStep")] \
        or [a for a in addrs if file_of.get(a) == "Main.cpp"]
depth = {r: 0 for r in roots}
q = collections.deque(roots)
while q:
    a = q.popleft()
    for c in calls[a]:
        if c not in depth:
            depth[c] = depth[a] + 1; q.append(c)
for vt, ms in vtables.items():             # virtual methods: one level below whoever calls virtuals of that class
    for m in ms:
        if m not in depth and m in cat:
            depth[m] = 3

# ---------------------------------------------------------------- output
rows = []
for a in addrs:
    f = file_of[a]
    rows.append((a, cat[a]["name"], subsystem(f), f, cls_of.get(a, ""), depth.get(a, 99), conf[a], status.get(a, "-")))
with open(os.path.join(ROOT, "auto", "groups.tsv"), "w", encoding="utf-8") as o:
    o.write("addr\tname\tsubsystem\tfile\tclass\tdepth\tconf\tstatus\n")
    for r in rows:
        o.write("\t".join(map(str, r)) + "\n")
tree = collections.defaultdict(lambda: collections.defaultdict(list))
for r in rows:
    tree[r[2]][r[3].rstrip("~")].append(r)
with open(os.path.join(ROOT, "auto", "groups_tree.md"), "w", encoding="utf-8") as o:
    for s in sorted(tree):
        n = sum(len(v) for v in tree[s].values())
        ok = sum(1 for v in tree[s].values() for r in v if r[7] == "equiv-PASS")
        o.write(f"## {s}: {n} functions ({ok} pass the emulator)\n")
        for f, v in sorted(tree[s].items(), key=lambda kv: -len(kv[1])):
            ok = sum(1 for r in v if r[7] == "equiv-PASS")
            o.write(f"- {f}: {len(v)} ({ok} pass), min depth {min(r[5] for r in v)}\n")
c = collections.Counter(conf.values())
print("confidence:", dict(c))
for s in sorted(tree):
    print(f"{s:42s} {sum(len(v) for v in tree[s].values()):6d} functions in {len(tree[s]):4d} files")
