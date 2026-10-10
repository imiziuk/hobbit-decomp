
void FUN_00662c20(void)

{
  int iVar1;
  
  iVar1 = 0;
  DAT_007f0068 = DAT_007f0068 + 1;
  DAT_007f007c = 0;
  if (0 < DAT_007f1008) {
    do {
      FUN_006630d0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_007f1008);
  }
  return;
}

