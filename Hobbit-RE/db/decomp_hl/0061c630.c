
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0061c630(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  if (_DAT_006f5be0 <= *(float *)(param_1 + 0x50)) {
    uVar1 = FUN_005af060(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    fVar3 = (float10)FUN_00647b30(0xbdcccccd,0x3dcccccd);
    *(float *)(param_1 + 0x50) = (float)fVar3;
  }
  iVar2 = FUN_005af000();
  if (iVar2 == 0) {
    FUN_005af120();
    fVar3 = (float10)FUN_005aaac0();
    if ((float10)_DAT_006f5bd4 < fVar3) {
      iVar2 = FUN_005af780(2);
      uVar1 = 2;
      if (iVar2 != 0) goto LAB_0061c6aa;
    }
  }
  uVar1 = param_2;
LAB_0061c6aa:
  FUN_005bec70(uVar1);
  return;
}

