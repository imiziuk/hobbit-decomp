
void __fastcall FUN_0060cec0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006e3e6c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f56c8;
  local_4 = 3;
  FUN_00649ba0();
  local_4._0_1_ = 2;
  FUN_00649ba0();
  local_4._0_1_ = 1;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_005be180();
  ExceptionList = local_c;
  return;
}

