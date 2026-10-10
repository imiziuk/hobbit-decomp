
undefined4 __thiscall FUN_005e2c10(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    piVar1 = *(int **)(param_1 + 0x28);
    do {
      if ((param_2 == *piVar1) && (param_3 == piVar1[1])) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  return 0;
}

