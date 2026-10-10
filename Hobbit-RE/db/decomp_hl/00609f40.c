
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00609f40(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  if (_DAT_006f5524 <= *(float *)(param_1 + 0xb0)) {
    uVar1 = FUN_005af060(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0xb4) = uVar1;
    fVar3 = (float10)FUN_00647b30(0xbdcccccd,0x3dcccccd);
    *(float *)(param_1 + 0xb0) = (float)fVar3;
  }
  iVar2 = FUN_005af000();
  if (iVar2 == 0) {
    FUN_005af120();
    fVar3 = (float10)FUN_005aaac0();
    if ((float10)*(float *)(param_1 + 0xd8) < fVar3) {
LAB_00609fbc:
      iVar2 = FUN_005af780(2);
      if (iVar2 != 0) {
        FUN_005bec70(2);
        return;
      }
    }
    else {
      iVar2 = FUN_005af7e0();
      if (iVar2 != 0) goto LAB_00609fbc;
    }
    FUN_005af120();
    fVar3 = (float10)FUN_005aaac0();
    if (fVar3 <= (float10)*(float *)(param_1 + 0xd8)) {
      iVar2 = FUN_005af7e0();
      if (iVar2 == 0) goto LAB_0060a06c;
    }
    iVar2 = FUN_005af780(1);
    if (iVar2 != 0) {
      FUN_005bec70(1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0xb4) == 0) {
    iVar2 = FUN_005af780(4);
    if (iVar2 != 0) {
      FUN_005bec70(4);
      return;
    }
    if (*(int *)(param_1 + 0xb4) == 0) {
      iVar2 = FUN_005af780(7);
      uVar1 = 7;
      if (iVar2 != 0) goto LAB_0060a070;
    }
  }
LAB_0060a06c:
  uVar1 = param_2;
LAB_0060a070:
  FUN_005bec70(uVar1);
  return;
}

