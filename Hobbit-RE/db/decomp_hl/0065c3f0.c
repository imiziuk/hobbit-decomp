
int FUN_0065c3f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (DAT_007f0464 != 0) {
    iVar1 = FUN_0065c4a0(&DAT_007f0448,DAT_007f0444,param_2,param_3);
    if (iVar1 == 0) {
      DAT_007f0144 = param_1;
      return 0;
    }
    DAT_007f0464 = 0;
  }
  if ((DAT_007f0144 == 0) &&
     (iVar1 = FUN_0065c4a0(&DAT_007f0448,DAT_007f0444,param_2,param_3), iVar1 == 0)) {
    DAT_007f0144 = param_1;
    return 0;
  }
  iVar1 = DAT_007f0144;
  iVar2 = FUN_0065c4a0(&DAT_007f0448,0x16,param_2,param_3);
  if (iVar2 == 0) {
    DAT_007f0144 = iVar1;
  }
  return iVar2;
}

