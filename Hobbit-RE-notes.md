# The Hobbit (2003, PC) — Meridian.exe RE notes

Session 2 (2026-10-07). Image base 0x00400000, MSVC, 32-bit x86, `__thiscall` (this = ECX).
Ghidra project `C:\tools\projects\Hobbit`. Scripts in `Hobbit-RE/scripts/`.

## Tooling
- GhidraMCP bridge broke because global Python has **mcp 2.x** (FastMCP renamed). Fixed with a
  venv: `C:\tools\mcp\venv-ghidra` (mcp<2); `.mcp.json` now points to its python.exe.
- The HTTP API (`http://127.0.0.1:8080/…`) works directly too: `strings`, `xrefs_to`,
  `decompile_function?address=`, `rename_function_by_address`, `renameData`, `data`.
- `scripts/name_from_labels.py [--apply]`: auto-names functions from profiler labels.
- `scripts/peek.py exe VA…`: hex-dump raw bytes at a VA (for code Ghidra hasn't made a function).

## Auto-naming (done)
- Profiler labels `"class::Method"` are passed to `Profile_PushScope` (0x00649600) at function
  entry; `Profile_PopScope` = 0x00649720. 609 labels → **578 functions renamed** `class__Method`.
- Rule: label ref ≤0x80 bytes after entry, exactly one label in the function, still `FUN_*`.
- 5 skipped: functions with two labels (inlined callee): audio_voice_mgr / audio_channel_mgr.
  List in `scripts/label_renames.json`.
- Plus ~20 hand-named (below). Named functions now: 7,268 of 14,868 (incl. Ghidra library names).
- Not used yet: `C:\projects\meridian\Support\…\*.cpp` assert paths → module tags (e.g. 25 refs
  to Bilbo.cpp). Idea: prefix remaining FUN_* by source file.

## Bilbo (player)
| What | Address / offset | Confidence |
|---|---|---|
| vtable | `vtbl_bilbo` 0x006e9818 | sure |
| constructor / destructor | `bilbo__ctor` 0x0041c2f0 / `bilbo__dtor` 0x0041c680 | sure |
| factory | `Bilbo_Create` 0x0041bc50 → `operator new(0x5f68)` | sure |
| **object size** | **0x5f68** bytes | sure |
| **player pointer (global)** | `g_pBilbo` 0x0075ba3c, set in ctor, cleared in dtor | sure |
| getter | `Bilbo_GetPlayer` 0x0041bcc0 (**264 call sites**) | sure |
| exists? | `Bilbo_Exists` 0x0041bcb0 | sure |
| per-frame update | `bilbo__OnAdvanceLogic` 0x0041e360 = vtable slot 4 (+0x10), arg = dt | sure |

### vtable slots (offset from 0x006e9818)
| Slot | Target | Body | Meaning |
|---|---|---|---|
| 4 (+0x10) | 0x0041e360 | | OnAdvanceLogic(dt) |
| 5 (+0x14) | 0x0041e0b0 | | called as `this->vf14(&DAT_0075b810, 0)` (respawn/reset?) |
| 9 (+0x24) | 0x00425950 | `return 1` | IsPlayer? |
| 10 (+0x28) | 0x00425520 | `return this+0x14` | **GetPosition** |
| 11 (+0x2c) | 0x00425530 | `return this+0x20` | GetRotation? |
| 12 (+0x30) | 0x00425970 | `return this+0x5a0` | ? (velocity / other vec) |
Slots 2,3,5–7,9–14 have no Ghidra function yet (only reached via vtable). Create them (press F).

### Field offsets (bytes; decompiler shows `param_1[i]` = byte i*4)
| Offset | Type | Meaning | Confidence |
|---|---|---|---|
| +0x00 | ptr | vtable | sure |
| +0x14 | vec3 float | **position** | likely (getter) |
| +0x20 | vec3 float | rotation? | guess |
| +0x128 | int | if ≠0, OnAdvanceLogic takes a short path (cutscene/disabled?) | guess |
| +0x3b0/+0x3c0/+0x3d0 | int | weapon selected: Stones / Sting / Staff (bilbo__GetWeapon → 3/0/1, none 2) | sure |
| +0x450 | ptr | tuning table (bilbo__InitTuning) | sure |
| +0x5a0 | vec | returned by slot 12 | ? |
| +0x8c4/+0x8c8 | int/float | in-water flag / water height | likely |
| +0x8d4 | int | **state enum** (3,4 = water states; 5,0x10,0x15,0x1a,0x28 …) | likely |
| +0x920 | float | last dt | sure |
| +0x46cc | int | weapon mode (-1,0,1,2) | guess |
| +0x5970 | float | timer, counts down by dt, clamped at 0 | sure (purpose ?) |
| +0x5ef8 / +0x5efc / +0x5f04 | handle / int / float | **anim group / current anim index (-1 none) / anim progress** — sync these | sure |

### Health
- `Character_GetHealthFrac` 0x004a6970: `hp(+0x290) / maxHp(+0x294)` (floats), used by
  NPCObject + HUD. **Open:** is Bilbo's own HP at +0x290 too? Check at runtime (Cheat Engine:
  take damage, scan decreasing float near `g_pBilbo`).
