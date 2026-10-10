
undefined4 * FUN_0068b4cb(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 *extraout_ECX;
  undefined4 *puVar6;
  int unaff_EBP;
  
  FUN_006c27f8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0068903f(*(undefined4 *)(unaff_EBP + 8),0,1);
  iVar2 = *(int *)(unaff_EBP + 8);
  *extraout_ECX = &PTR_FUN_006f9f40;
  extraout_ECX[0x426] = 0;
  iVar3 = *(int *)(iVar2 + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 1) {
    extraout_ECX[0x427] = 0;
LAB_0068b521:
    extraout_ECX[0x426] = 1;
  }
  else {
    if (iVar3 == 2) {
      extraout_ECX[0x427] = 1;
      goto LAB_0068b521;
    }
    extraout_ECX[0x427] = 3;
  }
  iVar2 = *(int *)(iVar2 + 0x1c);
  if (iVar2 == 1) {
    extraout_ECX[0x428] = 0;
  }
  else {
    if (iVar2 != 2) {
      extraout_ECX[0x428] = 3;
      goto LAB_0068b54c;
    }
    extraout_ECX[0x428] = 1;
  }
  extraout_ECX[0x426] = 1;
LAB_0068b54c:
  uVar4 = extraout_ECX[0x40e] + 3 & 0xfffffffc;
  extraout_ECX[0x41f] = uVar4;
  extraout_ECX[0x425] = 1;
  extraout_ECX[0x41d] = extraout_ECX[0x40c] & 0xfffffffc;
  extraout_ECX[0x41e] = 0;
  extraout_ECX[0x421] = 0;
  extraout_ECX[0x420] = 0;
  extraout_ECX[0x422] = 0;
  extraout_ECX[0x429] = 0;
  extraout_ECX[0x423] = uVar4 - (extraout_ECX[0x40c] & 0xfffffffc);
  extraout_ECX[0x424] = 0;
  puVar6 = extraout_ECX + 0x419;
  *(undefined4 *)(unaff_EBP + 8) = 4;
  do {
    pvVar5 = operator_new(extraout_ECX[0x423] << 4);
    *puVar6 = pvVar5;
    if (pvVar5 == (void *)0x0) {
      extraout_ECX[0x425] = 0;
    }
    puVar6 = puVar6 + 1;
    piVar1 = (int *)(unaff_EBP + 8);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

