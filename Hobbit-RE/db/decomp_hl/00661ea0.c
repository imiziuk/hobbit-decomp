
undefined4 FUN_00661ea0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar2 = FUN_00661450(param_1);
  if (iVar2 < 10) {
    if (0 < (int)(&DAT_007f0168)[iVar2 * 10]) {
      if ((&DAT_007f0168)[iVar2 * 10] == 1) {
        uVar1 = (&DAT_007f0148)[iVar2 * 10];
        *param_2 = uVar1;
        *param_3 = uVar1;
        return 1;
      }
      *param_2 = (&DAT_007f0148)[iVar2 * 10];
      *param_3 = (&DAT_007f0144)[(&DAT_007f0168)[iVar2 * 10] + iVar2 * 10];
      return 1;
    }
  }
  return 0;
}

