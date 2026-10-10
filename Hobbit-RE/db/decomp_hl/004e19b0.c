
undefined4 __thiscall FUN_004e19b0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x108)) {
    piVar1 = *(int **)(param_1 + 0x10c);
    while ((*piVar1 != *param_2 || (piVar1[1] != param_2[1]))) {
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
      if (*(int *)(param_1 + 0x108) <= iVar2) {
        return 0;
      }
    }
    if (iVar2 != -1) {
      return 1;
    }
  }
  return 0;
}

