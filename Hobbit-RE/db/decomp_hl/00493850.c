
uint FUN_00493850(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = FUN_00647cf0(param_1);
  if ((iVar2 < 3) || (*(char *)(iVar2 + -3 + param_1) != '_')) {
    if ((iVar2 < 2) || (*(char *)(iVar2 + -2 + param_1) != '_')) {
      return 0;
    }
    iVar1 = iVar2 + -2;
  }
  else {
    iVar1 = iVar2 + -3;
  }
  while (iVar1 = iVar1 + 1, iVar1 < iVar2) {
    if (((&DAT_0074c290)[*(byte *)(iVar1 + param_1)] != 'D') &&
       ((&DAT_0074c290)[*(byte *)(iVar1 + param_1)] != 'F')) {
      FUN_0064e7d0(s_Found_Unknown_token___c__parsing_00729a28,(int)(char)*(byte *)(iVar1 + param_1)
                   ,param_1);
    }
    if ((&DAT_0074c290)[*(byte *)(iVar1 + param_1)] == 'D') {
      uVar3 = uVar3 | 1;
    }
    else if ((&DAT_0074c290)[*(byte *)(iVar1 + param_1)] == 'F') {
      uVar3 = uVar3 | 2;
    }
  }
  return uVar3;
}

