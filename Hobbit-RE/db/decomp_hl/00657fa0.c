
float10 FUN_00657fa0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float unaff_ESI;
  
  uVar1 = FUN_00659600(param_1,0);
  iVar2 = (uVar1 & 0xffff) - 1;
  if ((iVar2 < 0) || (DAT_00806800 <= iVar2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = iVar2 * 0xf8 + DAT_008067f8;
    uVar3 = uVar3 & (*(uint *)(uVar3 + 0xe0) != ((int)uVar1 >> 0x10 & 0xffffU)) - 1;
  }
  FUN_006784d0(uVar3);
  FUN_00659c80(uVar1,0);
  return (float10)unaff_ESI;
}

