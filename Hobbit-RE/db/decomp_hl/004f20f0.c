
int __fastcall FUN_004f20f0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6080;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006c043b(param_1 + 0x14,0x20,10,FUN_00650250,thunk_FUN_00650380);
  local_4 = 0;
  FUN_006c043b(param_1 + 0x194,0x20,0x1e,FUN_00650250,thunk_FUN_00650380);
  local_4._0_1_ = 1;
  FUN_004fa340();
  local_4._0_1_ = 2;
  FUN_004fa340();
  local_4._0_1_ = 3;
  FUN_006c043b(param_1 + 0x138c,4,5,&LAB_00484230,FUN_00406ba0);
  local_4._0_1_ = 4;
  FUN_00650250();
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00650250();
  *(undefined4 *)(param_1 + 0x7a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x730) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x554) = 0;
  ExceptionList = local_c;
  return param_1;
}

