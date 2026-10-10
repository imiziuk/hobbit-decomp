
void __thiscall
FUN_00672650(float *param_1,float *param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  
  param_1[2] = param_3;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  FUN_0064c8e0(param_4,&param_4,&param_3);
  fVar1 = param_1[1];
  param_1[1] = fVar1 * param_3 - param_1[2] * param_4;
  param_1[2] = fVar1 * param_4 + param_1[2] * param_3;
  FUN_0064c8e0(param_5,&param_4,&param_3);
  fVar1 = *param_1;
  param_5 = fVar1 * param_3 + param_4 * param_1[2];
  *param_1 = param_5;
  fVar1 = param_1[2] * param_3 - fVar1 * param_4;
  param_1[2] = fVar1;
  *param_1 = param_5 + *param_2;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = fVar1 + param_2[2];
  FUN_006723d0(param_2,0);
  return;
}

