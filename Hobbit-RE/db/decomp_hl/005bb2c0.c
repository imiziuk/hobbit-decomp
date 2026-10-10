
void __fastcall FUN_005bb2c0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006deed4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f4360;
  iVar1 = 0;
  local_4 = 2;
  if (0 < (int)param_1[0x4d]) {
    do {
      FUN_006bf840(*(undefined4 *)(param_1[0x4e] + iVar1 * 4));
      *(undefined4 *)(param_1[0x4e] + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0x4d]);
  }
  if (param_1[0x50] == 0) {
    FUN_006bf840(param_1[0x4e]);
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
  }
  param_1[0x4d] = 0;
  FUN_004f8a30(0xffffffff);
  if (param_1[0x50] != 2) {
    FUN_006bf840(param_1[0x4e]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_005432e0();
  local_4 = 0xffffffff;
  FUN_006397e0();
  ExceptionList = local_c;
  return;
}

