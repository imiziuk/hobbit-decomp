
void __thiscall FUN_004e2000(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  param_1[0x2b] = *param_3;
  param_1[0x2c] = param_3[1];
  param_1[0x2d] = param_3[2];
  param_1[0x1a] = *param_4;
  param_1[0x1b] = param_4[1];
  param_1[0x1c] = param_4[2];
  (**(code **)(*param_1 + 0x14))(param_2,0);
  FUN_004e2630();
  return;
}

