
undefined4 FUN_004c3d10(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004d2290();
  uVar2 = CONCAT31((int3)((uint)-iVar1 >> 8),-(iVar1 != 0)) & 0xfffffff3;
  return CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + '\x0f');
}