- HUD gets the character via `ObjRef_Resolve` 0x005af120: 64-bit object handle at +0x170/+0x174,
  cached ptr at +0x178, lookup `ObjMgr_LookupByHandle` 0x004021c0. **The engine uses object IDs**
  → good for networking (IDs can cross the wire, pointers can't).

## Class hierarchy (session 2b)
```
GameObject__ctor_guess 0x004aa170  vtbl 0x006ede98   (23 callers = derived classes)
└ CharacterObject__ctor 0x00464130  vtbl 0x006ecc88
   ├ bilbo__ctor     0x0041c2f0  vtbl 0x006e9818  size 0x5f68
   └ NPCObject__ctor 0x0049eff0  vtbl 0x006edd20  (NPC size 0x4e8)
```
- NPC is only 0x4e8 bytes, so CharacterObject <= 0x4e8 → health +0x290/+0x294 is almost surely a
  CharacterObject field shared by Bilbo (no bilbo__* function touches +0x290 directly).

## Class registry + spawning
- `ClassRegistry_Register` 0x0054b5e0, called from static initializers:
  `push 1; push size; push typeid; push factory; push "Name"; push n; mov ecx,&rec; call`.
- `scripts/class_registry.py <exe> [--apply]` → **48 classes**, factories renamed `Create_<Name>`.
  Full list: `Hobbit-RE/class_registry.txt` (Bilbo, NPC, Prop, Pickup, Projectile, Camera, Trigger…).
- Class table `g_ClassTable` 0x0076f908 (70 slots). Object manager `g_ObjMgr` 0x0076cd88.
- `obj_mgr__CreateObjectByName` 0x0054b7c0 (this=g_ObjMgr; name, guidLo, guidHi) → finds class by
  name (`Str_ICompare_guess` 0x00647e40) → `obj_mgr__CreateObjectByClass` 0x0054baf0.
  GUID 0 → new one from `Guid_New_guess` 0x005c76a0. Returns the 64-bit GUID.
- **Every object has a 64-bit GUID at +0x08.** Objects live in a hash table: bucket =
  `((lo^hi) * -0xfb) & 0xfff` (shorts at g_ObjMgr), 0x14-byte entries (array at 0x0076f648).
  `ObjMgr_FindByGuid` 0x004021c0; `ObjRef_ResolveGuid` 0x005af120 caches GUID→ptr.
  → Network plan: both peers refer to objects by GUID; spawn the remote player's puppet with a
  fixed GUID so both sides agree.
- Runtime spawn example: `bilbo__SpawnWeaponProps_guess` 0x0041cbd0 (called from vtable slot 1,
  `bilbo__vf1_Init_guess` 0x0041df00) creates 3 `"Prop"` objects (= weapons) and stores their
  GUIDs at Bilbo **+0x4db0, +0x4db8, +0x4dc0**. NPCs do the same in `NPCObject__SpawnProps_guess`
  0x0049fee0. **This is the template for spawning a puppet.**

## Main loop
```
Game_RunLevel_guess 0x004fd7c0
└ Game_LevelLoop 0x004fee90      while (g_bLevelLoopRunning 0x00760354)
   ├ frame limiter: Sleep() if faster than target (DAT_006efbd8)
   ├ Game_ProcessInput 0x004ff0a0 → Sys_PumpMessagesAndPollInput 0x0066f810   (0 = quit)
   ├ if !g_bLogicPaused (0x007600f4): Game_RunLogic 0x004ff9f0   ["RunLogic"]
   │   ├ logic_mgr__Execute 0x00557890   (variable sub-steps, see below)
   │   │   └ logic_mgr__SingleStep 0x00557a00 (dt)
   │   │       ├ obj_mgr__AdvanceAll_guess 0x0054c2e0 → each obj vtbl+0x10 (Bilbo too)
   │   │       ├ water_splash, modifier, AIManager, Conversation, weather, decal mgrs
   │   │       ├ event_mgr, camera_mgr, clutter_mgr, music_mgr, audio_mgr  …OnAdvanceLogic
   │   └ g_pCurrentLevel (0x0075fc00)->vtbl+0x18(dt)   ← per-level script (LevelTrollHole.cpp…)
   ├ FUN_005a3dc0 + Game_Render_guess 0x004ff4d0
   └ fx_mgr__EndOfFrame
```
- Stopwatch `FUN_0064cc00/cc30/cd30` stores input/logic/render ms in 0x0075fb90/fb88/fb8c.
- **Timestep:** `logic_mgr__Execute` takes elapsed × timescale(+0x04), clamps to max(+0x30), then
  runs SingleStep in chunks ≤ +0x2c while > +0x28 remains. Variable dt → simulation is NOT
  deterministic across PCs → plan **state sync** (send positions/anims), not input lockstep.
- Input: `Sys_PumpMessagesAndPollInput` = Win32 message pump, then `FUN_0066f940` and three
  device loops (counts 0x007f1638/163c/1640, 16-byte records at 0x007f1644/16c4/1744) — likely
  DirectInput8 keyboard / mouse / joysticks. `DirectInput8Create` is imported.

## Multiplayer implications (first take)
1. One-player assumption is everywhere: 264 `Bilbo_GetPlayer` calls + `g_pBilbo` singleton.
   Cheapest path: keep Bilbo as the local player; spawn a **puppet** object (NPC or second Bilbo
   model) for the remote player and drive its position/rotation/anim from the network.
2. Hook point for sending/receiving: end of `logic_mgr__SingleStep` or `Game_RunLogic`.
3. Injection method: a proxy DLL (e.g. `dinput8.dll` next to the exe) that patches/hooks these
   addresses; networking via a small UDP layer.

## Open questions
- Bilbo HP offset; input flag/buttons inside Bilbo (likely read from an input mgr, not stored).
- What sets a new object's model/anim set after CreateObjectByName (look right after the Prop spawns in
  `bilbo__SpawnWeaponProps_guess`, and in `NPCObject__SpawnProps_guess`).
