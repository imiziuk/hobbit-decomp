
undefined4 __thiscall FUN_006005f0(int param_1,int *param_2)

{
  if (*param_2 == 0x13) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    return 1;
  }
  return 0;
}

