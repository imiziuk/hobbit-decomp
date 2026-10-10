
void __thiscall FUN_004068c0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[6];
  fVar2 = param_1[5];
  fVar3 = param_1[4];
  fVar4 = param_1[10];
  fVar5 = param_1[9];
  fVar6 = param_1[8];
  *param_2 = SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  param_2[1] = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  param_2[2] = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
  return;
}