- Type-id bitflags meaning (0x04000000 shared by Bilbo/NPC/Prop).
- Animation API (`char_anim_player__*`, `FUN_0053cc70` = anim lookup by name like "DAMAGE_DROWN").
- Exact meaning of logic_mgr fields +0x28/+0x2c/+0x30 (min/max step, max frame).

## GameObject base layout (every object) — from Export/Import field names
| Off | Field | Notes |
|---|---|---|
| +0x00 | vtable | GameObject 61 slots, CharacterObject 66, bilbo 87, NPCObject 89 |
| +0x08 | GUID (u64) | Bilbo's is hard-coded 0xABCABCABCABCABC0 (`Bilbo_GetGuid` 0x0041bcd0) |
| +0x10 | flags dword | 0x4000000 = makes splashes |
| +0x14 | position vec3 | write only via SetPosition (vf5) |
| +0x20 | InitialPos vec3 | SetPosition(p, 1) resets it |
| +0x2c / +0x38 | LocalBoundingBox min/max | vf14 returns &+0x2c |
| +0x44 / +0x50 | world AABB min/max | rebuilt by SetPosition |
| +0x68 | Orientation vec3 (Euler, yaw in y) | vf7 set / vf12 get (Bilbo vf12 → +0x5a0) |
| +0x74 | ScriptResource handle | |
| +0x7a | ObjectFlags u16 | bit0 = has real name, bit3 = vf37/38 flag |
| +0x7c | type code byte | = class registry code (0x12 Bilbo, 0x1c NPC, 0x1e Prop, 0x05 RigidInstance…) |
| +0x7d | spatial-DB layer/char | passed to sdbase__UpdateLinks |
| +0x7e | LightChannels | |
| +0x7f | bit0 ObjSaveFlag, bit 0x10 = alive/valid | lookups return NULL if not 0x10 |
| +0xa0 | ObjName char* | "NONAME" default |

