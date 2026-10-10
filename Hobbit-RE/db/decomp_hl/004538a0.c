
void __thiscall FUN_004538a0(int param_1,float param_2)

{
  *(float *)(param_1 + 0x2e4) = param_2 + *(float *)(param_1 + 0x2e4);
  if (*(int *)(param_1 + 0x45c) == 2) {
    *(float *)(param_1 + 0x460) = param_2 + *(float *)(param_1 + 0x460);
  }
  return;
}

