
undefined4 FUN_00662bd0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_007f1008) {
    do {
      cVar1 = FUN_00663a10(param_1,param_2);
      if (cVar1 != '\0') {
        return (&DAT_007f0318)[iVar2];
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_007f1008);
  }
  return 0;
}

