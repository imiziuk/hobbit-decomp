
undefined4 FUN_00589010(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != -1) {
    iVar2 = *(int *)(param_1 * 0x18 + 0xc + DAT_007780ac);
    if (-1 < iVar2) {
      iVar2 = iVar2 * 0x20;
      uVar1 = *(undefined4 *)(iVar2 + DAT_007780a0);
      *param_2 = *(undefined4 *)(iVar2 + 4 + DAT_007780a0);
      param_2[1] = uVar1;
      *(undefined4 *)(param_1 * 0x18 + 0xc + DAT_007780ac) =
           *(undefined4 *)(iVar2 + 8 + DAT_007780a0);
      return 1;
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return 0;
}

