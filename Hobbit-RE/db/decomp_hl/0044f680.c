
void __thiscall FUN_0044f680(int *param_1,float *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_1[0x11] = *param_3;
  param_1[0x12] = param_3[1];
  param_1[0x13] = param_3[2];
  param_1[0x14] = param_3[3];
  param_1[0x15] = param_3[4];
  param_1[0x16] = param_3[5];
  param_1[0xb] = param_1[0x11];
  param_1[0xc] = param_1[0x12];
  param_1[0xd] = param_1[0x13];
  param_1[0xe] = param_1[0x14];
  param_1[0xf] = param_1[0x15];
  param_1[0x10] = param_1[0x16];
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  param_1[0xb] = (int)(-fVar1 + (float)param_1[0xb]);
  param_1[0xc] = (int)(-fVar2 + (float)param_1[0xc]);
  param_1[0xd] = (int)(-fVar3 + (float)param_1[0xd]);
  param_1[0xe] = (int)(-fVar1 + (float)param_1[0xe]);
  param_1[0xf] = (int)(-fVar2 + (float)param_1[0xf]);
  param_1[0x10] = (int)(-fVar3 + (float)param_1[0x10]);
  (**(code **)(*param_1 + 0x14))(param_2,0);
  *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xfc;
  param_1[0x2b] = -1;
  param_1[0x2c] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x3b] = 0;
  FUN_0044f650(0x20);
  return;
}

