
void __fastcall FUN_00524260(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d7ae4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f3770;
  local_4 = 2;
  thunk_FUN_006a3050();
  local_4._0_1_ = 1;
  FUN_0064b190();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0064b190();
  local_4 = 0xffffffff;
  FUN_006a2380();
  ExceptionList = local_c;
  return;
}

