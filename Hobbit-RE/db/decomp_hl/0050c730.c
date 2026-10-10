
void __fastcall FUN_0050c730(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_b4 [44];
  undefined1 auStack_88 [76];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d6e31;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_0052e130();
  if (*(int *)(param_1 + 0x15c) != 0) {
    FUN_006a3240(0x100,0);
  }
  if (*(int *)(param_1 + 0x160) != 0) {
    FUN_006a3240(0x100,0);
  }
  if (iVar1 != *(int *)(param_1 + 0x170)) {
    *(int *)(param_1 + 0x170) = iVar1;
    FUN_006a4b90();
    iVar1 = 0;
    bVar3 = *(int *)(param_1 + 0x170) == 0;
    if (*(int *)(param_1 + 0x170) < 1) goto LAB_0050c8a3;
    do {
      FUN_006499d0();
      uStack_4 = 0;
      FUN_0064afa0();
      uStack_3c = 0xffffffff;
      uStack_38 = 0xffffffff;
      uStack_34 = 0;
      uStack_2c = 0;
      uStack_2a = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_4 = 1;
      iVar2 = FUN_0052f3c0(iVar1,auStack_b4);
      if (iVar2 != 0) {
        FUN_006a4af0(auStack_88,0);
      }
      uStack_4 = 2;
      FUN_0064b190();
      uStack_4 = 0xffffffff;
      FUN_00649ba0();
      iVar2 = *(int *)(param_1 + 0x170);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
    bVar3 = iVar2 == 0;
    if (iVar2 < 1) goto LAB_0050c8a3;
    FUN_006a4c90(0);
  }
  bVar3 = *(int *)(param_1 + 0x170) == 0;
LAB_0050c8a3:
  if (bVar3) {
    if (*(int *)(param_1 + 0x15c) != 0) {
      FUN_006a3240(0x100,1);
    }
    if (*(int *)(param_1 + 0x160) != 0) {
      FUN_006a3240(0x100,1);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

