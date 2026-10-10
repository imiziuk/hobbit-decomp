
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00662c60(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_007f007c == 0) {
    _DAT_007f006c = _DAT_007f006c + 1;
    return;
  }
  DAT_007f0078 = DAT_007f0078 + DAT_007f007c;
  DAT_007f0070 = DAT_007f0070 + 1;
  iVar2 = 0;
  if (0 < DAT_007f1008) {
    do {
      uVar1 = FUN_00663a00();
      if ((uVar1 & 0x10) == 0) {
        uVar3 = 1;
LAB_00662cb4:
        FUN_0065bb10(uVar3);
      }
      else if ((uVar1 & 0x10) == 0x10) {
        uVar3 = 3;
        goto LAB_00662cb4;
      }
      FUN_00663170();
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_007f1008);
  }
  return;
}

