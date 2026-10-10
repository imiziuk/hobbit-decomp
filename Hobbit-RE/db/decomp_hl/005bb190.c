
undefined4 * __thiscall FUN_005bb190(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dee98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00639750(param_2,param_3);
  local_4 = 0;
  FUN_00543280();
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x52] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *param_1 = &PTR_FUN_006f4360;
  ExceptionList = local_c;
  return param_1;
}

