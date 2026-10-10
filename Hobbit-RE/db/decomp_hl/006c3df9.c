
void FUN_006c3df9(int param_1)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_006fd628;
  puStack_10 = &LAB_006c22b0;
  local_14 = ExceptionList;
  if ((param_1 != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4), iVar1 != 0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_006bfeca(*(undefined4 *)(param_1 + 0x18),iVar1);
  }
  ExceptionList = local_14;
  return;
}

