
undefined4 __thiscall FUN_005b0ff0(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar11 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006de7ec;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar5 = FUN_005af120();
  if ((*(int *)(iVar5 + 0x1b0) == 0x13) &&
     (iVar5 = FUN_00647e40(param_2,s_Eel_Info_Colony_007454fc), iVar5 == 0)) {
    if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
      *(int *)(param_1 + 0x98) = param_3[0x90];
      *(int *)(param_1 + 0x9c) = param_3[0x91];
      ExceptionList = pvStack_c;
      return 1;
    }
  }
  else {
    iVar5 = FUN_00647e40(param_2,s_AI_Tweaks_Triggered_Conversation_007454d4);
    if (iVar5 == 0) {
      if ((*param_3 == 0xd) || (*param_3 == 4)) {
        FUN_0064a2e0(param_3 + 2);
        ExceptionList = pvStack_c;
        return 1;
      }
    }
    else {
      iVar5 = FUN_00647e40(param_2,s_AI_Tweaks_Triggered_Cinema_007454b8);
      if (iVar5 == 0) {
        if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
          *(int *)(param_1 + 0x168) = param_3[0x90];
          *(int *)(param_1 + 0x16c) = param_3[0x91];
          ExceptionList = pvStack_c;
          return 1;
        }
      }
      else {
        iVar5 = FUN_00647e40(param_2,s_AI_Tweaks_Block_Percent_007454a0);
        if (iVar5 == 0) {
          if (*param_3 == 1) {
            **(int **)(param_1 + 0x214) = param_3[0x93];
            ExceptionList = pvStack_c;
            return 1;
          }
        }
        else {
          iVar5 = FUN_00647e40(param_2,s_AI_Tweaks_Evade_Percent_00745488);
          if (iVar5 == 0) {
            if (*param_3 == 1) {
              *(int *)(*(int *)(param_1 + 0x214) + 4) = param_3[0x93];
              ExceptionList = pvStack_c;
              return 1;
            }
          }
          else {
            iVar5 = FUN_00647e40(param_2,s_AI_Tweaks_Shove_Percent_00745470);
            if (iVar5 == 0) {
              if (*param_3 == 1) {
                *(int *)(*(int *)(param_1 + 0x214) + 8) = param_3[0x93];
                ExceptionList = pvStack_c;
                return 1;
              }
            }
            else {
              iVar5 = FUN_00647e40(param_2,s_AI_Tweaks_Strafe_Percent_00745454);
              if (iVar5 == 0) {
                if (*param_3 == 1) {
                  *(int *)(*(int *)(param_1 + 0x214) + 0xc) = param_3[0x93];
                  ExceptionList = pvStack_c;
                  return 1;
                }
              }
              else {
                iVar5 = FUN_00647e40(param_2,s_AI_Tweaks_Can_Block_Stones_00745438);
                if (iVar5 == 0) {
                  if (*param_3 == 3) {
                    *(int *)(*(int *)(param_1 + 0x214) + 0x18) = param_3[0x95];
                    ExceptionList = pvStack_c;
                    return 1;
                  }
                }
                else {
                  iVar5 = FUN_00647e40(param_2,s_AI_Tweaks_Blocking_Damage_Modifi_00745414);
                  if (iVar5 == 0) {
                    if (*param_3 == 2) {
                      *(int *)(*(int *)(param_1 + 0x214) + 0x1c) = param_3[0x94];
                      ExceptionList = pvStack_c;
                      return 1;
                    }
                  }
                  else {
                    iVar5 = FUN_00647e40(param_2,s_AI_Tweaks_Shield_Blocking_Damage_007453e8);
                    if (iVar5 == 0) {
                      if (*param_3 == 2) {
                        *(int *)(*(int *)(param_1 + 0x214) + 0x20) = param_3[0x94];
                        ExceptionList = pvStack_c;
                        return 1;
                      }
                    }
                    else {
                      iVar5 = FUN_00647e40(param_2,s_AI_Tweaks_Goal_List_Count_007453cc);
                      if (iVar5 == 0) {
                        if (*param_3 == 1) {
                          iVar5 = param_3[0x93];
                          iVar8 = *(int *)(param_1 + 0xe0);
                          if (iVar8 < iVar5) {
                            if (iVar8 < iVar5) {
                              param_2 = (undefined4 *)(iVar5 - iVar8);
                              do {
                                param_3 = (int *)operator_new(0x68);
                                if (param_3 == (undefined4 *)0x0) {
                                  param_3 = (undefined4 *)0x0;
                                }
                                else {
                                  param_3[3] = 0;
                                  param_3[2] = 0;
                                  param_3[4] = 0;
                                  param_3[6] = 0;
                                  param_3[5] = 0;
                                  *param_3 = 0;
                                  param_3[1] = 0;
                                  uStack_4 = 1;
                                  FUN_00647d10(param_3 + 7,s_Enter_List_Name_007450d0);
                                  param_3[0x18] = 0;
                                  param_3[0x19] = 0;
                                  param_3[0x17] = param_3[0x17] & 0xfffffffaU | 10;
                                }
                                iVar5 = *(int *)(param_1 + 0xe0);
                                uStack_4 = 0xffffffff;
                                if (*(int *)(param_1 + 0xe8) < iVar5 + 1) {
                                  if (*(int *)(param_1 + 0xf0) == 0) {
                                    iVar6 = *(int *)(param_1 + 0xe8) / 2;
                                    iVar8 = 1;
                                    if (0 < iVar6) {
                                      iVar8 = iVar6;
                                    }
                                    if (iVar8 + iVar5 < 1) {
                                      iVar5 = 1;
                                    }
                                    else {
                                      if (iVar6 < 1) {
                                        iVar6 = 1;
                                      }
                                      iVar5 = iVar5 + iVar6;
                                    }
                                  }
                                  else {
                                    iVar5 = iVar5 + *(int *)(param_1 + 0xf0);
                                  }
                                  pvVar7 = operator_new(iVar5 * 4);
                                  iVar8 = 0;
                                  if (0 < *(int *)(param_1 + 0xe0)) {
                                    do {
                                      *(undefined4 *)((int)pvVar7 + iVar8 * 4) =
                                           *(undefined4 *)(*(int *)(param_1 + 0xe4) + iVar8 * 4);
                                      iVar8 = iVar8 + 1;
                                    } while (iVar8 < *(int *)(param_1 + 0xe0));
                                  }
                                  FUN_006bf840(*(undefined4 *)(param_1 + 0xe4));
                                  *(void **)(param_1 + 0xe4) = pvVar7;
                                  *(int *)(param_1 + 0xe8) = iVar5;
                                }
                                *(int **)(*(int *)(param_1 + 0xe4) + *(int *)(param_1 + 0xe0) * 4) =
                                     param_3;
                                param_2 = (undefined4 *)((int)param_2 + -1);
                                *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
                              } while (param_2 != (undefined4 *)0x0);
                              ExceptionList = pvStack_c;
                              return 1;
                            }
                          }
                          else if (iVar5 < iVar8) {
                            iVar8 = *(int *)(param_1 + 0xe8);
                            if (*(int *)(param_1 + 0xe8) < iVar5) {
                              iVar8 = iVar5;
                            }
                            FUN_005a2a20(iVar8);
                            *(int *)(param_1 + 0xe0) = iVar5;
                          }
                          ExceptionList = pvStack_c;
                          return 1;
                        }
                      }
                      else {
                        iVar5 = 0;
                        if (0 < *(int *)(param_1 + 0xe0)) {
                          do {
                            FUN_00649920(&iStack_30,s_AI_Tweaks_Goal_List__d_Name_007453b0,iVar5);
                            uStack_4 = 2;
                            uVar9 = FUN_00649940();
                            iVar8 = FUN_00647e40(uVar11,uVar9);
                            uStack_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar8 == 0) {
                              iVar8 = *param_3;
                              if ((((iVar8 != 4) && (iVar8 != 7)) && (iVar8 != 6)) && (iVar8 != 0xd)
                                 ) {
                                ExceptionList = pvStack_c;
                                return 0;
                              }
                              FUN_00647d70(*(int *)(*(int *)(param_1 + 0xe4) + iVar5 * 4) + 0x1c,
                                           param_3 + 2,0x40);
                              *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar5 * 4) + 0x5b)
                                   = 0;
                              ExceptionList = pvStack_c;
                              return 1;
                            }
                            FUN_00649920(auStack_2c,s_AI_Tweaks_Goal_List__d_Looping_00745390,iVar5)
                            ;
                            uStack_4 = 3;
                            uVar9 = FUN_00649940();
                            iVar8 = FUN_00647e40(uVar11,uVar9);
                            uStack_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar8 == 0) {
                              if (*param_3 == 3) {
                                iVar5 = *(int *)(*(int *)(param_1 + 0xe4) + iVar5 * 4);
                                uVar3 = *(uint *)(iVar5 + 0x5c);
                                *(uint *)(iVar5 + 0x5c) = (param_3[0x95] ^ uVar3) & 1 ^ uVar3;
                                ExceptionList = pvStack_c;
                                return 1;
                              }
                              ExceptionList = pvStack_c;
                              return 0;
                            }
                            FUN_00649920(auStack_28,s_AI_Tweaks_Goal_List__d_Loop_Star_00745368,
                                         iVar5);
                            uStack_4 = 4;
                            uVar9 = FUN_00649940();
                            iVar8 = FUN_00647e40(uVar11,uVar9);
                            uStack_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar8 == 0) {
                              if (*param_3 == 1) {
                                *(int *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar5 * 4) + 0x60) =
                                     param_3[0x93];
                                ExceptionList = pvStack_c;
                                return 1;
                              }
                              ExceptionList = pvStack_c;
                              return 0;
                            }
                            FUN_00649920(auStack_24,s_AI_Tweaks_Goal_List__d_Goal_Coun_00745344,
                                         iVar5);
                            uStack_4 = 5;
                            uVar9 = FUN_00649940();
                            iVar8 = FUN_00647e40(uVar11,uVar9);
                            uStack_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar8 == 0) {
                              if (*param_3 != 1) {
                                ExceptionList = pvStack_c;
                                return 0;
                              }
                              iVar8 = param_3[0x93];
                              iVar6 = *(int *)(*(int *)(param_1 + 0xe4) + iVar5 * 4);
                              iStack_30 = *(int *)(iVar6 + 8);
                              if (iStack_30 < iVar8) {
                                if (iStack_30 < iVar8) {
                                  iStack_30 = iVar8 - iStack_30;
                                  do {
                                    param_2 = (undefined4 *)operator_new(8);
                                    if (param_2 == (undefined4 *)0x0) {
                                      param_2 = (undefined4 *)0x0;
                                    }
                                    else {
                                      param_2[1] = 0;
                                      *param_2 = 4;
                                    }
                                    iVar8 = *(int *)(*(int *)(param_1 + 0xe4) + iVar5 * 4);
                                    iVar6 = *(int *)(iVar8 + 8);
                                    if (*(int *)(iVar8 + 0x10) < iVar6 + 1) {
                                      if (*(int *)(iVar8 + 0x18) == 0) {
                                        iVar10 = *(int *)(iVar8 + 0x10) / 2;
                                        iVar12 = 1;
                                        if (0 < iVar10) {
                                          iVar12 = iVar10;
                                        }
                                        if (iVar12 + iVar6 < 1) {
                                          param_3 = (int *)0x1;
                                        }
                                        else {
                                          if (iVar10 < 1) {
                                            iVar10 = 1;
                                          }
                                          param_3 = (int *)(iVar6 + iVar10);
                                        }
                                      }
                                      else {
                                        param_3 = (int *)(*(int *)(iVar8 + 0x18) + iVar6);
                                      }
                                      pvVar7 = operator_new((int)param_3 * 4);
                                      iVar6 = 0;
                                      if (0 < *(int *)(iVar8 + 8)) {
                                        do {
                                          *(undefined4 *)((int)pvVar7 + iVar6 * 4) =
                                               *(undefined4 *)(*(int *)(iVar8 + 0xc) + iVar6 * 4);
                                          iVar6 = iVar6 + 1;
                                        } while (iVar6 < *(int *)(iVar8 + 8));
                                      }
                                      FUN_006bf840(*(undefined4 *)(iVar8 + 0xc));
                                      *(void **)(iVar8 + 0xc) = pvVar7;
                                      *(int **)(iVar8 + 0x10) = param_3;
                                    }
                                    *(undefined4 **)
                                     (*(int *)(iVar8 + 0xc) + *(int *)(iVar8 + 8) * 4) = param_2;
                                    iStack_30 = iStack_30 + -1;
                                    *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
                                  } while (iStack_30 != 0);
                                  ExceptionList = pvStack_c;
                                  return 1;
                                }
                              }
                              else if (iVar8 < iStack_30) {
                                iVar5 = *(int *)(iVar6 + 0x10);
                                if (*(int *)(iVar6 + 0x10) < iVar8) {
                                  iVar5 = iVar8;
                                }
                                FUN_005a2a20(iVar5);
                                *(int *)(iVar6 + 8) = iVar8;
                              }
                              ExceptionList = pvStack_c;
                              return 1;
                            }
                            FUN_00649920(auStack_20,s_AI_Tweaks_Goal_List__d_Collision_00745320,
                                         iVar5);
                            uStack_4 = 6;
                            uVar9 = FUN_00649940();
                            iVar8 = FUN_00647e40(uVar11,uVar9);
                            uStack_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar8 == 0) {
                              if (*param_3 == 3) {
                                uVar3 = param_3[0x95];
                                iVar8 = *(int *)(*(int *)(param_1 + 0xe4) + iVar5 * 4);
                                uVar2 = *(uint *)(iVar8 + 0x5c);
                                *(uint *)(iVar8 + 0x5c) = (uVar3 * 2 ^ uVar2) & 2 ^ uVar2;
                                iVar8 = *(int *)(*(int *)(param_1 + 0xe4) + iVar5 * 4);
                                iVar6 = 0;
                                if (0 < *(int *)(iVar8 + 8)) {
                                  do {
                                    iVar8 = *(int *)(*(int *)(*(int *)(iVar8 + 0xc) + iVar6 * 4) + 4
                                                    );
                                    if (iVar8 != 0) {
                                      *(uint *)(iVar8 + 4) =
                                           (*(uint *)(iVar8 + 4) ^ uVar3) & 1 ^ *(uint *)(iVar8 + 4)
                                      ;
                                    }
                                    iVar8 = *(int *)(*(int *)(param_1 + 0xe4) + iVar5 * 4);
                                    iVar6 = iVar6 + 1;
                                  } while (iVar6 < *(int *)(iVar8 + 8));
                                }
                                ExceptionList = pvStack_c;
                                return 1;
                              }
                              ExceptionList = pvStack_c;
                              return 0;
                            }
                            FUN_00649920(auStack_1c,s_AI_Tweaks_Goal_List__d_Must_Comp_007452f8,
                                         iVar5);
                            uStack_4 = 7;
                            uVar9 = FUN_00649940();
                            iVar8 = FUN_00647e40(uVar11,uVar9);
                            uStack_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar8 == 0) {
                              if (*param_3 == 3) {
                                iVar5 = *(int *)(*(int *)(param_1 + 0xe4) + iVar5 * 4);
                                uVar3 = *(uint *)(iVar5 + 0x5c);
                                *(uint *)(iVar5 + 0x5c) = (param_3[0x95] << 2 ^ uVar3) & 4 ^ uVar3;
                                ExceptionList = pvStack_c;
                                return 1;
                              }
                              ExceptionList = pvStack_c;
                              return 0;
                            }
                            FUN_00649920(auStack_18,s_AI_Tweaks_Goal_List__d_Restart_F_007452c8,
                                         iVar5);
                            uStack_4 = 8;
                            uVar9 = FUN_00649940();
                            iVar8 = FUN_00647e40(uVar11,uVar9);
                            uStack_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar8 == 0) {
                              if (*param_3 == 3) {
                                iVar5 = *(int *)(*(int *)(param_1 + 0xe4) + iVar5 * 4);
                                uVar3 = *(uint *)(iVar5 + 0x5c);
                                *(uint *)(iVar5 + 0x5c) = (param_3[0x95] << 3 ^ uVar3) & 8 ^ uVar3;
                                ExceptionList = pvStack_c;
                                return 1;
                              }
                              ExceptionList = pvStack_c;
                              return 0;
                            }
                            param_2 = (undefined4 *)0x0;
                            if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar5 * 4) + 8)) {
                              do {
                                FUN_00649920(auStack_14,s_AI_Tweaks_Goal_List__d_Goal__d_G_0074529c,
                                             iVar5,param_2);
                                uStack_4 = 9;
                                uVar9 = FUN_00649940();
                                iVar8 = FUN_00647e40(uVar11,uVar9);
                                uStack_4 = 0xffffffff;
                                FUN_00649950();
                                if (iVar8 == 0) {
                                  if ((*param_3 != 1) && (*param_3 != 0xc)) {
                                    ExceptionList = pvStack_c;
                                    return 0;
                                  }
                                  param_3 = (int *)param_3[0x93];
                                  iVar8 = (int)param_2 * 4;
                                  piVar1 = *(int **)(iVar8 + *(int *)(*(int *)(*(int *)(param_1 +
                                                                                       0xe4) +
                                                                              iVar5 * 4) + 0xc));
                                  if ((int *)*piVar1 != param_3) {
                                    puVar4 = (undefined4 *)piVar1[1];
                                    if (puVar4 != (undefined4 *)0x0) {
                                      (**(code **)*puVar4)(1);
                                    }
                                    if (3 < (int)param_3) {
                                      param_3 = (int *)0x3;
                                    }
                                    iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar5 * 4)
                                                    + 0xc);
                                    uVar11 = FUN_005afb00(param_3);
                                    *(undefined4 *)(*(int *)(iVar6 + iVar8) + 4) = uVar11;
                                    **(int **)(iVar8 + *(int *)(*(int *)(*(int *)(param_1 + 0xe4) +
                                                                        iVar5 * 4) + 0xc)) =
                                         (int)param_3;
                                    iVar5 = *(int *)(*(int *)(param_1 + 0xe4) + iVar5 * 4);
                                    iVar8 = *(int *)(*(int *)(*(int *)(iVar5 + 0xc) + iVar8) + 4);
                                    if (iVar8 != 0) {
                                      *(uint *)(iVar8 + 4) =
                                           ((*(int *)(iVar5 + 0x5c) << 0x1e) >> 0x1f ^
                                           *(uint *)(iVar8 + 4)) & 1 ^ *(uint *)(iVar8 + 4);
                                    }
                                  }
                                  ExceptionList = pvStack_c;
                                  return 1;
                                }
                                piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 +
                                                                                      0xe4) +
                                                                             iVar5 * 4) + 0xc) +
                                                           (int)param_2 * 4) + 4);
                                if ((piVar1 != (int *)0x0) &&
                                   (iVar8 = (**(code **)(*piVar1 + 8))(uVar11,param_3,iVar5,param_2)
                                   , iVar8 != 0)) {
                                  ExceptionList = pvStack_c;
                                  return 1;
                                }
                                param_2 = (undefined4 *)((int)param_2 + 1);
                              } while ((int)param_2 <
                                       *(int *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar5 * 4) + 8))
                              ;
                            }
                            iVar5 = iVar5 + 1;
                          } while (iVar5 < *(int *)(param_1 + 0xe0));
                        }
                        iVar5 = FUN_00647e40(uVar11,s_AI_Tweaks_Goal_ListSet_Count_0074527c);
                        if (iVar5 == 0) {
                          if (*param_3 == 1) {
                            iVar5 = param_3[0x93];
                            iVar8 = *(int *)(param_1 + 0xfc);
                            if (iVar8 < iVar5) {
                              if (iVar8 < iVar5) {
                                param_2 = (undefined4 *)(iVar5 - iVar8);
                                do {
                                  param_3 = (int *)operator_new(0x5c);
                                  if (param_3 == (undefined4 *)0x0) {
                                    param_3 = (undefined4 *)0x0;
                                  }
                                  else {
                                    param_3[3] = 0;
                                    param_3[2] = 0;
                                    param_3[4] = 0;
                                    param_3[6] = 0;
                                    param_3[5] = 0;
                                    *param_3 = 0;
                                    param_3[1] = 0;
                                    uStack_4 = 0xb;
                                    FUN_00647d10(param_3 + 7,s_Enter_List_Name_007450d0);
                                  }
                                  iVar5 = *(int *)(param_1 + 0xfc);
                                  uStack_4 = 0xffffffff;
                                  if (*(int *)(param_1 + 0x104) < iVar5 + 1) {
                                    if (*(int *)(param_1 + 0x10c) == 0) {
                                      iVar6 = *(int *)(param_1 + 0x104) / 2;
                                      iVar8 = 1;
                                      if (0 < iVar6) {
                                        iVar8 = iVar6;
                                      }
                                      if (iVar5 + iVar8 < 1) {
                                        iVar5 = 1;
                                      }
                                      else {
                                        if (iVar6 < 1) {
                                          iVar6 = 1;
                                        }
                                        iVar5 = iVar5 + iVar6;
                                      }
                                    }
                                    else {
                                      iVar5 = iVar5 + *(int *)(param_1 + 0x10c);
                                    }
                                    pvVar7 = operator_new(iVar5 * 4);
                                    iVar8 = 0;
                                    if (0 < *(int *)(param_1 + 0xfc)) {
                                      do {
                                        *(undefined4 *)((int)pvVar7 + iVar8 * 4) =
                                             *(undefined4 *)(*(int *)(param_1 + 0x100) + iVar8 * 4);
                                        iVar8 = iVar8 + 1;
                                      } while (iVar8 < *(int *)(param_1 + 0xfc));
                                    }
                                    FUN_006bf840(*(undefined4 *)(param_1 + 0x100));
                                    *(void **)(param_1 + 0x100) = pvVar7;
                                    *(int *)(param_1 + 0x104) = iVar5;
                                  }
                                  *(int **)(*(int *)(param_1 + 0x100) + *(int *)(param_1 + 0xfc) * 4
                                           ) = param_3;
                                  param_2 = (undefined4 *)((int)param_2 + -1);
                                  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
                                } while (param_2 != (undefined4 *)0x0);
                                ExceptionList = pvStack_c;
                                return 1;
                              }
                            }
                            else if (iVar5 < iVar8) {
                              iVar8 = *(int *)(param_1 + 0x104);
                              iVar6 = iVar5;
                              if (iVar5 <= iVar8) {
                                iVar6 = iVar8;
                              }
                              if (iVar6 != iVar8) {
                                pvVar7 = operator_new(iVar6 * 4);
                                iVar8 = 0;
                                if (0 < *(int *)(param_1 + 0xfc)) {
                                  do {
                                    *(undefined4 *)((int)pvVar7 + iVar8 * 4) =
                                         *(undefined4 *)(*(int *)(param_1 + 0x100) + iVar8 * 4);
                                    iVar8 = iVar8 + 1;
                                  } while (iVar8 < *(int *)(param_1 + 0xfc));
                                }
                                FUN_006bf840(*(undefined4 *)(param_1 + 0x100));
                                *(void **)(param_1 + 0x100) = pvVar7;
                                *(int *)(param_1 + 0x104) = iVar6;
                              }
                              *(int *)(param_1 + 0xfc) = iVar5;
                            }
                            ExceptionList = pvStack_c;
                            return 1;
                          }
                        }
                        else {
                          param_2 = (undefined4 *)0x0;
                          if (0 < *(int *)(param_1 + 0xfc)) {
                            do {
                              FUN_00649920(auStack_14,s_AI_Tweaks_Goal_ListSet__d_Name_0074525c,
                                           param_2);
                              uStack_4 = 0xc;
                              uVar9 = FUN_00649940();
                              iVar5 = FUN_00647e40(uVar11,uVar9);
                              uStack_4 = 0xffffffff;
                              FUN_00649950();
                              if (iVar5 == 0) {
                                iVar5 = *param_3;
                                if ((((iVar5 != 4) && (iVar5 != 7)) && (iVar5 != 6)) &&
                                   (iVar5 != 0xd)) {
                                  ExceptionList = pvStack_c;
                                  return 0;
                                }
                                FUN_00647d70(*(int *)(*(int *)(param_1 + 0x100) + (int)param_2 * 4)
                                             + 0x1c,param_3 + 2,0x40);
                                *(undefined1 *)
                                 (*(int *)(*(int *)(param_1 + 0x100) + (int)param_2 * 4) + 0x5b) = 0
                                ;
                                ExceptionList = pvStack_c;
                                return 1;
                              }
                              FUN_00649920(auStack_18,s_AI_Tweaks_Goal_ListSet__d_GoalLi_00745230,
                                           param_2);
                              uStack_4 = 0xd;
                              uVar9 = FUN_00649940();
                              iVar5 = FUN_00647e40(uVar11,uVar9);
                              uStack_4 = 0xffffffff;
                              FUN_00649950();
                              if (iVar5 == 0) {
                                if (*param_3 != 1) {
                                  ExceptionList = pvStack_c;
                                  return 0;
                                }
                                iVar5 = param_3[0x93];
                                iVar8 = *(int *)(*(int *)(param_1 + 0x100) + (int)param_2 * 4);
                                iStack_30 = *(int *)(iVar8 + 8);
                                if (iStack_30 < iVar5) {
                                  if (iStack_30 < iVar5) {
                                    iStack_30 = iVar5 - iStack_30;
                                    do {
                                      param_3 = (int *)operator_new(0x30);
                                      uStack_4 = 0xe;
                                      if (param_3 == (undefined4 *)0x0) {
                                        param_3 = (undefined4 *)0x0;
                                      }
                                      else {
                                        FUN_006499d0();
                                        uStack_4 = CONCAT31(uStack_4._1_3_,0xf);
                                        *param_3 = 100;
                                        FUN_0064a2e0(&DAT_00720670);
                                      }
                                      iVar8 = *(int *)(*(int *)(param_1 + 0x100) + (int)param_2 * 4)
                                      ;
                                      iVar5 = *(int *)(iVar8 + 8);
                                      uStack_4 = 0xffffffff;
                                      if (*(int *)(iVar8 + 0x10) < iVar5 + 1) {
                                        if (*(int *)(iVar8 + 0x18) == 0) {
                                          iVar12 = *(int *)(iVar8 + 0x10) / 2;
                                          iVar6 = 1;
                                          if (0 < iVar12) {
                                            iVar6 = iVar12;
                                          }
                                          if (iVar6 + iVar5 < 1) {
                                            iVar5 = 1;
                                          }
                                          else {
                                            if (iVar12 < 1) {
                                              iVar12 = 1;
                                            }
                                            iVar5 = iVar5 + iVar12;
                                          }
                                        }
                                        else {
                                          iVar5 = *(int *)(iVar8 + 0x18) + iVar5;
                                        }
                                        pvVar7 = operator_new(iVar5 * 4);
                                        iVar6 = 0;
                                        if (0 < *(int *)(iVar8 + 8)) {
                                          do {
                                            *(undefined4 *)((int)pvVar7 + iVar6 * 4) =
                                                 *(undefined4 *)(*(int *)(iVar8 + 0xc) + iVar6 * 4);
                                            iVar6 = iVar6 + 1;
                                          } while (iVar6 < *(int *)(iVar8 + 8));
                                        }
                                        FUN_006bf840(*(undefined4 *)(iVar8 + 0xc));
                                        *(int *)(iVar8 + 0x10) = iVar5;
                                        *(void **)(iVar8 + 0xc) = pvVar7;
                                      }
                                      *(int **)(*(int *)(iVar8 + 0xc) + *(int *)(iVar8 + 8) * 4) =
                                           param_3;
                                      iStack_30 = iStack_30 + -1;
                                      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
                                    } while (iStack_30 != 0);
                                    ExceptionList = pvStack_c;
                                    return 1;
                                  }
                                }
                                else if (iVar5 < iStack_30) {
                                  iVar6 = *(int *)(iVar8 + 0x10);
                                  iVar12 = iVar5;
                                  if (iVar5 <= iVar6) {
                                    iVar12 = iVar6;
                                  }
                                  if (iVar12 != iVar6) {
                                    pvVar7 = operator_new(iVar12 * 4);
                                    iVar6 = 0;
                                    if (0 < *(int *)(iVar8 + 8)) {
                                      do {
                                        *(undefined4 *)((int)pvVar7 + iVar6 * 4) =
                                             *(undefined4 *)(*(int *)(iVar8 + 0xc) + iVar6 * 4);
                                        iVar6 = iVar6 + 1;
                                      } while (iVar6 < *(int *)(iVar8 + 8));
                                    }
                                    FUN_006bf840(*(undefined4 *)(iVar8 + 0xc));
                                    *(void **)(iVar8 + 0xc) = pvVar7;
                                    *(int *)(iVar8 + 0x10) = iVar12;
                                  }
                                  *(int *)(iVar8 + 8) = iVar5;
                                }
                                ExceptionList = pvStack_c;
                                return 1;
                              }
                              iVar5 = 0;
                              if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x100) + (int)param_2 * 4
                                                       ) + 8)) {
                                do {
                                  FUN_00649920(auStack_1c,
                                               s_AI_Tweaks_Goal_ListSet__d_GoalLi_00745204,param_2,
                                               iVar5);
                                  uStack_4 = 0x10;
                                  uVar9 = FUN_00649940();
                                  iVar8 = FUN_00647e40(uVar11,uVar9);
                                  uStack_4 = 0xffffffff;
                                  FUN_00649950();
                                  if (iVar8 == 0) {
                                    if ((*param_3 != 0xd) && (*param_3 != 4)) {
                                      ExceptionList = pvStack_c;
                                      return 0;
                                    }
                                    FUN_0064a2e0(param_3 + 2);
                                    ExceptionList = pvStack_c;
                                    return 1;
                                  }
                                  FUN_00649920(auStack_10,
                                               s_AI_Tweaks_Goal_ListSet__d_GoalLi_007451d4,param_2,
                                               iVar5);
                                  uStack_4 = 0x11;
                                  uVar9 = FUN_00649940();
                                  iVar8 = FUN_00647e40(uVar11,uVar9);
                                  uStack_4 = 0xffffffff;
                                  FUN_00649950();
                                  if (iVar8 == 0) {
                                    if (*param_3 != 1) {
                                      ExceptionList = pvStack_c;
                                      return 0;
                                    }
                                    **(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x100) +
                                                                (int)param_2 * 4) + 0xc) + iVar5 * 4
                                              ) = param_3[0x93];
                                    ExceptionList = pvStack_c;
                                    return 1;
                                  }
                                  iVar5 = iVar5 + 1;
                                } while (iVar5 < *(int *)(*(int *)(*(int *)(param_1 + 0x100) +
                                                                  (int)param_2 * 4) + 8));
                              }
                              param_2 = (undefined4 *)((int)param_2 + 1);
                            } while ((int)param_2 < *(int *)(param_1 + 0xfc));
                          }
                          iVar5 = 0;
                          if (0 < *(int *)(param_1 + 0xa8)) {
                            do {
                              iVar8 = (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + iVar5 * 4)
                                                  + 0x70))(uVar11,param_3);
                              if (iVar8 != 0) {
                                ExceptionList = pvStack_c;
                                return 1;
                              }
                              iVar5 = iVar5 + 1;
                            } while (iVar5 < *(int *)(param_1 + 0xa8));
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
  return 0;
}

