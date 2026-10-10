
undefined * FUN_006c5dd5(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00758460;
  do {
    if (*piVar1 == param_1) {
      return (&PTR_DAT_00758464)[iVar2 * 2];
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x758538);
  return (undefined *)0x0;
}

