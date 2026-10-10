
void FUN_006c404a(void)

{
  int iVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_006fd638;
  puStack_10 = &LAB_006c22b0;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  iVar1 = FUN_006c3f43();
  if (*(int *)(iVar1 + 0x60) != 0) {
    local_8 = 1;
    iVar1 = FUN_006c3f43();
    (**(code **)(iVar1 + 0x60))();
  }
  local_8 = 0xffffffff;
  FUN_006ca48e();
  return;
}

