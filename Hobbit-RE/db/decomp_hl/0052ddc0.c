
undefined4 * __fastcall FUN_0052ddc0(undefined4 *param_1)

{
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d82e1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = local_11;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_4 = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  FUN_0064afa0();
  local_4._0_1_ = 1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_00650250();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_006499d0();
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  ExceptionList = local_c;
  return param_1;
}

