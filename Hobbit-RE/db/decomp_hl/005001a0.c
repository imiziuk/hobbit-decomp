
void FUN_005001a0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d683e;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_00649ba0();
  local_4._0_1_ = 1;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

