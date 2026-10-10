
undefined4 __thiscall FUN_005e7050(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    piVar1 = *(int **)(param_1 + 0x24);
    do {
      if ((*piVar1 == param_2) && (piVar1[1] == param_3)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  return 0;
}

