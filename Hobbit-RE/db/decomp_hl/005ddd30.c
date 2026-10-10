
void __fastcall FUN_005ddd30(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e0f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f48d4;
  local_4 = 0;
  if (param_1[0x15] != 2) {
    FUN_006bf840(param_1[0x13]);
  }
  if ((param_1[0xb] != 2) && (iVar1 = param_1[9], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  FUN_005cc2e0();
  ExceptionList = local_c;
  return;
}

