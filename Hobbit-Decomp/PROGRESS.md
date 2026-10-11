# Hobbit decompilation: staged progress

Updated 2026-10-11 02:09 by `tools/progress.py`.

Code is turned on **one functionality at a time, top-down**. A stage is done when the automated load checks
pass AND the maintainer has play-tested its checklist. Accepted code only grows; a broken stage is split
into its source files, then into single functions, and only the bad ones are left out.

Column meanings: **compiled** = recompiled from C; **verified** = same behaviour as the original in the
emulator; **eligible** = verified and no known risk; **load-tested** = running live in the game and New Game
loads; **play-tested** = load-tested and played through the checklist.

| # | Stage | functions | compiled | verified | eligible | load-tested | play-tested | status |
|---|---|---|---|---|---|---|---|---|
| 1 | Game loop & front end | 214 | 200 (93%) | 150 (70%) | 126 | 125 (58%) | 128 | ✅ played |
| 2 | Levels (per-level scripts) | 185 | 179 (97%) | 137 (74%) | 130 | 130 (70%) | 136 | ✅ played |
| 3 | Player (Bilbo) | 482 | 450 (93%) | 290 (60%) | 273 | 193 (40%) | 0 | 🔄 in progress |
| 4 | Camera | 196 | 180 (92%) | 121 (62%) | 99 | 0 (0%) | 0 | ⏳ waiting |
| 5 | Cinematics & dialogue | 385 | 370 (96%) | 295 (77%) | 240 | 0 (0%) | 0 | ⏳ waiting |
| 6 | NPCs & AI | 2019 | 1850 (92%) | 1502 (74%) | 1271 | 0 (0%) | 0 | ⏳ waiting |
| 7 | Game objects & world | 1082 | 1014 (94%) | 726 (67%) | 651 | 0 (0%) | 0 | ⏳ waiting |
| 8 | Physics & collision | 545 | 498 (91%) | 332 (61%) | 302 | 0 (0%) | 0 | ⏳ waiting |
| 9 | Animation | 173 | 164 (95%) | 125 (72%) | 109 | 0 (0%) | 0 | ⏳ waiting |
| 10 | Rendering | 776 | 724 (93%) | 487 (63%) | 282 | 0 (0%) | 0 | ⏳ waiting |
| 11 | Audio | 644 | 584 (91%) | 429 (67%) | 168 | 0 (0%) | 0 | ⏳ waiting |
| 12 | UI & menus | 623 | 537 (86%) | 332 (53%) | 202 | 0 (0%) | 0 | ⏳ waiting |
| 13 | Engine base library | 1150 | 1088 (95%) | 803 (70%) | 177 | 0 (0%) | 0 | ⏳ waiting |
| 14 | Other / unclassified | 50 | 49 (98%) | 31 (62%) | 27 | 0 (0%) | 0 | ⏳ waiting |
| | **All game code** | **8524** | **7887 (93%)** | **5760 (68%)** | **4057** | **448 (5%)** | **264 (3%)** | |

Not counted: 7367 functions of the Microsoft C runtime and exception-unwind stubs (a rebuilt game
links its own runtime). Left out after a failed stage so far: 0 functions.

## Play-test checklists

Run `Play Hobbit.bat` (dev mode on: F5 fly, F6 dev menu, F7 health, PageUp/PageDown level, Home restart).
Report anything different from the original game; a crash log is written automatically.

### Stage 1: Game loop & front end
- [ ] Game starts, main menu works (all buttons)
- [ ] New Game loads the first level
- [ ] Pause menu opens/closes (Esc)
- [ ] Quit to menu and quit the game work

### Stage 2: Levels (per-level scripts)
- [ ] PageUp/PageDown through every level: each one loads
- [ ] Level start events/cutscenes trigger
- [ ] Home restarts a level

### Stage 3: Player (Bilbo)
- [ ] Walk, run, sneak, jump, double jump
- [ ] Climb: ledges, ladders, ropes, poles
- [ ] Push blocks, swim
- [ ] Sting / staff / stones: every attack and combo
- [ ] Pickups count, inventory screen
- [ ] Take damage, health refill (F7), die and respawn

### Stage 4: Camera
- [ ] Camera follows Bilbo, rotates
- [ ] Camera near walls / tight spaces (no clipping, no freeze)
- [ ] First-person look
- [ ] Cutscene cameras

### Stage 5: Cinematics & dialogue
- [ ] Talk to NPCs (dialogue + subtitles)
- [ ] Cutscenes play; skip after a few seconds
- [ ] Conversation choices

### Stage 6: NPCs & AI
- [ ] Enemies notice, chase, attack, block, die
- [ ] Spiders, trolls, goblins behave normally
- [ ] Friendly NPCs walk/talk
- [ ] Group fights

### Stage 7: Game objects & world
- [ ] Doors, switches, levers, chests
- [ ] Webs, water, ropes, push boxes
- [ ] Triggers: level changes, music changes
- [ ] Save pedestal: save and load

### Stage 8: Physics & collision
- [ ] Slopes, walls, falling, landing
- [ ] Moving platforms, sliders, breakables
- [ ] Projectiles hit things

### Stage 9: Animation
- [ ] All Bilbo and NPC animations look right (no T-pose, no jitter)

### Stage 10: Rendering
- [ ] Level looks the same as the original (fog, lights, decals, sky, water)
- [ ] No missing or flickering objects

### Stage 11: Audio
- [ ] Footsteps, hits, voices, ambient sound, music

### Stage 12: UI & menus
- [ ] HUD (health, stones, courage points)
- [ ] Options menu, save/load screens, text

### Stage 13: Engine base library
- [ ] Full run: load, play, save, load save, change levels

### Stage 14: Other / unclassified
- [ ] Full run again
