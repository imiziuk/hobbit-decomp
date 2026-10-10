
int __thiscall FUN_0058ee90(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_1[1]) {
    do {
      iVar3 = FUN_00647ed0(param_2,*param_1 + iVar4);
      if (iVar3 == 0) {
        return iVar4;
      }
      cVar2 = *(char *)(*param_1 + iVar4);
      while (cVar2 != '\0') {
        pcVar1 = (char *)(*param_1 + 1 + iVar4);
        iVar4 = iVar4 + 1;
        cVar2 = *pcVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1]);
  }
  return -1;
}

