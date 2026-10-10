
void __fastcall FUN_0052c7e0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d825c;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_0064b190();
  local_4._0_1_ = 1;
  FUN_0064b190();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006c026a(param_1 + 0x5d8,0x20,0x32,thunk_FUN_00650380);
  local_4 = 0xffffffff;
  FUN_006c026a(param_1 + 0x18,0x20,0x2e,thunk_FUN_00650380);
  ExceptionList = local_c;
  return;
}

