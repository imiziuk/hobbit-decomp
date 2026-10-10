
undefined4 FUN_0064f4f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uStack_38;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e6418;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_007ce500 == 0) {
    ExceptionList = &pvStack_c;
    DAT_007ce500 = FUN_0064ec80();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  iStack_4 = 0;
  FUN_00649600(s_x_fprintf_0074cee0);
  iStack_4._0_1_ = 1;
  FUN_006499d0();
  iStack_4._0_1_ = 2;
  FUN_00649f30(param_2,&stack0x0000000c);
  uVar1 = (*DAT_007ce510)(param_1,uStack_38,uStack_14);
  iStack_4._0_1_ = 1;
  FUN_00649ba0();
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_00649720();
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  ExceptionList = pvStack_c;
  return uVar1;
}

