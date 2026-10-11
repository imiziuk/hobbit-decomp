# Hobbit-Decomp — handoff (end of session, 2026-10-08 ~15:45)

Goal: recompilable decompilation of Meridian.exe (The Hobbit 2003). NOT a multiplayer mod.

## How it works (see README.md)
- `build/Release/dinput8.dll` goes next to Meridian.exe; it swaps original functions for ours via
  5-byte JMP -> generated thunk (saves EAX/ECX/EDX, restores non-return regs, counts calls).
- Launch the game ONLY via `The Hobbit - Clean/Play Hobbit.bat` (game needs its own folder as the
  working dir; started elsewhere it hangs with no window — that was NOT our bug).
- `hooks_disabled.txt` in the game folder: function names, `auto` (= all generated AUTO_*), or
  address ranges `lo-hi`. **Currently contains `auto`** so the game is playable for the maintainer.
- Logs: `hobbit_decomp.log` (game folder): replacements, crash (first access violation + stack),
  watchdog every 2 s (main EIP/stack/busiest functions; "ran-so-far" list at tick 10), call counts
  on menu-quit or crash.

## Automatic pipeline (tools/)
ghidra2c.py (Ghidra units JSON -> C) -> build_units.py -> cmake build -> equiv.py (Unicorn: original
vs ours on random state) -> gen_registry.py -> build. `pipeline.py [--resume]` runs it all.
Units come from `Hobbit-RE/db/units2/` (Ghidra headless on a COPY of the project in the scratchpad,
after ApplyProtoFixes). Results: 7,730 converted, 6,900 compiled, 5,367 PASS / 979 FAIL / 554 inc.

## Exclusion layers in gen_registry.py (why functions are NOT registered)
1. not PASS in auto/verified.tsv   2. JMP doesn't fit   3. auto/crash_blacklist.txt
4. >= 0x6A0000 (C runtime)          5. 0x63D000-0x6A0000 (engine base lib: parsers, x_string, files)
6. auto/void_but_returns.txt (767: Ghidra says void but EAX is used — tools/eax_users.py)
7. auto/allow.txt if present (currently: menu-proven set, 364 functions)

## Bugs found and fixed this session (lessons)
- MSVC6 relied on same-file callees preserving ECX -> register-saving thunks.
- Unicorn TB cache: rewrite stub = stale code -> fresh slot + ctl_remove_cache.
- Write hook fires before page mapping -> map in write hook. x87 operands skip unmapped hook.
- `long long` returns misclassified int32 -> thunk restored EDX, wiped GUID high halves -> hang.
- Ghidra void that really returns EAX (767) -> excluded; the EIP=0x50 startup crash.
- Stack-frame attribution above a game-code crash is UNRELIABLE (stale DLL addresses on the stack);
  only "crash address inside our function" is certain.

## STATE RIGHT NOW
- the maintainer's tests: with **only infrastructure + 26 hand-written** functions the game loads a level and
  plays fine (auto/play_baseline_handwritten.log, no crash).
- With the stable set (364 menu-proven generated + 26) it crashes at level load:
  ACCESS VIOLATION at 0x00558622 reading 0xFF93F7E3 (same crash as with 3,000+ functions).
  -> the culprit is among the 364 functions in auto/allow.txt (they ran fine in the menu, but
  misbehave once loading starts).

## NEXT STEPS (agreed plan = "option 2")
1. Find the culprit(s) in the 364: halve auto/allow.txt via hooks_disabled.txt ranges, the maintainer clicks
   New Game each round (~8 rounds). Or smarter: compare call counts of the baseline play log vs the
   crash log to see which of the 364 run during loading.
2. Build a RECORDING mode: observe ORIGINAL functions during real play (entry: ECX/EDX/stack args +
   memory snapshots around pointer args; exit: EAX/EDX/ST0) so equiv.py can replay REAL states
   instead of random memory. the maintainer then plays ~10 min once to record. An external review agreed:
