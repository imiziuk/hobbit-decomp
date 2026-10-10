
undefined4 __thiscall FUN_005b6d80(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar5 = *param_4;
  iVar6 = -1;
  if (iVar5 < iVar1) {
    piVar3 = (int *)(*(int *)(param_1 + 0x10) + iVar5 * 4);
    iVar4 = iVar5;
    do {
      if (((*(int *)(*piVar3 + 4) == param_2) && (*(int *)(*piVar3 + 0x74) == param_3)) &&
         ((iVar6 < 0 || (iVar4 < iVar6)))) {
        iVar6 = iVar4;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iVar1);
  }
  if (iVar5 < iVar1) {
    piVar3 = (int *)(*(int *)(param_1 + 0x10) + iVar5 * 4);
    do {
      iVar4 = *piVar3;
      if (((*(int *)(iVar4 + 4) == param_2) &&
          (((*(int *)(iVar4 + 0x74) < 1 || (param_3 < 0)) ||
           (((byte)*(undefined4 *)(iVar4 + 0x78) & 2) == 2)))) && ((iVar6 < 0 || (iVar5 < iVar6))))
      {
        iVar6 = iVar5;
      }
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar5 < iVar1);
  }
  if (iVar6 < 0) {
    *param_4 = iVar6;
    return 0;
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar6 * 4);
  *param_4 = iVar6;
  return uVar2;
}

