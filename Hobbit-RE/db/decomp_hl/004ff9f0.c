
void FUN_004ff9f0(void)

{
  int iVar1;
  float10 fVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d67d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_RunLogic_00731020);
  local_4 = 0;
  FUN_004ff8a0();
  FUN_00649600(s_LogicMgr_00731014);
  local_4._0_1_ = 1;
  FUN_00557850(DAT_007607f0);
  FUN_00557890();
  local_4._0_1_ = 0;
  FUN_00649720();
  FUN_006a0490(0x3f800000);
  fVar2 = (float10)FUN_00557bc0();
  FUN_0054eca0((float)fVar2);
  FUN_00649600(s_Level_0073100c);
  local_4._0_1_ = 2;
  if (DAT_0075fc00 != (int *)0x0) {
    iVar1 = FUN_00557840();
    if (iVar1 == 0) {
      iVar1 = *DAT_0075fc00;
      fVar2 = (float10)FUN_00557bc0();
      (**(code **)(iVar1 + 0x18))((float)fVar2);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649720();
  fVar2 = (float10)FUN_00557bc0();
  FUN_00429100((float)fVar2);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

