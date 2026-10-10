
undefined4 * FUN_0068ae4f(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_006c27f8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0068903f(*(undefined4 *)(unaff_EBP + 8),0,1);
  uVar1 = extraout_ECX[0x40c];
  uVar2 = extraout_ECX[0x40e] + 1 & 0xfffffffe;
  extraout_ECX[0x41c] = uVar2;
  iVar3 = uVar2 - (uVar1 & 0xfffffffe);
  extraout_ECX[0x420] = iVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_006f9f00;
  extraout_ECX[0x41a] = uVar1 & 0xfffffffe;
  extraout_ECX[0x41b] = 0;
  extraout_ECX[0x41e] = 0;
  extraout_ECX[0x41d] = 0;
  extraout_ECX[0x41f] = 0;
  extraout_ECX[0x421] = 0;
  extraout_ECX[0x422] = 1;
  pvVar4 = operator_new(iVar3 * 0x10);
  extraout_ECX[0x419] = pvVar4;
  if (pvVar4 == (void *)0x0) {
    extraout_ECX[0x422] = 0;
  }
  if (*(int *)(*(int *)(unaff_EBP + 8) + 4) == 0x59565955) {
    extraout_ECX[0x423] = 8;
    extraout_ECX[0x424] = 0;
  }
  else {
    extraout_ECX[0x423] = 0;
    extraout_ECX[0x424] = 8;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