3. Re-test the ~2,800 held-back functions against recordings, add back in batches.
4. Re-type the 767 void-but-returns functions in Ghidra (ApplyProtoFixes with return types) and regenerate.
5. Auto-start a new game without clicks: RunFrontEnd 0x004FE3E0 loops while FUN_0052AC00 (fastcall,
   checks game-flow this+0x80 or input action 2) == 0; forcing it crashes — need what "New Game"
   sets (game-flow object fields +0x78/+0x7c/+0x704/+0x708/+0x70c via 0x52a640..0x52ac80).
   src/core/autostart.cpp exists (env HOBBIT_AUTOSTART=1), not working yet.

## UPDATE 2026-10-08 ~16:00 — likely culprit of the 0x558622 crash found (by analysis, not bisect)
- Crash is in FUN_00558610 (material compare) called from material_mgr__RegisterMaterial 0x5543c0, which
  gets its slot from FUN_005c90f0 (bitmap slot allocator, in allow.txt). Its generated C calls
  `__allshl((byte)count, 0)` but MSVC's __allshl takes the VALUE in EDX:EAX (+count in CL): EAX = garbage
  -> wrong bits cleared -> bad slots -> garbage page pointer.
- Same bug class: `__ftol()` (input in x87 ST0, 153 units!), __allshr, __aullshr. Ghidra doesn't model
  these register inputs. New exclusion layer 8 in gen_registry.py (174 units; 4 were in allow.txt:
  004f8d60, 004f8d90, 005c90f0, 005c9290). Rebuilt + deployed: 360 registered. Not yet play-tested.
- Proper fix TODO: ApplyProtoFixes custom storage (__ftol: float10 in ST0; __allshl/__allshr/__aullshr:
  longlong in EDX:EAX + byte in CL), re-export units, regenerate; or have ghidra2c emit native C
  (`v << n`, `(long long)x`) once the inputs are visible.
- Play test (the maintainer): level loads + plays with 360 functions. Exit-to-menu crashed (EIP=0x8B).
  Bisect over 47 teardown functions (auto/teardown_suspects.txt) -> AUTO_00436d00: the generator emitted
  `#define FUN_00649ba0 (*(undefined*)0x00649ba0)`, so a destructor passed as a VALUE became the first
  code byte (0x8B). Fixed in ghidra2c.global_define (FUN_/LAB_ -> function designator, X and &X both =
  address) and patched 341 existing units in auto/{units,ok,trial}. Rebuilt + deployed, hooks_disabled empty.
- Batch 1 (+300 funcs, 0x401000-0x44d500; allow.txt = auto/allow_stable360.txt + pool_new.txt[:300]; pool_new = 2,733 candidates):
  crashed in Bilbo logic. Bisect -> AUTO_00446ed0, then AUTO_00447c60 (crash inside our code). Two new generator bug classes:
  (a) Ghidra splits stack objects (vec3 -> `undefined1 local_28[4]` + `fStack_24`); callee writes overflow our
      frame. Fix: tools/frame_layout.py puts all stack locals in one `_frame[]` at original offsets (2,070 units).
  (b) callee return type `undefined` = unsigned char in C -> EAX truncated (-1 -> 255). Fix: fix_ret() -> undefined4
      (12,449 files patched). Both hooked into ghidra2c.
  With fixes: 660 functions, level loads and plays (Claude-run test). Exit-to-menu not yet tested.
- the maintainer allowed Claude to launch the game itself. On launch it goes straight to loading Troll-Hole (no clicks).
  tools/gamepilot.ps1 = screenshot + SendInput keys, but the game loses focus when the maintainer uses the test machine.
- New checkers: tools/stack_balance.py (our pop vs original ret N), tools/callee_balance.py (wrapper pops vs callee ret N): both 0 mismatches.
- the maintainer's play test of batch 1: no weapon switching / stones, stick pickup not counted (can't leave house),
  death screen never ends. Cause: Inventory_GetCountByName 0x434cd0 typed void but returns the count in x87 ST0
  (pass-through). New tools/st0_users.py -> auto/void_but_returns_st0.txt (21 units), excluded in gen_registry.
  659 registered, deployed; awaiting the maintainer's re-test.