## GameObject virtual slots (known so far)
| Slot | Off | Meaning |
|---|---|---|
| 0 | +0x00 | scalar deleting dtor |
| 1–3 | | Nop in base; Bilbo slot 1 = Init (spawns weapon props) |
| 4 | +0x10 | OnAdvanceLogic(dt) — per-frame update |
| 5 | +0x14 | **Move = SetPosition(vec3*, resetInitial)** (bilbo__Move 0x0041e0b0 checks world limits first) |
| 6 | +0x18 | Translate(vec3*) = SetPosition(pos+v) |
| 7 | +0x1c | **SetRotation(radian3*)** (bilbo__SetRotation 0x0041e1d0 → SetYaw, yaw at +0x474) |
| 9 | +0x24 | IsPlayer-ish: base 0, Character 1 |
| 10 | +0x28 | GetPosition → &+0x14 |
| 11 | +0x2c | GetInitialPos → &+0x20 |
| 12 | +0x30 | GetOrientation → &+0x68 (Bilbo: +0x5a0) |
| 14 | +0x38 | GetLocalBBox → &+0x2c |
| 18 | +0x48 | SetName(char*) |
| 19 | +0x4c | GetName → +0xa0 |
| 21 / 22 | +0x54/+0x58 | Export / OnImport (level + save data) |
| 23–25 | | debug draw (base) / Bilbo+NPC overrides |
| 37 / 38 | +0x94/+0x98 | get/set ObjectFlags bit 3 |
| 49 / 50 | +0xc4/+0xc8 | Activate / Deactivate (check +0x7f&0x10) |
| 52 | +0xd0 | SetGeometry(rsc handle) (Prop) |
| 61–65 | | CharacterObject additions |
Slots 13, 16, 17, 20, 30, 34–36, 39, 42–46, 51, 56, 57, 60 still unread (several have no Ghidra
function yet → run `scripts/CreateVtableFunctions.java`).

## Spawn recipe (from bilbo weapon props, 0x0041cbd0)
```c
guid = obj_mgr__CreateObjectByName(&g_ObjMgr, "Prop", 0, 0);
slot = ObjMgr_FindSlotByGuid(&g_ObjMgr, guid); obj = entries[slot].obj (valid if +0x7f&0x10)
obj->vf[18]("Sting");                       // SetName
h = FUN_005496c0("sting.rgeom", "Props");   // load model -> resource handle
obj->vf[52](h);                             // SetGeometry
```

## From hobbit-synchrony-v3 (the maintainer's earlier multiplayer mod) — confirms + extends
- Design: state sync 15 Hz with lerp; NPC AI is host-authoritative (Enemy = pos, rotY, anim, health, shield).
  Fake Bilbos = extra objects with server-assigned GUIDs (`FAKE_BILBO_GUID.txt`), per-slot skins `bilbN[d].xbmp`.
