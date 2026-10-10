
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0040afd0(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  fVar2 = (float10)FUN_0064cd90();
  fVar2 = fVar2 * (float10)*(float *)(param_1 + 0x30);
  if (((float10)_DAT_006e93a8 <= fVar2) &&
     (fVar2 < (float10)_DAT_006e93a0 != (NAN(fVar2) || NAN((float10)_DAT_006e93a0)))) {
    return 2;
  }
  if (((float10)_DAT_006e9398 <= fVar2) &&
     (fVar2 < (float10)_DAT_006e9390 != (NAN(fVar2) || NAN((float10)_DAT_006e9390)))) {
    return 3;
  }
  uVar1 = 4;
  if (fVar2 < (float10)_DAT_006e9388) {
    uVar1 = 1;
  }
  return uVar1;
}

