
int FUN_005648f0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *param_1;
  while ((cVar2 != '\0' && ((cVar2 < '0' || ('9' < cVar2))))) {
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  iVar3 = 0;
  cVar2 = *param_1;
  while (((cVar2 != '\0' && ('/' < cVar2)) && (cVar2 < ':'))) {
    param_1 = param_1 + 1;
    iVar3 = cVar2 + -0x30 + iVar3 * 10;
    cVar2 = *param_1;
  }
  return iVar3;
}

