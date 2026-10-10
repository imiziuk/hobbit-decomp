
void FUN_0066e6b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  if (DAT_007f15e0 != 0) {
    puVar1 = (undefined4 *)(DAT_007f1540 * 0x30 + DAT_007f14e8);
    puVar1[0xb] = 0;
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
    puVar1[6] = *param_3;
    puVar1[7] = param_3[1];
    puVar1[8] = *param_4;
    puVar1[9] = param_4[1];
    puVar1[5] = param_5;
    puVar1[10] = 0;
    DAT_007f1540 = DAT_007f1540 + 1;
    if (DAT_007f1540 == 300) {
                    /* WARNING: Could not recover jumptable at 0x0066e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_007f14f0)();
      return;
    }
  }
  return;
}

