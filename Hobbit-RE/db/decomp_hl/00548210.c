
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00548210(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 local_15;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005c8f80();
  *param_1 = &PTR_FUN_006f3ccc;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0xf) = local_15;
  *(undefined1 *)((int)param_1 + 0x3d) = local_15;
  *(undefined1 *)(param_1 + 0x11) = 0;
  puVar1 = (undefined4 *)operator_new(0x24);
  puVar1[1] = 0;
  puVar1[8] = 1;
  FUN_006bf84b();
  if (DAT_0076cd84 == (undefined4 *)0x0) {
    DAT_0076cd84 = puVar1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)0x0;
    DAT_0076cd84[2] = 0;
  }
  _DAT_0076cd80 = _DAT_0076cd80 + 1;
  FUN_006bf8e7();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_006bf840(puVar1);
  }
  puVar1 = DAT_0076cd84;
  pvVar2 = operator_new(0x24);
  *(undefined4 **)((int)pvVar2 + 4) = puVar1;
  *(undefined4 *)((int)pvVar2 + 0x20) = 0;
  param_1[0x10] = pvVar2;
  param_1[0x12] = 0;
  *(void **)pvVar2 = pvVar2;
  *(undefined4 *)(param_1[0x10] + 8) = param_1[0x10];
  param_1[0x17] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  ExceptionList = local_c;
  return param_1;
}

