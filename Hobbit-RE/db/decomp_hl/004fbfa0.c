
void __fastcall FUN_004fbfa0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d642b;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  local_4 = 0;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    ExceptionList = &local_c;
    FUN_006c026a(iVar1,0xa4,*(undefined4 *)(iVar1 + -4),FUN_004fc020);
    FUN_006bf840(iVar1 + -4);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  local_4 = 0xffffffff;
  FUN_00671570();
  ExceptionList = local_c;
  return;
}

