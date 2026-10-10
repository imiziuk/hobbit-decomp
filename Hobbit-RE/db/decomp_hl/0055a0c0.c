
void __fastcall FUN_0055a0c0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006da03b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x70) != 2) {
    ExceptionList = &local_c;
    FUN_006bf840(*(undefined4 *)(param_1 + 0x68));
  }
  if (*(int *)(param_1 + 0x54) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x4c));
  }
  if ((*(int *)(param_1 + 0x38) != 2) && (iVar1 = *(int *)(param_1 + 0x30), iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = 0xffffffff;
  if ((*(int *)(param_1 + 0x18) != 2) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  ExceptionList = local_c;
  return;
}

