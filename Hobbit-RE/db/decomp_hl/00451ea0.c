
undefined4 __thiscall FUN_00451ea0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  if (*param_2 < *param_1 == (NAN(*param_2) || NAN(*param_1))) {
    fVar1 = DAT_006e92e4;
    if (param_1[3] < *param_2) {
      fVar1 = *param_2 - param_1[3];
      goto LAB_00451ed0;
    }
  }
  else {
    fVar1 = *param_2 - *param_1;
LAB_00451ed0:
    fVar1 = fVar1 * fVar1;
  }
  if (param_2[1] < param_1[1] == (NAN(param_2[1]) || NAN(param_1[1]))) {
    if (param_1[4] < param_2[1]) {
      fVar2 = param_2[1] - param_1[4];
      goto LAB_00451ef9;
    }
  }
  else {
    fVar2 = param_2[1] - param_1[1];
LAB_00451ef9:
    fVar1 = fVar2 * fVar2 + fVar1;
  }
  if (param_2[2] < param_1[2] == (NAN(param_2[2]) || NAN(param_1[2]))) {
    if (param_2[2] <= param_1[5]) goto LAB_00451f2e;
    fVar2 = param_2[2] - param_1[5];
  }
  else {
    fVar2 = param_2[2] - param_1[2];
  }
  fVar1 = fVar2 * fVar2 + fVar1;
LAB_00451f2e:
  if (fVar1 < param_3 * param_3 != (fVar1 == param_3 * param_3)) {
    return 1;
  }
  return 0;
}

