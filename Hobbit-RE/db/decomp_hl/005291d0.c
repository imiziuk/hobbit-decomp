
undefined4 * __fastcall FUN_005291d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d7fda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_4 = 0;
  FUN_004fa720();
  local_4._0_1_ = 1;
  FUN_004fa720();
  local_4._0_1_ = 2;
  FUN_004fa720();
  local_4._0_1_ = 3;
  FUN_004fa720();
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_006c043b(param_1 + 0x5f,0x58,6,FUN_004fa720,FUN_00429100);
  ExceptionList = local_c;
  return param_1;
}

