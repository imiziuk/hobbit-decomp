
int __thiscall FUN_006a31a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = iVar1;
  if (((((*(uint *)(param_1 + 0x2c) & 2) == 0) && ((*(uint *)(param_1 + 0x2c) & 1) != 0)) &&
      (-1 < param_2)) &&
     (((param_2 < *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44) && (-1 < param_3)) &&
      ((param_3 < *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48) &&
       (iVar4 = 0, iVar3 = param_1, 0 < *(int *)(param_1 + 0x18))))))) {
    do {
      if (iVar1 != 0) {
        return iVar1;
      }
      piVar2 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + iVar4 * 4) + 0x10))();
      iVar1 = FUN_006a31a0(param_2 - *piVar2,param_3 - piVar2[1]);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x18));
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return iVar3;
}

