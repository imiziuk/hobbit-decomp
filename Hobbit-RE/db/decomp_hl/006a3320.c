
int __thiscall FUN_006a3320(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    piVar1 = *(int **)(param_1 + 0x1c);
    do {
      if (*(int *)(*piVar1 + 0x30) == param_2) {
        return *piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  return 0;
}

