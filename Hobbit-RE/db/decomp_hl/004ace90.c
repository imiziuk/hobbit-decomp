
float * __thiscall FUN_004ace90(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_3[2] <= param_2[2]) {
    fVar1 = param_3[2];
  }
  else {
    fVar1 = param_2[2];
  }
  if (param_3[1] <= param_2[1]) {
    fVar2 = param_3[1];
  }
  else {
    fVar2 = param_2[1];
  }
  if (*param_2 < *param_3 == (NAN(*param_2) || NAN(*param_3))) {
    fVar3 = *param_3;
  }
  else {
    fVar3 = *param_2;
  }
  *param_1 = fVar3;
  param_1[1] = fVar2;
  param_1[2] = fVar1;
  if (param_3[2] < param_2[2] == (NAN(param_3[2]) || NAN(param_2[2]))) {
    fVar1 = param_3[2];
  }
  else {
    fVar1 = param_2[2];
  }
  if (param_3[1] < param_2[1] == (NAN(param_3[1]) || NAN(param_2[1]))) {
    fVar2 = param_3[1];
  }
  else {
    fVar2 = param_2[1];
  }
  if (*param_3 < *param_2) {
    param_1[3] = *param_2;
    param_1[4] = fVar2;
    param_1[5] = fVar1;
    return param_1;
  }
  param_1[3] = *param_3;
  param_1[4] = fVar2;
  param_1[5] = fVar1;
  return param_1;
}

