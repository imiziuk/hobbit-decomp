
undefined4 * __thiscall FUN_0062b2e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005be0e0(param_2,3,param_3);
  local_4 = 0;
  *param_1 = &PTR_FUN_006f6338;
  param_1[0x12] = 0;
  param_1[0x20] = 0x1e;
  param_1[0x1c] = 0x40a00000;
  fVar1 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
  param_1[0x1b] = (float)fVar1;
  param_1[0x15] = 0;
  param_1[0x23] = 0;
  param_1[0x19] = 0;
  param_1[0x25] = 0;
  param_1[0x29] = 0;
  param_1[0x1d] = 0x43480000;
  param_1[0x22] = 0x43480000;
  param_1[0x1e] = 0x43fa0000;
  param_1[0x1f] = 0x43960000;
  param_1[0x21] = 0x43af0000;
  param_1[0x1a] = 1;
  param_1[0x1c] = 0x40400000;
  param_1[0x24] = 0x40c00000;
  param_1[0x27] = 0x19;
  param_1[0x28] = 0x32;
  param_1[0x2a] = 3;
  ExceptionList = local_c;
  return param_1;
}

