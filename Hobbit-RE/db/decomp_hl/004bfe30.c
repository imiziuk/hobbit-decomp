
void __thiscall FUN_004bfe30(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = param_1[1] * param_2[1] + param_1[2] * param_2[2] + *param_2 * *param_1;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *param_4 = fVar6 * fVar1;
  param_4[1] = fVar6 * fVar2;
  param_4[2] = fVar6 * fVar3;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  *param_3 = *param_2 - fVar6 * fVar1;
  param_3[1] = fVar4 - fVar6 * fVar2;
  param_3[2] = fVar5 - fVar6 * fVar3;
  return;
}

