
undefined4 * __fastcall FUN_00571ba0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_15;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006db6ee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)((int)param_1 + 0x55) = local_15;
  local_4 = 2;
  *(undefined1 *)(param_1 + 0x15) = local_15;
  *(undefined1 *)(param_1 + 0x17) = 0;
  puVar1 = (undefined4 *)FUN_005774e0(0,1);
  FUN_006bf84b();
  if (DAT_00772ce8 == (undefined4 *)0x0) {
    DAT_00772ce8 = puVar1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)0x0;
    DAT_00772ce8[2] = 0;
  }
  DAT_00772ce4 = DAT_00772ce4 + 1;
  FUN_006bf8e7();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_006bf840(puVar1);
  }
  uVar2 = FUN_005774e0(DAT_00772ce8,0);
  param_1[0x16] = uVar2;
  param_1[0x18] = 0;
  *(undefined4 *)uVar2 = uVar2;
  *(undefined4 *)(param_1[0x16] + 8) = param_1[0x16];
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  ExceptionList = local_c;
  return param_1;
}

