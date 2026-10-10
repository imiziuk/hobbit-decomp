
void __fastcall FUN_005d14d0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006e00b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f466c;
  local_4 = 1;
  if ((param_1[0x19] != 2) && (iVar1 = param_1[0x17], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  FUN_005cc2e0();
  ExceptionList = local_c;
  return;
}

