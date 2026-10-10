
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00627070(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  if (_DAT_006f618c <= *(float *)(param_1 + 0x60)) {
    uVar1 = FUN_005af060(*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 100) = uVar1;
    fVar3 = (float10)FUN_00647b30(0xbdcccccd,0x3dcccccd);
    *(float *)(param_1 + 0x60) = (float)fVar3;
  }
  iVar2 = FUN_005af000();
  if (iVar2 == 0) {
    FUN_005af120();
    fVar3 = (float10)FUN_005aaac0();
    if ((float10)*(float *)(param_1 + 0x70) < fVar3) {
LAB_006270e0:
      iVar2 = FUN_005af780(2);
      if (iVar2 != 0) {
        FUN_005bec70(2);
        return;
      }
    }
    else {
      iVar2 = FUN_005af7e0();
      if (iVar2 != 0) goto LAB_006270e0;
    }
    FUN_005af120();
    fVar3 = (float10)FUN_005aaac0();
    if (fVar3 <= (float10)*(float *)(param_1 + 0x70)) {
      iVar2 = FUN_005af7e0();
      if (iVar2 == 0) goto LAB_0062713b;
    }
    iVar2 = FUN_005af780(1);
    uVar1 = 1;
    if (iVar2 != 0) goto LAB_0062713f;
  }
LAB_0062713b:
  uVar1 = param_2;
LAB_0062713f:
  FUN_005bec70(uVar1);
  return;
}

