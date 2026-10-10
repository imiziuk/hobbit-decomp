
void __thiscall FUN_00687c20(int param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  FUN_00647d10(param_2,param_1 + 0x48);
  iVar2 = FUN_00647cf0(param_2);
  pcVar4 = (char *)(param_2 + iVar2);
  cVar1 = *param_3;
  while (pcVar5 = pcVar4, cVar1 != '\0') {
    if ((cVar1 == '\\') || (cVar1 == '/')) {
      *pcVar4 = '\\';
      cVar1 = param_3[1];
      pcVar5 = pcVar4 + 1;
      if (cVar1 == '\0') break;
      while ((pcVar3 = param_3 + 1, cVar1 == '\\' || (cVar1 == '/'))) {
        cVar1 = param_3[2];
        param_3 = pcVar3;
        if (cVar1 == '\0') {
          *pcVar5 = '\0';
          return;
        }
      }
    }
    else {
      *pcVar4 = cVar1;
      pcVar3 = param_3 + 1;
    }
    pcVar4 = pcVar4 + 1;
    param_3 = pcVar3;
    cVar1 = *pcVar3;
  }
  *pcVar5 = '\0';
  return;
}