- Virtual names (meridian.hpp): 1 OnInit, 2 OnKill, 4 OnAdvanceLogic, 5 Move(pos, unk), 6 MoveRel,
  7 SetRotation(radian3 pitch/yaw/roll), 10 GetPosition, 21 OnExport, 22 OnImport, 30 OnApplyPain,
  44 EnumerateProperties, 45 SetProperty(name, ed_property&), 46 GetProperty(ed_property&, name)
  → the editor property system: get/set any object property by name (PROP_s32/f32/vector3/guid/...).
- BILBO_STATE enum (byte at bilbo+0x8d4): 0 NULL 1 IDLE 2 FLY 3 RUN 4 SNEAK 5 JUMP 6 FALL 7 LAND
  8 CROUCH_SLIDE 9 CLIMB_WALL 10 WALL_PULLUP 11 EDGE_MOUNT 12 EDGE_GRAB 13 EDGE_PULLUP 14 EDGE_DROP_OFF
  15 POLEJUMP 16 CHAIN_ATTACK 17 TARG_IDLE 18 TARG_RUN 19 TARG_JUMP 20 STONE_ATTACK 21 FIRST_PERSON_LOOK
  22 TARG_STRAFE_ATTACK 23 FORWARD_INAIR_ATTACK 24 BACKWARD_BLOCK 25 KNOCKBACK 26 DEATH 27 DEATH_FALL
  28 CLIMB_LADDER 29 LADDER_PULLUP 30 MINE_CART_RIDE 31 MINE_CART_SWING 32 CONV_LISTEN 33 CONV_TALK
  34 CINEMATIC 35 ROPE_CLIMB 36 BLOCKED 37 PUSH_BLOCK 38 SLIDING 39 LAUNCHING 40 HOISTING 41 USE
  42 FIDGET 43 DEATH_WATER.
- Bilbo: +0x420 ring equipped, +0x5918 nearest pushblock GUID, +0x5948 nearest hoistable GUID.
  Marker: text char[32] at +0xC0.
- Globals: g_BilboInventory 0x0075BBE0; stone counts explosive/fire/freeze 0x0075BE84/88/8C;
  current weapon 0x0075C738; level loading 0x0076035C; game state 0x00762B58; current level idx
  0x00762B5C; g_PauseMgr 0x00763208; object record count 0x0076F660; 0x007A59C8 in-game flag.
- ~60 more function names imported into `Hobbit-RE/annotations.tsv` (tag [synchrony]).

## Bilbo health = inventory item 4 (SOLVED)
- Inventory singleton `g_BilboInventory` 0x0075BBE0: float counts[199] at +0x1cc, {min,max} pairs at +0x4e4.
- **Health = 0x0075BDBC** (counts[4]); **MaxHealth = 0x0075C714** (+0xb34). Potion use adds 24.
- Item ids (full list in `Hobbit-RE/inventory_items.txt`): 1 Coin, 2 Stones, 4 Health, 9 Courage,
  27 BilboIsPoisoned, 28 BilboPoisonTimer, 29-46 weapon upgrade levels, 48 Health Potion, 49 Antidote,
  51 Sword Sting, 52 The Ring, 53 Staff, 54/55/56 Explosive/Fire/Freeze Stone.
  Cross-checked with synchrony's stone globals 0x0075BE84/88/8C = counts[54..56].
- NPCObject/CharacterObject health is different: +0x290 hp / +0x294 max (floats).
- Bilbo::OnApplyPain (0x00421120, slot 30) does NOT subtract HP itself: it queues +0x3f8 damage,
  +0x3fc knockback, +0x400 pending; per-state handlers react (KNOCKBACK etc.).

