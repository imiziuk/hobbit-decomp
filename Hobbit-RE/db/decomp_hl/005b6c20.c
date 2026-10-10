
int __thiscall FUN_005b6c20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar3 = 0;
  if (0 < iVar1) {
    piVar4 = *(int **)(param_1 + 0x10);
    do {
      if ((*(int *)(*piVar4 + 4) == param_2) &&
         ((*(int *)(*piVar4 + 0x74) == param_3 || (param_3 < 0)))) {
        return (*(int **)(param_1 + 0x10))[iVar3];
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  if ((0 < param_3) && (iVar3 = 0, 0 < iVar1)) {
    piVar4 = *(int **)(param_1 + 0x10);
    while ((iVar2 = *piVar4, *(int *)(iVar2 + 4) != param_2 ||
           ((*(int *)(iVar2 + 0x74) != 0 && (((byte)*(undefined4 *)(iVar2 + 0x78) & 2) != 2))))) {
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      if (iVar1 <= iVar3) {
        return 0;
      }
    }
    return (*(int **)(param_1 + 0x10))[iVar3];
  }
  return 0;
}

