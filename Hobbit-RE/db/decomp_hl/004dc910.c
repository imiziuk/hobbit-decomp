
void __fastcall FUN_004dc910(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d56ce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ef420;
  local_4 = 5;
  if (param_1[0x4b] != 0) {
    FUN_006bf840(param_1[0x4b]);
  }
  DAT_0075e040 = DAT_0075e040 + -1;
  if (DAT_0075e040 == 0) {
    DAT_0072dfc8 = 1;
    if (DAT_0075def8 == 0) {
      if (DAT_0075def0 != 0) {
        iVar1 = DAT_0075def0 + -4;
        FUN_006c026a(DAT_0075def0,0x2c,*(undefined4 *)(DAT_0075def0 + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_0075def0 = 0;
      DAT_0075def4 = 0;
    }
    DAT_0075deec = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  if ((param_1[0x69] != 2) && (iVar1 = param_1[0x67], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x1c,*(undefined4 *)(iVar1 + -4),FUN_005c8440);
    FUN_006bf840(iVar1 + -4);
  }
  if (param_1[0x62] != 2) {
    FUN_006bf840(param_1[0x60]);
  }
  if (param_1[0x5b] != 2) {
    FUN_006bf840(param_1[0x59]);
  }
  if (param_1[0x51] != 2) {
    FUN_006bf840(param_1[0x4f]);
  }
  if (param_1[0x45] != 2) {
    FUN_006bf840(param_1[0x43]);
  }
  local_4 = 0xffffffff;
  FUN_004e1e00();
  ExceptionList = local_c;
  return;
}

