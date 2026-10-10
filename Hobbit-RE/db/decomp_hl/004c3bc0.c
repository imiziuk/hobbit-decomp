
void __thiscall FUN_004c3bc0(int *param_1,int *param_2)

{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_004aaa80(param_2);
  local_18 = param_1[0x11];
  local_14 = param_1[0x12];
  local_10 = param_1[0x13];
  local_c = param_1[0x14];
  local_8 = param_1[0x15];
  local_4 = param_1[0x16];
  param_1[0x1a] = *param_2;
  param_1[0x1b] = param_2[1];
  param_1[0x1c] = param_2[2];
  (**(code **)(*param_1 + 0x100))();
  (**(code **)(*param_1 + 0x124))();
  FUN_004c3500(&local_18,0);
  return;
}

