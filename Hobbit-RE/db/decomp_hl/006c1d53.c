
void FUN_006c1d53(LPVOID param_1)

{
  int iVar1;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_006fd500;
  puStack_10 = &LAB_006c22b0;
  local_14 = ExceptionList;
  if (param_1 == (LPVOID)0x0) {
    return;
  }
  if (DAT_00816370 == 3) {
    ExceptionList = &local_14;
    FUN_006c56f9(9);
    local_8 = 0;
    local_20 = FUN_006c88e1(param_1);
    if (local_20 != 0) {
      FUN_006c890c(local_20,param_1);
    }
    local_8 = 0xffffffff;
    FUN_006c1dbd();
    iVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_00816370 != 2) goto LAB_006c1e1f;
    ExceptionList = &local_14;
    FUN_006c56f9(9);
    local_8 = 1;
    local_28 = FUN_006c963c(param_1,&local_2c,&local_24);
    if (local_28 != 0) {
      FUN_006c9693(local_2c,local_24,local_28);
    }
    local_8 = 0xffffffff;
    FUN_006c1e15();
    iVar1 = local_28;
  }
  if (iVar1 != 0) {
    ExceptionList = local_14;
    return;
  }
LAB_006c1e1f:
  HeapFree(DAT_0081636c,0,param_1);
  ExceptionList = local_14;
  return;
}

