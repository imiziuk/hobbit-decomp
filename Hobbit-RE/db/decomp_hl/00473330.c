
bool __thiscall FUN_00473330(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1c8)) {
    piVar1 = *(int **)(param_1 + 0x1cc);
    do {
      if ((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) goto LAB_00473368;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar2 < *(int *)(param_1 + 0x1c8));
  }
  iVar2 = -1;
LAB_00473368:
  return iVar2 != -1;
}

