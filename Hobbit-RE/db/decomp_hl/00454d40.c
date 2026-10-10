
void __fastcall FUN_00454d40(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d0238;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ec448;
  local_4 = 8;
  FUN_00649ba0();
  local_4._0_1_ = 7;
  FUN_00649ba0();
  local_4._0_1_ = 6;
  FUN_00649ba0();
  local_4._0_1_ = 5;
  FUN_00649ba0();
  local_4._0_1_ = 4;
  FUN_00649ba0();
  local_4._0_1_ = 3;
  FUN_00649ba0();
  local_4._0_1_ = 2;
  FUN_00649ba0();
  local_4._0_1_ = 1;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  if ((param_1[0x46] != 2) && (iVar1 = param_1[0x44], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_004e1e00();
  ExceptionList = local_c;
  return;
}

