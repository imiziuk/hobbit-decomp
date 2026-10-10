
undefined4 * __thiscall
FUN_005be0e0(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df12b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006499d0();
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 4;
  *(undefined1 *)(param_1 + 0x11) = param_3;
  local_4 = 0;
  *param_1 = &PTR_FUN_006f43e8;
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  param_1[2] = param_4;
  param_1[1] = &DAT_007ba744;
  param_1[3] = 0;
  FUN_0064a2e0(param_2);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xc5;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  ExceptionList = local_c;
  return param_1;
}

