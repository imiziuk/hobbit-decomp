
void FUN_006c55d0(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (uint *)FUN_006c564c();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_00758238;
  do {
    if (param_1 == *puVar1) {
      puVar2 = (undefined4 *)FUN_006c5643();
      *puVar2 = (&DAT_0075823c)[iVar3 * 2];
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar1 < 0x7583a0);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    puVar2 = (undefined4 *)FUN_006c5643();
    *puVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    puVar2 = (undefined4 *)FUN_006c5643();
    *puVar2 = 8;
    return;
  }
  puVar2 = (undefined4 *)FUN_006c5643();
  *puVar2 = 0x16;
  return;
}

