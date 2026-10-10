
undefined4 __thiscall FUN_00630fb0(int param_1,undefined4 *param_2)

{
  if (*(int *)(*(int *)(param_1 + 8) + 0x48) != 0 || *(int *)(*(int *)(param_1 + 8) + 0x4c) != 0) {
    *param_2 = 0xc;
    return 1;
  }
  *param_2 = 10;
  return 1;
}

