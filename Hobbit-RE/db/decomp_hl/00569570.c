
undefined4 * __fastcall FUN_00569570(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00566d80(2);
  local_4 = 0;
  param_1[3] = 0;
  FUN_00649b20(&DAT_0075b6e0);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_006e93f8;
  ExceptionList = local_c;
  return param_1;
}

