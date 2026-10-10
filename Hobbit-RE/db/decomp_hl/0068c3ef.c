
void thunk_FUN_0068bd16(void)

{
  undefined4 *extraout_ECX;
  int iVar1;
  int unaff_EBP;
  int *piVar2;
  
  FUN_006c27f8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_006f9f40;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0068b5e2();
  piVar2 = extraout_ECX + 0x419;
  iVar1 = 4;
  do {
    if (*piVar2 != 0) {
      FUN_006bf840(*piVar2);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00688c82();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

