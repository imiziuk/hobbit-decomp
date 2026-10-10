
void __fastcall FUN_004531b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006cffec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ec350;
  local_4 = 0xc;
  FUN_00453500();
  FUN_00649b60(param_1 + 0x48);
  FUN_00453f10();
  DAT_0075ca60 = 0;
  local_4._0_1_ = 0xe;
  FUN_00649ba0();
  local_4._0_1_ = 0xd;
  FUN_00649ba0();
  local_4._0_1_ = 0xb;
  FUN_00649ba0();
  local_4._0_1_ = 0x10;
  FUN_00649ba0();
  local_4._0_1_ = 0xf;
  FUN_00649ba0();
  local_4._0_1_ = 10;
  FUN_00649ba0();
  local_4._0_1_ = 9;
  FUN_00649ba0();
  local_4._0_1_ = 8;
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
  if ((param_1[0x58] != 2) && (param_1[0x56] != 0)) {
    FUN_006c026a();
    FUN_006bf840();
  }
  local_4._0_1_ = 2;
  FUN_00649ba0();
  local_4._0_1_ = 1;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

