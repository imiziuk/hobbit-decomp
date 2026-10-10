
void __fastcall FUN_005b30e0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006de8a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f42a8;
  local_4 = 1;
  if (param_1[7] == 0) {
    iVar1 = param_1[5];
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x30,*(undefined4 *)(iVar1 + -4),FUN_005b69c0);
      FUN_006bf840(iVar1 + -4);
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[4] = 0;
  if (param_1[0xe] == 0) {
    iVar1 = param_1[0xc];
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x30,*(undefined4 *)(iVar1 + -4),FUN_005b69c0);
      FUN_006bf840(iVar1 + -4);
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  param_1[0xb] = 0;
  local_4 = local_4 & 0xffffff00;
  if ((param_1[0xe] != 2) && (iVar1 = param_1[0xc], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x30,*(undefined4 *)(iVar1 + -4),FUN_005b69c0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = 0xffffffff;
  if ((param_1[7] != 2) && (iVar1 = param_1[5], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x30,*(undefined4 *)(iVar1 + -4),FUN_005b69c0);
    FUN_006bf840(iVar1 + -4);
  }
  ExceptionList = local_c;
  return;
}

