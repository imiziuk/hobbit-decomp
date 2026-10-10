
undefined4 * __fastcall FUN_0053b4d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d90cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x7fffffff;
  local_4 = 0;
  *param_1 = 0;
  FUN_00549430(param_1 + 1,&DAT_00767060);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0xffffffff;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xc] = 0;
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[9] = 0;
  param_1[0x16] = 0;
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  param_1[0x17] = 0x3f800000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1f] = 0;
  param_1[0x1b] = 1;
  ExceptionList = local_c;
  return param_1;
}

