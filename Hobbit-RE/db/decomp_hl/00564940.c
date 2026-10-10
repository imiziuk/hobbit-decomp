
undefined4 __thiscall FUN_00564940(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar7 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dafd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_00647e40(param_2,s_AIManager_Filter_Type_0073f3f0);
  if (iVar4 == 0) {
    if ((*param_3 == 1) || (*param_3 == 0xc)) {
      *(int *)(param_1 + 0xb0) = param_3[0x93];
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      ExceptionList = local_c;
      return 1;
    }
  }
  else {
    iVar4 = FUN_00647e40(uVar7,s_AIManager_Filter_Object_0073f368);
    piVar12 = param_3;
    if ((iVar4 == 0) && ((*param_3 == 0xf || (*param_3 == 0x10)))) {
      *(int *)(param_1 + 0xb8) = param_3[0x90];
      *(int *)(param_1 + 0xbc) = param_3[0x91];
    }
    iVar4 = FUN_00647e40(uVar7,s_AIManager_Filter_Trigger_0073f3d4);
    if ((iVar4 == 0) && (((iVar4 = *piVar12, iVar4 == 0xd || (iVar4 == 4)) || (iVar4 == 0xe)))) {
      FUN_0064a2e0(piVar12 + 2);
    }
    iVar4 = FUN_00647e40(uVar7,s_AIManager_Filter_Action_0073f3bc);
    if ((iVar4 == 0) && (((iVar4 = *piVar12, iVar4 == 0xd || (iVar4 == 4)) || (iVar4 == 0xe)))) {
      FUN_0064a2e0(piVar12 + 2);
    }
    iVar4 = FUN_00647e40(uVar7,s_AIManager_Filter_QuestLog_0073f3a0);
    if ((iVar4 == 0) && (((iVar4 = *piVar12, iVar4 == 0xd || (iVar4 == 4)) || (iVar4 == 0xe)))) {
      FUN_0064a2e0(piVar12 + 2);
    }
    iVar4 = FUN_00647e40(uVar7,s_AIManager_Filter_InfoOverlay_0073f380);
    if ((iVar4 == 0) && (((iVar4 = *piVar12, iVar4 == 0xd || (iVar4 == 4)) || (iVar4 == 0xe)))) {
      FUN_0064a2e0(piVar12 + 2);
    }
    iVar4 = FUN_00647ed0(uVar7,s_AIManager_Triggers_TriggerCount_0073f334);
    if (iVar4 == 0) {
      if (*piVar12 == 1) {
        iVar4 = piVar12[0x93];
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        FUN_00562380(iVar4);
        ExceptionList = local_c;
        return 1;
      }
    }
    else {
      iVar4 = FUN_00647f20(uVar7,s_AIManager_Triggers_Trigger_0073f508);
      if (((iVar4 != 0) && (iVar4 = FUN_005648f0(uVar7), -1 < iVar4)) &&
         (iVar4 < *(int *)(param_1 + 0x10))) {
        FUN_00649920(&param_2,s_AIManager_Triggers_Trigger__d_Na_0073f2f0,iVar4);
        local_4 = 0;
        uVar5 = FUN_00649940();
        iVar6 = FUN_00647ed0(uVar7,uVar5);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar6 == 0) {
          if (*piVar12 != 4) {
            ExceptionList = local_c;
            return 0;
          }
          FUN_0064a2e0(piVar12 + 2);
          ExceptionList = local_c;
          return 1;
        }
        FUN_00649920(&param_2,s_AIManager_Triggers_Trigger__d_Na_0073f2f0,iVar4);
        local_4 = 1;
        uVar5 = FUN_00649940();
        iVar6 = FUN_00647ed0(uVar7,uVar5);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar6 == 0) {
          if (*piVar12 != 4) {
            ExceptionList = local_c;
            return 0;
          }
          FUN_0064a2e0(piVar12 + 2);
          ExceptionList = local_c;
          return 1;
        }
        FUN_00649920(&param_2,s_AIManager_Triggers_Trigger__d_Ty_0073f2cc,iVar4);
        local_4 = 2;
        uVar5 = FUN_00649940();
        iVar6 = FUN_00647ed0(uVar7,uVar5);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar6 == 0) {
          if ((*piVar12 != 0xc) && (*piVar12 != 1)) {
            ExceptionList = local_c;
            return 0;
          }
          FUN_005605e0();
          iVar6 = piVar12[0x93];
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          if (DAT_00771fac <= iVar6) {
            iVar6 = DAT_00771fac + -1;
          }
          param_3 = (int *)(iVar4 * 4);
          iVar11 = *(int *)((int)param_3 + *(int *)(param_1 + 0x14));
          if (*(int *)(iVar11 + 0x58) != iVar6) {
            puVar1 = *(undefined4 **)(iVar11 + 0x5c);
            if (puVar1 != (undefined4 *)0x0) {
              (**(code **)*puVar1)(1);
            }
            piVar12 = (int *)(*(int *)(param_1 + 0x14) + (int)param_3);
            uVar7 = FUN_0055e1c0(iVar6,iVar4);
            *(undefined4 *)(*piVar12 + 0x5c) = uVar7;
            *(int *)(*(int *)((int)param_3 + *(int *)(param_1 + 0x14)) + 0x58) = iVar6;
          }
          ExceptionList = local_c;
          return 1;
        }
        piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x14) + iVar4 * 4) + 0x5c);
        if ((piVar2 != (int *)0x0) &&
           (iVar4 = (**(code **)(*piVar2 + 0x10))(uVar7,piVar12), iVar4 != 0)) {
          ExceptionList = local_c;
          return 1;
        }
      }
      iVar4 = FUN_00647ed0(uVar7,s_AIManager_Actions_ActionCount_0073f298);
      if (iVar4 == 0) {
        if (*piVar12 == 1) {
          iVar4 = piVar12[0x93];
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          FUN_00562540(iVar4);
          ExceptionList = local_c;
          return 1;
        }
      }
      else {
        iVar4 = FUN_00647f20(uVar7,s_AIManager_Actions_Action_0073f4ec);
        if (((iVar4 != 0) && (iVar4 = FUN_005648f0(uVar7), -1 < iVar4)) &&
           (iVar4 < *(int *)(param_1 + 0x2c))) {
          FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Name_0073f258,iVar4);
          local_4 = 3;
          uVar5 = FUN_00649940();
          iVar6 = FUN_00647ed0(uVar7,uVar5);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar6 == 0) {
            if (*piVar12 != 4) {
              ExceptionList = local_c;
              return 0;
            }
            FUN_0064a2e0(piVar12 + 2);
            ExceptionList = local_c;
            return 1;
          }
          FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Type_0073f234,iVar4);
          local_4 = 4;
          uVar5 = FUN_00649940();
          iVar6 = FUN_00647ed0(uVar7,uVar5);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar6 == 0) {
            if ((*piVar12 != 1) && (*piVar12 != 0xc)) {
              ExceptionList = local_c;
              return 0;
            }
            iVar6 = piVar12[0x93];
            FUN_0055f050();
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            if (DAT_007721ec <= iVar6) {
              iVar6 = DAT_007721ec + -1;
            }
            param_3 = (int *)(iVar4 * 4);
            piVar12 = *(int **)((int)param_3 + *(int *)(param_1 + 0x30));
            if (*piVar12 != iVar6) {
              puVar1 = (undefined4 *)piVar12[0x17];
              if (puVar1 != (undefined4 *)0x0) {
                (**(code **)*puVar1)(1);
              }
              piVar12 = (int *)(*(int *)(param_1 + 0x30) + (int)param_3);
              uVar7 = FUN_0055d520(iVar6,iVar4);
              *(undefined4 *)(*piVar12 + 0x5c) = uVar7;
              **(int **)((int)param_3 + *(int *)(param_1 + 0x30)) = iVar6;
            }
            ExceptionList = local_c;
            return 1;
          }
          piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x30) + iVar4 * 4) + 0x5c);
          if ((piVar2 != (int *)0x0) &&
             (iVar4 = (**(code **)(*piVar2 + 0xc))(uVar7,piVar12), iVar4 != 0)) {
            ExceptionList = local_c;
            return 1;
          }
        }
        iVar4 = FUN_00647ed0(uVar7,s_AIManager_Links_LinkCount_0073f208);
        if (iVar4 == 0) {
          if (*piVar12 == 1) {
            iVar4 = piVar12[0x93];
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            FUN_00562700(iVar4);
            ExceptionList = local_c;
            return 1;
          }
        }
        else {
          iVar4 = FUN_00647f20(uVar7,s_AIManager_Links_Link_0073f4d4);
          if (((iVar4 != 0) && (iVar4 = FUN_005648f0(uVar7), -1 < iVar4)) &&
             (iVar4 < *(int *)(param_1 + 0x48))) {
            FUN_00649920(&param_2,s_AIManager_Links_Link__d_Test_thi_0073f1c8,iVar4);
            local_4 = 5;
            uVar5 = FUN_00649940();
            iVar6 = FUN_00647e40(uVar7,uVar5);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar6 == 0) {
              if (*piVar12 == 3) {
                iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4);
                uVar3 = *(uint *)(iVar4 + 4);
                *(uint *)(iVar4 + 4) = (piVar12[0x95] << 1 ^ uVar3) & 2 ^ uVar3;
                ExceptionList = local_c;
                return 1;
              }
            }
            else {
              FUN_00649920(&param_2,s_AIManager_Links_Link__d_Repeats_0073f1a8,iVar4);
              local_4 = 6;
              uVar5 = FUN_00649940();
              iVar6 = FUN_00647e40(uVar7,uVar5);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar6 == 0) {
                if (*piVar12 == 3) {
                  iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4);
                  uVar3 = *(uint *)(iVar4 + 4);
                  *(uint *)(iVar4 + 4) = (piVar12[0x95] ^ uVar3) & 1 ^ uVar3;
                  ExceptionList = local_c;
                  return 1;
                }
              }
              else {
                FUN_00649920(&param_2,s_AIManager_Links_Link__d_ActiveSt_0073f45c,iVar4);
                local_4 = 7;
                uVar5 = FUN_00649940();
                iVar6 = FUN_00647e40(uVar7,uVar5);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar6 == 0) {
                  if ((*piVar12 == 1) || (*piVar12 == 0xc)) {
                    *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) + 8) = piVar12[0x93];
                    ExceptionList = local_c;
                    return 1;
                  }
                }
                else {
                  FUN_00649920(&param_2,s_AIManager_Links_Link__d_Triggers_0073f17c,iVar4);
                  local_4 = 8;
                  uVar5 = FUN_00649940();
                  iVar6 = FUN_00647e40(uVar7,uVar5);
                  local_4 = 0xffffffff;
                  FUN_00649950();
                  if (iVar6 == 0) {
                    if ((*piVar12 == 1) || (*piVar12 == 0xc)) {
                      **(int **)(*(int *)(param_1 + 0x4c) + iVar4 * 4) = piVar12[0x93];
                      ExceptionList = local_c;
                      return 1;
                    }
                  }
                  else {
                    FUN_00649920(&param_2,s_AIManager_Links_Link__d_TriggerC_0073f154,iVar4);
                    local_4 = 9;
                    uVar5 = FUN_00649940();
                    iVar6 = FUN_00647ed0(uVar7,uVar5);
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar6 == 0) {
                      if (*piVar12 == 1) {
                        iVar6 = *(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4);
                        iVar11 = piVar12[0x93];
                        iVar10 = *(int *)(iVar6 + 0x70);
                        if (iVar10 < iVar11) {
                          if (iVar10 < iVar11) {
                            param_3 = (int *)(iVar11 - iVar10);
                            do {
                              iVar11 = *(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4);
                              iVar6 = *(int *)(iVar11 + 0x70);
                              if (*(int *)(iVar11 + 0x78) < iVar6 + 1) {
                                if (*(int *)(iVar11 + 0x80) == 0) {
                                  iVar8 = *(int *)(iVar11 + 0x78) / 2;
                                  iVar10 = 1;
                                  if (0 < iVar8) {
                                    iVar10 = iVar8;
                                  }
                                  if (iVar10 + iVar6 < 1) {
                                    iVar6 = 1;
                                  }
                                  else {
                                    if (iVar8 < 1) {
                                      iVar8 = 1;
                                    }
                                    iVar6 = iVar6 + iVar8;
                                  }
                                }
                                else {
                                  iVar6 = *(int *)(iVar11 + 0x80) + iVar6;
                                }
                                pvVar9 = operator_new(iVar6 * 4);
                                iVar10 = 0;
                                if (0 < *(int *)(iVar11 + 0x70)) {
                                  do {
                                    *(undefined4 *)((int)pvVar9 + iVar10 * 4) =
                                         *(undefined4 *)(*(int *)(iVar11 + 0x74) + iVar10 * 4);
                                    iVar10 = iVar10 + 1;
                                  } while (iVar10 < *(int *)(iVar11 + 0x70));
                                }
                                FUN_006bf840(*(undefined4 *)(iVar11 + 0x74));
                                *(void **)(iVar11 + 0x74) = pvVar9;
                                *(int *)(iVar11 + 0x78) = iVar6;
                              }
                              *(undefined4 *)(*(int *)(iVar11 + 0x74) + *(int *)(iVar11 + 0x70) * 4)
                                   = 0;
                              param_3 = (int *)((int)param_3 + -1);
                              *(int *)(iVar11 + 0x70) = *(int *)(iVar11 + 0x70) + 1;
                            } while (param_3 != (int *)0x0);
                            ExceptionList = local_c;
                            return 1;
                          }
                        }
                        else if (iVar11 < iVar10) {
                          iVar4 = *(int *)(iVar6 + 0x78);
                          iVar10 = iVar11;
                          if (iVar11 <= iVar4) {
                            iVar10 = iVar4;
                          }
                          if (iVar10 != iVar4) {
                            pvVar9 = operator_new(iVar10 * 4);
                            iVar4 = 0;
                            if (0 < *(int *)(iVar6 + 0x70)) {
                              do {
                                *(undefined4 *)((int)pvVar9 + iVar4 * 4) =
                                     *(undefined4 *)(*(int *)(iVar6 + 0x74) + iVar4 * 4);
                                iVar4 = iVar4 + 1;
                              } while (iVar4 < *(int *)(iVar6 + 0x70));
                            }
                            FUN_006bf840(*(undefined4 *)(iVar6 + 0x74));
                            *(void **)(iVar6 + 0x74) = pvVar9;
                            *(int *)(iVar6 + 0x78) = iVar10;
                          }
                          *(int *)(iVar6 + 0x70) = iVar11;
                        }
                        ExceptionList = local_c;
                        return 1;
                      }
                    }
                    else {
                      FUN_00649920(&param_2,s_AIManager_Links_Link__d_ActionCo_0073f130,iVar4);
                      local_4 = 10;
                      uVar5 = FUN_00649940();
                      iVar6 = FUN_00647ed0(uVar7,uVar5);
                      local_4 = 0xffffffff;
                      FUN_00649950();
                      if (iVar6 == 0) {
                        if (*piVar12 == 1) {
                          iVar6 = *(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4);
                          iVar11 = piVar12[0x93];
                          iVar10 = *(int *)(iVar6 + 0x8c);
                          if (iVar10 < iVar11) {
                            if (iVar10 < iVar11) {
                              param_3 = (int *)(iVar11 - iVar10);
                              do {
                                iVar11 = *(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4);
                                iVar6 = *(int *)(iVar11 + 0x8c);
                                if (*(int *)(iVar11 + 0x94) < iVar6 + 1) {
                                  if (*(int *)(iVar11 + 0x9c) == 0) {
                                    iVar8 = *(int *)(iVar11 + 0x94) / 2;
                                    iVar10 = 1;
                                    if (0 < iVar8) {
                                      iVar10 = iVar8;
                                    }
                                    if (iVar10 + iVar6 < 1) {
                                      iVar6 = 1;
                                    }
                                    else {
                                      if (iVar8 < 1) {
                                        iVar8 = 1;
                                      }
                                      iVar6 = iVar6 + iVar8;
                                    }
                                  }
                                  else {
                                    iVar6 = *(int *)(iVar11 + 0x9c) + iVar6;
                                  }
                                  pvVar9 = operator_new(iVar6 * 4);
                                  iVar10 = 0;
                                  if (0 < *(int *)(iVar11 + 0x8c)) {
                                    do {
                                      *(undefined4 *)((int)pvVar9 + iVar10 * 4) =
                                           *(undefined4 *)(*(int *)(iVar11 + 0x90) + iVar10 * 4);
                                      iVar10 = iVar10 + 1;
                                    } while (iVar10 < *(int *)(iVar11 + 0x8c));
                                  }
                                  FUN_006bf840(*(undefined4 *)(iVar11 + 0x90));
                                  *(void **)(iVar11 + 0x90) = pvVar9;
                                  *(int *)(iVar11 + 0x94) = iVar6;
                                }
                                *(undefined4 *)
                                 (*(int *)(iVar11 + 0x90) + *(int *)(iVar11 + 0x8c) * 4) = 0;
                                param_3 = (int *)((int)param_3 + -1);
                                *(int *)(iVar11 + 0x8c) = *(int *)(iVar11 + 0x8c) + 1;
                              } while (param_3 != (int *)0x0);
                              ExceptionList = local_c;
                              return 1;
                            }
                          }
                          else if (iVar11 < iVar10) {
                            iVar4 = *(int *)(iVar6 + 0x94);
                            iVar10 = iVar11;
                            if (iVar11 <= iVar4) {
                              iVar10 = iVar4;
                            }
                            if (iVar10 != iVar4) {
                              pvVar9 = operator_new(iVar10 * 4);
                              iVar4 = 0;
                              if (0 < *(int *)(iVar6 + 0x8c)) {
                                do {
                                  *(undefined4 *)((int)pvVar9 + iVar4 * 4) =
                                       *(undefined4 *)(*(int *)(iVar6 + 0x90) + iVar4 * 4);
                                  iVar4 = iVar4 + 1;
                                } while (iVar4 < *(int *)(iVar6 + 0x8c));
                              }
                              FUN_006bf840(*(undefined4 *)(iVar6 + 0x90));
                              *(void **)(iVar6 + 0x90) = pvVar9;
                              *(int *)(iVar6 + 0x94) = iVar10;
                            }
                            *(int *)(iVar6 + 0x8c) = iVar11;
                          }
                          ExceptionList = local_c;
                          return 1;
                        }
                      }
                      else {
                        iVar6 = 0;
                        if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) + 0x70)) {
                          do {
                            FUN_00649920(&param_2,s_AIManager_Links_Link__d_Trigger_N_0073f4ac,iVar4
                                         ,iVar6);
                            local_4 = 0xb;
                            uVar5 = FUN_00649940();
                            iVar11 = FUN_00647ed0(uVar7,uVar5);
                            local_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar11 == 0) {
                              FUN_00561da0();
                              iVar11 = 0;
                              if (0 < DAT_00771fe4) {
                                param_3 = param_3 + 2;
                                iVar10 = 0;
                                while (iVar8 = FUN_00647e40(*(undefined4 *)(DAT_00771fe8 + iVar10),
                                                            param_3), iVar8 != 0) {
                                  iVar11 = iVar11 + 1;
                                  iVar10 = iVar10 + 0x2c;
                                  if (DAT_00771fe4 <= iVar11) {
                                    ExceptionList = local_c;
                                    return 1;
                                  }
                                }
                                *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) +
                                                 0x74) + iVar6 * 4) = iVar11;
                              }
                              ExceptionList = local_c;
                              return 1;
                            }
                            FUN_00649920(auStack_14,s_AIManager_Links_Link__d_Trigger_I_0073f108,
                                         iVar4,iVar6);
                            local_4 = 0xc;
                            uVar5 = FUN_00649940();
                            iVar11 = FUN_00647e40(uVar7,uVar5);
                            local_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar11 == 0) {
                              if ((*param_3 != 1) && (*param_3 != 0xc)) {
                                ExceptionList = local_c;
                                return 0;
                              }
                              *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) +
                                               0x74) + iVar6 * 4) = param_3[0x93];
                              ExceptionList = local_c;
                              return 1;
                            }
                            iVar6 = iVar6 + 1;
                          } while (iVar6 < *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) +
                                                   0x70));
                        }
                        iVar6 = 0;
                        if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) + 0x8c)) {
                          do {
                            FUN_00649920(&param_2,s_AIManager_Links_Link__d_Action_N_0073f484,iVar4,
                                         iVar6);
                            local_4 = 0xd;
                            uVar5 = FUN_00649940();
                            iVar11 = FUN_00647ed0(uVar7,uVar5);
                            local_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar11 == 0) {
                              FUN_00561a70();
                              iVar11 = 0;
                              if (0 < DAT_0077201c) {
                                param_3 = param_3 + 2;
                                iVar10 = 0;
                                while (iVar8 = FUN_00647e40(*(undefined4 *)(DAT_00772020 + iVar10),
                                                            param_3), iVar8 != 0) {
                                  iVar11 = iVar11 + 1;
                                  iVar10 = iVar10 + 0x2c;
                                  if (DAT_0077201c <= iVar11) {
                                    ExceptionList = local_c;
                                    return 1;
                                  }
                                }
                                *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) +
                                                 0x90) + iVar6 * 4) = iVar11;
                              }
                              ExceptionList = local_c;
                              return 1;
                            }
                            FUN_00649920(auStack_10,s_AIManager_Links_Link__d_Action_I_0073f0e0,
                                         iVar4,iVar6);
                            local_4 = 0xe;
                            uVar5 = FUN_00649940();
                            iVar11 = FUN_00647e40(uVar7,uVar5);
                            local_4 = 0xffffffff;
                            FUN_00649950();
                            if (iVar11 == 0) {
                              if ((*param_3 != 1) && (*param_3 != 0xc)) {
                                ExceptionList = local_c;
                                return 0;
                              }
                              *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) +
                                               0x90) + iVar6 * 4) = param_3[0x93];
                              ExceptionList = local_c;
                              return 1;
                            }
                            iVar6 = iVar6 + 1;
                          } while (iVar6 < *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) +
                                                   0x8c));
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
  ExceptionList = local_c;
  return 0;
}

