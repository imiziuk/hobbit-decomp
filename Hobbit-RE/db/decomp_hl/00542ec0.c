
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00542ec0(float *param_1,float *param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  if (param_3 < DAT_006e92e4 == (NAN(param_3) || NAN(DAT_006e92e4))) {
    fVar2 = param_1[1];
    param_3 = param_1[3];
    param_1 = (float *)param_1[2];
  }
  else {
    fVar1 = -fVar1;
    fVar2 = -param_1[1];
    param_3 = -param_1[3];
    param_1 = (float *)-param_1[2];
  }
  fVar1 = (*param_2 - fVar1) * param_4 + fVar1;
  fVar2 = (param_2[1] - fVar2) * param_4 + fVar2;
  fVar3 = (param_2[2] - (float)param_1) * param_4 + (float)param_1;
  param_3 = (param_2[3] - param_3) * param_4 + param_3;
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 + param_3 * param_3;
  if (fVar4 < _DAT_006f3c0c == (NAN(fVar4) || NAN(_DAT_006f3c0c))) {
    fVar4 = (_DAT_006f3bfc * fVar4 - _DAT_006f3bf8) * fVar4 + _DAT_006f3bf4;
  }
  else {
    fVar4 = (_DAT_006f3c08 * fVar4 - _DAT_006f3c04) * fVar4 + _DAT_006f3c00;
  }
  *param_5 = fVar1 * fVar4;
  param_5[1] = fVar4 * fVar2;
  param_5[2] = fVar3 * fVar4;
  param_5[3] = fVar4 * param_3;
  return;
}

