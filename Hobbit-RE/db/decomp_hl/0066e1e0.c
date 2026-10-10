
void FUN_0066e1e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (DAT_007f15e0 != 0) {
    if (param_1 == -1) {
                    /* WARNING: Could not recover jumptable at 0x0066e1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_007f14f0)();
      return;
    }
    FUN_0066d2e0();
    puVar1 = DAT_007f15ec;
    puVar3 = DAT_007f1588;
    puVar2 = DAT_007f1580;
    if (DAT_007f15d8 == 0) {
      if (DAT_007f1558 == 0) {
        if (DAT_007f1550 == 0) {
          DAT_007f1588[4] = DAT_007f14d0;
          puVar3[5] = DAT_007f14d4;
        }
        else {
          iVar4 = DAT_007f1560 * param_1 + DAT_007f1550;
          DAT_007f1588[4] = *(undefined4 *)(DAT_007f1560 * param_1 + DAT_007f1550);
          puVar3[5] = *(undefined4 *)(iVar4 + 4);
        }
        puVar2 = DAT_007f1588;
        if (DAT_007f1554 == 0) {
          DAT_007f1588[6] = DAT_007f14d8;
          puVar2[7] = DAT_007f14dc;
        }
        else {
          puVar3 = (undefined4 *)(DAT_007f1564 * param_1 + DAT_007f1554);
          DAT_007f1588[6] = *puVar3;
          puVar2[7] = puVar3[1];
        }
        if (DAT_007f14ec == 0) {
          DAT_007f1588[3] = DAT_007f1570;
        }
        else {
          DAT_007f1588[3] = *(undefined4 *)(DAT_007f14f4 * param_1 + DAT_007f14ec);
        }
        puVar2 = DAT_007f1588;
        iVar4 = DAT_007f15e8 * param_1 + DAT_007f1584;
        *DAT_007f1588 = *(undefined4 *)(DAT_007f15e8 * param_1 + DAT_007f1584);
        puVar2[1] = *(undefined4 *)(iVar4 + 4);
        puVar2[2] = *(undefined4 *)(iVar4 + 8);
        DAT_007f1588 = DAT_007f1588 + 8;
        DAT_007f15e4 = DAT_007f15e4 + 1;
        if (DAT_007f15e4 == DAT_007f157c) {
                    /* WARNING: Could not recover jumptable at 0x0066e540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*DAT_007f14f0)();
          return;
        }
      }
      else {
        if (DAT_007f1550 == 0) {
          DAT_007f15ec[7] = DAT_007f14d0;
          puVar1[8] = DAT_007f14d4;
        }
        else {
          puVar2 = (undefined4 *)(DAT_007f1560 * param_1 + DAT_007f1550);
          DAT_007f15ec[7] = *puVar2;
          puVar1[8] = puVar2[1];
        }
        puVar2 = DAT_007f15ec;
        if (DAT_007f1554 == 0) {
          DAT_007f15ec[9] = DAT_007f14d8;
          puVar2[10] = DAT_007f14dc;
        }
        else {
          puVar3 = (undefined4 *)(DAT_007f1564 * param_1 + DAT_007f1554);
          DAT_007f15ec[9] = *puVar3;
          puVar2[10] = puVar3[1];
        }
        if (DAT_007f14ec == 0) {
          DAT_007f15ec[6] = DAT_007f1570;
        }
        else {
          DAT_007f15ec[6] = *(undefined4 *)(DAT_007f14f4 * param_1 + DAT_007f14ec);
        }
        puVar2 = DAT_007f15ec;
        puVar3 = (undefined4 *)(DAT_007f15e8 * param_1 + DAT_007f1584);
        *DAT_007f15ec = *puVar3;
        puVar2[1] = puVar3[1];
        puVar2[2] = puVar3[2];
        puVar2 = DAT_007f15ec;
        iVar4 = DAT_007f15e8 * param_1 + DAT_007f15d4;
        DAT_007f15ec[3] = *(undefined4 *)(DAT_007f15e8 * param_1 + DAT_007f15d4);
        puVar2[4] = *(undefined4 *)(iVar4 + 4);
        puVar2[5] = *(undefined4 *)(iVar4 + 8);
        DAT_007f15ec = DAT_007f15ec + 0xb;
        DAT_007f15e4 = DAT_007f15e4 + 1;
        if (DAT_007f15e4 == DAT_007f157c) {
                    /* WARNING: Could not recover jumptable at 0x0066e43f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*DAT_007f14f0)();
          return;
        }
      }
    }
    else {
      if (DAT_007f1550 == 0) {
        DAT_007f1580[5] = DAT_007f14d0;
        puVar2[6] = DAT_007f14d4;
      }
      else {
        iVar4 = DAT_007f1550 + param_1 * 8;
        DAT_007f1580[5] = *(undefined4 *)(DAT_007f1550 + param_1 * 8);
        puVar2[6] = *(undefined4 *)(iVar4 + 4);
      }
      puVar2 = DAT_007f1580;
      if (DAT_007f1554 == 0) {
        DAT_007f1580[7] = DAT_007f14d8;
        puVar2[8] = DAT_007f14dc;
      }
      else {
        puVar3 = (undefined4 *)(DAT_007f1554 + param_1 * 8);
        DAT_007f1580[7] = *puVar3;
        puVar2[8] = puVar3[1];
      }
      if (DAT_007f14ec == 0) {
        DAT_007f1580[4] = DAT_007f1570;
      }
      else {
        DAT_007f1580[4] = *(undefined4 *)(DAT_007f14ec + param_1 * 4);
      }
      puVar2 = DAT_007f1580;
      iVar4 = DAT_007f1584 + param_1 * 0xc;
      *DAT_007f1580 = *(undefined4 *)(DAT_007f1584 + param_1 * 0xc);
      puVar2[1] = *(undefined4 *)(iVar4 + 4);
      puVar2[2] = *(undefined4 *)(iVar4 + 8);
      DAT_007f1580[3] = 0x3f800000;
      DAT_007f1580 = DAT_007f1580 + 9;
      DAT_007f15e4 = DAT_007f15e4 + 1;
      if (DAT_007f15e4 == DAT_007f157c) {
                    /* WARNING: Could not recover jumptable at 0x0066e2ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_007f14f0)();
        return;
      }
    }
  }
  return;
}

