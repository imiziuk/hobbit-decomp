
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0048bdf0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d2f14;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ed4e8;
  DAT_0075cf18 = DAT_0075cf18 + -1;
  local_4 = 2;
  DAT_0075cf1c = 0;
  if (DAT_0075cf18 == 0) {
    if (DAT_0075cf10 == 0) {
      if (DAT_0075cf08 != 0) {
        iVar1 = DAT_0075cf08 + -4;
        FUN_006c026a(DAT_0075cf08,0x2c,*(undefined4 *)(DAT_0075cf08 + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_0075cf08 = 0;
      DAT_0075cf0c = 0;
    }
    DAT_0075cf04 = 0;
    if (DAT_0075ced8 == 0) {
      if (DAT_0075ced0 != 0) {
        iVar1 = DAT_0075ced0 + -4;
        FUN_006c026a(DAT_0075ced0,0x2c,*(undefined4 *)(DAT_0075ced0 + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_0075ced0 = 0;
      _DAT_0075ced4 = 0;
    }
    _DAT_0075cecc = 0;
    DAT_0072940c = 1;
  }
  local_4._0_1_ = 1;
  if ((param_1[0x48] != 2) && (iVar1 = param_1[0x46], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((param_1[0x41] != 2) && (iVar1 = param_1[0x3f], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

