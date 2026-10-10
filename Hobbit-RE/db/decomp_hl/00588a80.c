
void FUN_00588a80(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_00741e14 == -1) {
    FUN_00588910(DAT_007780b0 + 0x80);
  }
  iVar2 = DAT_00741e14 * 0x18;
  iVar1 = *(int *)(iVar2 + 0x10 + DAT_007780ac);
  if (iVar1 != -1) {
    *(undefined4 *)(DAT_007780ac + 0x14 + iVar1 * 0x18) = 0xffffffff;
  }
  DAT_00741e14 = *(undefined4 *)(iVar2 + 0x10 + DAT_007780ac);
  *(undefined4 *)(iVar2 + DAT_007780ac) = 1;
  *(undefined4 *)(iVar2 + 0x10 + DAT_007780ac) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x14 + DAT_007780ac) = 0xffffffff;
  *(undefined4 *)(iVar2 + 4 + DAT_007780ac) = 0xffffffff;
  *(undefined4 *)(iVar2 + 8 + DAT_007780ac) = 0;
  *(undefined4 *)(iVar2 + 0xc + DAT_007780ac) = 0xffffffff;
  DAT_007780b4 = DAT_007780b4 + 1;
  return;
}

