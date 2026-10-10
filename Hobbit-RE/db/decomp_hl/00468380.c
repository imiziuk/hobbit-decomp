
void __thiscall FUN_00468380(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_1;
  fVar2 = param_3[1];
  fVar3 = param_1[1];
  fVar4 = *param_3;
  fVar5 = param_1[2];
  fVar6 = *param_3;
  fVar7 = *param_1;
  fVar8 = param_3[2];
  *param_2 = param_1[1] * param_3[2] - param_1[2] * param_3[1];
  param_2[1] = fVar5 * fVar6 - fVar7 * fVar8;
  param_2[2] = fVar1 * fVar2 - fVar3 * fVar4;
  return;
}

