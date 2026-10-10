
void __fastcall FUN_00520040(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d7921;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f35c0;
  local_4 = 2;
  thunk_FUN_006a3050();
  local_4._0_1_ = 1;
  FUN_00671570();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006c026a(param_1 + 0x80,400,3,FUN_004f9240);
  local_4 = 0xffffffff;
  FUN_006a2380();
  ExceptionList = local_c;
  return;
}

