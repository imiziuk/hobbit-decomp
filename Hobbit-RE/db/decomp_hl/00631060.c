
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00631060(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  if (_DAT_006e936c <= *(float *)(param_1 + 0x58)) {
    uVar1 = FUN_005af060(*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    fVar3 = (float10)FUN_00647b30(0xbdcccccd,0x3dcccccd);
    *(float *)(param_1 + 0x58) = (float)fVar3;
  }
  iVar2 = FUN_005af000();
  if (iVar2 == 0) {
    FUN_005af120();
    fVar3 = (float10)FUN_005aaac0();
    if ((float10)*(float *)(param_1 + 0x60) < fVar3) {
LAB_006310d0:
      iVar2 = FUN_005af780(2);
      if (iVar2 != 0) {
        FUN_005bec70(2);
        return;
      }
    }
    else {
      iVar2 = FUN_005af7e0();
      if (iVar2 != 0) goto LAB_006310d0;
    }
    FUN_005af120();
    fVar3 = (float10)FUN_005aaac0();
    if (fVar3 <= (float10)*(float *)(param_1 + 0x60)) {
      iVar2 = FUN_005af7e0();
      if (iVar2 == 0) goto LAB_00631172;
    }
    iVar2 = FUN_005af780(1);
    if (iVar2 != 0) {
      FUN_005bec70(1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x5c) == 0) {
LAB_0063115f:
    iVar2 = FUN_005af780(4);
    uVar1 = 4;
    if (iVar2 != 0) goto LAB_00631176;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x174);
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x170);
    FUN_005afc20(uVar4,uVar1);
    iVar2 = FUN_005c7e80(uVar4,uVar1);
    if (iVar2 == 0) goto LAB_0063115f;
  }
LAB_00631172:
  uVar1 = param_2;
LAB_00631176:
  FUN_005bec70(uVar1);
  return;
}

