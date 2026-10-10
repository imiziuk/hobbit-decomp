
void __thiscall FUN_005a7800(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1[5];
  fVar2 = param_1[2];
  fVar3 = param_1[4];
  fVar4 = param_1[1];
  *param_2 = param_1[3] - *param_1;
  param_2[1] = fVar3 - fVar4;
  param_2[2] = fVar1 - fVar2;
  return;
}

