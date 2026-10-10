
void __fastcall FUN_0047a440(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d1ef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ed0d4;
  local_4 = 0;
  if (DAT_0075cd58 == 0) {
    if (DAT_0075cd50 != 0) {
      iVar1 = DAT_0075cd50 + -4;
      FUN_006c026a(DAT_0075cd50,0x2c,*(undefined4 *)(DAT_0075cd50 + -4),FUN_00649ba0);
      FUN_006bf840(iVar1);
    }
    DAT_0075cd50 = 0;
    DAT_0075cd54 = 0;
  }
  DAT_0075cd4c = 0;
  *param_1 = &PTR_FUN_006ed02c;
  ExceptionList = local_c;
  return;
}

