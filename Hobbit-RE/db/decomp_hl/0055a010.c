
int FUN_0055a010(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_00771f60) {
    iVar2 = 0;
    do {
      iVar1 = FUN_00647ed0(iVar2 + DAT_00771f64,param_1);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x44;
    } while (iVar3 < DAT_00771f60);
  }
  return -1;
}

