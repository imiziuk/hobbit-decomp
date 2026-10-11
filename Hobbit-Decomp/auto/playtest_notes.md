## 2026-10-11 Stage 1 (105 game-loop functions) - maintainer
- Ran through all levels with dev mode, completed main points: smooth, no crashes.
- Visual glitch: in several levels (1, 5, 6, ...) interactive objects (NPCs, push blocks, chests) lit one-sided red,
  some interactive objects completely dark. Save + load makes it disappear. A/B with the original pending.

- Cause found: globals__OnImport (0048c0a0) dropped the %d argument of x_string format "Ambient_%d" -> 8 ambient
  light colours read under wrong names. Safety lists were stale (Oct 8); tools/refresh_lists.sh + staleness guard added.
  Stage 1 now 102 functions (0048c0a0, 004fb060, 0052c8c0 dropped). Re-test pending.

- Re-test OK (102 functions): lighting normal in levels 1, 5, 6. Stage 1 DONE.

## 2026-10-11 Stage 1b + 2 (264 functions: game loop + levels) - maintainer: all works.

## 2026-10-11 Stage 3 (Bilbo) play-test #1 - maintainer (3 runs)
- run 1: cutscene world empty until it ends; stutter in combat; jump -> freeze + crash
- run 2/3: fly mode -> camera flies off, game freezes, sound loops
- cause: AUTO_00429030 (vector rotate) equiv FAIL but promoted by shadow PASS -> garbage vectors ->
  sdbase__TraverseCells endless loop. Rule: shadow never overrides an equiv FAIL (33 accepted dropped -> 530).
- new: play check (tools/play_script.txt: walk/jump/attack/fly via devkey FLYON) is now the stage gate.
- tip from maintainer: ` opens the dev menu (arrows to pick features, e.g. fly).
- TODO: A/B the empty-world-in-cutscene with the original.

## 2026-10-11 Stage 3 play-test #2 - maintainer
- OK: combat, fly mode, camera, cutscene world (no longer empty).
- Broken: long jump -> endless loop; mushrooms not picked up (ghosts); rope -> crash; ladder -> teleport to 0,0,0;
  finishing training part 1 (victory melody) -> freeze with melody looping.
- Shadow session (same actions): accepted functions failing on real data: 00437b60 (936 bytes written wrong),
  0044cb00 (float return 0 vs 0.57), 00428aa0 (x87 depth). Excluded -> 527 accepted; play check 3/3.

- play-test #3: crash while an enemy got up after a knockdown (render path, garbage object). 54 of our functions ran
  in that session without real-data evidence (combat states CHAIN_ATTACK/FORWARD_INAIR_ATTACK/LAND...).
  NEW RULE: gameplay stages need a shadow PASS (group_stage.py eligible filter). Stage 3 -> 448 accepted
  (79 in auto/stage_needs_evidence.txt). Play check 2/2.

