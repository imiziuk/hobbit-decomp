
void __fastcall FUN_006a2eb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006e7894;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006fcca4;
  local_4 = 2;
  FUN_006a3050();
  local_4._0_1_ = 1;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0064b190();
  if (param_1[9] != 2) {
    FUN_006bf840(param_1[7]);
  }
  ExceptionList = local_c;
  return;
}

