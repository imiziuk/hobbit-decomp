
void __fastcall FUN_004b84e0(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d44bb;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x1ac);
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    ExceptionList = &local_c;
    FUN_006c026a(iVar1,8,*(undefined4 *)(iVar1 + -4),FUN_004b5230);
    FUN_006bf840(iVar1 + -4);
  }
  pvVar2 = operator_new(8);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004b51b0();
  }
  *(undefined4 *)(param_1 + 0x1ac) = uVar3;
  ExceptionList = local_c;
  return;
}

