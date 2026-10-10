
int __fastcall FUN_0052c750(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d820c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006c043b(param_1 + 0x18,0x20,0x2e,FUN_00650250,thunk_FUN_00650380);
  local_4 = 0;
  FUN_006c043b(param_1 + 0x5d8,0x20,0x32,FUN_00650250,thunk_FUN_00650380);
  local_4._0_1_ = 1;
  FUN_0064afa0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0064afa0();
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = local_c;
  return param_1;
}

