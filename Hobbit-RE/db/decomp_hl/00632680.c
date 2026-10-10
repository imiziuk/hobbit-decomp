
undefined4 * __thiscall FUN_00632680(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005be0e0(param_2,4,param_3);
  local_4 = 0;
  *param_1 = &PTR_FUN_006f6788;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0x43fa0000;
  param_1[0x13] = 0x44fa0000;
  param_1[0x16] = 0x40800000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  fVar1 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
  param_1[0x1a] = (float)fVar1;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0x40a00000;
  param_1[0x1f] = 0x5a;
  ExceptionList = local_c;
  return param_1;
}

