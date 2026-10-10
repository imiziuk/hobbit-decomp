
undefined4 __thiscall FUN_006007d0(int param_1,int *param_2)

{
  if (((*param_2 == 0x14) && (param_2[2] == *(int *)(param_1 + 0x10))) &&
     (param_2[3] == *(int *)(param_1 + 0x14))) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    return 1;
  }
  return 0;
}

