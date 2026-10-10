
undefined4 * __fastcall FUN_005bfd20(undefined4 *param_1)

{
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006df31b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0xb) = local_11;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  local_4 = 0;
  param_1[0x11] = 0x7f7fffff;
  param_1[0x12] = 0x7f7fffff;
  param_1[0x13] = 0x7f7fffff;
  param_1[0x14] = 0xff7fffff;
  param_1[0x15] = 0xff7fffff;
  param_1[0x16] = 0xff7fffff;
  *param_1 = &PTR_FUN_006f446c;
  FUN_005bffb0();
  ExceptionList = local_c;
  return param_1;
}

