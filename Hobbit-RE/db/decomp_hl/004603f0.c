
void __fastcall FUN_004603f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d0774;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ecb80;
  local_4 = 2;
  FUN_00460680();
  local_4._0_1_ = 1;
  FUN_005a32c0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

