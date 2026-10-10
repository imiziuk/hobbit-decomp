
undefined4 __thiscall FUN_0064f020(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e6362;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_007ce500 == 0) {
    ExceptionList = &pvStack_c;
    DAT_007ce500 = FUN_0064ec80(param_1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  uStack_4 = 0;
  FUN_00649860(param_2,&stack0x00000008);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  iVar2 = FUN_006498c0();
  uVar1 = *(undefined4 *)(iVar2 + -4);
  if (DAT_007ce528 != (code *)0x0) {
    uVar3 = FUN_006498c0();
    (*DAT_007ce528)(uVar3);
  }
  uStack_4 = uStack_4 & 0xffffff00;
  FUN_006498d0();
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_007ce4e8);
  ExceptionList = pvStack_c;
  return uVar1;
}

