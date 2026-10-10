
undefined4 __thiscall FUN_005f4cd0(int param_1,int *param_2)

{
  if (((*param_2 == 8) && (param_2[2] == *(int *)(param_1 + 0x10))) &&
     (param_2[3] == *(int *)(param_1 + 0x14))) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (param_2[6] != 3) {
        return 1;
      }
    }
    else if (param_2[6] == 3) {
      return 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    return 1;
  }
  return 0;
}

