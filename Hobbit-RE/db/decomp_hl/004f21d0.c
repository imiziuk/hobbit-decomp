
void __fastcall FUN_004f21d0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d6100;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  thunk_FUN_00650380();
  local_4._0_1_ = 4;
  thunk_FUN_00650380();
  local_4._0_1_ = 3;
  FUN_006c026a(param_1 + 0x138c,4,5,FUN_00406ba0);
  local_4._0_1_ = 2;
  FUN_004fa3c0();
  local_4._0_1_ = 1;
  FUN_004fa3c0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006c026a(param_1 + 0x194,0x20,0x1e,thunk_FUN_00650380);
  local_4 = 0xffffffff;
  FUN_006c026a(param_1 + 0x14,0x20,10,thunk_FUN_00650380);
  ExceptionList = local_c;
  return;
}