- Weapons/death still broken after the ST0 fix. Behavior bisect: weapons bug in pool_new[150:225], death in [225:300]
  (bilbo::DEATH_OnUpdate 0x440ec0: guessed `undefined4` global timer compared with 1.0f -> int conversion, never equal).
  Fix: tools/float_globals.py retypes GUESSED globals used in float context (NAN(), float operands) -> 447 units; hooked
  into ghidra2c. Fixed BOTH bugs. **Batch 1 VERIFIED by the maintainer (stick pickup, weapon switch, stones, death respawn):
  685 live functions.** auto/allow.txt = stable360 + pool_new[:300].
- Batch 2 (pool_new[300:600], 0x44d5b0-0x48bb40): first level fine, crash loading a NEW GAME in CRT string code.
  Cause: variadic x_string formatter 0x649920 called with its %s argument dropped (AUTO_00475dc0). New
  tools/vararg_check.py: 190 variadic funcs (&stack0x va_list), 585 units drop args vs decomp_hl ->
  auto/vararg_dropped.txt, excluded in gen_registry (57 in set, 14 of them from the verified 660). 901 registered.
- src/core/autotest.cpp: dormant test driver (only if autotest.txt exists): DI keyboard/mouse injection, fake
  GetCursorPos (IAT 0x6E9208), window kept "active", probes (g_pBilbo pos/state/hp/weapon) every 500 ms. Menu is
  MOUSE driven: `cursor 310 320` + `mclick 0` = New Game; intro cutscene ~95 s, not skippable. Verified: batch 2
  (927 live) New Game loads Bag End, no crash. Agreed with the maintainer: gameplay tests are manual, Claude only load checks.

## SHADOW TESTER (2026-10-08 evening) — read this first next time
- src/core/shadow.cpp: shadow.txt in the game folder = no replacements; INT3 on every registered function; on a hit
  runs ORIGINAL vs OURS in in-process Unicorn (third_party/unicorn, 32-bit 2.1.4 built from source, unicorn.dll next
  to the exe) on lazily copied live memory, compares EAX/EDX/ST0/ESP/callee-saved/x87 TOP + all writes outside the
  callee's frame. Report: shadow_results.tsv. `samples N`, `only <addr>` lines. tools/shadow_report.py summarizes.
- gen_registry registers ALL 6,326 compiled units; `live` flag = installed in normal play. Shadow PASS (>=2 samples)
  promotes (auto/shadow_promote.txt), shadow FAIL excludes (auto/shadow_fail.txt).
- the maintainer's play session (auto/shadow_results_play1.tsv): 2,449 PASS / 182 FAIL / 1,305 INCOMPLETE (mostly
  EnterCriticalSection, RtlAllocateHeap, GetCurrentThreadId -> TODO: stub these in the emulator).
- Tester blind spots found + fixed: 32-byte margin above args hid out-pointer writes; void functions that return EAX
  (void_but_returns.txt was STALE: rebuilt from returns_eax.txt, +71); x87 stack depth not compared (5 live fails).
- OPEN: build with 1,906 live crashes ~14-60 s after start (idle-menu demo level load): PhysController::SetAnim
  0x592ae0 -> rsc_mgr::LockRHandle with garbage handle. Pure original never crashes. Crash is timing-dependent;
  single-try bisect blamed 004a4c80 wrongly (identical code). tools/startup_bisect.py --tries 3 was started, stopped
  by the maintainer. Next: find the blind spot (likely composition / unsampled paths), or bisect with --tries 3.
- Game folder currently has the 1,906 build (crashes). Last playable: 901 live (batch 2) build.
- tools/last_crash.py maps the last crash to function names.

