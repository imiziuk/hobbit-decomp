
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006a16c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x5c8);
  if (0 < iVar3) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x5cc) + -4 + iVar3 * 4);
    if (param_2 != 0) {
      *(int *)(param_1 + 0x38) = piVar1[0x44];
      *(int *)(param_1 + 0x3c) = piVar1[0x45];
    }
    if ((*(int **)(param_1 + 0x24) != (int *)0x0) &&
       ((*(int **)(param_1 + 0x24) == piVar1 || (iVar2 = FUN_006a3350(piVar1), iVar2 != 0)))) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    iVar2 = (*(int *)(param_1 + 0x5c8) - (iVar3 + -1)) + -1;
    if (0 < iVar2) {
      iVar3 = (iVar3 + -1) * 4;
      do {
        *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x5cc)) =
             *(undefined4 *)(iVar3 + 4 + *(int *)(param_1 + 0x5cc));
        iVar3 = iVar3 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + -1;
    (**(code **)(*piVar1 + 4))();
    (**(code **)*piVar1)(1);
    _DAT_00813040 = _DAT_00813040 + 1;
    return;
  }
  return;
}

