
void FUN_00419f60(void)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006cf130;
  local_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &local_c;
  FUN_00429100();
  local_4._0_1_ = 3;
  FUN_00429100();
  local_4._0_1_ = 2;
  FUN_00429100();
  local_4._0_1_ = 1;
  FUN_00429100();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00429100();
  local_4 = 0xffffffff;
  FUN_0041a030();
  ExceptionList = local_c;
  return;
}