## IN PROGRESS: brute-force repair of held-back bug classes (started 2026-10-08 night)
Idea (the maintainer's): per broken unit generate educated-guess variants -> compile -> equiv.py vs original -> keep the
one that passes; none pass -> stays original. Order:
1. varargs dropped (585): copy the full call argument list from decomp_hl (plain Ghidra output).
2. void-but-returns-EAX (~830): try `return <last call>` / `return <last assigned var>` / `return this`.
3. __ftol() lost input (153): pass the float computed just before.  4. __allshl lost value (20): `1 << n` first.
5. void-but-returns-ST0 (21): return last float10.
Tool: tools/repair.py (writes auto/repaired/<addr>.c + auto/repair.log). Then shadow play session verifies on real data.
- DONE: varargs repair -> 358 PASS (auto/repaired.tsv; gen_registry subtracts them from the exclusion).
- DONE: failure capsules: shadow mode writes shadow_fail/<addr>.txt (verdict, regs, all diffs, ordered write logs
  with EIP) + .bin (input pages). tools/shadow_explain.py maps each final difference to the line of OUR C that
  wrote it (recompiles the unit with /FAsc). First finding: float/int mix-ups come from locals typed `float`
  that are COPIED into int fields (`param_1[0xb] = local_30;` converts instead of copying bits; e.g. 00493980).
  -> next repair class: keep such locals as raw bits (undefined4 + hex constants), verify with equiv.
- Next repair class 2 (void-returns-EAX): capsules show the right answer, e.g. 00401f00 returns ECX (`this`).
- DEV MODE (src/core/devmode.cpp, active if devmode.txt in game folder): sets dev flag 0x7600E8 (unlocks the
  shipped developer SysMenu FUN_00500ae0: level jumps, Exit Level, EnableFlyMode, Invulnerability, cheats).
  Hotkeys: F5 fly (0x720F84 + Bilbo+0x364), F6 SysMenu (0x75FB98=1), F7 health, PgUp/PgDn level (0x762B5C +
  0x760354=0), Home restart level. Game folder set to hooks_disabled=auto (pure original) for the maintainer's testing.
- Play session 2 (shadow + devmode, most mechanics): auto/shadow_results_play2.tsv, capsules in auto/capsules_play2/.
  Merged (tools/shadow_merge.py play1+play2 -> auto/shadow_merged.tsv): PASS 2,604 / FAIL 308 / INCOMPLETE 1,452 /
  NEVER 1,988. FAIL kinds: 127 memory (float/int etc.), 75 eax (73 = void-returns-EAX, repair class 2 with the
  right answer in capsules), 46 x87 stack depth, 27 our crash, 10 external, 9 timeout, 8 st0, 5 esp.
- Game folder: shadow off, devmode on, hooks_disabled=auto (pure original).
- Play session 3 (level hopping via F6 dev menu): auto/shadow_results_play3.tsv, capsules auto/capsules_play3/.
  Merged play1-3: PASS 2,822 / FAIL 327 / INCOMPLETE 1,564 / NEVER 1,639. Repairs so far: varargs 358 + voidret 116.
  Registry with all checks: 2,169 live (not deployed; game folder = pure original + devmode).

## 2026-10-09 early: "make the rest compilable" (automated session)
Generator rounds (units2 export, `ghidra2c.py` + `build_units.py`): compiled 6,900 -> **8,406** (of 8,618 converted;
7,751 of 8,392 below 0x6A0000). DLL links with all of them. Changes:
- callee prototypes from each function's OWN decompiled signature (INDEX), default cc inferred from ret N, arity
  checked against call sites (fallback: call-site arity as undefined4 args).
- `void *this` that the body dereferences -> `undefined4 *this`; function both called and used as value ->
  `FUN_x__call` wrapper + `((void*)0x..)` value macro; `&FUN_x` -> `FUN_x`.
- tools/frame_layout.py also maps `stack0xNNNNNNNN` (negative: frame slot, positive: argument address).
- tools/hidden_regs.py: in_/unaff_ EAX..EDI read-before-write -> `__asm mov`; extraout_ECX/EDX/EAX/var -> every
  wrapper saves EAX/ECX/EDX after its call (`__rx_*`). unaff_EBP/retaddr/ST0/FPU still skipped.
- tools/indirect_calls.py + src/core/callsafe.cpp: any `(code*)` call -> `__callsafe(fn, ecx, n, words...)`, a naked
  asm helper that restores ESP itself (calling convention irrelevant). `__W()` = one 32-bit word per arg.
- tools/fix_casts.py: compiler-guided (/diagnostics:column) pointer<->float casts -> `__p2f` / `__f2p` bit casts.
- ghidra_compat.h: pointer/int3/uint3/undefined3/sbyte typedefs, builtin_memcpy/memset/strncpy.
- auto/repaired_src/: equiv-confirmed repair variants; build_units.py prefers them on every rebuild.
- Snapshot of the pre-regen state: auto/auto_ok_snapshot.tar, auto/verified_before_regen.tsv.
- RUNNING: equiv.py --auto --trials 30 on everything (auto/equiv_regen.log) -> then gen_registry, then shadow session.
- 2026-10-09 ~05:00: full equiv on the regenerated set (8,526 units): PASS 6,410 / FAIL 1,236 / INCONCLUSIVE 880
  (auto/verified.tsv is FRESH now; old one in auto/verified_before_regen.tsv).
- Shadow results only count for unchanged code: auto/shadow_tested_src/auto/ok = sources of the build the maintainer played;
  218 units really changed since (auto/changed_since_shadow.txt; ignore CRLF differences!).
- tools/load_check.py = New Game load check without a human (autotest clicks New Game, waits for Bilbo, 20 s, quit);
  tools/load_bisect.py [--tries N] bisects level-load crashes with it. The idle-menu demo is NOT a reliable test.
- OPEN: live set (2,263) crashes ~50% of New Game loads: PhysController::SetAnim -> rsc_mgr::LockRHandle with a
  garbage handle (ESI=C1A00000 = -20.0f: a float where a handle should be?). Bisecting the 271 live unverified
  units in 0x540000-0x5A0000 (auto/suspects_anim.txt, --tries 3). Earlier bisect found 00476670 (equiv FAIL,
  was live only because verified.tsv was stale) and 004a5760.
- An external code review flagged that __asm-reading registers at function start
  is unreliable -> verified (EDI was clobbered) -> thunks now record caller registers in __entry_*.
- Game folder: devmode on, shadow off, hooks_disabled is rewritten by the bisect tools (set `auto` for the maintainer).
- 2026-10-09 ~11:30: ROOT CAUSE of the New Game SetAnim crash found: void-typed functions that end in a TAIL JUMP
  (`jmp callee`) return the callee's EAX. 004a5760 (NPC vtable method: mov ecx,[ecx+0x304]; jmp 00592190)
  returned an animation handle; ours returned garbage. eax_users.py missed it (only direct callers; this is
  called through a vtable). Generator fix: TAIL map (ghidra2c.load_ret_pops) -> such units return the tail
  callee's value (`int __tail`). 514 units changed. Test flow: tools/load_check.py with Enter to skip the intro
  (the maintainer: skipping the pre-load intro is safe; skipping the in-level cutscene too early can crash the original).
- load_bisect.py had a bug (found culprits were RE-ENABLED -> 51 fake culprits in 6 h); fixed + sanity check.
- Running: equiv on all (new DLL), fixed bisect (known 004a5760) on the OLD live DLL in the game folder.
- Shadow run on the 5 bisect culprits during an automated New Game load (auto/shadow_results_culprits.tsv):
  004a5760 PASS 12/12 with the tail fix (EAX compared). 004a6780, 00555900 PASS 12/12 alone -> their crash is an
  interaction or a later/rarer path. 00529100 never ran. 00555ab0 FAIL: callee 006c1327 (CRT isspace-like, reads
  [esp+4], cdecl) is typed `__thiscall(void *this)` by ApplyProtoFixes -> ours passes the pointer in ECX instead of
  the char on the stack -> parse loop runs off the string. decomp_hl has it right. TODO: class fix (callees typed
  thiscall with ret 0 that read [esp+4] = cdecl; take call-site args from decomp_hl). All 4 non-tail culprits
  blacklisted in auto/crash_blacklist.txt for now.
- 2026-10-09 ~13:00: full equiv on the tail-fix DLL finished: {'PASS': 6386, 'FAIL': 1312, 'INCONCLUSIVE': 890}. Registry regenerated (step 1 of SESSION_REPORT done; next: rebuild DLL + load_check, ask the maintainer first).
- 2026-10-09 ~13:30: DLL rebuilt (tail-fix live set, 2,063) + installed (old one = dinput8.dll.prev). load_check x3 = CRASH x3:
  1x froze ~3 s after Bilbo spawned (watchdog: main thread stuck, stack 0054C3EA 00557AA1 005579AD 004FFA50), 2x died
  before wait_bilbo. Game folder restored (autotest off, hooks_disabled=auto). Next: load_bisect (needs ~1-2 h of test machine; ask).
- 2026-10-10 ~11:40: load_bisect on the tail-fix live set (2,063; auto/bisect_tailfix.log, 505 loads) = NOISE. Crash rate:
  all enabled 15/15, ~half enabled 1/40, <=23 enabled 12/253 (~5% = base rate of the autotest flow itself). The 14
  "culprits" (auto/load_culprits.txt; previous list in load_culprits_prev.txt) are mostly random base-rate crashes; the
  sanity check failed at the end. Real crash = INTERACTION across both halves. New tool: tools/load_ddmin.py (delta
  debugging: minimal crashing set, crash = 2 in a row, resumable via auto/ddmin_state.txt, Ctrl+Alt+P pause).
  Also open: why the near-original config crashes ~5% (infra? Enter-skip timing?).
- 2026-10-10: private GitHub backup https://github.com/imiziuk/hobbit-decomp (mirror in ../hobbit-decomp-backup, cleaned docs, no game files/personal data). Update: python Hobbit-Decomp/tools/backup_repo.py --push
- 2026-10-10: ChatGPT review of the ddmin plan ( first compare crash signatures of the all-enabled crashes (EIP/stack), then static ABI audit of replaced->replaced call edges (ret N vs generated conv/args/return), then ddmin with signature matching + adaptive repeats (2-in-a-row rejects 30% reproducers). Suggests a call-history ring buffer in the crash report.
- 2026-10-10 PM: crash signatures (tools/crash_signatures.py over hobbit_decomp.log, 560 sessions):
  A) all-enabled: 21/22 = EIP 0 (ret to 0, stack imbalance) under logic_mgr__SingleStep -> obj_mgr__AdvanceAll.
     tools/abi_audit.py (ret N vs our pops, incl. tail-jump targets): only live hit = 0046aaf0 (writes [esp+4]=1,
     jmp 0046ab10 which does ret 4; Ghidra saw no param -> ours pops 0; caller 0046a1f0 pushes 1 arg).
  B) half-enabled: 10/15 = AV at 006C1348 (CRT isspace-like 006c1327 reads [esp+4]); live 00555d00 calls it
     typed __fastcall (arg in ECX). tools/ecx_audit.py: 84 callees typed thiscall never read ECX; with stack-arg
     tracking (tools/ecx_args_check.py) only 006c1327/006c12ff are harmful for live units.
  C) baseline (few enabled, ~5%): EIP 0/1 under Projectile__OnAdvanceLogic -> fx_object__OnAdvanceLogic, and an ntdll
     heap AV after operator_delete. Not caused by generated code? (check pure original).
  Both A+B culprits blacklisted; DLL rebuilt (2,061 live, auto/live_fix2.txt), NOT yet installed/tested.
  Generator class fixes TODO: (1) functions that write their stack args then tail-jmp: nb = target's ret N;
  (2) callees that never read ECX -> type cdecl/stdcall with the real stack args.
