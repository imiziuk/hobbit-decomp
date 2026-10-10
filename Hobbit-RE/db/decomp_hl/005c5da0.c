
void __fastcall FUN_005c5da0(int param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_006df78b;
  ExceptionList = &pvStack_c;
  *(undefined ***)(param_1 + 0x48) = &PTR_FUN_006f44cc;
  iVar1 = *(int *)(param_1 + 0x4c);
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  while (iVar1 != 0) {
    FUN_005c9070();
    iVar1 = *(int *)(param_1 + 0x4c);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005c8fe0();
  *(undefined ***)(param_1 + 0xc) = &PTR_FUN_006f44d8;
  iVar1 = *(int *)(param_1 + 0x10);
  local_4 = 2;
  while (iVar1 != 0) {
    FUN_005c9070();
    iVar1 = *(int *)(param_1 + 0x10);
  }
  local_4 = 0xffffffff;
  FUN_005c8fe0();
  ExceptionList = pvStack_c;
  return;
}

