
void __thiscall FUN_00428740(float *param_1,float param_2)

{
  float fVar1;
  float *local_4;
  
  local_4 = param_1;
  FUN_0064c8e0(param_2,&local_4,&param_2);
  fVar1 = *param_1;
  *param_1 = fVar1 * param_2 + (float)local_4 * param_1[2];
  param_1[2] = param_1[2] * param_2 - fVar1 * (float)local_4;
  return;
}

