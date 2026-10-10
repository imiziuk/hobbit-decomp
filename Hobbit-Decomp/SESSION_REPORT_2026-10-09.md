# Hobbit-Decomp — session report (2026-10-08 evening → 2026-10-09 12:30)

Read this first, then `HANDOFF.md` (full history) and `README.md` (how the DLL works).

## Where we are (numbers)
| | |
|---|---|
| Real game functions (Ghidra export below 0x6A0000, unwind stubs/CRT excluded) | **8,392** |
| Compile as C (generator `tools/ghidra2c.py` + `tools/build_units.py`) | **~7,900 (94%)**; 8,590 incl. CRT |
| Emulator-equivalent on random state (`tools/equiv.py`, last full run before the tail fix) | 6,410 PASS / 1,236 FAIL / 880 INCONCLUSIVE of 8,526 |
| Shadow-verified on REAL game data (3 the maintainer play sessions, `auto/shadow_merged.tsv`) | 2,822 PASS / 327 FAIL |
| Live in the game, play-verified by the maintainer | 685 (batch 1); last playable full build 901 |
| Current registry live set | ~2,087 (NOT yet confirmed to load: see "Open") |

A full `equiv.py` run on the newest DLL (tail-call fix, 8,588 units) was RUNNING at idle priority
(`auto/equiv_regen.log`, ~4,900 done at 12:00). If the session ended, re-run it (it resumes per DLL build).

## Tools built this session (all in `tools/` or `src/core/`)
- **Shadow tester** `src/core/shadow.cpp` (+ `third_party/unicorn`, 32-bit Unicorn 2.1.4 built from source):
  `shadow.txt` in the game folder → no replacements; INT3 on every registered function; at a hit, original vs ours
  run in in-process Unicorn on lazily copied LIVE memory; compares EAX/EDX/ST0, ESP, callee-saved regs, x87 stack
  depth, all writes outside the frame. Report `shadow_results.tsv`; failure capsules `shadow_fail/<addr>.txt+.bin`.
  `shadow.txt` options: `samples N`, `only <addr>`. Helpers: `shadow_merge.py`, `shadow_report.py`, `shadow_explain.py`
  (maps a difference to the line of OUR C that wrote it).
- **Dev mode** `src/core/devmode.cpp` (`devmode.txt`): Meridian's own developer flag 0x7600E8 + hotkeys
  F5 fly, F6 dev SysMenu (level jumps, cheats), F7 health, PgUp/PgDn level (waits for cutscene/loading), Home.
- **Autotest** `src/core/autotest.cpp` (`autotest.txt`): input injection (DirectInput + fake GetCursorPos; the menu
  is MOUSE driven: `cursor 310 320` + `mclick 0` = New Game; `key RETURN` skips the pre-load intro — safe per the maintainer;
  do NOT skip the in-level cutscene early, it can crash the original), probes of Bilbo state.
- **Load check / bisect without a human**: `tools/load_check.py` (New Game → Bilbo → 20 s → quit; LOADED/CRASH),
  `tools/load_bisect.py <suspects> [--tries N] [--known a,b]` (fixed: found culprits stay disabled; sanity check).
  The idle-menu demo is NOT a reliable test. `tools/startup_bisect.py` is the older menu-only version.
- **Brute-force repair** `tools/repair.py` (the maintainer's idea): educated-guess variants verified by equiv; confirmed variants
  kept in `auto/repaired_src/` (build_units prefers them). Done: varargs 358, voidret 116.
- Generator passes: `frame_layout.py` (stack locals + stack0x at original offsets), `float_globals.py`,
  `hidden_regs.py` (in_/unaff_/extraout_; thunks record caller regs in `__entry_*`; original call frame via
  `_AddressOfReturnAddress()+20+__NARGS`), `indirect_calls.py` + `src/core/callsafe.cpp` (`__callsafe`: any
  indirect call, restores ESP itself), `fix_casts.py` (compiler-guided pointer<->float bit casts), tail-call fix.
- Checkers: `st0_users.py`, `vararg_check.py`, `stack_balance.py`, `callee_balance.py`, `last_crash.py`, `cc_one.py`.
- `tools/rebuild_all.sh [--equiv]` = ghidra2c → build_units → gen_registry → DLL (→ equiv).

## Bug classes found and how they are handled
Generator fixes: FUN_ addresses as values, `undefined` returns truncating EAX, split stack objects, float-typed
guessed globals, Ghidra type names, stack0x refs, callee prototypes from each callee's own signature (+ arity
check vs call sites), `void *this` dereferenced, hidden registers, indirect calls, pointer/float casts, odd-size
partial writes, SEH lines with embedded `ExceptionList` (used to DELETE code in 51 units), labels before `}`,
**void functions ending in a tail jump return the callee's EAX** (root cause of the New Game SetAnim crash:
004a5760 `mov ecx,[ecx+0x304]; jmp 00592190` returned an animation handle; 514 units fixed).
Excluded (gen_registry layers): register-arg MSVC helpers (__ftol/__allshl...), void-but-returns EAX/ST0 not yet
repaired, dropped varargs not repaired, shadow FAILs, `auto/crash_blacklist.txt`.
Rule: a shadow PASS only counts if the unit's source is unchanged since it was tested (`auto/shadow_tested_src`,
compare ignoring CRLF).

## Open problems / next steps (in order)
1. Finish the full equiv run on the newest DLL; `python tools/gen_registry.py`; rebuild DLL.
2. `tools/load_check.py` ×3 on the new live set (needs ~5 min of the test machine; coordinate first).
   If it crashes: `tools/load_bisect.py auto/live_unverified.txt --known 004a6780,00529100,00555900,00555ab0`.
3. Blacklisted culprits: 004a6780 + 00555900 pass shadow alone (12/12) → interaction bug: bisect COMBINATIONS
   (enable one of them + halves of the rest). 00555ab0: callee 006c1327 is a cdecl CRT char test (reads [esp+4])
   mistyped `__thiscall(void *this)` by ApplyProtoFixes → class fix: such callees = cdecl, take call-site args from
   `decomp_hl`. 00529100 never ran in the targeted test.
4. Diagnose the 54 FAILs of the last shadow load run (`auto/shadow_results_load_all.tsv`, capsules in
   `auto/capsules_load_all/`) with `tools/shadow_explain.py`.
5. Ask the maintainer for a shadow play session (`shadow.txt` + `devmode.txt`, hop levels with F6) to re-verify the ~1,700
   new/changed units on real data. Then promote.
6. Remaining compile failures (~90) and conversion skips (~600: x87 inputs, unaff_EBP edge cases, bad decompile).
7. Emulator gaps: stub EnterCriticalSection/RtlAllocateHeap/GetCurrentThreadId in shadow mode (~1,000 INCOMPLETE).

## Testing policy
- He does gameplay tests; Claude may launch the game only for start/load checks — and must ASK before using the
  test machine. Never leave `autotest.txt`/`shadow.txt` active; game folder default = `hooks_disabled.txt: auto`,
  `devmode.txt` (currently renamed `.off` for tests — rename back when he wants to play with dev keys).
- Keep replies short; he likes tables and plain status.
