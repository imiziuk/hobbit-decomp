
void __thiscall FUN_00420470(float *param_1,float *param_2)

{
  if (((((NAN(param_1[3]) || NAN(DAT_006e92e4)) != (param_1[3] == DAT_006e92e4)) &&
       ((NAN(param_1[7]) || NAN(DAT_006e92e4)) != (param_1[7] == DAT_006e92e4))) &&
      ((NAN(param_1[0xb]) || NAN(DAT_006e92e4)) != (param_1[0xb] == DAT_006e92e4))) &&
     (param_1[0xf] == 1.0)) {
    param_1[0xc] = *param_2 + param_1[0xc];
    param_1[0xd] = param_2[1] + param_1[0xd];
    param_1[0xe] = param_2[2] + param_1[0xe];
    return;
  }
  *param_1 = *param_2 * param_1[3] + *param_1;
  param_1[4] = *param_2 * param_1[7] + param_1[4];
  param_1[8] = *param_2 * param_1[0xb] + param_1[8];
  param_1[0xc] = *param_2 * param_1[0xf] + param_1[0xc];
  param_1[1] = param_2[1] * param_1[3] + param_1[1];
  param_1[5] = param_2[1] * param_1[7] + param_1[5];
  param_1[9] = param_2[1] * param_1[0xb] + param_1[9];
  param_1[0xd] = param_2[1] * param_1[0xf] + param_1[0xd];
  param_1[2] = param_2[2] * param_1[3] + param_1[2];
  param_1[6] = param_2[2] * param_1[7] + param_1[6];
  param_1[10] = param_2[2] * param_1[0xb] + param_1[10];
  param_1[0xe] = param_2[2] * param_1[0xf] + param_1[0xe];
  return;
}

