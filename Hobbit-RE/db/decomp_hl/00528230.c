
undefined4 * __fastcall FUN_00528230(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d7f1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00526a90();
  local_4 = 0;
  FUN_004fa720();
  local_4._0_1_ = 1;
  FUN_006c043b(param_1 + 0x25,0x58,6,FUN_004fa720,FUN_00429100);
  local_4._0_1_ = 2;
  FUN_006c043b(param_1 + 0xa9,0x58,6,FUN_004fa720,FUN_00429100);
  local_4._0_1_ = 3;
  FUN_006c043b(param_1 + 0x12d,0x58,6,FUN_004fa720,FUN_00429100);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_006c043b(param_1 + 0x1b1,0x58,6,FUN_004fa720,FUN_00429100);
  *param_1 = &PTR_FUN_006f39b4;
  ExceptionList = local_c;
  return param_1;
}

