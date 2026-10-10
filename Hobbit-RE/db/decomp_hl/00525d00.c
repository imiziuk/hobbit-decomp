
void __fastcall FUN_00525d00(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d7c26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f3898;
  local_4 = 1;
  if (param_1[0x57] != 0) {
    FUN_006a1760(DAT_00813038);
    param_1[0x57] = 0;
  }
  FUN_00525db0();
  local_4 = local_4 & 0xffffff00;
  if ((param_1[0x60] != 2) && (iVar1 = param_1[0x5e], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_006a2380();
  ExceptionList = local_c;
  return;
}

