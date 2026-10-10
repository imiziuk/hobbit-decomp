
int FUN_006400a0(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  while (*param_1 != ':') {
    iVar1 = (int)*param_1;
    param_1 = param_1 + 1;
    if ((0x40 < iVar1) && (iVar1 < 0x5b)) {
      iVar1 = iVar1 + 0x20;
    }
    iVar2 = (int)*param_2;
    param_2 = param_2 + 1;
    if ((0x40 < iVar2) && (iVar2 < 0x5b)) {
      iVar2 = iVar2 + 0x20;
    }
    if ((iVar2 == 0) || (iVar2 != iVar1)) break;
  }
  return iVar1 - iVar2;
}

