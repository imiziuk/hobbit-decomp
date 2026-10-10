
void __thiscall FUN_00428790(float *param_1,float param_2)

{
  float fVar1;
  float *local_4;
  
  local_4 = param_1;
  FUN_0064c8e0(param_2,&param_2,&local_4);
  fVar1 = *param_1;
  *param_1 = fVar1 * (float)local_4 - param_1[1] * param_2;
  param_1[1] = param_1[1] * (float)local_4 + fVar1 * param_2;
  return;
}

