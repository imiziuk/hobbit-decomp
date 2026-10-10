
void FUN_00588820(int param_1)

{
  int iVar1;
  int iVar2;
  
  DAT_007780a0 = thunk_FUN_0064ffa0(DAT_007780a0,param_1 << 5,
                                    s_C__projects_meridian_Support_Sel_00741e18,0x4b);
  if (DAT_007780a4 < param_1) {
    iVar1 = DAT_007780a4 << 5;
    do {
      iVar2 = DAT_007780a4;
      *(undefined4 *)(iVar1 + DAT_007780a0) = 0;
      *(undefined4 *)(iVar1 + 4 + DAT_007780a0) = 0;
      *(undefined4 *)(iVar1 + 8 + DAT_007780a0) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0xc + DAT_007780a0) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x10 + DAT_007780a0) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x14 + DAT_007780a0) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x18 + DAT_007780a0) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x1c + DAT_007780a0) = 0xffffffff;
      if (DAT_00741e10 != -1) {
        *(int *)(DAT_00741e10 * 0x20 + 0xc + DAT_007780a0) = iVar2;
      }
      *(int *)(iVar1 + 8 + DAT_007780a0) = DAT_00741e10;
      *(undefined4 *)(iVar1 + 0xc + DAT_007780a0) = 0xffffffff;
      iVar1 = iVar1 + 0x20;
      DAT_007780a4 = iVar2 + 1;
      DAT_00741e10 = iVar2;
    } while (iVar2 + 1 < param_1);
  }
  DAT_007780a4 = param_1;
  return;
}

