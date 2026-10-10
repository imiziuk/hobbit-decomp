
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006397e0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e59a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f6b50;
  local_4 = 1;
  if (DAT_007cc7e4 == 0) {
    if (DAT_007cc7dc != 0) {
      iVar1 = DAT_007cc7dc + -4;
      FUN_006c026a(DAT_007cc7dc,0x2c,*(undefined4 *)(DAT_007cc7dc + -4),FUN_00649ba0);
      FUN_006bf840(iVar1);
    }
    DAT_007cc7dc = 0;
    _DAT_007cc7e0 = 0;
  }
  _DAT_007cc7d8 = 0;
  if (param_1[0x17] != 2) {
    FUN_006bf840(param_1[0x15]);
  }
  local_4 = 0xffffffff;
  FUN_005be180();
  ExceptionList = local_c;
  return;
}

