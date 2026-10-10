
void FUN_00690b92(ushort param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 *unaff_ESI;
  
  FUN_006908b9();
  unaff_ESI[1] = *unaff_ESI;
  iVar1 = 0;
  *(undefined4 *)(unaff_ESI + 2) = 0;
  if (param_1 != 0xffff) {
    uVar2 = 3;
    iVar3 = 1;
    do {
      if (((ushort)iVar3 & param_1) == 0) {
        *(uint *)(unaff_ESI + 2) = *(uint *)(unaff_ESI + 2) | uVar2;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 << 1;
      uVar2 = uVar2 << 2;
    } while (iVar1 < 0x10);
    FUN_006908b9();
    unaff_ESI[1] = *unaff_ESI;
  }
  return;
}

