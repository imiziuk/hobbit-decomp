
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004642a0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d0844;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ecc88;
  iVar1 = param_1[0x4a];
  local_4 = 2;
  if (iVar1 != 0) {
    FUN_005405d0();
    FUN_006bf840(iVar1);
    param_1[0x4a] = 0;
  }
  _DAT_0075cc00 = _DAT_0075cc00 + -1;
  if (_DAT_0075cc00 == 0) {
    if (DAT_0075cbb8 == 0) {
      FUN_006bf840(DAT_0075cbb0);
      DAT_0075cbb0 = 0;
      DAT_0075cbb4 = 0;
    }
    DAT_0075cbac = 0;
    if (DAT_0075cbd4 == 0) {
      if (DAT_0075cbcc != 0) {
        iVar1 = DAT_0075cbcc + -4;
        FUN_006c026a(DAT_0075cbcc,0x4c,*(undefined4 *)(DAT_0075cbcc + -4),FUN_0064b190);
        FUN_006bf840(iVar1);
      }
      DAT_0075cbcc = 0;
      _DAT_0075cbd0 = 0;
    }
    _DAT_0075cbc8 = 0;
    DAT_0075cbfc = 0;
  }
  local_4._0_1_ = 1;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005432e0();
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

