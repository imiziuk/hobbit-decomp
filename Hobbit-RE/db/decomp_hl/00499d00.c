
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00499d00(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  fVar1 = param_3[2];
  param_1[2] = fVar1;
  fVar1 = fVar1 * fVar1 + param_1[1] * param_1[1] + *param_1 * *param_1;
  if (((NAN(_DAT_006e92f0) || NAN(fVar1)) || _DAT_006e92f0 < fVar1 == (_DAT_006e92f0 == fVar1)) ||
     ((NAN(fVar1) || NAN(_DAT_006e92ec)) || fVar1 < _DAT_006e92ec == (fVar1 == _DAT_006e92ec))) {
    fVar1 = DAT_006e92e8 / SQRT(fVar1);
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
  }
  param_1[3] = -(*param_2 * *param_1 + param_2[1] * param_1[1] + param_2[2] * param_1[2]);
  return;
}

