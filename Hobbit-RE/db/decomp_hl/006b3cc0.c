
undefined4 FUN_006b3cc0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  iVar1 = param_2[1];
  iVar2 = param_1[1];
  if (iVar2 != iVar1) {
    return 0;
  }
  if (param_1[0x12] != param_2[0x12]) {
    return 0;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    piVar4 = param_1 + 2;
    do {
      if (*piVar4 == param_2[2]) break;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar2);
  }
  if (iVar3 == iVar2) {
    return 0;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    param_2 = param_2 + 2;
    do {
      if (*param_2 != param_1[(iVar3 + iVar5) % iVar2 + 2]) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      param_2 = param_2 + 1;
    } while (iVar5 < iVar1);
  }
  return 1;
}

