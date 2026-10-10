
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_005531b0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 local_15;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9b32;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005c8f80();
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_006f3e38;
  local_4 = 0;
  FUN_005c8f80();
  *(undefined ***)(param_1 + 0x7c) = &PTR_FUN_006f3e2c;
  *(undefined4 *)(param_1 + 0xe8) = 0x7fffffff;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(param_1 + 0xf8) = local_15;
  *(undefined1 *)(param_1 + 0xf9) = local_15;
  *(undefined1 *)(param_1 + 0x100) = 0;
  puVar1 = (undefined4 *)operator_new(0x24);
  puVar1[1] = 0;
  puVar1[8] = 1;
  FUN_006bf84b();
  if (DAT_00771d64 == (undefined4 *)0x0) {
    DAT_00771d64 = puVar1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)0x0;
    DAT_00771d64[2] = 0;
  }
  _DAT_00771d60 = _DAT_00771d60 + 1;
  FUN_006bf8e7();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_006bf840(puVar1);
  }
  puVar1 = DAT_00771d64;
  pvVar2 = operator_new(0x24);
  *(undefined4 **)((int)pvVar2 + 4) = puVar1;
  *(undefined4 *)((int)pvVar2 + 0x20) = 0;
  *(void **)(param_1 + 0xfc) = pvVar2;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(param_1 + 0xfc) + 8) = *(int *)(param_1 + 0xfc);
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 5;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  FUN_00554760();
  ExceptionList = local_c;
  return param_1;
}

