
int FUN_00555d00(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  cVar1 = *(char *)*param_1;
  while ((cVar1 != '\0' && (iVar2 = FUN_006c1327((int)*(char *)*param_1), iVar2 != 0))) {
    iVar2 = *param_1;
    *param_1 = iVar2 + 1;
    cVar1 = *(char *)(iVar2 + 1);
  }
  cVar1 = *(char *)*param_1;
  iVar2 = 0;
  while ((cVar1 != '\0' && (iVar3 = FUN_006c12ff((int)*(char *)*param_1), iVar3 != 0))) {
    pcVar4 = (char *)*param_1 + 1;
    iVar2 = *(char *)*param_1 + -0x30 + iVar2 * 10;
    *param_1 = (int)pcVar4;
    cVar1 = *pcVar4;
  }
  return iVar2;
}

