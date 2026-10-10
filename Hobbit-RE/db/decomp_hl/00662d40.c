
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00662d40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e6a36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = param_4;
  param_1[5] = param_5;
  *(undefined1 *)(param_1 + 6) = (undefined1)param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x12) = (undefined1)param_2;
  *(undefined1 *)((int)param_1 + 0x49) = (undefined1)param_2;
  *(undefined1 *)(param_1 + 0x14) = 0;
  puVar1 = (undefined4 *)operator_new(0x14);
  puVar1[1] = 0;
  puVar1[4] = 1;
  FUN_006bf84b();
  if (DAT_007f1444 == (undefined4 *)0x0) {
    DAT_007f1444 = puVar1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)0x0;
    DAT_007f1444[2] = 0;
  }
  _DAT_007f1440 = _DAT_007f1440 + 1;
  FUN_006bf8e7();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_006bf840(puVar1);
  }
  puVar1 = DAT_007f1444;
  pvVar2 = operator_new(0x14);
  *(undefined4 **)((int)pvVar2 + 4) = puVar1;
  *(undefined4 *)((int)pvVar2 + 0x10) = 0;
  param_1[0x13] = pvVar2;
  param_1[0x15] = 0;
  *(void **)pvVar2 = pvVar2;
  *(undefined4 *)(param_1[0x13] + 8) = param_1[0x13];
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_006f95cc;
  FUN_00663a60();
  ExceptionList = local_c;
  return param_1;
}

