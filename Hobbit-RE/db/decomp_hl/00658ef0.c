
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00658ef0(float param_1,float param_2,undefined4 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar1 = _DAT_007eda5c * param_4[1] + _DAT_007eda6c * param_4[2] + _DAT_007eda4c * *param_4 +
          _DAT_007eda7c;
  fVar2 = _DAT_007eda60 * param_4[1] + _DAT_007eda70 * param_4[2] + _DAT_007eda50 * *param_4 +
          _DAT_007eda80;
  fVar3 = _DAT_007eda64 * param_4[1] + _DAT_007eda74 * param_4[2] + _DAT_007eda54 * *param_4 +
          _DAT_007eda84;
  fVar1 = fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;
  param_2 = _DAT_007eda90 * param_2;
  fVar2 = param_2 * param_2;
  if ((!NAN(fVar2) && !NAN(fVar1)) && fVar2 < fVar1 != (fVar2 == fVar1)) {
    *param_5 = 0.0;
    return;
  }
  param_1 = _DAT_007eda8c * param_1;
  if ((param_1 * param_1 < fVar1) && (param_1 + DAT_006e92e8 < param_2)) {
    fVar4 = (float10)FUN_00658e60((SQRT(fVar1) - param_1) / (param_2 - param_1),param_3);
    *param_5 = (float)fVar4;
    return;
  }
  *param_5 = 1.0;
  return;
}

