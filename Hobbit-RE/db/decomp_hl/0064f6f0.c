
undefined4 FUN_0064f6f0(undefined4 param_1)

{
  undefined4 uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e6466;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_007ce500 == 0) {
    ExceptionList = &pvStack_c;
    DAT_007ce500 = FUN_0064ec80();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  iStack_4 = 0;
  FUN_00649600(s_x_ftell_0074cf00);
  iStack_4._0_1_ = 1;
  uVar1 = (*DAT_007ce518)(param_1);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_00649720();
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  ExceptionList = pvStack_c;
  return uVar1;
}

