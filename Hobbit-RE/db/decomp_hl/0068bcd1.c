
void FUN_0068bcd1(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_006c27f8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_006f9f00;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0068af20();
  if (extraout_ECX[0x419] != 0) {
    FUN_006bf840(extraout_ECX[0x419]);
  }
  FUN_00688c82();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

