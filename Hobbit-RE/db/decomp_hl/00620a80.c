
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00620a80(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  longlong lVar7;
  
  if (_DAT_006f5f34 <= *(float *)(param_1 + 0x54)) {
    uVar4 = FUN_005af060(0x3f800000);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    fVar6 = (float10)FUN_00647b30(0xbdcccccd,0x3dcccccd);
    *(float *)(param_1 + 0x54) = (float)fVar6;
  }
  iVar5 = *(int *)(param_1 + 8);
  fVar1 = *(float *)(iVar5 + 400);
  fVar2 = *(float *)(iVar5 + 0x194);
  fVar3 = *(float *)(iVar5 + 0x198);
  iVar5 = FUN_005af000();
  if (iVar5 == 0) {
    FUN_005af120();
    fVar6 = (float10)FUN_005aaac0();
    if ((float10)*(float *)(param_1 + 0x60) < fVar6) {
LAB_00620b12:
      iVar5 = FUN_005af780(2);
      if (iVar5 != 0) {
        FUN_005bec70(2);
        return;
      }
    }
    else {
      iVar5 = FUN_005af7e0();
      if (iVar5 != 0) goto LAB_00620b12;
    }
    FUN_005af120();
    fVar6 = (float10)FUN_005aaac0();
    if (fVar6 <= (float10)*(float *)(param_1 + 0x60)) {
      iVar5 = FUN_005af7e0();
      if (iVar5 == 0) goto LAB_00620bcc;
    }
    iVar5 = FUN_005af780(1);
    if (iVar5 != 0) {
      FUN_005bec70(1);
      return;
    }
  }
  else {
    lVar7 = FUN_005be240();
    if ((lVar7 != 0) &&
       (fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3),
       fVar1 < *(float *)(param_1 + 0x48) != (fVar1 == *(float *)(param_1 + 0x48)))) {
      iVar5 = FUN_005af780(3);
      if ((iVar5 != 0) && (uVar4 = 3, *(int *)(param_1 + 0x58) != 0)) goto LAB_00620bd0;
    }
  }
LAB_00620bcc:
  uVar4 = param_2;
LAB_00620bd0:
  FUN_005bec70(uVar4);
  return;
}

