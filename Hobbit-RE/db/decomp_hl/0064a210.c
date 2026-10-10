
int __thiscall FUN_0064a210(int *param_1,char *param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  iVar4 = FUN_0064a130(param_2,param_4);
  if (iVar4 == -1) {
    return -1;
  }
  iVar6 = 0;
  if (*param_2 != '\0') {
    pcVar7 = param_2;
    do {
      cVar3 = pcVar7[param_3 - (int)param_2];
      *(char *)(*param_1 + iVar6 + iVar4) = cVar3;
      if (cVar3 == '\0') break;
      pcVar1 = pcVar7 + 1;
      iVar6 = iVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
  }
  iVar5 = iVar6;
  if (param_2[iVar6] == '\0') {
    if (*(char *)(iVar6 + param_3) != '\0') {
      FUN_00649d70(iVar6 + iVar4,(int)*(char *)(iVar6 + param_3));
    }
    return iVar4;
  }
  do {
    iVar2 = iVar5 + 1;
    iVar5 = iVar5 + 1;
  } while (param_2[iVar2] != '\0');
  FUN_00649e60(iVar6 + iVar4,iVar5 - iVar6);
  return iVar4;
}

