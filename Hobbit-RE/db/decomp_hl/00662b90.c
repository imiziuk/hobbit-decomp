
void FUN_00662b90(void)

{
  int iVar1;
  
  (**(code **)(*DAT_007f1000 + 0x14))(DAT_007f1000,0);
  iVar1 = 0;
  if (0 < DAT_007f1008) {
    do {
      FUN_00663a60();
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_007f1008);
  }
  return;
}

