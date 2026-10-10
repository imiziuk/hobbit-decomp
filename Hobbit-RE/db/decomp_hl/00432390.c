
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432390(float *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0064ca10(param_1[1],*param_1);
  fVar1 = (float10)FUN_0064c800((float)(fVar1 + fVar1));
  if (fVar1 < (float10)DAT_006e92e4 != (NAN(fVar1) || NAN((float10)DAT_006e92e4))) {
    fVar1 = -fVar1;
  }
  fVar1 = (float10)DAT_006e92e8 / (fVar1 * (float10)_DAT_006ec02c + (float10)DAT_006e92e8);
  *param_1 = (float)(fVar1 * (float10)*param_1);
  param_1[1] = (float)(fVar1 * (float10)param_1[1]);
  return;
}

