
int FUN_00674e80(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_007f2430;
  do {
    if (5000 < *piVar2) {
      iVar1 = iVar1 + 1;
    }
    piVar2 = piVar2 + 1;
  } while ((int)piVar2 < 0x7f7250);
  return iVar1;
}

