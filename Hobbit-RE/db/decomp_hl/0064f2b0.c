
void FUN_0064f2b0(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e63c2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_007ce500 == 0) {
    ExceptionList = &pvStack_c;
    DAT_007ce500 = FUN_0064ec80();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  iStack_4 = 0;
  FUN_00649600(s_x_fclose_0074cec0);
  iStack_4._0_1_ = 1;
  if (param_1 != 0) {
    FUN_0064f5c0(param_1);
    FUN_0064ed80(param_1);
    (*DAT_007ce508)(param_1);
  }
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_00649720();
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  ExceptionList = pvStack_c;
  return;
}

