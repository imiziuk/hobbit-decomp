
int FUN_006804b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 1) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_1;
    iVar1 = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_1;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x14));
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x10));
      return param_1;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}

