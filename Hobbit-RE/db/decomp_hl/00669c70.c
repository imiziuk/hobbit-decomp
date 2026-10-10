
void FUN_00669c70(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_007f14c8) {
    do {
      if ((&DAT_007f1448)[iVar1] == param_1) {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_007f14c8);
  }
  (&DAT_007f1448)[DAT_007f14c8] = param_1;
  DAT_007f14c8 = DAT_007f14c8 + 1;
  return;
}

