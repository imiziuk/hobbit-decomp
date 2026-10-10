
undefined4 FUN_00675760(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[8] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00675771. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_007f8700)();
    return uVar1;
  }
  iVar2 = *param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 != 2) {
        uVar1 = 0xffffffff;
        param_2 = iVar2;
        goto LAB_0067579b;
      }
      iVar2 = param_1[2];
    }
    param_2 = iVar2 + param_2;
  }
LAB_0067579b:
  if (-1 < param_2) {
    *param_1 = param_2;
    return uVar1;
  }
  return 0xffffffff;
}

