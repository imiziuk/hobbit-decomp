
void __fastcall FUN_00527aa0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d7eb6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f3990;
  local_4 = 3;
  FUN_00429100();
  local_4._0_1_ = 2;
  FUN_006c026a(param_1 + 0x35,0x58,0xc,FUN_00429100);
  local_4._0_1_ = 1;
  FUN_00429100();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00429100();
  FUN_00526ac0();
  ExceptionList = local_c;
  return;
}

