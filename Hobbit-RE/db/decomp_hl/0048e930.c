
void __thiscall
FUN_0048e930(int *param_1,float *param_2,int *param_3,int *param_4,int *param_5,int param_6,
            int *param_7,int *param_8,int param_9,int param_10,int param_11,int param_12)

{
  undefined4 uVar1;
  float local_c;
  float local_8;
  float local_4;
  
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
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x50] = *param_4;
  param_1[0x51] = param_4[1];
  param_1[0x52] = param_4[2];
  param_1[0x4c] = *param_3;
  param_1[0x4d] = param_3[1];
  param_1[0x4e] = param_3[2];
  param_1[0x4f] = param_3[3];
  param_1[0x5a] = 0;
  param_1[0x5b] = param_6;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x5c] = (int)param_7;
  param_1[0x6e] = 1;
  param_1[0x6f] = 0;
  (**(code **)(*param_1 + 0x110))(param_2);
  param_1[0x5d] = param_9;
  param_1[0x5e] = *param_7;
  param_1[0x5f] = param_7[1];
  param_1[0x60] = param_7[2];
  param_1[0x61] = *param_8;
  param_1[0x62] = param_8[1];
  param_1[99] = param_8[2];
  param_1[0x68] = param_11;
  param_1[0x67] = param_10;
  param_1[8] = param_1[5];
  param_1[9] = param_1[6];
  param_1[10] = param_1[7];
  param_1[0x6c] = param_12;
  param_1[0x6d] = param_12;
  param_1[0x78] = 0;
  param_1[0x7b] = 0;
  if (param_12 == 0) {
    local_c = (float)param_1[0x5f] + (float)param_1[0x62];
    local_8 = (float)param_1[0x60] + (float)param_1[99];
    (**(code **)(*param_1 + 0x110))(&stack0xfffffff0);
    uVar1 = 1;
  }
  else {
    (**(code **)(*param_1 + 0x110))(param_1 + 0x5e);
    uVar1 = 4;
  }
  FUN_00491450(uVar1);
  *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) | 1;
  return;
}

