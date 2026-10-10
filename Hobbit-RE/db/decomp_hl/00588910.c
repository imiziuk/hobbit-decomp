
void FUN_00588910(int param_1)

{
  int iVar1;
  int iVar2;
  
  DAT_007780ac = thunk_FUN_0064ffa0(DAT_007780ac,param_1 * 0x18,
                                    s_C__projects_meridian_Support_Sel_00741e18,0x65);
  FUN_00648600(DAT_007780ac + DAT_007780b0 * 0x18,0,(param_1 - DAT_007780b0) * 0x18);
  if (DAT_007780b0 < param_1) {
    iVar2 = DAT_007780b0 * 0x18;
    do {
      iVar1 = DAT_007780b0;
      if (DAT_00741e14 != -1) {
        *(int *)(DAT_007780ac + 0x14 + DAT_00741e14 * 0x18) = iVar1;
      }
      *(int *)(iVar2 + 0x10 + DAT_007780ac) = DAT_00741e14;
      *(undefined4 *)(iVar2 + 0x14 + DAT_007780ac) = 0xffffffff;
      iVar2 = iVar2 + 0x18;
      DAT_007780b0 = iVar1 + 1;
      DAT_00741e14 = iVar1;
    } while (iVar1 + 1 < param_1);
  }
  DAT_007780b0 = param_1;
  return;
}

