
void __thiscall FUN_00460460(int *param_1,float *param_2,int *param_3,int *param_4,int *param_5)

{
  float local_c;
  float local_8;
  float local_4;
  
  param_1[0x1a] = *param_3;
  param_1[0x1b] = param_3[1];
  param_1[0x1c] = param_3[2];
  param_1[0x2d] = *param_4;
  param_1[0x2e] = param_4[1];
  param_1[0x2f] = param_4[2];
  param_1[0xb] = *param_5;
  param_1[0xc] = param_5[1];
  param_1[0xd] = param_5[2];
  FUN_004357e0(param_5 + 3);
  local_c = -*param_2;
  local_8 = -param_2[1];
  local_4 = -param_2[2];
  param_1[0xb] = (int)(local_c + (float)param_1[0xb]);
  param_1[0xc] = (int)(local_8 + (float)param_1[0xc]);
  param_1[0xd] = (int)(local_4 + (float)param_1[0xd]);
  FUN_0042faf0(&local_c);
  (**(code **)(*param_1 + 0x14))(param_2,0);
  local_c = (float)param_1[0x16] - (float)param_1[0x13];
  param_1[0x32] = (int)((float)param_1[0x14] - (float)param_1[0x11]);
  param_1[0x34] = (int)local_c;
  param_1[0x33] = (int)((float)param_1[0x15] - (float)param_1[0x12]);
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x30] = 0x3f800000;
  param_1[0x31] = 1;
  FUN_00460680();
  param_1[0x2b] = 1;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x52] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  return;
}

