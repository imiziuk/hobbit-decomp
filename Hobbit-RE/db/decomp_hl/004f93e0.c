
void __thiscall
FUN_004f93e0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  param_1[0x2d] = param_3;
  param_1[0x2c] = param_2;
  param_1[0x2e] = param_4;
  param_1[0x2f] = param_5;
  param_1[0x30] = param_6;
  FUN_00549430(param_1 + 0x31,param_6);
  (**(code **)(*param_1 + 0xd0))(param_6);
  return;
}

