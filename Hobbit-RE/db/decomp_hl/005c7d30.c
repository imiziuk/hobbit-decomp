
void __thiscall FUN_005c7d30(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1[9];
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar2 = iVar4 * 4;
      piVar1 = *(int **)(iVar2 + param_1[10]);
      if (((piVar1 != (int *)0x0) && (*piVar1 == param_2)) && (piVar1[1] == param_3)) {
        FUN_006bf840(piVar1);
        *(undefined4 *)(iVar2 + param_1[10]) = 0;
        iVar3 = (param_1[9] - iVar4) + -1;
        if (0 < iVar3) {
          do {
            *(undefined4 *)(iVar2 + param_1[10]) = *(undefined4 *)(iVar2 + 4 + param_1[10]);
            iVar2 = iVar2 + 4;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        param_1[9] = param_1[9] + -1;
      }
      iVar2 = param_1[9];
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  if (iVar2 == 0) {
    FUN_005c7ad0(param_1);
    (**(code **)*param_1)(1);
  }
  return;
}

