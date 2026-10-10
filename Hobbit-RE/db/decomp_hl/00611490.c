
void __fastcall FUN_00611490(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e4168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f5978;
  local_4 = 0;
  if (DAT_007cc6c4 == 0) {
    if (DAT_007cc6bc != 0) {
      iVar1 = DAT_007cc6bc + -4;
      FUN_006c026a(DAT_007cc6bc,0x2c,*(undefined4 *)(DAT_007cc6bc + -4),FUN_00649ba0);
      FUN_006bf840(iVar1);
    }
    DAT_007cc6bc = 0;
    DAT_007cc6c0 = 0;
  }
  DAT_007cc6b8 = 0;
  local_4 = 0xffffffff;
  FUN_005be180();
  ExceptionList = local_c;
  return;
}