- 2026-10-10 evening: MILESTONE: New Game load 10/10 with 2,034 live generated functions (auto/live_fix3.txt).
  All-off baseline 10/10 too (so the old "5% baseline" was our code). Third culprit 004b83e0: calls 00659c80 typed
  __stdcall(1 arg) but original sets ECX=0x7eb850, pushes 2, callee pops 8 via tail jmp. New tools:
  tools/x86scan.py (pops incl. tail targets, reads_ecx, max_arg), tools/callee_audit.py (all call wrappers vs
  binary -> auto/abi_exclude2.txt, 668 units), tools/abi_exclude.py (own ret/tail pops -> auto/abi_exclude.txt).
  equiv.py hardened: stubs compare max(Ghidra, real) arg words + ECX and pop the real amount; ESP after return,
  EBX/ESI/EDI/EBP, x87 TOP and DF compared. tools/equiv_regress.sh = 5 culprits must FAIL, 3 good PASS (OK).
  ChatGPT review #2 (same chat): treat binary facts as constraints (ABIDescriptor), recover the 668 in batches.
  RUNNING: full strict equiv (auto/equiv_strict.log); old results in auto/verified_before_strict.tsv.
- 2026-10-10 night: strict equiv done: PASS 6,005 / FAIL 1,741 / INC 842 (auto/verified_strict_20261010.tsv;
  old = verified_before_strict.tsv). 325 PASS->FAIL, sampled ones are real ABI bugs (e.g. callee 006405e0 pops 8
  but reads 1 arg: Ghidra dropped the unused 2nd; float pass-through typed void 00422460). Live set 2,022.
  Recovery of the ABI-excluded units: tools/proto_fixes2.py (binary facts -> auto/proto_fixes2.tsv, 149) appended
  to old proto_fixes.tsv = auto/proto_fixes_all.tsv; headless Ghidra on a COPY (scratchpad/units3.bat):
  -preScript EnableParamID.java (FULL re-analysis; -noanalysis gave cc "unknown" for 7,773 funcs = useless)
  -postScript ApplyProtoFixes.java proto_fixes_all.tsv -postScript ExportDecompUnits.java -> Hobbit-RE/db/units3.
  NOTE: callee signatures in ghidra2c come from each callee's own unit (INDEX) -> never mix exports per unit.
  !! auto/units + auto/ok are currently generated from a MIXED units4 (do not trust; regenerate from units3
  when the export finishes, then audits -> gen_registry -> DLL -> equiv on changed units -> load_check).
  The game folder still has the tested 2,034-live DLL (10/10 loads); hooks_disabled=auto.
