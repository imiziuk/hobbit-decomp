
undefined4 __thiscall FUN_005dde80(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x38) == param_2) && (*(int *)(param_1 + 0x3c) == param_3)) {
    return 1;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    piVar1 = *(int **)(param_1 + 0x4c);
    do {
      if ((*piVar1 == param_2) && (piVar1[1] == param_3)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar2 < *(int *)(param_1 + 0x48));
  }
  return 0;
}

