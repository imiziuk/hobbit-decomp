# The Hobbit (2003, PC) — recompilable decompilation: handoff package

Goal: turn `Meridian.exe` (The Hobbit, Sierra/Inevitable, 2003, PC, MSVC6) into C source that compiles and behaves
exactly like the original — every game function replaced by compiled C, verified against the original machine code.

## What is NOT in this zip
- **The game.** `Meridian.exe` and its data are copyrighted: you need your own copy of The Hobbit (PC, 2003).
  Put it in `The.Hobbit.-.Clean/The Hobbit - Clean/` next to `Hobbit-Decomp/` (tools find it there), or adjust the
  paths at the top of the tools.
- Regenerable build output (`build/`, `auto/ok`, `auto/units`, `auto/obj`) and the Python venv.

## Read in this order
1. `Hobbit-Decomp/SESSION_REPORT_2026-10-09.md` — current state, numbers, every tool, open problems, next steps.
2. `Hobbit-Decomp/README.md` — how the proxy `dinput8.dll` swaps original functions for compiled ones.
3. `Hobbit-Decomp/HANDOFF.md` — full chronological log (long; bug classes and lessons are all in there).
4. `Hobbit-RE-notes.md` — reverse-engineering notes (Bilbo struct, state machine, globals, object manager).

## State in one paragraph
Ghidra export of 9,227 functions (8,392 game/engine + 835 C runtime). An automatic generator (`tools/ghidra2c.py`
+ passes) turns Ghidra's C into compilable C: **~7,900 of 8,392 game functions (94%) compile** and all link into one
DLL. An emulator (`tools/equiv.py`, Unicorn) compares each against the original on random state: 6,386 PASS /
1,312 FAIL / 890 INCONCLUSIVE. A **shadow tester** (`src/core/shadow.cpp`) compares original vs ours on REAL game
state while the original game runs: 2,822 PASS on real data from play sessions. Functions proven both ways are
swapped in live; ~2,000 run live. Known open issues and the exact next steps are in the session report.

## Requirements
- Windows, Visual Studio 2022/2026 with C++ x86 (cmake), Python 3.12+.
- Python venv in `Hobbit-Decomp/tools/.venv` with `pefile capstone unicorn` (64-bit Python is fine for the tools).
- Ghidra 11.3.2 only if you want to re-export (`Hobbit-RE/db/units2/*.json` is the current export, included).
- 32-bit `unicorn.dll` (built from Unicorn 2.1.4 source, included in `third_party/unicorn/bin`) goes next to
  `Meridian.exe` for shadow mode.

## Rebuild everything
```
cd Hobbit-Decomp
cmake -S . -B build -A Win32
sh tools/rebuild_all.sh --equiv      # ghidra2c -> compile units -> registry -> DLL -> emulator check
copy build\Release\dinput8.dll  "<game folder>"
```
Game-folder switch files: `hooks_disabled.txt` (`auto` = pure original), `shadow.txt` (shadow testing),
`devmode.txt` (developer hotkeys: F5 fly, F6 dev menu, PgUp/PgDn level), `autotest.txt` (scripted input; used by
`tools/load_check.py` / `tools/load_bisect.py` for New Game load checks without a human).

## Ground rules that cost us the most time (learn from them)
- Ghidra's `void` lies: functions often return EAX (pass-through, tail `jmp`) or ST0. Check the machine code.
- A shadow PASS only counts for the exact source that was tested (`auto/shadow_tested_src`).
- Any bisect must keep found culprits disabled and sanity-check every round.
- Prototypes from Ghidra's database can be stale; ApplyProtoFixes mistyped some CRT functions (`__thiscall` that
  really read [esp+4]) — see session report, open problem 3.
