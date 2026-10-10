
void __fastcall FUN_005c4f30(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if ((piVar3[8] == 0) && (*(int **)(piVar3[1] + 4) == piVar3)) {
    *param_1 = piVar3[2];
    return;
  }
  iVar1 = *piVar3;
  if (iVar1 != DAT_007ba9f4) {
    for (iVar2 = *(int *)(iVar1 + 8); iVar2 != DAT_007ba9f4; iVar2 = *(int *)(iVar2 + 8)) {
      iVar1 = iVar2;
    }
    *param_1 = iVar1;
    return;
  }
  piVar3 = (int *)piVar3[1];
  if (*param_1 == *piVar3) {
    do {
      *param_1 = (int)piVar3;
      piVar3 = (int *)piVar3[1];
    } while (*param_1 == *piVar3);
  }
  *param_1 = (int)piVar3;
  return;
}

