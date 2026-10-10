
void __fastcall FUN_00538a20(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d9056;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f3af0;
  DAT_00764840 = DAT_00764840 + -1;
  local_4 = 9;
  if (DAT_00764840 == 0) {
    if (DAT_007647e4 == 0) {
      if (DAT_007647dc != 0) {
        iVar1 = DAT_007647dc + -4;
        FUN_006c026a(DAT_007647dc,0x2c,*(undefined4 *)(DAT_007647dc + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_007647dc = 0;
      DAT_007647e0 = 0;
    }
    DAT_007647d8 = 0;
    if (DAT_00764800 == 0) {
      if (DAT_007647f8 != 0) {
        iVar1 = DAT_007647f8 + -4;
        FUN_006c026a(DAT_007647f8,0x2c,*(undefined4 *)(DAT_007647f8 + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_007647f8 = 0;
      DAT_007647f4 = 0;
      DAT_007647fc = 0;
    }
    else {
      DAT_007647f4 = 0;
    }
  }
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

