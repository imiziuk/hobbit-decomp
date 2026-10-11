# Hobbit decompilation: everything we know (2026-10-11)

## 1. The goal and the setup
- Goal: C/C++ source for *The Hobbit* (2003, PC) `Meridian.exe` that recompiles into a working game.
- Binary: 32-bit x86, MSVC 6 (cl 12.00), image base 0x00400000, `__thiscall` (this = ECX). 15,891 functions
  found by Ghidra: **8,524 game code** + 7,367 Microsoft C runtime / exception-unwind stubs (never replaced).
- How replacement works: our code is built as a proxy `dinput8.dll`. At startup it writes a 5-byte JMP at each
  original function's address to our C version (through a thunk that copies arguments and preserves registers).
  Every function can be switched off by name or address range in `hooks_disabled.txt` (`auto` = all generated
  ones off = original game).
- Game folder: `The.Hobbit.-.Clean/The Hobbit - Clean/`, launch with `Play Hobbit.bat`. Mode files there:
  `devmode.txt` (dev keys), `shadow.txt` (shadow mode), `autotest.txt` (scripted test run); `.off` = disabled.
- Private backup: https://github.com/imiziuk/hobbit-decomp (`python Hobbit-Decomp/tools/backup_repo.py --push`).

## 2. Pipeline (Ghidra -> C -> compiled -> verified -> live)
1. Ghidra 11.3.2 headless on a copy of the project: `EnableParamID` (full re-analysis) + `ApplyProtoFixes`
   (prototype fixes from binary facts) + `ExportDecompUnits` -> one JSON per function (`Hobbit-RE/db/units5`).
2. `ghidra2c.py` turns each into a standalone C unit (wrappers that call original callees by address).
3. `build_units.py` compiles each with MSVC (x86); `cmake` builds the DLL.
4. `equiv.py`: Unicorn emulator runs original vs ours on 30 random states, compares memory writes, return
   values, every call made (target + arguments + ECX), stack cleanup (ESP), EBX/ESI/EDI/EBP, x87 depth, DF.
5. Shadow mode (`shadow.txt`): the ORIGINAL game runs; at each call of a probed function ours is run in the
   emulator on the real state and compared. Results stored as evidence keyed by a hash of our source
   (`auto/shadow_evidence/`), so a result only counts for exactly the code it measured.
6. `gen_registry.py` decides what is registered/live (all exclusion rules below), writes `auto/eligible.txt`.

## 3. Numbers right now
| | functions | % of 8,524 game functions |
|---|---|---|
| recompiled to C (compile OK) | 7,887 | 93% |
| emulator PASS / FAIL / undecided | 6,229 / 1,519 / 788 | 73% pass |
| eligible (all checks + exclusion lists) | 4,069 | 48% |
| eligible incl. real-data evidence rule | 2,129 | 25% |
| shadow (real game data) PASS / FAIL | 2,956 / 508 | |
| accepted = live in staged build | 448 | 5% |
| play-tested by the maintainer | 264 | 3% |

Per stage (functions / live / play-tested): 1 Game loop 214/125/128 ✅ · 2 Levels 185/130/136 ✅ ·
3 Bilbo 482/193/in progress · 4 Camera 196 · 5 Cinematics 385 · 6 NPCs & AI 2,019 · 7 Objects 1,082 ·
8 Physics 545 · 9 Animation 173 · 10 Rendering 776 · 11 Audio 644 · 12 UI 623 · 13 Engine base 1,150.

## 4. Functional map (auto/groups.tsv, tools/group_map.py)
Every function -> subsystem / source file / class / call depth. Evidence: 84 leaked .cpp names with address
ranges (Bilbo.cpp, BilboCombatState.cpp, CameraMgr.cpp, SpatialDBase.cpp, RenderMgr.cpp, x_string.cpp...),
`class__Method` names from profiler labels (578 auto-named), ~100 game classes with factories
(class_registry.txt), vtables (a virtual method belongs to the most basic vtable containing it), "between two
anchors of the same file" (MSVC links one .obj after another), call-graph vote, nearest anchor.

