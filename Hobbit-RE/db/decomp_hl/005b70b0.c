
int __thiscall FUN_005b70b0(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    piVar4 = *(int **)(param_1 + 0x2c);
    do {
      piVar1 = (int *)*piVar4;
      iVar2 = *piVar1;
      if ((iVar2 == param_2) && (piVar1[3] == param_3)) goto LAB_005b7137;
      if ((param_2 == 0) || (param_3 == 0)) {
LAB_005b70f8:
        if ((iVar2 == param_2) && (piVar1[3] == 0)) goto LAB_005b7137;
      }
      else if (iVar2 == param_2) {
        if (piVar1[3] == param_3) goto LAB_005b7137;
        if (iVar2 == param_2) {
          if (piVar1[3] == param_3) goto LAB_005b7137;
          if (iVar2 == param_2) {
            if (piVar1[3] == param_3) goto LAB_005b7137;
            goto LAB_005b70f8;
          }
        }
      }
      if ((((param_2 != 0) && ((iVar2 == param_2 && (piVar1[3] == 0)))) ||
          ((iVar2 == 0 && (piVar1[3] == param_3)))) ||
         (((param_3 != 0 && (iVar2 == 0)) && (piVar1[3] == param_3)))) {
LAB_005b7137:
        *param_4 = piVar1[1];
        *param_5 = piVar1[2];
        return piVar1[4];
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x28));
  }
  return 0;
}