## Bilbo input (for driving a remote player)
- Raw input is GLOBAL: `Input_IsActionDown_guess` 0x0042a6a0(actionId), `Input_GetAxis_guess` 0x00671130.
- `bilbo__ReadInput` 0x004323e0 fills the per-Bilbo input block **+0x600..+0x728**: +0x600/+0x604 move
  stick, +0x618/+0x61c camera stick (invert options DAT_00762b04/08), +0x710 any-input, +0x718 desired yaw.
- `bilbo__ComputeMoveVector_guess` 0x00432940 → world move vector +0x630..+0x638.
- `bilbo__SetInputEnabled` 0x0041c2b0 (+0x740) zeroes the block when disabled.
- `bilbo__SetState` 0x0043a3f0(state, file, line) drives the state machine (BILBO_STATE enum above).
- Bilbo +0x760 = on ground, +0x9c0 = air time, +0x7c4 = last-frame position copy.

## Animation
- `anim_group__FindAnimIndex` 0x0053cc70(name) → index (hash h=5381; h=h*33^toupper(c)).
- `char_anim_player__SetAnim` 0x00540840(idx, a, b, blendTime) → `anim_track_controller__SetAnim`
  0x005434b0 (keeps the clip if already playing, otherwise blends). A puppet can be animated by index.

## Catalog status (Oct 8, ~00:45)
- Full decompile: `Hobbit-RE/db/decomp_hl/` (15,891 funcs, headless copy incl. 1,022 vtable funcs created by
  `CreateVtableFunctions.java`: 353 vtables, 2,506 slot targets). `Hobbit-RE/db/catalog.tsv` = per-function
  name, size, category, source file, vtable class[slot], #callers/#callees, strings. `callgraph.tsv`, `vtables.tsv`,
  `modules.txt` alongside (db/ is gitignored: derived from the game binary).
- Breakdown: 6,596 `Unwind@` exception-cleanup stubs (ignore) · 861 CRT/library · 1,266 tiny (<=12 lines)
  · **863 named** · **6,305 unknown game/engine functions left to read**.
- GUI project still lacks the 1,022 vtable functions: run `scripts/CreateVtableFunctions.java` in Ghidra's
  Script Manager (or close Ghidra and run it headless on the real project), then re-run
  `scripts/apply_annotations.py` so the 11 pending names land.
- Bilbo state machine: `bilbo__ApplyStateTransition` 0x00439a60 (OnExit/OnEnter/OnUpdate switches),
  `bilbo__RequestState` 0x0043a3f0 (+0x8d8 next state). 108 handlers named `bilbo__<STATE>_<OnExit|OnEnter|OnUpdate>`.
- CharacterObject +0x128 = char_anim_player*; vf +0x154 GetAnimPlayer; +0x19c lip-sync voice.
- NPC damage: NPCObject OnApplyPain (slot 30) 0x004a4610 → FUN_004a5130 writes hp +0x290.

## Multiplayer audit item: hard-coded Bilbo GUID 0xABCABCABCABCABC0
`Bilbo_GetGuid` (0x0041bcd0) is compared against attackers in at least: `NPCObject__TakeHit` (combo/sfx and
the +0x268 bit 0x8000000 "last hit by Bilbo" kill-credit flag). Hits from a second Bilbo object with another
GUID will not count as player hits. TODO: list every caller of 0x0041bcd0 and decide which to patch.
All 36 callers of Bilbo_GetGuid (from db/callgraph.tsv) — each is a "only THE Bilbo counts" check:
- AI perception: SenseController__CanSee 0x005ab800, SenseController__UpdateSensedArray 0x005aaad0 → enemies
  only see/smell the hard-coded Bilbo (synchrony patched CanSee at 0x005AB9C2).
- World interaction: trigger__OnAdvanceLogic 0x004dd480; pressure plates 0x004157a0 (PlateDown/PlateUp).
- Damage/credit: NPCObject__TakeHit 0x004a5130, event_mgr__ApplyPainFromTable 0x00572ce0.
- NPC social: PhysController__UpdateHeadTrackingStatus 0x00594990, CharacterObject__SolvePersonalSpace
  0x004688e0, 0x005bafa0 (eyelids/look-at), 0x004a12e0, 0x004a60c0 (NPC).
