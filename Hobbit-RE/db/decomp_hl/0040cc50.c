
undefined4 FUN_0040cc50(void)

{
  int iVar1;
  int extraout_ECX;
  int *piVar2;
  
  iVar1 = FUN_0040cc10();
  if (iVar1 != 0) {
    iVar1 = FUN_0040cc20();
    if (iVar1 != 0) {
      iVar1 = FUN_0040cc30();
      if (iVar1 != 0) {
        iVar1 = FUN_0040cc40();
        if (iVar1 != 0) {
          iVar1 = 0;
          piVar2 = (int *)(extraout_ECX + 0x164c);
          while (*piVar2 != 0) {
            iVar1 = iVar1 + 1;
            piVar2 = piVar2 + 1;
            if (3 < iVar1) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

