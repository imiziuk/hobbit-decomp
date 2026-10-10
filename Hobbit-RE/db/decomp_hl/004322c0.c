
undefined4 __thiscall FUN_004322c0(float *param_1,float *param_2)

{
  if (param_1[3] < *param_2) {
    return 0;
  }
  if (param_2[3] < *param_1 != (NAN(param_2[3]) || NAN(*param_1))) {
    return 0;
  }
  if (param_1[5] < param_2[2]) {
    return 0;
  }
  if (param_2[5] < param_1[2] != (NAN(param_2[5]) || NAN(param_1[2]))) {
    return 0;
  }
  if (param_1[4] < param_2[1]) {
    return 0;
  }
  if (param_2[4] < param_1[1] != (NAN(param_2[4]) || NAN(param_1[1]))) {
    return 0;
  }
  return 1;
}