- 2026-10-11 ~01:00: units3 re-exported WITH -preScript EnableParamID (full analysis 134 s ParamID) + proto_fixes_all
  -> 8,252 units, cc proper. units5 = units3 + 974 units2-only (vtable funcs not in the GUI project copy).
  Regenerated from units5: 8,538 compiled; callee_audit 26 bad pairs / 203 units (was 137 / 668); abi_exclude 9.
  build_units.py: repaired_src variant only used if its AUTO_ signature equals the fresh one (stale ones broke
  linking). equiv.py: callee_sigs.json cache now keyed to HOBBIT_UNITS (auto/callee_sigs.src).
  006c5b0e/006cda7f = skip:link-error (CRT). RUNNING: full strict equiv on units5 code (auto/equiv_units5.log).
  Then: gen_registry -> DLL -> load_check x10.
- 2026-10-11: units5 strict equiv PASS 6,229 / FAIL 1,519 / INC 788 (auto/verified_units5_strict.tsv). Live 1,970 (gated by allow.txt + unchanged shadow passes). New Game 10/10 LOADED. Game folder: units5 DLL (prev = dinput8.dll.fix3).
- 2026-10-11: STOPPED by the maintainer during bisect of newly-live (auto/suspects_new.txt, ~240) after shadow evidence promoted 1,970 -> 2,222. Excluded so far: 004c71a0, 00401080, 00469060 (blacklist) + all &stack0x units (gen_registry rule). Remaining crash: AV 005A4BAB, only baseline frames on stack (delayed corruption). tools/auto_culprit.py = automated deterministic-crash loop. Game folder: dinput8.dll.fix3 restored (known 10/10), hooks_disabled=auto, all mode files off.
- 2026-10-11: NEW STRATEGY (the maintainer): enable functionality by functionality, top-down. tools/group_map.py -> auto/groups.tsv
  (every function: subsystem / source file / class / call depth; anchors = leaked .cpp names, class names, factories,
  vtable "home" (most basic vtable), between-same-file, call-graph vote, nearest). gen_registry writes auto/eligible.txt
  (all checks passed, before allow gate) and supports HOBBIT_STAGE=<file>. tools/group_stage.py (try/accept/status),
  tools/stage_all.py (unattended: subsystem -> files -> bisect; auto/stage_accepted.txt grows, auto/stage_rejected.tsv).
  1. Game loop accepted (105, 3/3 loads). Play-test of the old 1,970 set froze: sdbase__TraverseCells endless loop via
  camera__MoveTowardsDesired -> AUTO_00577e70 (with devmode on; autotest without devmode was fine).
