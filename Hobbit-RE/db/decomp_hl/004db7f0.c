
float * __thiscall FUN_004db7f0(float *param_1,float *param_2)

{
  if (*param_2 < *param_1 != (NAN(*param_2) || NAN(*param_1))) {
    *param_1 = *param_2;
  }
  if (param_2[1] < param_1[1] != (NAN(param_2[1]) || NAN(param_1[1]))) {
    param_1[1] = param_2[1];
  }
  if (param_2[2] < param_1[2] != (NAN(param_2[2]) || NAN(param_1[2]))) {
    param_1[2] = param_2[2];
  }
  if (param_1[3] < param_2[3]) {
    param_1[3] = param_2[3];
  }
  if (param_1[4] < param_2[4]) {
    param_1[4] = param_2[4];
  }
  if (param_1[5] < param_2[5]) {
    param_1[5] = param_2[5];
  }
  return param_1;
}

