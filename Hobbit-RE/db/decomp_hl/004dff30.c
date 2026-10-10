
undefined4 __thiscall FUN_004dff30(int *param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  int iStack_500;
  int iStack_4fc;
  int iStack_4f8;
  int iStack_4f4;
  int iStack_4f0;
  int aiStack_4ec [10];
  undefined4 auStack_4c4 [2];
  undefined1 auStack_4bc [600];
  undefined1 auStack_264 [600];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d5869;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_00647e40(param_2,s_Player_Only_0072e7a8);
  if (iVar2 == 0) {
    if (*param_3 == 3) {
      param_1[0x48] = (param_3[0x95] << 0x12 ^ param_1[0x48]) & 0x40000U ^ param_1[0x48];
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    iVar2 = FUN_00647e40(param_2,s_One_Time_Shot_0072e798);
    if (iVar2 == 0) {
      if (*param_3 == 3) {
        param_1[0x48] = (param_3[0x95] << 5 ^ param_1[0x48]) & 0x20U ^ param_1[0x48];
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      iVar2 = FUN_00647e40(param_2,s_Enabled_0072e61c);
      if (iVar2 == 0) {
        if (*param_3 == 3) {
          param_1[0x48] = (param_3[0x95] << 3 ^ param_1[0x48]) & 8U ^ param_1[0x48];
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        iVar2 = FUN_00647e40(param_2,s_Disable_When_Full_0072e624);
        if (iVar2 == 0) {
          if (*param_3 == 3) {
            param_1[0x48] = (param_3[0x95] << 0xc ^ param_1[0x48]) & 0x1000U ^ param_1[0x48];
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          iVar2 = FUN_00647e40(param_2,s_RanPivotInside_0072e60c);
          if (iVar2 == 0) {
            if (*param_3 == 3) {
              param_1[0x48] = (param_3[0x95] << 0x11 ^ param_1[0x48]) & 0x20000U ^ param_1[0x48];
              uVar3 = 1;
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            iVar2 = FUN_00647e40(param_2,s_TimerRunning_0072e768);
            if (iVar2 == 0) {
              if (*param_3 == 3) {
                param_1[0x48] = (param_3[0x95] << 8 ^ param_1[0x48]) & 0x100U ^ param_1[0x48];
                uVar3 = 1;
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              iVar2 = FUN_00647e40(param_2,&DAT_007272d4);
              if (iVar2 == 0) {
                if (*param_3 == 2) {
                  param_1[0x49] = param_3[0x94];
                  uVar3 = 1;
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                iVar2 = FUN_00647e40(param_2,s_Activated_0072d8e4);
                if (iVar2 == 0) {
                  if (*param_3 == 3) {
                    FUN_004de610(param_3[0x95]);
                    uVar3 = 1;
                  }
                  else {
                    uVar3 = 0;
                  }
                }
                else {
                  iVar2 = FUN_00647e40(param_2,s_Uses_B_Button_0072e778);
                  if (iVar2 == 0) {
                    if (*param_3 == 3) {
                      param_1[0x48] = (param_3[0x95] << 7 ^ param_1[0x48]) & 0x80U ^ param_1[0x48];
                      uVar3 = 1;
                    }
                    else {
                      uVar3 = 0;
                    }
                  }
                  else {
                    iVar2 = FUN_00647e40(param_2,s_One_Directional_0072e758);
                    if (iVar2 == 0) {
                      if (*param_3 == 3) {
                        param_1[0x48] =
                             (param_3[0x95] << 9 ^ param_1[0x48]) & 0x200U ^ param_1[0x48];
                        uVar3 = 1;
                      }
                      else {
                        uVar3 = 0;
                      }
                    }
                    else {
                      iVar2 = FUN_00647e40(param_2,s_CallUpdateInside_0072e590);
                      if (iVar2 == 0) {
                        if (*param_3 == 3) {
                          param_1[0x48] =
                               (param_3[0x95] << 0xe ^ param_1[0x48]) & 0x4000U ^ param_1[0x48];
                          uVar3 = 1;
                        }
                        else {
                          uVar3 = 0;
                        }
                      }
                      else {
                        iVar2 = FUN_00647e40(param_2,s_Uses_Inventory_0072e788);
                        if (iVar2 == 0) {
                          if (*param_3 == 3) {
                            param_1[0x48] =
                                 (param_3[0x95] << 6 ^ param_1[0x48]) & 0x40U ^ param_1[0x48];
                            uVar3 = 1;
                          }
                          else {
                            uVar3 = 0;
                          }
                        }
                        else {
                          iVar2 = FUN_00647e40(param_2,s_Number_of_Items_0072e748);
                          if (iVar2 == 0) {
                            if (*param_3 == 1) {
                              iVar2 = param_3[0x93];
                              iVar4 = FUN_00434e50();
                              if (iVar4 <= iVar2) {
                                iVar2 = FUN_00434e50();
                              }
                              if (iVar2 < 1) {
                                iVar2 = 1;
                              }
                              else {
                                iVar2 = param_3[0x93];
                                iVar4 = FUN_00434e50();
                                if (iVar4 <= iVar2) {
                                  iVar2 = FUN_00434e50();
                                }
                              }
                              if (iVar2 != param_1[0x53]) {
                                FUN_004df340(iVar2);
                              }
                              uVar3 = 1;
                            }
                            else {
                              uVar3 = 0;
                            }
                          }
                          else {
                            iVar2 = FUN_00647e40(param_2,s_Multiple_Items_Can_Activate_0072e698);
                            if ((iVar2 == 0) && (*param_3 == 3)) {
                              iVar2 = param_3[0x95];
                              param_1[0x48] =
                                   (iVar2 << 0xb ^ param_1[0x48]) & 0x800U ^ param_1[0x48];
                              if (iVar2 == 0) {
                                param_1[0x54] = 1;
                                FUN_004df340(1);
                              }
                              uVar3 = 1;
                            }
                            else {
                              iVar2 = FUN_00647e40(param_2,
                                                  s_Number_of_Possible_Activator_Ite_0072e674);
                              if ((iVar2 == 0) && (*param_3 == 1)) {
                                iVar2 = param_3[0x93];
                                iVar5 = FUN_00434e50();
                                iVar4 = iVar2;
                                if (iVar5 <= iVar2) {
                                  iVar4 = FUN_00434e50();
                                }
                                if (iVar4 < 1) {
                                  iVar4 = 1;
                                }
                                else {
                                  iVar5 = FUN_00434e50();
                                  iVar4 = iVar2;
                                  if (iVar5 <= iVar2) {
                                    iVar4 = FUN_00434e50();
                                  }
                                }
                                iVar5 = param_1[0x58];
                                param_1[0x54] = iVar4;
                                if (iVar2 != iVar5) {
                                  if (iVar5 < iVar4) {
                                    do {
                                      iVar2 = param_1[0x58];
                                      if (param_1[0x5a] < iVar2 + 1) {
                                        if (param_1[0x5c] == 0) {
                                          iVar4 = param_1[0x5a] / 2;
                                          iVar8 = 1;
                                          if (0 < iVar4) {
                                            iVar8 = iVar4;
                                          }
                                          if (iVar8 + iVar2 < 1) {
                                            iVar4 = 1;
                                          }
                                          else {
                                            if (iVar4 < 1) {
                                              iVar4 = 1;
                                            }
                                            iVar4 = iVar4 + iVar2;
                                          }
                                        }
                                        else {
                                          iVar4 = param_1[0x5c] + iVar2;
                                        }
                                        pvVar6 = operator_new(iVar4 * 4);
                                        iVar2 = 0;
                                        if (0 < param_1[0x58]) {
                                          do {
                                            *(undefined4 *)((int)pvVar6 + iVar2 * 4) =
                                                 *(undefined4 *)(param_1[0x59] + iVar2 * 4);
                                            iVar2 = iVar2 + 1;
                                          } while (iVar2 < param_1[0x58]);
                                        }
                                        FUN_006bf840(param_1[0x59]);
                                        param_1[0x59] = (int)pvVar6;
                                        param_1[0x5a] = iVar4;
                                      }
                                      *(undefined4 *)(param_1[0x59] + param_1[0x58] * 4) = 0;
                                      param_1[0x58] = param_1[0x58] + 1;
                                      iVar5 = iVar5 + 1;
                                    } while (iVar5 < param_1[0x54]);
                                  }
                                  if ((param_1[0x54] < param_1[0x58]) &&
                                     (iVar2 = param_1[0x58] + -1, param_1[0x54] <= iVar2)) {
                                    do {
                                      iVar4 = (param_1[0x58] - iVar2) + -1;
                                      if (0 < iVar4) {
                                        iVar5 = iVar2 * 4;
                                        do {
                                          *(undefined4 *)(iVar5 + param_1[0x59]) =
                                               *(undefined4 *)(iVar5 + 4 + param_1[0x59]);
                                          iVar5 = iVar5 + 4;
                                          iVar4 = iVar4 + -1;
                                        } while (iVar4 != 0);
                                      }
                                      param_1[0x58] = param_1[0x58] + -1;
                                      iVar2 = iVar2 + -1;
                                    } while (param_1[0x54] <= iVar2);
                                  }
                                }
                                uVar3 = 1;
                              }
                              else {
                                iVar2 = FUN_00647e40(param_2,s_Order_Does_Not_Matter_0072e65c);
                                if (iVar2 == 0) {
                                  if (*param_3 == 3) {
                                    param_1[0x48] =
                                         (param_3[0x95] << 10 ^ param_1[0x48]) & 0x400U ^
                                         param_1[0x48];
                                    uVar3 = 1;
                                  }
                                  else {
                                    uVar3 = 0;
                                  }
                                }
                                else {
                                  iVar2 = 0;
                                  if (0 < param_1[0x58]) {
                                    do {
                                      FUN_00649920(&iStack_4fc,s_Item_To_Activate__d_0072e648,iVar2)
                                      ;
                                      uStack_4 = 0;
                                      uVar3 = FUN_00649940();
                                      iVar4 = FUN_00647e40(param_2,uVar3);
                                      uStack_4 = 0xffffffff;
                                      FUN_00649950();
                                      if (iVar4 == 0) {
                                        iVar4 = *param_3;
                                        if ((iVar4 == 1) || (iVar4 == 0xc)) {
                                          *(int *)(param_1[0x59] + iVar2 * 4) = param_3[0x93];
                                          ExceptionList = pvStack_c;
                                          return 1;
                                        }
                                        if ((iVar4 == 0xd) || (iVar4 == 4)) {
                                          uVar3 = FUN_00649b20(param_3 + 2);
                                          uStack_4 = 1;
                                          uVar3 = FUN_00434eb0(uVar3);
                                          uStack_4 = 0xffffffff;
                                          FUN_00649ba0();
                                          *(undefined4 *)(param_1[0x59] + iVar2 * 4) = uVar3;
                                        }
                                      }
                                      iVar2 = iVar2 + 1;
                                    } while (iVar2 < param_1[0x58]);
                                  }
                                  iVar2 = 0;
                                  iStack_4fc = 0;
                                  if (0 < param_1[0x66]) {
                                    iStack_500 = 0;
                                    do {
                                      FUN_00649920(aiStack_4ec,
                                                   s_Valid_Choices_Slot__d_Copy_Slot_0_0072e6fc,
                                                   iVar2);
                                      uStack_4 = 2;
                                      uVar3 = FUN_00649940();
                                      iVar4 = FUN_00647e40(param_2,uVar3);
                                      if ((iVar4 == 0) && (*param_3 == 3)) {
                                        iStack_4fc = param_3[0x95];
                                        bVar1 = true;
                                      }
                                      else {
                                        bVar1 = false;
                                      }
                                      uStack_4 = 0xffffffff;
                                      FUN_00649950();
                                      if (bVar1) {
                                        if (iStack_4fc != 0) {
                                          (**(code **)(*param_1 + 0xb8))
                                                    (auStack_4bc,
                                                     s_Valid_Choices_Slot_0_Number_of_C_0072e7f4);
                                          FUN_00649920(&iStack_500,
                                                       s_Valid_Choices_Slot__d_Number_of_C_0072e6d4,
                                                       iVar2);
                                          iVar4 = *param_1;
                                          pvStack_c = (void *)0x3;
                                          uVar3 = FUN_00649940(auStack_4c4);
                                          (**(code **)(iVar4 + 0xb4))(uVar3);
                                          uStack_4 = 0xffffffff;
                                          FUN_00649950();
                                          aiStack_4ec[0] = iVar2 * 0x1c;
                                          iVar4 = 0;
                                          if (0 < *(int *)(param_1[0x67] + 8 + aiStack_4ec[0])) {
                                            do {
                                              FUN_00649920(&iStack_4f8,
                                                           s_Valid_Choices_Slot_0_Choice__d_0072e7d4
                                                           ,iVar4);
                                              iVar5 = *param_1;
                                              uStack_4 = 4;
                                              uVar3 = FUN_00649940();
                                              puVar7 = (undefined4 *)
                                                       (**(code **)(iVar5 + 0xb8))
                                                                 (auStack_264,uVar3);
                                              auStack_4c4[0] = *puVar7;
                                              FUN_00424890(puVar7 + 2);
                                              pvStack_c = (void *)0xffffffff;
                                              FUN_00649950();
                                              FUN_00649920(&iStack_4f8,
                                                                                                                      
                                                  s_Valid_Choices_Slot__d_Choice__d_0072e81c,iVar2,
                                                  iVar4);
                                              iVar5 = *param_1;
                                              pvStack_c = (void *)0x5;
                                              uVar3 = FUN_00649940(auStack_4c4);
                                              (**(code **)(iVar5 + 0xb4))(uVar3);
                                              uStack_4 = 0xffffffff;
                                              FUN_00649950();
                                              iVar4 = iVar4 + 1;
                                            } while (iVar4 < *(int *)(param_1[0x67] + 8 +
                                                                     aiStack_4ec[0]));
                                          }
                                        }
                                        ExceptionList = pvStack_c;
                                        return 1;
                                      }
                                      FUN_00649920(&iStack_4f0,
                                                   s_Valid_Choices_Slot__d_Number_of_C_0072e6d4,
                                                   iVar2);
                                      uStack_4 = 6;
                                      uVar3 = FUN_00649940();
                                      iVar4 = FUN_00647ed0(param_2,uVar3);
                                      uStack_4 = 0xffffffff;
                                      FUN_00649950();
                                      if (iVar4 == 0) {
                                        if (*param_3 != 1) {
                                          ExceptionList = pvStack_c;
                                          return 0;
                                        }
                                        iStack_4fc = 0;
                                        if (0 < param_1[0x66]) {
                                          iVar2 = 0;
                                          do {
                                            iStack_4f8 = param_3[0x93];
                                            iVar5 = *(int *)(iVar2 + 0x10 + param_1[0x67]);
                                            iVar4 = iVar2 + param_1[0x67];
                                            iStack_4f0 = *(int *)(iVar4 + 8);
                                            iStack_500 = iStack_4f8;
                                            if (iStack_4f8 <= iVar5) {
                                              iStack_500 = iVar5;
                                            }
                                            if (iStack_500 != iVar5) {
                                              pvVar6 = operator_new(iStack_500 * 4);
                                              iVar5 = 0;
                                              if (0 < *(int *)(iVar4 + 8)) {
                                                do {
                                                  *(undefined4 *)((int)pvVar6 + iVar5 * 4) =
                                                       *(undefined4 *)
                                                        (*(int *)(iVar4 + 0xc) + iVar5 * 4);
                                                  iVar5 = iVar5 + 1;
                                                } while (iVar5 < *(int *)(iVar4 + 8));
                                              }
                                              FUN_006bf840(*(undefined4 *)(iVar4 + 0xc));
                                              *(int *)(iVar4 + 0x10) = iStack_500;
                                              *(void **)(iVar4 + 0xc) = pvVar6;
                                            }
                                            *(int *)(iVar4 + 8) = iStack_4f8;
                                            iVar4 = iVar2 + param_1[0x67];
                                            if (iStack_4f0 < *(int *)(iVar4 + 8)) {
                                              do {
                                                *(undefined4 *)
                                                 (*(int *)(iVar4 + 0xc) + iStack_4f0 * 4) = 0;
                                                iVar4 = iVar2 + param_1[0x67];
                                                iStack_4f0 = iStack_4f0 + 1;
                                              } while (iStack_4f0 < *(int *)(iVar4 + 8));
                                            }
                                            iStack_4fc = iStack_4fc + 1;
                                            iVar2 = iVar2 + 0x1c;
                                          } while (iStack_4fc < param_1[0x66]);
                                        }
                                        ExceptionList = pvStack_c;
                                        return 1;
                                      }
                                      iVar4 = 0;
                                      if (0 < *(int *)(iStack_500 + 8 + param_1[0x67])) {
                                        do {
                                          FUN_00649920(&iStack_4f8,
                                                       s_Valid_Choices_Slot__d_Choice__d_0072e81c,
                                                       iVar2,iVar4);
                                          uStack_4 = 7;
                                          uVar3 = FUN_00649940();
                                          iVar5 = FUN_00647e40(param_2,uVar3);
                                          uStack_4 = 0xffffffff;
                                          FUN_00649950();
                                          if (iVar5 == 0) {
                                            iVar5 = *param_3;
                                            if ((iVar5 == 1) || (iVar5 == 0xc)) {
                                              *(int *)(*(int *)(param_1[0x67] + 0xc + iVar2 * 0x1c)
                                                      + iVar4 * 4) = param_3[0x93];
                                              ExceptionList = pvStack_c;
                                              return 1;
                                            }
                                            if ((iVar5 == 0xd) || (iVar5 == 4)) {
                                              uVar3 = FUN_00649b20(param_3 + 2);
                                              uStack_4 = 8;
                                              uVar3 = FUN_00434eb0(uVar3);
                                              uStack_4 = 0xffffffff;
                                              FUN_00649ba0();
                                              *(undefined4 *)
                                               (*(int *)(iStack_500 + 0xc + param_1[0x67]) +
                                               iVar4 * 4) = uVar3;
                                            }
                                          }
                                          iVar4 = iVar4 + 1;
                                        } while (iVar4 < *(int *)(iStack_500 + 8 + param_1[0x67]));
                                      }
                                      iVar2 = iVar2 + 1;
                                      iStack_500 = iStack_500 + 0x1c;
                                    } while (iVar2 < param_1[0x66]);
                                  }
                                  iVar2 = 0;
                                  if (0 < param_1[0x4e]) {
                                    do {
                                      FUN_00649920(&iStack_4f8,s_Saved_Item__d_0072e638,iVar2);
                                      uStack_4 = 9;
                                      uVar3 = FUN_00649940();
                                      iVar4 = FUN_00647e40(param_2,uVar3);
                                      uStack_4 = 0xffffffff;
                                      FUN_00649950();
                                      if (iVar4 == 0) {
                                        if (*param_3 != 1) {
                                          ExceptionList = pvStack_c;
                                          return 0;
                                        }
                                        *(int *)(param_1[0x4f] + iVar2 * 4) = param_3[0x93];
                                        ExceptionList = pvStack_c;
                                        return 1;
                                      }
                                      iVar2 = iVar2 + 1;
                                    } while (iVar2 < param_1[0x4e]);
                                  }
                                  iVar2 = FUN_00647e40(param_2,s_NumLastInside_0072e5fc);
                                  if ((iVar2 == 0) && (*param_3 == 1)) {
                                    iVar2 = param_3[0x93];
                                    if (param_1[0x45] == 0) {
                                      FUN_006bf840(param_1[0x43]);
                                      param_1[0x43] = 0;
                                      param_1[0x44] = 0;
                                    }
                                    param_1[0x42] = 0;
                                    if (iVar2 < 0) {
                                      do {
                                        iVar4 = param_1[0x42];
                                        if (param_1[0x44] < iVar4 + 1) {
                                          if (param_1[0x46] == 0) {
                                            iVar5 = param_1[0x44] / 2;
                                            iVar8 = 1;
                                            if (0 < iVar5) {
                                              iVar8 = iVar5;
                                            }
                                            if (iVar8 + iVar4 < 1) {
                                              iVar5 = 1;
                                            }
                                            else {
                                              if (iVar5 < 1) {
                                                iVar5 = 1;
                                              }
                                              iVar5 = iVar5 + iVar4;
                                            }
                                          }
                                          else {
                                            iVar5 = param_1[0x46] + iVar4;
                                          }
                                          pvVar6 = operator_new(iVar5 * 8);
                                          iVar4 = 0;
                                          if (0 < param_1[0x42]) {
                                            do {
                                              iVar8 = param_1[0x43];
                                              *(undefined4 *)((int)pvVar6 + iVar4 * 8) =
                                                   *(undefined4 *)(iVar8 + iVar4 * 8);
                                              *(undefined4 *)((int)pvVar6 + iVar4 * 8 + 4) =
                                                   *(undefined4 *)(iVar8 + 4 + iVar4 * 8);
                                              iVar4 = iVar4 + 1;
                                            } while (iVar4 < param_1[0x42]);
                                          }
                                          FUN_006bf840(param_1[0x43]);
                                          param_1[0x43] = (int)pvVar6;
                                          param_1[0x44] = iVar5;
                                        }
                                        iVar4 = param_1[0x42];
                                        param_1[0x42] = iVar4 + 1;
                                      } while (iVar2 < iVar4 + 1);
                                    }
                                    uVar3 = 1;
                                  }
                                  else {
                                    iVar2 = 0;
                                    if (0 < param_1[0x42]) {
                                      do {
                                        FUN_00649920(&iStack_500,s_LastInside_d_0072e5ec,iVar2);
                                        uStack_4 = 10;
                                        uVar3 = FUN_00649940();
                                        iVar4 = FUN_00647e40(param_2,uVar3);
                                        if ((iVar4 == 0) &&
                                           ((*param_3 == 0xf || (*param_3 == 0x10)))) {
                                          iStack_4f8 = param_3[0x90];
                                          iStack_4f4 = param_3[0x91];
                                          bVar1 = true;
                                        }
                                        else {
                                          bVar1 = false;
                                        }
                                        uStack_4 = 0xffffffff;
                                        FUN_00649950();
                                        if (bVar1) {
                                          iVar4 = param_1[0x43];
                                          *(int *)(iVar4 + iVar2 * 8) = iStack_4f8;
                                          *(int *)(iVar4 + 4 + iVar2 * 8) = iStack_4f4;
                                          ExceptionList = pvStack_c;
                                          return 1;
                                        }
                                        iVar2 = iVar2 + 1;
                                      } while (iVar2 < param_1[0x42]);
                                    }
                                    uVar3 = FUN_004e3380(param_2,param_3);
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
          }
        }
      }
    }
  }
  ExceptionList = pvStack_c;
  return uVar3;
}

