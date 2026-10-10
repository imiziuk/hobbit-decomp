
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00637990(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  
  if (_DAT_006f6a2c <= *(float *)(param_1 + 0x50)) {
    uVar3 = FUN_005af060(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    fVar6 = (float10)FUN_00647b30(0xbdcccccd,0x3dcccccd);
    *(float *)(param_1 + 0x50) = (float)fVar6;
  }
  iVar4 = FUN_005af000();
  iVar5 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    FUN_005af120();
    fVar6 = (float10)FUN_005aaac0();
    if ((float10)*(float *)(param_1 + 0x80) < fVar6) {
LAB_00637a03:
      iVar5 = FUN_005af780(2);
      if (iVar5 != 0) {
        FUN_005bec70(2);
        return;
      }
    }
    else {
      iVar5 = FUN_005af7e0();
      if (iVar5 != 0) goto LAB_00637a03;
    }
    FUN_005af120();
    fVar6 = (float10)FUN_005aaac0();
    if (fVar6 <= (float10)*(float *)(param_1 + 0x80)) {
      iVar5 = FUN_005af7e0();
      if (iVar5 == 0) goto LAB_00637b64;
    }
    iVar5 = FUN_005af780(1);
    if (iVar5 != 0) {
      FUN_005bec70(1);
      return;
    }
  }
  else {
    fVar1 = SQRT(*(float *)(iVar5 + 400) * *(float *)(iVar5 + 400) +
                 *(float *)(iVar5 + 0x194) * *(float *)(iVar5 + 0x194) +
                 *(float *)(iVar5 + 0x198) * *(float *)(iVar5 + 0x198));
    fVar2 = *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x68);
    if ((fVar2 < fVar1 == (NAN(fVar2) || NAN(fVar1))) && (*(int *)(param_1 + 0x54) != 0)) {
      uVar3 = *(undefined4 *)(iVar5 + 0x174);
      uVar7 = *(undefined4 *)(iVar5 + 0x170);
      FUN_005afc20(uVar7,uVar3);
      iVar5 = FUN_005c7e80(uVar7,uVar3);
      if (iVar5 == 0) goto LAB_00637ad2;
    }
    else {
LAB_00637ad2:
      iVar5 = FUN_005af780(4);
      if (iVar5 != 0) {
        FUN_005bec70(4);
        return;
      }
    }
    iVar5 = *(int *)(param_1 + 8);
    fVar1 = SQRT(*(float *)(iVar5 + 400) * *(float *)(iVar5 + 400) +
                 *(float *)(iVar5 + 0x194) * *(float *)(iVar5 + 0x194) +
                 *(float *)(iVar5 + 0x198) * *(float *)(iVar5 + 0x198));
    fVar2 = *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x68);
    if ((fVar2 < fVar1 == (NAN(fVar2) || NAN(fVar1))) && (*(int *)(param_1 + 0x54) != 0)) {
      uVar3 = *(undefined4 *)(iVar5 + 0x174);
      uVar7 = *(undefined4 *)(iVar5 + 0x170);
      FUN_005afc20(uVar7,uVar3);
      iVar5 = FUN_005c7e80(uVar7,uVar3);
      if (iVar5 == 0) goto LAB_00637b51;
    }
    else {
LAB_00637b51:
      iVar5 = FUN_005af780(7);
      uVar3 = 7;
      if (iVar5 != 0) goto LAB_00637b68;
    }
  }
LAB_00637b64:
  uVar3 = param_2;
LAB_00637b68:
  FUN_005bec70(uVar3);
  return;
}

