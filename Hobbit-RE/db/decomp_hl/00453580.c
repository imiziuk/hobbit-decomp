
void __thiscall FUN_00453580(int param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d0008;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x168) == 0) {
    ExceptionList = &pvStack_c;
    FUN_004534e0();
    FUN_0064a320(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x168) = 1;
  }
  FUN_00649600(s_AmbientAudioMgr__OnAdvanceLogic_00724fec);
  uStack_4 = 0;
  if (DAT_00724fa4 == 0) {
    FUN_00453920(param_2);
    FUN_00453690(param_1 + 0x2dc,param_2);
  }
  uStack_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

