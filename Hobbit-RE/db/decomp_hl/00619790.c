
int FUN_00619790(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_0061a8a0();
    if (iVar1 != 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return -1;
}

