
void __thiscall FUN_004e78d0(int param_1,undefined4 param_2,float *param_3)

{
  FUN_004e1e70(param_2,param_3[3] - *param_3,param_3[4] - param_3[1],param_3[5] - param_3[2]);
  *(undefined4 *)(param_1 + 0x160) = 0x42c80000;
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) | 1;
  FUN_004e93f0();
  return;
}

