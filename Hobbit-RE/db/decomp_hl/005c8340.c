
int __thiscall FUN_005c8340(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    piVar2 = *(int **)(param_1 + 0x28);
    do {
      if ((*(int *)*piVar2 == param_2) && (((int *)*piVar2)[1] == param_3)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x24));
  }
  return -1;
}

