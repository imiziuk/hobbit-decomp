
undefined4 * __thiscall FUN_004e0df0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iStack_4d4;
  int iStack_4d0;
  undefined4 uStack_4cc;
  undefined1 auStack_4c8 [4];
  undefined1 auStack_4c4 [4];
  undefined1 auStack_4c0 [4];
  undefined4 uStack_4bc;
  undefined4 auStack_4b4 [127];
  undefined1 uStack_2b5;
  undefined1 auStack_2b4 [12];
  undefined1 auStack_2a8 [12];
  undefined1 auStack_29c [4];
  undefined1 auStack_298 [12];
  undefined1 auStack_28c [16];
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  uint uStack_268;
  undefined4 uStack_264;
  undefined4 auStack_25c [128];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d58c2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00647e40(param_3,s_Player_Only_0072e7a8);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_268 = *(uint *)(param_1 + 0x120) >> 0x12 & 1;
  }
  else {
    iVar1 = FUN_00647e40(param_3,s_One_Time_Shot_0072e798);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_268 = *(uint *)(param_1 + 0x120) >> 5 & 1;
    }
    else {
      iVar1 = FUN_00647e40(param_3,s_Uses_Inventory_0072e788);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_268 = *(uint *)(param_1 + 0x120) >> 6 & 1;
      }
      else {
        iVar1 = FUN_00647e40(param_3,s_Enabled_0072e61c);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_268 = *(uint *)(param_1 + 0x120) >> 3 & 1;
        }
        else {
          iVar1 = FUN_00647e40(param_3,s_Uses_B_Button_0072e778);
          if (iVar1 == 0) {
            FUN_00406a80();
            uStack_268 = *(uint *)(param_1 + 0x120) >> 7 & 1;
          }
          else {
            iVar1 = FUN_00647e40(param_3,s_One_Directional_0072e758);
            if (iVar1 == 0) {
              FUN_00406a80();
              uStack_268 = *(uint *)(param_1 + 0x120) >> 9 & 1;
            }
            else {
              iVar1 = FUN_00647e40(param_3,s_CallUpdateInside_0072e590);
              if (iVar1 == 0) {
                FUN_00406a80();
                uStack_268 = *(uint *)(param_1 + 0x120) >> 0xe & 1;
              }
              else {
                iVar1 = FUN_00647e40(param_3,s_Number_of_Items_0072e748);
                if (iVar1 == 0) {
                  FUN_00406a80();
                  uStack_270 = *(undefined4 *)(param_1 + 0x14c);
                  uStack_4bc = 1;
                  *param_2 = 1;
                  FUN_00424770(auStack_4b4);
                  ExceptionList = pvStack_c;
                  return param_2;
                }
                iVar1 = FUN_00647e40(param_3,s_Multiple_Items_Can_Activate_0072e698);
                if (iVar1 == 0) {
                  FUN_00406a80();
                  uStack_268 = *(uint *)(param_1 + 0x120) >> 0xb & 1;
                }
                else {
                  iVar1 = FUN_00647e40(param_3,s_Number_of_Possible_Activator_Ite_0072e674);
                  if (iVar1 == 0) {
                    FUN_00406a80();
                    uStack_270 = *(undefined4 *)(param_1 + 0x150);
                    uStack_4bc = 1;
                    *param_2 = 1;
                    FUN_00424770(auStack_4b4);
                    ExceptionList = pvStack_c;
                    return param_2;
                  }
                  iVar1 = FUN_00647e40(param_3,s_Order_Does_Not_Matter_0072e65c);
                  if (iVar1 == 0) {
                    FUN_00406a80();
                    uStack_268 = *(uint *)(param_1 + 0x120) >> 10 & 1;
                  }
                  else {
                    iVar1 = FUN_00647e40(param_3,s_Disable_When_Full_0072e624);
                    if (iVar1 == 0) {
                      FUN_00406a80();
                      uStack_268 = *(uint *)(param_1 + 0x120) >> 0xc & 1;
                    }
                    else {
                      iVar1 = FUN_00647e40(param_3,s_RanPivotInside_0072e60c);
                      if (iVar1 == 0) {
                        FUN_00406a80();
                        uStack_268 = *(uint *)(param_1 + 0x120) >> 0x11 & 1;
                      }
                      else {
                        iVar1 = FUN_00647e40(param_3,s_TimerRunning_0072e768);
                        if (iVar1 == 0) {
                          FUN_00406a80();
                          uStack_268 = *(uint *)(param_1 + 0x120) >> 8 & 1;
                        }
                        else {
                          iVar1 = FUN_00647e40(param_3,&DAT_007272d4);
                          if (iVar1 == 0) {
                            FUN_00406a80();
                            uStack_26c = *(undefined4 *)(param_1 + 0x124);
                            uStack_4bc = 2;
                            *param_2 = 2;
                            FUN_00424770(auStack_4b4);
                            ExceptionList = pvStack_c;
                            return param_2;
                          }
                          uVar2 = FUN_004de640();
                          iVar1 = FUN_00647e40(param_3,s_Activated_0072d8e4);
                          if (iVar1 != 0) {
                            iVar1 = 0;
                            if (0 < *(int *)(param_1 + 0x160)) {
                              do {
                                uVar3 = FUN_00434e80(*(undefined4 *)
                                                      (*(int *)(param_1 + 0x164) + iVar1 * 4));
                                FUN_00649920(&iStack_4d0,s_Item_To_Activate__d_0072e648,iVar1);
                                uStack_4 = 0;
                                uVar4 = FUN_00649940();
                                iVar5 = FUN_00647e40(param_3,uVar4);
                                uStack_4 = 0xffffffff;
                                FUN_00649950();
                                if (iVar5 == 0) {
                                  FUN_00406a80();
                                  uStack_4bc = 0xd;
                                  FUN_00647d70(auStack_4b4,uVar3,0x200);
                                  uStack_2b5 = 0;
                                  *param_2 = uStack_4bc;
                                  FUN_00424770(auStack_4b4);
                                  ExceptionList = pvStack_c;
                                  return param_2;
                                }
                                iVar1 = iVar1 + 1;
                              } while (iVar1 < *(int *)(param_1 + 0x160));
                            }
                            iStack_4d0 = 0;
                            if (0 < *(int *)(param_1 + 0x198)) {
                              iStack_4d4 = 0;
                              do {
                                iVar1 = iStack_4d0;
                                FUN_00649920(auStack_4c4,
                                             s_Valid_Choices_Slot__d_Number_of_C_0072e6d4,iStack_4d0
                                            );
                                uStack_4 = 1;
                                uVar3 = FUN_00649940();
                                iVar5 = FUN_00647e40(param_3,uVar3);
                                uStack_4 = 0xffffffff;
                                FUN_00649950();
                                if (iVar5 == 0) {
                                  FUN_00406a80();
                                  uStack_4bc = 1;
                                  uStack_270 = *(undefined4 *)
                                                (iVar1 * 0x1c + 8 + *(int *)(param_1 + 0x19c));
                                  *param_2 = 1;
                                  FUN_00424770(auStack_4b4);
                                  ExceptionList = pvStack_c;
                                  return param_2;
                                }
                                FUN_00649920(auStack_4c8,
                                             s_Valid_Choices_Slot__d_Copy_Slot_0_0072e6fc,iVar1);
                                uStack_4 = 2;
                                uVar3 = FUN_00649940();
                                iVar1 = FUN_00647e40(param_3,uVar3);
                                uStack_4 = 0xffffffff;
                                FUN_00649950();
                                if (iVar1 == 0) {
                                  FUN_00406a80();
                                  uStack_268 = 0;
                                  goto LAB_004e1526;
                                }
                                iVar1 = *(int *)(param_1 + 0x19c);
                                iVar5 = 0;
                                if (0 < *(int *)(iStack_4d4 + 8 + iVar1)) {
                                  do {
                                    uStack_4cc = FUN_00434e80(*(undefined4 *)
                                                               (*(int *)(iStack_4d4 + 0xc + iVar1) +
                                                               iVar5 * 4));
                                    FUN_00649920(auStack_4c0,
                                                 s_Valid_Choices_Slot__d_Choice__i_0072e6b4,
                                                 iStack_4d0,iVar5);
                                    uStack_4 = 3;
                                    uVar3 = FUN_00649940();
                                    iVar1 = FUN_00647e40(param_3,uVar3);
                                    uStack_4 = 0xffffffff;
                                    FUN_00649950();
                                    if (iVar1 == 0) {
                                      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                                      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                                      uStack_4bc = 0xd;
                                      FUN_00647d70(auStack_4b4,uStack_4cc,0x200);
                                      uStack_2b5 = 0;
                                      *param_2 = uStack_4bc;
                                      FUN_00424770(auStack_4b4);
                                      ExceptionList = pvStack_c;
                                      return param_2;
                                    }
                                    iVar1 = *(int *)(param_1 + 0x19c);
                                    iVar5 = iVar5 + 1;
                                  } while (iVar5 < *(int *)(iStack_4d4 + 8 + iVar1));
                                }
                                iStack_4d0 = iStack_4d0 + 1;
                                iStack_4d4 = iStack_4d4 + 0x1c;
                              } while (iStack_4d0 < *(int *)(param_1 + 0x198));
                            }
                            iVar1 = 0;
                            if (0 < *(int *)(param_1 + 0x138)) {
                              do {
                                FUN_00649920(&uStack_4cc,s_Saved_Item__d_0072e638,iVar1);
                                uStack_4 = 4;
                                uVar3 = FUN_00649940();
                                iVar5 = FUN_00647e40(param_3,uVar3);
                                uStack_4 = 0xffffffff;
                                FUN_00649950();
                                if (iVar5 == 0) {
                                  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                                  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                                  uStack_4bc = 1;
                                  uStack_270 = *(undefined4 *)
                                                (*(int *)(param_1 + 0x13c) + iVar1 * 4);
                                  *param_2 = 1;
                                  puVar6 = auStack_4b4;
                                  puVar7 = param_2 + 2;
                                  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                                    *puVar7 = *puVar6;
                                    puVar6 = puVar6 + 1;
                                    puVar7 = puVar7 + 1;
                                  }
                                  FUN_00480f60(auStack_2b4);
                                  goto LAB_004e16ec;
                                }
                                iVar1 = iVar1 + 1;
                              } while (iVar1 < *(int *)(param_1 + 0x138));
                            }
                            iVar1 = FUN_00647e40(param_3,s_NumLastInside_0072e5fc);
                            if (iVar1 != 0) {
                              iVar1 = 0;
                              if (0 < *(int *)(param_1 + 0x108)) {
                                do {
                                  FUN_00649920(&uStack_4cc,s_LastInside_d_0072e5ec,iVar1);
                                  uStack_4 = 5;
                                  uVar3 = FUN_00649940();
                                  iVar5 = FUN_00647e40(param_3,uVar3);
                                  uStack_4 = 0xffffffff;
                                  FUN_00649950();
                                  if (iVar5 == 0) {
                                    uStack_5c = 0x7f7fffff;
                                    uStack_58 = 0x7f7fffff;
                                    uStack_54 = 0x7f7fffff;
                                    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                                    uStack_264 = 0xf;
                                    uStack_24 = *(undefined4 *)
                                                 (*(int *)(param_1 + 0x10c) + iVar1 * 8);
                                    uStack_20 = *(undefined4 *)
                                                 (*(int *)(param_1 + 0x10c) + 4 + iVar1 * 8);
                                    *param_2 = 0xf;
                                    puVar6 = auStack_25c;
                                    puVar7 = param_2 + 2;
                                    for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                                      *puVar7 = *puVar6;
                                      puVar6 = puVar6 + 1;
                                      puVar7 = puVar7 + 1;
                                    }
                                    param_2[0x82] = uStack_5c;
                                    param_2[0x83] = uStack_58;
                                    param_2[0x84] = uStack_54;
                                    param_2[0x85] = uStack_50;
                                    param_2[0x86] = uStack_4c;
                                    param_2[0x87] = uStack_48;
                                    *(undefined1 *)((int)param_2 + 0x223) = uStack_41;
                                    *(undefined1 *)((int)param_2 + 0x222) = uStack_42;
                                    *(undefined1 *)((int)param_2 + 0x221) = uStack_43;
                                    *(undefined1 *)(param_2 + 0x88) = uStack_44;
                                    param_2[0x89] = uStack_40;
                                    param_2[0x8a] = uStack_3c;
                                    param_2[0x8b] = uStack_38;
                                    param_2[0x8c] = uStack_34;
                                    param_2[0x8d] = uStack_30;
                                    param_2[0x8e] = uStack_2c;
                                    param_2[0x92] = uStack_1c;
                                    param_2[0x93] = uStack_18;
                                    param_2[0x94] = uStack_14;
                                    param_2[0x90] = uStack_24;
                                    param_2[0x91] = uStack_20;
                                    param_2[0x95] = uStack_10;
                                    ExceptionList = pvStack_c;
                                    return param_2;
                                  }
                                  iVar1 = iVar1 + 1;
                                } while (iVar1 < *(int *)(param_1 + 0x108));
                              }
                              FUN_004e37d0(param_2,param_3);
                              ExceptionList = pvStack_c;
                              return param_2;
                            }
                            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                            uStack_4bc = 1;
                            uStack_270 = *(undefined4 *)(param_1 + 0x108);
                            *param_2 = 1;
                            puVar6 = auStack_4b4;
                            puVar7 = param_2 + 2;
                            for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                              *puVar7 = *puVar6;
                              puVar6 = puVar6 + 1;
                              puVar7 = puVar7 + 1;
                            }
                            FUN_004357e0(auStack_2b4);
                            FUN_004357e0(auStack_2a8);
LAB_004e16ec:
                            FUN_00425250(auStack_29c);
                            FUN_004357e0(auStack_298);
                            FUN_004357e0(auStack_28c);
                            param_2[0x90] = uStack_27c;
                            param_2[0x91] = uStack_278;
                            param_2[0x92] = uStack_274;
                            param_2[0x93] = uStack_270;
                            param_2[0x94] = uStack_26c;
                            param_2[0x95] = uStack_268;
                            ExceptionList = pvStack_c;
                            return param_2;
                          }
                          FUN_00406a80();
                          uStack_268 = uVar2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_004e1526:
  uStack_4bc = 3;
  *param_2 = 3;
  FUN_00424770(auStack_4b4);
  ExceptionList = pvStack_c;
  return param_2;
}

