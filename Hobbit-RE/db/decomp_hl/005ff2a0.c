
undefined4 __thiscall FUN_005ff2a0(int param_1,int *param_2)

{
  if ((((*param_2 == 8) && (param_2[2] == *(int *)(param_1 + 0x18))) &&
      (param_2[3] == *(int *)(param_1 + 0x1c))) &&
     (((param_2[4] == *(int *)(param_1 + 0x10) && (param_2[5] == *(int *)(param_1 + 0x14))) &&
      ((param_2[6] == *(int *)(param_1 + 0x4c) || (*(int *)(param_1 + 0x4c) == 0)))))) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    return 1;
  }
  return 0;
}

