
undefined4 * __thiscall FUN_004210f0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x748) != 7) {
    FUN_004681e0(param_2,param_3);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

