"""Writes PROGRESS.md: the staged plan (one functionality at a time, top-down), what the maintainer play-tests at each
stage, and how far every stage is (compiled / emulator-verified / load-tested / play-tested, % of all game code).
Usage: python tools/progress.py"""
import collections, os, time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
AUTO = os.path.join(ROOT, "auto")

def read(name):
    p = os.path.join(AUTO, name)
    return set(open(p).read().split()) if os.path.exists(p) else set()

STAGES = [  # (subsystem prefix in auto/groups.tsv, title, play-test checklist)
    ("1.", "Game loop & front end", ["Game starts, main menu works (all buttons)", "New Game loads the first level",
                                     "Pause menu opens/closes (Esc)", "Quit to menu and quit the game work"]),
    ("2.", "Levels (per-level scripts)", ["PageUp/PageDown through every level: each one loads",
                                          "Level start events/cutscenes trigger", "Home restarts a level"]),
    ("3.", "Player (Bilbo)", ["Walk, run, sneak, jump, double jump", "Climb: ledges, ladders, ropes, poles",
                              "Push blocks, swim", "Sting / staff / stones: every attack and combo",
                              "Pickups count, inventory screen", "Take damage, health refill (F7), die and respawn"]),
    ("5.", "Camera", ["Camera follows Bilbo, rotates", "Camera near walls / tight spaces (no clipping, no freeze)",
                      "First-person look", "Cutscene cameras"]),
    ("6.", "Cinematics & dialogue", ["Talk to NPCs (dialogue + subtitles)", "Cutscenes play; skip after a few seconds",
                                     "Conversation choices"]),
    ("4.", "NPCs & AI", ["Enemies notice, chase, attack, block, die", "Spiders, trolls, goblins behave normally",
                         "Friendly NPCs walk/talk", "Group fights"]),
    ("D.", "Game objects & world", ["Doors, switches, levers, chests", "Webs, water, ropes, push boxes",
                                    "Triggers: level changes, music changes", "Save pedestal: save and load"]),
    ("7.", "Physics & collision", ["Slopes, walls, falling, landing", "Moving platforms, sliders, breakables",
                                   "Projectiles hit things"]),
    ("8.", "Animation", ["All Bilbo and NPC animations look right (no T-pose, no jitter)"]),
    ("9.", "Rendering", ["Level looks the same as the original (fog, lights, decals, sky, water)",
                         "No missing or flickering objects"]),
    ("A.", "Audio", ["Footsteps, hits, voices, ambient sound, music"]),
    ("B.", "UI & menus", ["HUD (health, stones, courage points)", "Options menu, save/load screens, text"]),
    ("C.", "Engine base library", ["Full run: load, play, save, load save, change levels"]),
    ("E.", "Other / unclassified", ["Full run again"]),
]

groups = {}
for l in list(open(os.path.join(AUTO, "groups.tsv"), encoding="utf-8"))[1:]:
    r = l.rstrip("\n").split("\t")
    groups[r[0]] = r[2]
status = {}
for l in open(os.path.join(AUTO, "units.tsv"), encoding="utf-8"):
    r = l.rstrip("\n").split("\t")
    if len(r) > 2:
        status[r[0]] = r[2]
verified = {}
for l in open(os.path.join(AUTO, "verified.tsv"), encoding="utf-8"):
    r = l.split("\t")
    if len(r) > 2:
        verified[r[0]] = r[2]
compiled = {f[:8] for f in os.listdir(os.path.join(AUTO, "ok")) if f.endswith(".c")}
eligible, accepted, played = read("eligible.txt"), read("stage_accepted.txt"), read("stage_playtested.txt")
rejected = {l.split("\t")[0] for l in open(os.path.join(AUTO, "stage_rejected.tsv"))} \
    if os.path.exists(os.path.join(AUTO, "stage_rejected.tsv")) else set()

game = {a for a, s in groups.items() if not s.startswith("Z.")}
def row(fs):
    n = len(fs)
    return [n, len(fs & compiled), sum(verified.get(a) == "PASS" for a in fs), len(fs & eligible),
            len(fs & accepted), len(fs & played)]
pct = lambda x, n: f"{100 * x / n:.0f}%" if n else "-"

out = [f"# Hobbit decompilation: staged progress", "",
       f"Updated {time.strftime('%Y-%m-%d %H:%M')} by `tools/progress.py`.", "",
       "Code is turned on **one functionality at a time, top-down**. A stage is done when the automated load checks",
       "pass AND the maintainer has play-tested its checklist. Accepted code only grows; a broken stage is split",
       "into its source files, then into single functions, and only the bad ones are left out.", "",
       "Column meanings: **compiled** = recompiled from C; **verified** = same behaviour as the original in the",
       "emulator; **eligible** = verified and no known risk; **load-tested** = running live in the game and New Game",
       "loads; **play-tested** = load-tested and played through the checklist.", "",
       "| # | Stage | functions | compiled | verified | eligible | load-tested | play-tested | status |",
       "|---|---|---|---|---|---|---|---|---|"]
tot = [0] * 6
for i, (pre, title, _) in enumerate(STAGES, 1):
    fs = {a for a in game if groups[a].startswith(pre)}
    r = row(fs)
    tot = [x + y for x, y in zip(tot, r)]
    st = ("✅ played" if r[5] and r[5] >= r[4] and r[4] else "🎮 needs play-test" if r[4] and r[4] >= r[3]
          else "🔄 in progress" if r[4] else "⏳ waiting")
    out.append(f"| {i} | {title} | {r[0]} | {r[1]} ({pct(r[1], r[0])}) | {r[2]} ({pct(r[2], r[0])}) | {r[3]} | "
               f"{r[4]} ({pct(r[4], r[0])}) | {r[5]} | {st} |")
out.append(f"| | **All game code** | **{tot[0]}** | **{tot[1]} ({pct(tot[1], tot[0])})** | **{tot[2]} ({pct(tot[2], tot[0])})** | "
           f"**{tot[3]}** | **{tot[4]} ({pct(tot[4], tot[0])})** | **{tot[5]} ({pct(tot[5], tot[0])})** | |")
crt = sum(1 for s in groups.values() if s.startswith("Z."))
out += ["", f"Not counted: {crt} functions of the Microsoft C runtime and exception-unwind stubs (a rebuilt game",
        "links its own runtime). Left out after a failed stage so far: " + str(len(rejected)) + " functions.", ""]
out += ["## Play-test checklists", "",
        "Run `Play Hobbit.bat` (dev mode on: F5 fly, F6 dev menu, F7 health, PageUp/PageDown level, Home restart).",
        "Report anything different from the original game; a crash log is written automatically.", ""]
for i, (pre, title, checks) in enumerate(STAGES, 1):
    out.append(f"### Stage {i}: {title}")
    out += [f"- [ ] {c}" for c in checks]
    out.append("")
open(os.path.join(ROOT, "PROGRESS.md"), "w", encoding="utf-8").write("\n".join(out))
print("\n".join(out[10:12 + len(STAGES) + 1]))
