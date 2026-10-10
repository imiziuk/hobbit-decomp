
void __fastcall FUN_00488b10(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d2d80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ed3c0;
  DAT_0075ceb8 = DAT_0075ceb8 + -1;
  local_4 = 4;
  if ((DAT_0075ceb8 == 0) && (DAT_0075cebc != 0)) {
    FUN_00674e10(DAT_0075cebc);
    iVar1 = DAT_0075cebc;
    if (DAT_0075cebc != 0) {
      thunk_FUN_00650380();
      FUN_006bf840(iVar1);
    }
    DAT_0075cebc = 0;
  }
  FUN_006b7660();
  FUN_006b6f20(param_1 + 0x2a);
  local_4._0_1_ = 3;
  FUN_00649ba0();
  local_4._0_1_ = 2;
  if ((param_1[0x5d] != 2) && (iVar1 = param_1[0x5b], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4._0_1_ = 1;
  FUN_006b7660();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005a32c0();
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

