# Next session: start here (written 2026-10-11 morning)

## Direction decided
- Goal (maintainer, "option b"): a modern, readable codebase that behaves like the original game.
- External review (ChatGPT, 2026-10-11, full text: `docs/chatgpt_2026-10-11_reimplementation.md`):
  keep the original executable as an **executable specification** and run a **hybrid reimplementation**
  investigation track (new engine, Rust suggested; Python for asset tools), while the current decompilation
  pipeline keeps running. Do NOT commit to months of function-by-function decompilation without testing the
  new-engine approach first, and do NOT throw the decompilation away.
- **The next experiment is an ASSET AUDIT**, not a language decision: can the original game files
  (meshes, textures, animations, levels, collision, scripts/events, audio, video) be read and understood?
  Rich, structured assets favour the new engine; opaque blobs + hard-coded behaviour favour decompilation.

## Order of work
1. Finish the in-flight decompilation step (below): regenerate with the pending generator fixes, build,
   replay, rebuild the stage 1-3 manifest, automated play checks. About 1 h, no human needed.
2. **Asset audit** of `The.Hobbit.-.Clean/The Hobbit - Clean/` (gitignored game folder): list every file type,
   sizes, headers/magic, which loader functions read them (the decomp knows: BinIn.cpp, TextIn.cpp, rsc_mgr,
   x_bitmap*, RawMesh/RawAnim, audio_package, io_device...), what middleware is used (Bink video, Miles audio
   `Mss32.dll`, D3D8). Output: `docs/ASSET_AUDIT.md` with, per format: can we parse it, what it contains,
   what logic is NOT in data (hard-coded).
3. Recover one gameplay subsystem end to end: character movement (walk, jump, collision, ladders, camera):
   data structures, update order, observable behaviour.
4. Small Rust prototype: load one real level section + Bilbo, render, reproduce movement; compare against the
   original with recorded observations.
5. Decide with evidence (effort, fidelity, unknown logic) whether the rebuild is sustainable.
- New instrumentation needed for (3)/(4): system-level observations (input, frame boundaries, player
  position/velocity/state/animation per frame, world events), not only function capsules.
- Copyright: a redistributable project must have users supply their own game files.

## Exact state of the decompilation (where it stopped)
- Last complete build = units7d export (`Hobbit-RE/db/units7d`: Ghidra + ParamID + proto_fixes_all +
  recorded-truth return types + `ApplyHelperStorage.java` for __ftol/__allshl/__allshr/__aullshr).
  Replay of the 1-hour recording: **3,209 PASS / 432 FAIL / 90 INCONCLUSIVE** (start of night: 3,095 / 545);
  x87-depth failures **127 -> 4**.
- Generator changes made AFTER that build, not yet regenerated (the run was stopped):
  - `RETURNS_ARG` (auto/returns_arg.tsv, 194 void functions that return their k-th stack argument, read via
    `_AddressOfReturnAddress() + 4k` = our thunk's argument copy)
  - `RETURNS_THIS` restricted to thiscall/fastcall (2 cdecl functions had matched by coincidence)
- To finish: `ghidra2c.py ../Hobbit-RE/db/units7d ...` -> `build_units.py` -> `sh tools/refresh_lists.sh` ->
  `gen_registry.py` -> cmake build -> `replay.py capsules_store/rec_20261011_stage3` -> compare with
  `auto/replay_results_units7d.tsv` -> stage manifest (`group_stage.py`, evidence-gated) -> play checks.
- Remaining replay FAIL classes: eax mismatch ~168 (mostly computed/mixed real logic), memory ~80 (float code:
  values wildly wrong, e.g. comparisons with NaN-handling `!=` rewrites like 004484a0 bounding-box min/max),
  instruction limit 13.
- Game folder: stage 1-3 build (449 functions, evidence-gated), hooks_disabled empty, devmode on.
  The maintainer has NOT yet play-tested this build (ChatGPT plan step 5).
- Recording: `capsules_store/rec_20261011_stage3` (gitignored, 395 MB; back it up). Record more with the game
  folder file `shadow_record.txt.off` renamed to `shadow.txt`.

## Lessons of the night (all in HANDOFF.md)
- Static x87 path analysis was wrong in 24 of 33 checkable cases (e.g. sin/cos helper 0064c8e0 writes through
  pointers): recorded capsules are the ground truth for float returns (`tools/x87_truth.py`).
- float10 return on thiscall/fastcall = Ghidra hidden `__return_storage_ptr__`; use 4-byte `float`.
- `__ftol()` had its ST0 input missing at all 947 call sites until Ghidra got custom register storage.
- Replay results only count for the code they ran on (gen_registry checks file ages).
