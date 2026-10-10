
void __fastcall FUN_00529270(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d802a;
  local_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &local_c;
  FUN_006c026a(param_1 + 0x17c,0x58,6,FUN_00429100);
  local_4._0_1_ = 3;
  FUN_00429100();
  local_4._0_1_ = 2;
  FUN_00429100();
  local_4._0_1_ = 1;
  FUN_00429100();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00429100();
  if (*(int *)(param_1 + 0x14) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
  }
  ExceptionList = local_c;
  return;
}

