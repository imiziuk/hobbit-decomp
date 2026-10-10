
undefined * Catch_00669398(void)

{
  int iVar1;
  void *pvVar2;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 8);
  iVar1 = *(int *)(unaff_EBP + 8) + 2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  pvVar2 = operator_new(iVar1 * 2);
  *(void **)(unaff_EBP + 8) = pvVar2;
  return &DAT_006693bc;
}

