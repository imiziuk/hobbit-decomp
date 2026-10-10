
void __thiscall FUN_00688fe0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[3];
  fVar2 = param_3[3];
  fVar3 = param_1[2];
  fVar4 = param_3[2];
  fVar5 = param_1[1];
  fVar6 = param_3[1];
  *param_2 = *param_1 - *param_3;
  param_2[1] = fVar5 - fVar6;
  param_2[2] = fVar3 - fVar4;
  param_2[3] = fVar1 - fVar2;
  return;
}

