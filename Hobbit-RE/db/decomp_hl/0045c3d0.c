
void __thiscall
FUN_0045c3d0(int *param_1,float *param_2,float *param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x35] = (int)*param_2;
  param_1[0x36] = (int)param_2[1];
  param_1[0x37] = (int)param_2[2];
  param_1[0x38] = (int)*param_3;
  param_1[0x39] = (int)param_3[1];
  param_1[0x3a] = (int)param_3[2];
  param_1[0x3b] = param_4;
  param_1[0x3c] = param_5;
  param_1[0x31] = param_5;
  param_1[0x3d] = param_6;
  param_1[0x33] = param_6;
  param_1[0x3e] = param_7;
  param_1[0x32] = param_7;
  (**(code **)(*param_1 + 0x14))(param_2,0);
  fVar1 = *param_3 - *param_2;
  fVar2 = param_3[2] - param_2[2];
  fVar3 = (float10)FUN_0064ca10(param_3[1] - param_2[1],SQRT(fVar1 * fVar1 + fVar2 * fVar2));
  fVar4 = (float10)FUN_0064ca10(fVar1,fVar2);
  param_1[0x1b] = (int)(float)fVar4;
  param_1[0x1c] = 0;
  param_1[0x1a] = (int)(float)-fVar3;
  return;
}

