
void __thiscall FUN_004b3e60(int *param_1,int *param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  param_1[0xb] = *param_2;
  param_1[0xc] = param_2[1];
  param_1[0xd] = param_2[2];
  param_1[0xe] = param_2[3];
  param_1[0xf] = param_2[4];
  param_1[0x10] = param_2[5];
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  (**(code **)(*param_1 + 0x14))(&local_c,0);
  *(byte *)((int)param_1 + 0x7b) = *(byte *)((int)param_1 + 0x7b) | 0x10;
  return;
}

