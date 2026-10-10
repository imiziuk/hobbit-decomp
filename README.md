# The Hobbit (2003, PC): functional decompilation

Goal: C/C++ source for `Meridian.exe` that recompiles into a working game, built one verified function at a time.
No game files are in this repository; you need your own copy of the game.

| Folder | Contents |
|---|---|
| `Hobbit-Decomp/` | The project: proxy `dinput8.dll` (hook infrastructure, hand-written + generated functions), the Ghidra→C→MSVC pipeline, the Unicorn equivalence tester, shadow (real-data A/B) testing and the automated load check. Start with `Hobbit-Decomp/README.md`, then `HANDOFF.md` and the latest `SESSION_REPORT_*.md`. |
| `Hobbit-Decomp/auto/` | Generated units (`units/`), units that compile (`ok/`), verified repairs, test results (`verified.tsv`, shadow results), live/blacklist sets. |
| `Hobbit-RE/db/` | Ghidra exports: high-level decompilation (`decomp_hl/`), per-function units (`units2/`), C header export (`cexport2/`), catalog, call graph, vtables. |
| `Hobbit-RE/scripts/` | Ghidra scripts (export, prototype fixes, vtable functions) and analysis/annotation tools. |
| `Hobbit-RE-notes.md`, `Hobbit-RE/annotations.tsv` | Reverse-engineering notes: names, addresses, structure offsets. |

Expected layout on disk: this folder next to the game install `The.Hobbit.-.Clean/The Hobbit - Clean/`
(the tools use relative paths).
