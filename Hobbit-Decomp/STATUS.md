# Status

Verified = ran in a real play session (call counts from `hobbit_decomp.log`) with no crash.

## Session 2026-10-08 ~01:45 (run around, weapon switch, damage, quit via menu)
| Address | Function | Calls | State |
|---|---|---|---|
| 00425520 | object_GetPosition | 7,095,416 | verified |
| 0041BCD0 | Bilbo_GetGuid | 683,803 | verified |
| 0041BCC0 | Bilbo_GetPlayer | 682,347 | verified |
| 00434CA0 | Inventory_GetCount | 574,188 | verified |
| 00425800 | object_GetLocalBBox | 364,624 | verified |
| 00451F50 | object_GetRotation | 293,240 | verified |
| 004AA9A0 | object_GetName | 96,235 | verified |
| 0041BCB0 | Bilbo_Exists | 54,192 | verified |
| 00423C80 | bilbo_IsRingEquipped | 48,211 | verified |
| 00422FB0 | bilbo_GetYaw | 43,307 | verified |
| 00422450 | bilbo_IsPoisoned | 34,214 | verified |
| 00422420 | bilbo_GetHealth | 12,427 | verified |
| 00422460 | bilbo_GetVigor | 12,200 | verified |
| 0041B9E0 | bilbo_GetFlag4EC1 | 12,193 | verified |
| 0041FCE0 | bilbo_NearestEnemyCloserThan | 11,686 | verified |
| 00425860 | object_GetFlag8 | 9,212 | verified |
| 00434D10 | Inventory_Add | 6,601 | verified |
| 00425870 | object_SetFlag8 | 2,694 | verified |
| 00434C40 | Inventory_SetCount | 2,367 | verified |
| 00425530 | object_GetInitialPos | 1,269 | verified |
| 00424BA0 | bilbo_HasF434 | 603 | verified |
| 00434C10 | Inventory_GetMaxHealth | 431 | verified |
| 00434DD0 | Inventory_Remove | 0 | untested (use a potion / spend an item) |
| 00422470 | bilbo_GetWeapon | 0 | untested |
| 00422430 | bilbo_GetPoisonStrength | 0 | untested (get poisoned) |
| 00422440 | bilbo_GetPoisonDamage | 0 | untested (get poisoned) |

Totals: 26 replaced, 22 verified in play. Game has ~8,400 real functions (excluding 6,596 Unwind stubs).

## Lessons
- MSVC 6 relied on same-file callees preserving registers (SetRange reuses ECX after SetCount) →
  all replacements go through register-saving thunks (`src/core/hook.cpp` MakeThunk).
- Closing the window with X skips DLL unload, so counts are only written on menu quit or on a crash.
