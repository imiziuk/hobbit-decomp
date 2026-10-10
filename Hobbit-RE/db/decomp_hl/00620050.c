
void __fastcall FUN_00620050(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e4998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f5eb0;
  local_4 = 0;
  if ((param_1[0x28] != 2) && (iVar1 = param_1[0x26], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x38,*(undefined4 *)(iVar1 + -4),thunk_FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_006361f0();
  ExceptionList = local_c;
  return;
}

