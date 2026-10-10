
void __fastcall FUN_006200d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 auStack_20 [2];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(param_1 + 0x94);
  iVar3 = FUN_005af120();
  uVar1 = *(undefined4 *)(iVar3 + 8);
  uVar2 = *(undefined4 *)(iVar3 + 0xc);
  uStack_10 = FUN_005af0f0();
  iVar3 = 0;
  auStack_20[0] = 1;
  uStack_8 = 0;
  uStack_18 = uVar1;
  uStack_14 = uVar2;
  if (0 < iVar4) {
    do {
      FUN_0054e4d0(*(undefined4 *)(iVar3 + 0x30 + *(int *)(param_1 + 0x98)),
                   *(undefined4 *)(iVar3 + 0x34 + *(int *)(param_1 + 0x98)),auStack_20);
      iVar3 = iVar3 + 0x38;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00636480();
  return;
}

