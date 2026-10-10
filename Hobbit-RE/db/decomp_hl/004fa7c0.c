
void __thiscall FUN_004fa7c0(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)param_2;
  param_1[0xe] = fVar1;
  fVar2 = (float)param_3;
  *param_1 = fVar1;
  param_1[3] = fVar1;
  param_1[0xf] = fVar2;
  param_1[1] = fVar2;
  param_1[4] = (float)(int)param_1[0x13] + fVar2;
  param_1[6] = (float)(int)param_1[0x12] + fVar1;
  param_1[7] = (float)(int)param_1[0x13] + fVar2;
  param_1[9] = (float)(int)param_1[0x12] + fVar1;
  param_1[10] = fVar2;
  return;
}

