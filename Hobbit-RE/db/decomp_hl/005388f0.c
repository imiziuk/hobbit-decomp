
undefined4 * __fastcall FUN_005388f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8fc6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e1d60();
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_006499d0();
  local_4._0_1_ = 2;
  FUN_006499d0();
  local_4._0_1_ = 3;
  FUN_006499d0();
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
  *(byte *)((int)param_1 + 0x7a) = *(byte *)((int)param_1 + 0x7a) | 1;
  *param_1 = &PTR_FUN_006f3af0;
  local_4 = CONCAT31(local_4._1_3_,9);
  if (DAT_00764840 == 0) {
    FUN_00538260();
  }
  DAT_00764840 = DAT_00764840 + 1;
  ExceptionList = local_c;
  return param_1;
}

