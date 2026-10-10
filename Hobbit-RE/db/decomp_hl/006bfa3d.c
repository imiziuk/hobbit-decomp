
undefined4 * FUN_006bfa3d(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_006c27f8();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_006c2cd2(iVar2);
  uVar1 = *(undefined1 *)(iVar2 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 3) = uVar1;
  FUN_0054a060(0);
  FUN_006bfc10(iVar2 + 0xc,0,DAT_006fd464);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_006fd458;
  return extraout_ECX;
}

