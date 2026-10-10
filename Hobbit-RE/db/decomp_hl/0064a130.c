
int __thiscall FUN_0064a130(int *param_1,char *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  iVar3 = FUN_00647cf0(param_2);
  iVar2 = *param_1;
  uVar4 = param_3 + iVar2;
  uVar1 = (param_1[9] - iVar3) + 1 + iVar2;
  if (uVar4 < uVar1) {
    iVar3 = uVar4 - (int)param_2;
    pcVar5 = param_2;
    do {
      while( true ) {
        if (*pcVar5 == '\0') {
          return uVar4 - iVar2;
        }
        if (pcVar5[iVar3] != *pcVar5) break;
        pcVar5 = pcVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 1;
      pcVar5 = param_2;
    } while (uVar4 < uVar1);
  }
  return -1;
}