- 2026-10-11 LESSONS -> class fixes: (1) safety lists were stale after regeneration -> tools/refresh_lists.sh +
  gen_registry refuses stale lists. (2) globals__OnImport dropped "Ambient_%d" vararg (lighting glitch).
  (3) 00556740 (level-create crash): typed void but passes operator_new's EAX through; the thunk RESTORED the caller's
  EAX for every Ret::Void. New Ret::VoidPass (hook.h/hook.cpp): thunk keeps our EAX unless the original never touches
  EAX (tools/eax_untouched.py, 182 units). 00556740 re-enabled: 3/3 loads. eax_users: pass-through/virtual rules kept
  opt-in (EAX_RULES) - too broad (would flag 43-67 play-tested functions).
  Stage 3 Bilbo: all 299 OK automated. Accepted (stage_accepted.txt) is always intersected with eligible.
- 2026-10-11 CAPSULE RECORDER + REPLAY (the maintainer's idea, ChatGPT-reviewed): shadow.txt `record` + `capsules N` ->
  game folder capsules/ (caps.bin + deduplicated pages.bin). Novelty: caller + input classes (pre-filter), then
  AFL edge buckets of the ORIGINAL's run. tools/replay.py: A determinism gate, B = current build through the same
  thunk; PASS/FAIL/INCONCLUSIVE -> auto/replay_results.tsv (gen_registry excludes FAIL if newer than units.tsv;
  group_stage counts replay PASS as real-data evidence). First recording: capsules_store/rec_20261011_stage3
  (1 h of the maintainer's play, 22,227 capsules / 3,731 functions; 1,889 ran but dropped = external code in call tree;
  2,228 never ran). Full replay = 2 min 12 s. Recording template: game folder shadow_record.txt.off.
- ChatGPT plan (the maintainer asked it to decide): 1 x87 generator fix, 2 cluster EAX/memory mismatches, 3 strict replay
  gate, 4 investigate the 6 gameplay bugs with capsules, 5 Bilbo play-test, 6 selective API virtualization,
  7 next stages. IN PROGRESS: step 1. tools/x87_audit.py (x87 depth path analysis -> x87_net.tsv,
  returns_st0_path.txt, x87_mismatch.txt); tools/proto_fixes_ret.py -> auto/proto_fixes_ret.tsv (97 return types);
  Hobbit-RE/scripts/ApplyRetFixes.java. LESSON: float10 return on thiscall/fastcall = hidden
  __return_storage_ptr__ in Ghidra -> use 4-byte "float". hidden_regs.py: extraout_ST0 via __rx_st0.
  tools/equiv_subset.py: re-test only changed units and merge into verified.tsv.
- 2026-10-11 GOAL (the maintainer, option b): a modern READABLE codebase behaving exactly like the original. Decomp = reference;
  subsystems get clean rewrites (real names/structs/comments) verified by capsule replay. Current ChatGPT plan steps 1-7 continue first.
- 2026-10-11 morning: STOP POINT. Read docs/NEXT_SESSION.md FIRST (direction: hybrid reimplementation track,
  next experiment = asset audit; exact decomp state; pending generator fixes RETURNS_ARG + RETURNS_THIS cc fix).
  Night results: replay 3,095 -> 3,209 PASS, x87 failures 127 -> 4 (recorded-truth return types, __ftol storage).
