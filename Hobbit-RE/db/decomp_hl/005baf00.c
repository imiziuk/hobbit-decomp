
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005baf00(int param_1,float param_2)

{
  int *piVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  piVar1 = (int *)FUN_0041bcc0();
  fVar3 = (float10)(**(code **)(*piVar1 + 0x110))();
  if (fVar3 < (float10)_DAT_006f42c0 != (NAN(fVar3) || NAN((float10)_DAT_006f42c0))) {
    fVar3 = (float10)DAT_006e92e4;
  }
  fVar3 = (float10)param_2 * (float10)_DAT_006e9988 * fVar3;
  if (fVar3 <= (float10)DAT_006e92e4) {
    fVar3 = (float10)*(float *)(param_1 + 100) - (float10)param_2 * (float10)_DAT_006e92f4;
    if (fVar3 < (float10)DAT_006e92e4) {
      fVar3 = (float10)DAT_006e92e4;
    }
  }
  else {
    fVar3 = fVar3 + (float10)*(float *)(param_1 + 100);
  }
  *(float *)(param_1 + 100) = (float)fVar3;
  uVar2 = __ftol();
  FUN_004f8a30(uVar2);
  if (_DAT_006e9364 <= *(float *)(param_1 + 100)) {
    FUN_005baab0();
  }
  return;
}

