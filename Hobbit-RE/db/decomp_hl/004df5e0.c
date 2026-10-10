
void __thiscall FUN_004df5e0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  int *local_40 [2];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d57e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_trigger__EnumerateProperties_0072e7b4);
  local_4 = 0;
  if (DAT_0072dfc8 != 0) {
    DAT_0072dfc8 = 0;
    if (DAT_0075def8 == 0) {
      if (DAT_0075def0 != (int *)0x0) {
        FUN_00407f70(3);
      }
      DAT_0075def0 = (int *)0x0;
      DAT_0075def4 = 0;
    }
    iVar6 = 0;
    DAT_0075deec = 0;
    local_50 = 0;
    iVar2 = FUN_00434e50();
    if (0 < iVar2) {
      do {
        uVar3 = FUN_00434e80(iVar6);
        FUN_00649b20(uVar3);
        local_4._0_1_ = 1;
        piVar5 = DAT_0075def0;
        iVar2 = DAT_0075def4;
        if (DAT_0075def4 < DAT_0075deec + 1) {
          if (DAT_0075defc == 0) {
            iVar2 = DAT_0075def4 / 2;
            iVar6 = 1;
            if (0 < iVar2) {
              iVar6 = iVar2;
            }
            if (iVar6 + DAT_0075deec < 1) {
              iVar2 = 1;
            }
            else {
              if (iVar2 < 1) {
                iVar2 = 1;
              }
              iVar2 = iVar2 + DAT_0075deec;
            }
          }
          else {
            iVar2 = DAT_0075defc + DAT_0075deec;
          }
          local_40[0] = (int *)operator_new(iVar2 * 0x2c + 4);
          local_4._0_1_ = 2;
          if (local_40[0] == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = local_40[0] + 1;
            *local_40[0] = iVar2;
            FUN_006c043b(piVar5,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
          }
          iVar6 = 0;
          local_4._0_1_ = 1;
          if (0 < DAT_0075deec) {
            iVar7 = 0;
            do {
              FUN_0064a320((int)DAT_0075def0 + iVar7);
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + 0x2c;
            } while (iVar6 < DAT_0075deec);
          }
          iVar6 = local_50;
          if (DAT_0075def0 != (int *)0x0) {
            FUN_00407f70(3);
            iVar6 = local_50;
          }
        }
        DAT_0075def4 = iVar2;
        DAT_0075def0 = piVar5;
        FUN_0064a320(local_38);
        DAT_0075deec = DAT_0075deec + 1;
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649ba0();
        iVar6 = iVar6 + 1;
        local_50 = iVar6;
        iVar2 = FUN_00434e50();
      } while (iVar6 < iVar2);
    }
  }
  iVar6 = param_2;
  FUN_004e30f0(param_2);
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 3;
    FUN_00647d10(iVar2,s_Player_Only_0072e7a8);
    *(undefined4 *)(iVar2 + 0x84) = 2;
  }
  iVar2 = FUN_00425010();
  *(undefined4 *)(iVar2 + 0x80) = 3;
  FUN_00647d10(iVar2,s_One_Time_Shot_0072e798);
  *(undefined4 *)(iVar2 + 0x84) = 0x22;
  iVar2 = FUN_00425010();
  *(undefined4 *)(iVar2 + 0x80) = 3;
  FUN_00647d10(iVar2,s_Uses_Inventory_0072e788);
  *(undefined4 *)(iVar2 + 0x84) = 0x22;
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 3;
    FUN_00647d10(iVar2,s_Uses_B_Button_0072e778);
    *(undefined4 *)(iVar2 + 0x84) = 2;
  }
  iVar2 = FUN_00425010();
  *(undefined4 *)(iVar2 + 0x80) = 3;
  FUN_00647d10(iVar2,s_TimerRunning_0072e768);
  *(undefined4 *)(iVar2 + 0x84) = 0x38;
  iVar2 = FUN_00425010();
  *(undefined4 *)(iVar2 + 0x80) = 2;
  FUN_00647d10(iVar2,&DAT_007272d4);
  *(undefined4 *)(iVar2 + 0x84) = 0x38;
  *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
  *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 3;
    FUN_00647d10(iVar2,s_One_Directional_0072e758);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 3;
      FUN_00647d10(iVar2,s_CallUpdateInside_0072e590);
      *(undefined4 *)(iVar2 + 0x84) = 2;
    }
  }
  if ((*(byte *)(param_1 + 0x120) & 0x40) != 0) {
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 1;
      FUN_00647d10(iVar2,s_Number_of_Items_0072e748);
      *(undefined4 *)(iVar2 + 0x84) = 2;
      *(undefined4 *)(iVar2 + 0xf0) = 1;
      *(undefined4 *)(iVar2 + 0xf4) = 0xc6;
      if (DAT_0075d338 == 0) {
        iVar2 = FUN_00425010();
        *(undefined4 *)(iVar2 + 0x80) = 5;
        FUN_00647d10(iVar2,s_Valid_Choices_0072e738);
        *(undefined4 *)(iVar2 + 0x84) = 0x15;
        *(undefined4 *)(iVar2 + 0x100) = 0;
      }
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x198)) {
      param_2 = 0;
      do {
        FUN_00649920(&local_50,s_Valid_Choices_Slot__d_0072e720,iVar2);
        local_4 = CONCAT31(local_4._1_3_,3);
        uVar3 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar7 = FUN_00425010();
          *(undefined4 *)(iVar7 + 0x80) = 5;
          FUN_00647d10(iVar7,uVar3);
          *(undefined4 *)(iVar7 + 0x84) = 0x15;
          *(undefined4 *)(iVar7 + 0x100) = 0;
        }
        local_4 = local_4 & 0xffffff00;
        FUN_00649950();
        uVar1 = (uint)(iVar2 == 0) * 4 + 0x10;
        FUN_00649920(local_48,s_Valid_Choices_Slot__d_Copy_Slot_0_0072e6fc,iVar2);
        local_4 = CONCAT31(local_4._1_3_,4);
        local_4c = FUN_00649940();
        if ((DAT_0075d338 == 0) || ((uVar1 & 0x20) != 0)) {
          iVar7 = FUN_00425010();
          *(undefined4 *)(iVar7 + 0x80) = 3;
          FUN_00647d10(iVar7,local_4c);
          *(uint *)(iVar7 + 0x84) = uVar1;
        }
        local_4 = local_4 & 0xffffff00;
        FUN_00649950();
        FUN_00649920(local_44,s_Valid_Choices_Slot__d_Number_of_C_0072e6d4,iVar2);
        local_4 = CONCAT31(local_4._1_3_,5);
        local_4c = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar7 = FUN_00425010();
          *(undefined4 *)(iVar7 + 0x80) = 1;
          FUN_00647d10(iVar7,local_4c);
          *(uint *)(iVar7 + 0x84) = (iVar2 < 1) - 1 & 4;
          *(undefined4 *)(iVar7 + 0xf0) = 0;
          *(undefined4 *)(iVar7 + 0xf4) = 0xffffffff;
        }
        local_4 = local_4 & 0xffffff00;
        FUN_00649950();
        iVar7 = 0;
        if (0 < *(int *)(*(int *)(param_1 + 0x19c) + 8 + param_2)) {
          do {
            FUN_00649920(local_40,s_Valid_Choices_Slot__d_Choice__i_0072e6b4,iVar2,iVar7);
            local_4 = CONCAT31(local_4._1_3_,6);
            local_4c = FUN_00649940();
            if (DAT_0075d338 == 0) {
              iVar4 = FUN_00425010();
              *(undefined4 *)(iVar4 + 0x80) = 0xd;
              FUN_00647d10(iVar4,local_4c);
              *(undefined4 *)(iVar4 + 0x84) = 2;
              *(undefined4 *)(iVar4 + 0xf0) = 0;
              *(int *)(iVar4 + 0xf4) = DAT_0075deec;
              *(undefined **)(iVar4 + 0x100) = &DAT_0075dee4;
            }
            local_4 = local_4 & 0xffffff00;
            FUN_00649950();
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(*(int *)(param_1 + 0x19c) + 8 + param_2));
        }
        iVar2 = iVar2 + 1;
        param_2 = param_2 + 0x1c;
      } while (iVar2 < *(int *)(param_1 + 0x198));
    }
    if (*(int *)(param_1 + 0x14c) == 1) {
      if (DAT_0075d338 == 0) {
        iVar2 = FUN_00425010();
        *(undefined4 *)(iVar2 + 0x80) = 3;
        FUN_00647d10(iVar2,s_Multiple_Items_Can_Activate_0072e698);
        *(undefined4 *)(iVar2 + 0x84) = 2;
      }
      if (((*(uint *)(param_1 + 0x120) & 0x800) != 0) && (DAT_0075d338 == 0)) {
        iVar2 = FUN_00425010();
        *(undefined4 *)(iVar2 + 0x80) = 1;
        FUN_00647d10(iVar2,s_Number_of_Possible_Activator_Ite_0072e674);
        *(undefined4 *)(iVar2 + 0x84) = 2;
        *(undefined4 *)(iVar2 + 0xf0) = 0;
        *(undefined4 *)(iVar2 + 0xf4) = 0xffffffff;
      }
    }
    else if ((1 < *(int *)(param_1 + 0x14c)) && (DAT_0075d338 == 0)) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 3;
      FUN_00647d10(iVar2,s_Order_Does_Not_Matter_0072e65c);
      *(undefined4 *)(iVar2 + 0x84) = 2;
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x160)) {
      do {
        FUN_00649920(&param_2,s_Item_To_Activate__d_0072e648,iVar2);
        local_4 = CONCAT31(local_4._1_3_,7);
        uVar3 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar7 = FUN_00425010();
          *(undefined4 *)(iVar7 + 0x80) = 0xd;
          FUN_00647d10(iVar7,uVar3);
          *(undefined4 *)(iVar7 + 0x84) = 2;
          *(undefined4 *)(iVar7 + 0xf0) = 0;
          *(int *)(iVar7 + 0xf4) = DAT_0075deec;
          *(undefined **)(iVar7 + 0x100) = &DAT_0075dee4;
        }
        local_4 = local_4 & 0xffffff00;
        FUN_00649950();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x160));
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x138)) {
      do {
        FUN_00649920(&param_2,s_Saved_Item__d_0072e638,iVar2);
        local_4._0_1_ = 8;
        uVar3 = FUN_00649940();
        iVar7 = FUN_00425010();
        *(undefined4 *)(iVar7 + 0x80) = 1;
        FUN_00647d10(iVar7,uVar3);
        *(undefined4 *)(iVar7 + 0x84) = 0x38;
        *(undefined4 *)(iVar7 + 0xf0) = 0;
        *(undefined4 *)(iVar7 + 0xf4) = 0xffffffff;
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649950();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x138));
    }
    if ((*(byte *)(param_1 + 0x120) & 0x40) != 0) {
      FUN_005669e0(iVar6,s_Disable_When_Full_0072e624,2);
    }
  }
  FUN_005669e0(iVar6,s_Enabled_0072e61c,0x34);
  FUN_005669e0(iVar6,s_Activated_0072d8e4,0x34);
  FUN_005669e0(iVar6,s_RanPivotInside_0072e60c,0x38);
  if ((((*(uint *)(param_1 + 0x120) & 0x80000) != 0) &&
      (FUN_00499e60(iVar6,s_NumLastInside_0072e5fc,0x38,0,0xffffffff),
      *(int *)(param_1 + 0x108) != 0)) && (iVar2 = 0, 0 < *(int *)(param_1 + 0x160))) {
    do {
      FUN_00649920(&param_2,s_LastInside_d_0072e5ec,iVar2);
      local_4._0_1_ = 9;
      uVar3 = FUN_00649940(1,0x38,0,0);
      FUN_00459f30(iVar6,uVar3);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649950();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x160));
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

