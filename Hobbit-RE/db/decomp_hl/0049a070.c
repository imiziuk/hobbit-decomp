
void __thiscall FUN_0049a070(int *param_1,float *param_2,int *param_3,int *param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_1[0x2a] = *param_3;
  param_1[0x2b] = param_3[1];
  param_1[0x2c] = param_3[2];
  param_1[0x2d] = *param_4;
  param_1[0x2e] = param_4[1];
  param_1[0x2f] = param_4[2];
  param_1[0xb] = *param_5;
  param_1[0xc] = param_5[1];
  param_1[0xd] = param_5[2];
  param_1[0xe] = param_5[3];
  param_1[0xf] = param_5[4];
  param_1[0x10] = param_5[5];
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
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}

