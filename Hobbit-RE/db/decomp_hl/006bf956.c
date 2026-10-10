
undefined4 * FUN_006bf956(void)

{
  undefined1 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_006c27f8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined1 **)(unaff_EBP + -0x10) = &DAT_0075b6e0;
  FUN_006c2c95(unaff_EBP + -0x10);
  puVar1 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 3) = *puVar1;
  FUN_0054a060(0);
  FUN_006bfc10(puVar1,0,DAT_006fd464);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_006fd458;
  return extraout_ECX;
}

