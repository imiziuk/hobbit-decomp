
void FUN_0066dfc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (DAT_007f15e0 != 0) {
    FUN_0066d2e0();
    puVar2 = DAT_007f1588;
    puVar1 = DAT_007f1580;
    if (DAT_007f15d8 == 0) {
      DAT_007f1588[4] = DAT_007f14d0;
      puVar2[5] = DAT_007f14d4;
      puVar1 = DAT_007f1588;
      DAT_007f1588[6] = DAT_007f14d8;
      puVar1[7] = DAT_007f14dc;
      DAT_007f1588[3] = DAT_007f1570;
      puVar1 = DAT_007f1588;
      *DAT_007f1588 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      DAT_007f1588 = DAT_007f1588 + 8;
      DAT_007f15e4 = DAT_007f15e4 + 1;
      if (DAT_007f15e4 == DAT_007f157c) {
                    /* WARNING: Could not recover jumptable at 0x0066e0f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_007f14f0)();
        return;
      }
    }
    else {
      DAT_007f1580[5] = DAT_007f14d0;
      puVar1[6] = DAT_007f14d4;
      puVar1 = DAT_007f1580;
      DAT_007f1580[7] = DAT_007f14d8;
      puVar1[8] = DAT_007f14dc;
      DAT_007f1580[4] = DAT_007f1570;
      puVar1 = DAT_007f1580;
      *DAT_007f1580 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      DAT_007f1580[3] = 0x3f800000;
      DAT_007f1580 = DAT_007f1580 + 9;
      DAT_007f15e4 = DAT_007f15e4 + 1;
      if (DAT_007f15e4 == DAT_007f157c) {
                    /* WARNING: Could not recover jumptable at 0x0066e06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_007f14f0)();
        return;
      }
    }
  }
  return;
}

