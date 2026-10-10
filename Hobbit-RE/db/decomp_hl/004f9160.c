
undefined4 * __fastcall FUN_004f9160(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6234;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  param_1[0x31] = 0x7fffffff;
  param_1[0x33] = 0x7f7fffff;
  param_1[0x34] = 0x7f7fffff;
  param_1[0x35] = 0x7f7fffff;
  param_1[0x36] = 0xff7fffff;
  param_1[0x37] = 0xff7fffff;
  param_1[0x38] = 0xff7fffff;
  param_1[0x48] = 0x7f7fffff;
  param_1[0x49] = 0x7f7fffff;
  param_1[0x4a] = 0x7f7fffff;
  param_1[0x4b] = 0xff7fffff;
  param_1[0x4c] = 0xff7fffff;
  param_1[0x4d] = 0xff7fffff;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  param_1[0x3b] = 0;
  param_1[0x50] = 1;
  FUN_005822d0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_005c1540();
  *param_1 = &PTR_FUN_006efab0;
  ExceptionList = local_c;
  return param_1;
}

