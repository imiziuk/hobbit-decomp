
int FUN_0064f350(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e63dc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_007ce500 == 0) {
    ExceptionList = &pvStack_c;
    DAT_007ce500 = FUN_0064ec80();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  iStack_4 = 0;
  FUN_00649600(s_x_fread_0074cecc);
  iStack_4._0_1_ = 1;
  if (param_2 * param_3 == 0) {
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    FUN_00649720();
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
    ExceptionList = pvStack_c;
    return 0;
  }
  iVar1 = (*DAT_007ce50c)(param_4,param_1,param_2 * param_3);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_00649720();
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  ExceptionList = pvStack_c;
  return iVar1 / param_2;
}

