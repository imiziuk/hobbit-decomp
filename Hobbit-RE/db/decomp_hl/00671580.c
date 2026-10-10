
void __thiscall FUN_00671580(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  *(int *)(param_1 + 0x54) = param_4;
  *(int *)(param_1 + 0x58) = param_5;
  *(int *)(param_1 + 0x50) = param_3;
  *(int *)(param_1 + 0x4c) = param_2;
  *(int *)(param_1 + 0x5c) = (param_4 - param_2) + 1;
  *(int *)(param_1 + 0x60) = (param_5 - param_3) + 1;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  return;
}

