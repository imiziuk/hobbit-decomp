
/* WARNING: Removing unreachable block (ram,0x0066442c) */
/* WARNING: Removing unreachable block (ram,0x00664430) */

void __fastcall FUN_00664370(int param_1)

{
  undefined4 uVar1;
  void **ppvVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_20 [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6af0;
  local_c = ExceptionList;
  puVar4 = *(undefined4 **)(param_1 + 0x364);
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (puVar4 != *(undefined4 **)(param_1 + 0x368)) {
    do {
      ExceptionList = ppvVar2;
      FUN_006638f0(*puVar4);
      puVar4 = puVar4 + 1;
      ppvVar2 = (void **)ExceptionList;
    } while (puVar4 != *(undefined4 **)(param_1 + 0x368));
  }
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x354);
  local_4 = 0;
  if (puVar4 != *(undefined4 **)(param_1 + 0x358)) {
    do {
      local_20[0] = *puVar4;
      uVar3 = FUN_00664f20();
      if (uVar3 < 0x1e) {
        FUN_006683e0(local_14,1,local_20);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 **)(param_1 + 0x358));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x364);
  FUN_005b8840(uVar1,*(undefined4 *)(param_1 + 0x368));
  *(undefined4 *)(param_1 + 0x368) = uVar1;
  while ((puVar4 = *(undefined4 **)(param_1 + 0x354), puVar4 != (undefined4 *)0x0 &&
         (*(int *)(param_1 + 0x358) - (int)puVar4 >> 2 != 0))) {
    (**(code **)(*(int *)*puVar4 + 0x14))();
  }
  *(undefined4 *)(param_1 + 0x348) = 0;
  puVar4 = local_18;
  if (local_18 != local_14) {
    do {
      FUN_00663f20(*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar4 != local_14);
  }
  FUN_006bf840(local_18);
  ExceptionList = local_c;
  return;
}

