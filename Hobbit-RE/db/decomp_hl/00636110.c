
undefined4 * __thiscall FUN_00636110(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e57f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005be0e0(param_2,3,param_3);
  local_4 = 0;
  *param_1 = &PTR_FUN_006f6a40;
  param_1[0x12] = 0;
  param_1[0x1c] = 0x1e;
  fVar1 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
  param_1[0x16] = (float)fVar1;
  param_1[0x1f] = 0;
  param_1[0x14] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x43480000;
  param_1[0x1e] = 0x43480000;
  param_1[0x1a] = 0x43fa0000;
  param_1[0x1b] = 0x43960000;
  param_1[0x1d] = 0x43af0000;
  param_1[0x15] = 1;
  param_1[0x17] = 0x40400000;
  param_1[0x20] = 0x40000000;
  ExceptionList = local_c;
  return param_1;
}

