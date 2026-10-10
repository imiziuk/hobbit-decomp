
void __fastcall FUN_0059bff0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006dd698;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  if ((*(int *)(param_1 + 0x14) != 2) && (iVar1 = *(int *)(param_1 + 0xc), iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  ExceptionList = local_c;
  return;
}

