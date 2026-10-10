
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005af000(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x180) != 0 || *(int *)(param_1 + 0x184) != 0) {
    return 1;
  }
  iVar1 = FUN_005af120();
  if ((*(int *)(iVar1 + 0x238) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    FUN_005af120();
    fVar2 = (float10)FUN_005aaac0();
    if (fVar2 < (float10)_DAT_006f4280 != (NAN(fVar2) || NAN((float10)_DAT_006f4280))) {
      return 1;
    }
  }
  return 0;
}

