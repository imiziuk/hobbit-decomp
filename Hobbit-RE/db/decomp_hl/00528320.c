
void __fastcall FUN_00528320(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d7f8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f39b4;
  local_4 = 4;
  FUN_006c026a(param_1 + 0x1b1,0x58,6,FUN_00429100);
  local_4._0_1_ = 3;
  FUN_006c026a(param_1 + 0x12d,0x58,6,FUN_00429100);
  local_4._0_1_ = 2;
  FUN_006c026a(param_1 + 0xa9,0x58,6,FUN_00429100);
  local_4._0_1_ = 1;
  FUN_006c026a(param_1 + 0x25,0x58,6,FUN_00429100);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00429100();
  FUN_00526ac0();
  ExceptionList = local_c;
  return;
}

