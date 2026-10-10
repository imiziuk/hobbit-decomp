
void FUN_0044c7a0(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1;
  if (param_2 * param_2 < fVar1) {
    param_2 = (DAT_006e92e8 / SQRT(fVar1)) * param_2;
    *param_1 = param_2 * *param_1;
    param_1[2] = param_2 * param_1[2];
    param_1[1] = param_2 * param_1[1];
    return;
  }
  return;
}

