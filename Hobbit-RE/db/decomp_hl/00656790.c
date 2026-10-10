
void FUN_00656790(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *param_2;
  iVar2 = param_2[1];
  iVar3 = 0;
  iVar5 = 0;
  if (iVar4 <= iVar2) {
    do {
      iVar6 = *(int *)(param_1 + iVar4 * 8);
      iVar3 = iVar3 + iVar6 * iVar4;
      iVar5 = iVar5 + iVar6;
      iVar4 = iVar4 + 1;
    } while (iVar4 <= iVar2);
    if (iVar5 != 0) {
      iVar3 = iVar3 / iVar5;
      goto LAB_006567c8;
    }
  }
  iVar3 = 0xff;
LAB_006567c8:
  iVar4 = *param_2;
  param_2[3] = iVar3;
  param_2[6] = iVar5;
  param_2[2] = 0;
  if (iVar4 <= iVar2) {
    iVar5 = iVar4 - iVar3;
    iVar3 = iVar3 - iVar4;
    do {
      iVar6 = iVar3;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      iVar1 = iVar4 * 8;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
      iVar5 = iVar5 + 1;
      param_2[2] = param_2[2] + *(int *)(param_1 + iVar1) * iVar6;
    } while (iVar4 <= iVar2);
  }
  return;
}