- Camera: camera__CollectBlockingObjectList 0x0045cbe0, 0x0056b030, 0x0056b6b0, 0x0056bdc0, 0x0056efb0, 0x00570ee0.
- Progress: 0x004346d0 (Bilbo_LevelUp, stones), cinematics 0x004754f0, LoadLevel 0x004fe5a0, audio 0x004134e0.
- AI targeting (KEY for multiplayer): AI goal/action ctors default their target GUID to Bilbo
  (0x005d38e0 action type 0x12 → +0x50, 0x005f2d50, 0x005ff1b0 vtbl 0x006f520c, 0x006017a0, 0x00618c20 → +0xa0);
  0x005d39e0 falls back to Bilbo when the target is missing; AI states 0x00629400 / 0x0062b550 / 0x0062d480 set
  **StateController (+8 of each AI state) +0x180 = target GUID** (`StateController__GetTargetGuid` 0x005af0f0; owner NPC GUID at +0x170) = Bilbo when nothing else is sensed.
  → To make an enemy fight player 2, write player 2's GUID into that target slot (and patch the senses).
- AI event reactions: 0x005b9780 / 0x005bb840 "if sensed GUID == Bilbo and event type not 3/6 → react"
  (one sets alert distance 200.0 at +0x88). 0x0059c0f0 scans a GUID list for Bilbo.
- 0x004911b0: region around Bilbo's world AABB (+0x44/+0x4c). 0x005d9230: script action affecting Bilbo
  (calls 0x00424f20).
- Bilbo editor properties (slot 44/45/46, by name): m_bUsingStone(+0x3b0) m_bUsingSting(+0x3c0) m_bUsingStaff(+0x3d0)
  m_bAttachedToPlatform, IsRingEquipped(+0x420), IsPoisoned, PoisonTime, PoisonDelay, ForcedVisibility, LevelReset.
  → SetProperty(name, ed_property) is a clean way to drive a remote Bilbo's weapon/ring/poison.
- NPC editor properties (NPCObject slot 44 = 0x004a6d10): `Tweaks\Run AI`, `Do StateControl`, `Do Senses`,
  `Do PhysControl`, `Do Collision`, `Invulnerable`, `Current Hit Points`, `Max Hit Points`, `Team 1 (Bilbo's)`,
  `ShieldGuid`, `Debug\Current State/Target/Anim Name`, Combat Tweaks (block/evade/shove/strafe %).
  → Multiplayer idea: on clients, SetProperty("Tweaks\Run AI", false) per NPC and drive them from host state;
    "Team 1 (Bilbo's)" may make NPCs allies.

## GOAL (corrected Oct 8): recompilable decompilation, not multiplayer
## Toolchain (Rich header, linked 2003-11-26 16:44 UTC)
| prodid | tool | build | objs | likely |
|---|---|---|---|---|
| 49 / 48 | Utc12_2_CPP / Utc12_2_C | 9044 | 398 / 1 | **the game code**: VC++ 6.0 "12.00" compiler, Processor-Pack generation (build 9044) |
| 11 / 10 | Utc12_CPP / Utc12_C | 8047 | 15 / 143 | VC6 static libs (CRT etc.) |
| 29 / 28 | Utc13_CPP / Utc13_C | 8830 | 67 / 4 | a 3rd-party lib built with an early VC7 (Bink? DX?) |
| 95, 93, 105 | Utc1310_C, Implib710, AliasObj710 | 2190/2179/2067 | 22/11/18 | VS2003-built libs (DirectX 9 SDK import libs) |
| 14, 12 | Masm613, AliasObj60 | 7299/7291 | 38/3 | hand assembly |
| 4 | Linker600 | 8447 | — | **VC6 linker 6.00.8447** |
→ For a MATCHING decomp the compiler to get is MSVC 6.0 (cl 12.00) with the matching update (build 9044).
