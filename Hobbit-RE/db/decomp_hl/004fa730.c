
void __thiscall
FUN_004fa730(float *param_1,int param_2,int param_3,float param_4,float param_5,undefined4 param_6)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)param_2;
  param_1[0x12] = param_4;
  param_1[0x13] = param_5;
  param_1[0xe] = fVar1;
  fVar2 = (float)param_3;
  *param_1 = fVar1;
  param_1[2] = 1.0;
  param_1[0xf] = fVar2;
  param_1[5] = 1.0;
  param_1[1] = fVar2;
  param_1[8] = 1.0;
  param_1[0xb] = 1.0;
  param_1[3] = fVar1;
  param_1[0x10] = 1.4013e-45;
  param_1[4] = (float)(int)param_5 + fVar2;
  param_1[0x11] = 0.0;
  param_1[6] = (float)(int)param_4 + fVar1;
  param_1[7] = (float)(int)param_5 + fVar2;
  param_1[9] = (float)(int)param_4 + fVar1;
  param_1[10] = fVar2;
  *(char *)((int)param_1 + 0x53) = (char)((uint)param_6 >> 0x18);
  *(char *)((int)param_1 + 0x52) = (char)((uint)param_6 >> 0x10);
  *(char *)((int)param_1 + 0x51) = (char)((uint)param_6 >> 8);
  *(char *)(param_1 + 0x14) = (char)param_6;
  param_1[0x15] = 0.0;
  return;
}

