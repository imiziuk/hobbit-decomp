
undefined4 * __thiscall FUN_00608e00(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e3b66;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00636110(param_2,param_3);
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  local_4 = 1;
  *param_1 = &PTR_FUN_006f5528;
  param_1[0x2f] = 0x40a00000;
  fVar1 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
  param_1[0x2e] = (float)fVar1;
  param_1[0x2c] = 0;
  param_1[0x37] = 0;
  param_1[0x31] = 0x43fa0000;
  param_1[0x30] = 0x43480000;
  param_1[0x2d] = 1;
  param_1[0x2f] = 0x40400000;
  param_1[0x35] = 0x42480000;
  param_1[0x36] = 0x40c00000;
  ExceptionList = local_c;
  return param_1;
}

