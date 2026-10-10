
void FUN_0066f940(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  
  iVar1 = 0;
  if (0 < DAT_007f17e4) {
    puVar4 = &DAT_007f213c;
    do {
      iVar3 = 0;
      do {
        FUN_0066f9f0(puVar4 + iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x25);
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 0x4c;
    } while (iVar1 < DAT_007f17e4);
  }
  iVar1 = 0;
  if (0 < DAT_007f1638) {
    puVar2 = &DAT_007f1fc8;
    do {
      iVar3 = 0;
      do {
        FUN_0066f9f0((int)puVar2 + iVar3 + -0xc);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 9);
      puVar5 = puVar2;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0xc;
    } while (iVar1 < DAT_007f1638);
  }
  iVar1 = 0;
  if (0 < DAT_007f163c) {
    puVar4 = &DAT_007f1854;
    do {
      iVar3 = 0;
      do {
        FUN_0066f9f0(puVar4 + iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0xed);
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 0xed;
    } while (iVar1 < DAT_007f163c);
  }
  return;
}

