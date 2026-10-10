
void __fastcall FUN_005d22a0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006e01de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f4698;
  local_4 = 2;
  if ((param_1[0x1d] != 2) && (iVar1 = param_1[0x1b], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4._0_1_ = 1;
  if ((param_1[0x15] != 2) && (iVar1 = param_1[0x13], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((param_1[0xc] != 2) && (iVar1 = param_1[10], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  FUN_005cc2e0();
  ExceptionList = local_c;
  return;
}

