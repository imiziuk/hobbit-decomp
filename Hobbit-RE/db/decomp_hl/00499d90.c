
undefined4 __thiscall FUN_00499d90(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  
  fVar1 = (*param_4 - *param_3) * *param_1 +
          (param_4[2] - param_3[2]) * param_1[2] + (param_4[1] - param_3[1]) * param_1[1];
  *param_2 = fVar1;
  if ((NAN(fVar1) || NAN(DAT_006e92e4)) != (fVar1 == DAT_006e92e4)) {
    return 0;
  }
  *param_2 = -((param_1[2] * param_3[2] + param_1[1] * param_3[1] + *param_3 * *param_1 + param_1[3]
               ) / fVar1);
  return 1;
}

