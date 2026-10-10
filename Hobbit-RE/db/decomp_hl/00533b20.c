
undefined4 * __fastcall FUN_00533b20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8c04;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  local_4 = 0;
  FUN_006499d0();
  local_4._0_1_ = 1;
  FUN_006499d0();
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x54] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  local_4._0_1_ = 4;
  FUN_006499d0();
  local_4._0_1_ = 5;
  FUN_006499d0();
  local_4._0_1_ = 6;
  FUN_006499d0();
  local_4._0_1_ = 7;
  FUN_006499d0();
  local_4._0_1_ = 8;
  FUN_006499d0();
  local_4._0_1_ = 9;
  FUN_006499d0();
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_006499d0();
  *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) | 1;
  *param_1 = &PTR_FUN_006f39f8;
  DAT_007647a0 = param_1;
  ExceptionList = local_c;
  return param_1;
}