## 5. Every bug class found, and the rule/tool that now catches it
| # | Bug class | Example | Caught by |
|---|---|---|---|
| 1 | Void function ending in a tail jump returns the callee's EAX | 004a5760 (NPC anim handle) | generator TAIL map (`int __tail`) |
| 2 | Wrong stack cleanup (Ghidra missed a param written but never read) | 0046aaf0 (ret 4 via tail target) | `abi_exclude.py`, equiv ESP check |
| 3 | Callee typed thiscall but takes stack args (ECX unused) | CRT char test 006c1327 in 00555d00 | `callee_audit.py`, Ghidra prototype fix |
| 4 | Callee cleans more bytes than we push / dropped `this` | 004b83e0 -> 00659c80 (ret 8 via tail) | `callee_audit.py`, equiv real-input stubs |
| 5 | Callee unused trailing param dropped by Ghidra | 006405e0 pops 8, reads 4 | `callee_audit.py` pops |
| 6 | Float return typed void / not typed float | 00422460 bilbo_GetVigor, 0044cb00 | equiv x87 TOP, `st0_users.py`, shadow |
| 7 | Stack area passed by address, Ghidra split it into variables | 004c71a0, 00541cc0 | `&stack0x` rule in gen_registry |
| 8 | Variadic call lost its extra arguments | globals__OnImport "Ambient_%d" -> red/dark lighting | `vararg_check.py` |
| 9 | Stale safety lists after regeneration | (8) slipped through | `refresh_lists.sh` + gen_registry refuses stale lists |
| 10 | Thunk restored caller's EAX on void functions that pass a value through | 00556740 (operator new) -> level-create crash | `Ret::VoidPass` + `eax_untouched.py` |
| 11 | Real-data shadow PASS overriding an emulator FAIL | 00429030 vector rotate -> sdbase endless loop | equiv FAIL is never overridden |
| 12 | Emulator PASS only on easy paths (gameplay states) | 00437b60 (936 bytes wrong), 00428aa0 | gameplay stages need a shadow PASS |
| 13 | Register helpers with hidden inputs (__ftol ST0, __allshl EDX:EAX) | FUN_005c90f0 | REG_HELPER rule |
| 14 | Stale repaired variants after a new export | link errors | build_units signature check |
| 15 | Callee signature cache from an old export | | equiv cache keyed to export |
Also: "5% baseline crash" was our code (all-off loads 10/10); single-culprit bisect is useless for
interaction crashes; crash signatures first, then static audits (ChatGPT review, same chat link in HANDOFF).

## 6. Play-test results (auto/playtest_notes.md)
- Stage 1 (game loop): smooth; lighting glitch (red/dark interactive objects; save+load fixed it) = class 8. Fixed.
- Stage 1b+2 (levels): crash on creating a new level = class 10 (00556740). Fixed. Then all OK.
- Stage 3 (Bilbo) #1: empty world in first cutscene (now gone), combat stutter, jump -> freeze, fly -> camera
  flies off + freeze with sound loop = class 11 (00429030). Fixed.
- Stage 3 #2: combat/fly/camera OK. Long jump loop, mushrooms not picked up, rope crash, ladder -> teleport to
  0,0,0, victory melody freeze. Shadow session: 00437b60, 0044cb00, 00428aa0 fail on real data. Excluded.
- Stage 3 #3: crash when an enemy gets up after a knockdown; 54 functions ran without real-data evidence ->
  evidence rule; 448 live, 79 waiting for evidence.

## 7. Test tools
- `load_check.py`: automated New Game load (autotest script), `play=True` = play script (walk, jump, double
  jump, attack, fly via `devkey FLYON`, land). Ctrl+Alt+P pauses everything (folder restored).
- `stage_all.py` / `group_stage.py`: staged enabling (subsystem -> source files -> bisect), accepted list grows.
- `shadow_load.py`: automated shadow run of the load. `session_report.py`: crash/hang per session with names.
- `crash_signatures.py`, `auto_culprit.py`, `load_bisect.py`, `load_ddmin.py`, `progress.py` (PROGRESS.md).
- Dev mode keys: F5 fly, F6 or ` dev menu, F7 health, PageUp/PageDown level, Home restart.

## 8. Game knowledge (Hobbit-RE-notes.md, annotations.tsv)
- Main loop: Game_RunLevel 0x004fd7c0 -> Game_LevelLoop 0x004fee90 (while 0x00760354) -> Game_ProcessInput,
  Game_RunLogic 0x004ff9f0 -> logic_mgr__Execute 0x00557890 -> SingleStep 0x00557a00 -> obj_mgr__AdvanceAll
  0x0054c2e0 (every object's vtable+0x10 OnAdvanceLogic(dt)), level script via g_pCurrentLevel 0x0075fc00.
- Bilbo: vtable 0x006e9818, ctor 0x0041c2f0, size 0x5f68, g_pBilbo 0x0075ba3c, OnAdvanceLogic 0x0041e360,
  108 state handlers, health = inventory item 4 (g_BilboInventory 0x0075BBE0, counts at +0x1cc), yaw +0x474,
  input block +0x600, hard-coded GUID 0xABCABCABCABCABC0 (36 sites).
- Objects: every object has a 64-bit GUID at +0x08, hash table at g_ObjMgr 0x0076cd88, class table
  0x0076f908 (70 classes), create by name 0x0054b7c0; spawn recipe from Bilbo's weapon props 0x0041cbd0.
- Dev code still in the exe: dev flag 0x007600E8, SysMenu 0x00500ae0, fly flag 0x00720F84, next level 0x00762B5C.
- Profiler scopes: Profile_PushScope 0x00649600 / PopScope 0x00649720 ("class::Method" labels).
- Freeze hotspot: sdbase__TraverseCells 0x0058a630 loops forever on garbage vectors (spatial database).

## 9. Next steps
1. Stage 3 play-test of the 448 set (combat: knockdowns/get-ups, training part 1, long jump, rope, ladder,
   mushrooms, push blocks, swimming).
2. Shadow play session (normal play, long) -> evidence for the 79 held back and later stages.
3. Stages 4-13 the same way; then recover excluded classes in the generator (stack areas, float returns,
   varargs) so more functions qualify.
