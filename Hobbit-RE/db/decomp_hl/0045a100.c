
void __fastcall FUN_0045a100(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d0406;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ec638;
  local_4 = 1;
  FUN_0054f7c0(param_1 + 0x67);
  local_4 = local_4 & 0xffffff00;
  if ((param_1[0x5f] != 2) && (iVar1 = param_1[0x5d], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_004c0460();
  ExceptionList = local_c;
  return;
}

