
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046ab10(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  param_1[0x65] = param_1[0x65] & 0xfffffffb;
  DAT_0075cd00 = 0;
  DAT_0075cd04 = 0;
  FUN_0046add0(0);
  FUN_00576a50();
  FUN_0065b130();
  FUN_0064e870(6,s_Ending_Cinema____________________00726f30);
  param_1[0x65] = param_1[0x65] | 2;
  param_1[0x6d] = 0;
  if (DAT_0075cf1c != 0) {
    local_10 = param_1[2];
    local_c = param_1[3];
    local_18 = 0x1b;
    FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),&local_18);
  }
  _DAT_0075eb9c = 0;
  if ((param_1[0x65] & 0x7000U) != 0) {
    FUN_0041bcc0();
    FUN_00429100();
  }
  uVar2 = param_1[0x65];
  if ((uVar2 & 0x10) != 0) {
    uVar5 = 1;
    if ((uVar2 & 0x800) == 0) {
      uVar2 = uVar2 >> 10 & 1;
    }
    else {
      uVar2 = 0;
    }
    FUN_0041bcc0(uVar2,1);
    FUN_00423c90(uVar2,uVar5);
  }
  if (DAT_0075cce4 != 0) {
    local_18 = param_1[2];
    local_14 = param_1[3];
    iVar3 = 0;
    if (0 < DAT_0075cce4) {
      do {
        if ((DAT_0075cce8[iVar3 * 2] == local_18) && (DAT_0075cce8[iVar3 * 2 + 1] == local_14))
        goto LAB_0046ac3f;
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_0075cce4);
    }
    iVar3 = -1;
LAB_0046ac3f:
    iVar4 = (DAT_0075cce4 - iVar3) + -1;
    if (0 < iVar4) {
      iVar3 = iVar3 << 3;
      do {
        *(undefined4 *)(iVar3 + (int)DAT_0075cce8) = *(undefined4 *)(iVar3 + 8 + (int)DAT_0075cce8);
        *(undefined4 *)(iVar3 + 4 + (int)DAT_0075cce8) =
             *(undefined4 *)(iVar3 + 0xc + (int)DAT_0075cce8);
        iVar3 = iVar3 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    DAT_0075cce4 = DAT_0075cce4 + -1;
    if (param_2 != 0) {
      bVar1 = false;
      while ((DAT_0075cce4 != 0 && (!bVar1))) {
        iVar3 = FUN_004021c0(*DAT_0075cce8,DAT_0075cce8[1]);
        if (iVar3 == 0) {
          iVar3 = DAT_0075cce4 + -1;
          if (0 < iVar3) {
            iVar4 = 0;
            do {
              *(undefined4 *)(iVar4 + (int)DAT_0075cce8) =
                   *(undefined4 *)(iVar4 + 8 + (int)DAT_0075cce8);
              *(undefined4 *)(iVar4 + 4 + (int)DAT_0075cce8) =
                   *(undefined4 *)(iVar4 + 0xc + (int)DAT_0075cce8);
              iVar4 = iVar4 + 8;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          DAT_0075cce4 = DAT_0075cce4 + -1;
        }
        else {
          FUN_0046a550();
          bVar1 = true;
        }
      }
    }
  }
  FUN_0054ec70();
  iVar3 = (**(code **)(*param_1 + 0x4c))();
  uVar5 = extraout_ECX;
  if (iVar3 != 0) {
    uVar5 = (**(code **)(*param_1 + 0x4c))(s_Q05a_ThiefA_ThiefB_Conversation_0_00726f08);
    iVar3 = FUN_00647f20(uVar5);
    if (iVar3 != 0) {
      return;
    }
    uVar5 = (**(code **)(*param_1 + 0x4c))(s_Q03_Bard_Bilbo_End_Conversation_0_00726ee4);
    iVar3 = FUN_00647f20(uVar5);
    if (iVar3 != 0) {
      return;
    }
    uVar5 = (**(code **)(*param_1 + 0x4c))(s_Q02_End_Cinema_00726ed4);
    iVar3 = FUN_00647f20(uVar5);
    uVar5 = extraout_ECX_00;
    if (iVar3 != 0) {
      return;
    }
  }
  uVar6 = 0x3f28f5c3;
  FUN_00406b70(0xff000000);
  FUN_004f8520(0,uVar5,uVar6);
  FUN_004f8640(0,0x3f28f5c3,0xff000000);
  return;
}

