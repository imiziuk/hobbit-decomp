
int __thiscall FUN_005c7df0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    piVar1 = *(int **)(param_1 + 0x28);
    do {
      if ((*(int *)*piVar1 == param_2) && (((int *)*piVar1)[1] == param_3)) {
        return (*(int **)(param_1 + 0x28))[iVar2];
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  return 0;
}

