
void __fastcall FUN_00640670(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006e5d23;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00640710();
  local_4 = local_4 & 0xffffff00;
  if ((*(int *)(param_1 + 0x30) != 2) && (iVar1 = *(int *)(param_1 + 0x28), iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00642240);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = 0xffffffff;
  if ((*(int *)(param_1 + 0x14) != 2) && (iVar1 = *(int *)(param_1 + 0xc), iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  ExceptionList = local_c;
  return;
}

