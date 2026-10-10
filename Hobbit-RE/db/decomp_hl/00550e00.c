
void __thiscall FUN_00550e00(float *param_1,float *param_2)

{
  *param_1 = *param_2 * *param_1;
  param_1[1] = param_1[1] * param_2[1];
  param_1[2] = param_1[2] * param_2[2];
  param_1[4] = param_1[4] * *param_2;
  param_1[5] = param_1[5] * param_2[1];
  param_1[6] = param_1[6] * param_2[2];
  param_1[8] = param_1[8] * *param_2;
  param_1[9] = param_1[9] * param_2[1];
  param_1[10] = param_1[10] * param_2[2];
  param_1[0xc] = param_1[0xc] * *param_2;
  param_1[0xd] = param_1[0xd] * param_2[1];
  param_1[0xe] = param_1[0xe] * param_2[2];
  return;
}

