
void __fastcall FUN_005cfa70(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006dfe13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f4614;
  local_4 = 1;
  if ((param_1[0x18] != 2) && (iVar1 = param_1[0x16], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x4c,*(undefined4 *)(iVar1 + -4),FUN_0064b190);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  FUN_005cc2e0();
  ExceptionList = local_c;
  return;
}

