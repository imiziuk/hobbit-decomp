
void FUN_00669340(uint param_1)

{
  int iVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e6b40;
  pvStack_10 = ExceptionList;
  uVar2 = param_1 | 0x1f;
  if (0x7ffffffd < (param_1 | 0x1f)) {
    uVar2 = param_1;
  }
  iVar1 = uVar2 + 2;
  local_8 = 0;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  ExceptionList = &pvStack_10;
  operator_new(iVar1 * 2);
  FUN_006693c2();
  return;
}

