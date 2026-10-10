
void FUN_00588b40(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x18;
  *(undefined4 *)(iVar1 + DAT_007780ac) = 0;
  *(undefined4 *)(iVar1 + 0x10 + DAT_007780ac) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14 + DAT_007780ac) = 0xffffffff;
  *(undefined4 *)(iVar1 + 4 + DAT_007780ac) = 0xffffffff;
  *(undefined4 *)(iVar1 + 8 + DAT_007780ac) = 0;
  if (DAT_00741e14 != -1) {
    *(int *)(DAT_007780ac + 0x14 + DAT_00741e14 * 0x18) = param_1;
  }
  *(int *)(iVar1 + 0x10 + DAT_007780ac) = DAT_00741e14;
  *(undefined4 *)(iVar1 + 0x14 + DAT_007780ac) = 0xffffffff;
  DAT_00741e14 = param_1;
  DAT_007780b4 = DAT_007780b4 + -1;
  return;
}

