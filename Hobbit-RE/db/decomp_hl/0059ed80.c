
/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_0059ed80(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  undefined4 *local_88;
  undefined1 local_84 [4];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ddc7f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00647e40(param_2,s_ConversationMgr_Conversations_Co_007441a0);
  if (iVar2 == 0) {
    if (*param_3 != 1) {
      ExceptionList = local_c;
      return 0;
    }
    iVar2 = param_3[0x93];
    iVar6 = *(int *)(param_1 + 0x4c);
    if (iVar2 <= iVar6) {
      if (iVar2 < iVar6) {
        iVar6 = *(int *)(param_1 + 0x54);
        if (*(int *)(param_1 + 0x54) < iVar2) {
          iVar6 = iVar2;
        }
        FUN_005a2a20(iVar6);
        *(int *)(param_1 + 0x4c) = iVar2;
        ExceptionList = local_c;
        return 1;
      }
      ExceptionList = local_c;
      return 1;
    }
    if (iVar6 < iVar2) {
      local_98 = (int *)(iVar2 - iVar6);
      do {
        piVar3 = (int *)operator_new(0xa0);
        local_8c = piVar3;
        if (piVar3 == (int *)0x0) {
          local_9c = (int *)0x0;
        }
        else {
          piVar3[3] = 0;
          piVar3[2] = 0;
          piVar3[4] = 0;
          piVar3[6] = 0;
          piVar3[5] = 0;
          *piVar3 = 0;
          piVar3[1] = 0;
          local_4._0_1_ = 1;
          local_4._1_3_ = 0;
          FUN_006a1cb0();
          local_4._0_1_ = 2;
          FUN_006a1cb0();
          local_4._0_1_ = 3;
          FUN_006a1cb0();
          local_4._0_1_ = 4;
          FUN_006499d0();
          local_4 = CONCAT31(local_4._1_3_,5);
          FUN_0064a2e0(s_Enter_Conversation_s_Name_00743390);
          piVar3[0x27] = 0;
          local_9c = piVar3;
        }
        iVar2 = *(int *)(param_1 + 0x4c);
        local_4 = 0xffffffff;
        if (*(int *)(param_1 + 0x54) < iVar2 + 1) {
          if (*(int *)(param_1 + 0x5c) == 0) {
            iVar4 = *(int *)(param_1 + 0x54) / 2;
            iVar6 = 1;
            if (0 < iVar4) {
              iVar6 = iVar4;
            }
            if (iVar2 + iVar6 < 1) {
              iVar2 = 1;
            }
            else {
              if (iVar4 < 1) {
                iVar4 = 1;
              }
              iVar2 = iVar2 + iVar4;
            }
          }
          else {
            iVar2 = iVar2 + *(int *)(param_1 + 0x5c);
          }
          pvVar5 = operator_new(iVar2 * 4);
          iVar6 = 0;
          if (0 < *(int *)(param_1 + 0x4c)) {
            do {
              *(undefined4 *)((int)pvVar5 + iVar6 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar6 * 4);
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(param_1 + 0x4c));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x50));
          *(void **)(param_1 + 0x50) = pvVar5;
          *(int *)(param_1 + 0x54) = iVar2;
        }
        *(int **)(*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x4c) * 4) = local_9c;
        local_98 = (int *)((int)local_98 + -1);
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      } while (local_98 != (int *)0x0);
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 1;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    local_98 = (int *)0x0;
    do {
      FUN_00649920(&local_94,s_ConversationMgr_Conversations_Co_0074416c,iVar2);
      local_4 = 6;
      uVar7 = FUN_00649940();
      iVar6 = FUN_00647e40(param_2,uVar7);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar6 == 0) {
        iVar2 = *param_3;
        if ((((iVar2 != 4) && (iVar2 != 7)) && (iVar2 != 6)) && (iVar2 != 0xd)) {
          ExceptionList = local_c;
          return 0;
        }
        FUN_0064a2e0(param_3 + 2);
        ExceptionList = local_c;
        return 1;
      }
      FUN_00649920(&local_9c,s_ConversationMgr_Conversations_Co_00744138,iVar2);
      local_4 = 7;
      uVar7 = FUN_00649940();
      iVar6 = FUN_00647e40(param_2,uVar7);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar6 == 0) {
        if ((*param_3 != 1) && (*param_3 != 0xc)) {
          ExceptionList = local_c;
          return 0;
        }
        *(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4) + 0x9c) = param_3[0x93];
        ExceptionList = local_c;
        return 1;
      }
      FUN_00649920(local_44,s_ConversationMgr_Conversations_Co_007440fc,iVar2);
      local_4 = 8;
      uVar7 = FUN_00649940();
      iVar6 = FUN_00647e40(param_2,uVar7);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar6 == 0) {
        if (*param_3 != 1) {
          ExceptionList = local_c;
          return 0;
        }
        iVar6 = param_3[0x93];
        iVar4 = *(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4);
        iVar9 = *(int *)(iVar4 + 8);
        if (iVar9 < iVar6) {
          if (iVar9 < iVar6) {
            local_98 = (int *)(iVar6 - iVar9);
            do {
              piVar3 = (int *)operator_new(0x40);
              local_4 = 9;
              local_8c = piVar3;
              if (piVar3 == (int *)0x0) {
                local_9c = (int *)0x0;
              }
              else {
                FUN_006499d0();
                piVar3[0xc] = 0;
                piVar3[0xd] = 0;
                piVar3[0xe] = 0;
                local_9c = piVar3;
              }
              iVar4 = *(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4);
              iVar6 = *(int *)(iVar4 + 8);
              local_4 = 0xffffffff;
              if (*(int *)(iVar4 + 0x10) < iVar6 + 1) {
                if (*(int *)(iVar4 + 0x18) == 0) {
                  iVar8 = *(int *)(iVar4 + 0x10) / 2;
                  iVar9 = 1;
                  if (0 < iVar8) {
                    iVar9 = iVar8;
                  }
                  if (iVar9 + iVar6 < 1) {
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
                  iVar6 = *(int *)(iVar4 + 0x18) + iVar6;
                }
                pvVar5 = operator_new(iVar6 * 4);
                iVar9 = 0;
                if (0 < *(int *)(iVar4 + 8)) {
                  do {
                    *(undefined4 *)((int)pvVar5 + iVar9 * 4) =
                         *(undefined4 *)(*(int *)(iVar4 + 0xc) + iVar9 * 4);
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < *(int *)(iVar4 + 8));
                }
                FUN_006bf840(*(undefined4 *)(iVar4 + 0xc));
                *(int *)(iVar4 + 0x10) = iVar6;
                *(void **)(iVar4 + 0xc) = pvVar5;
              }
              *(int **)(*(int *)(iVar4 + 0xc) + *(int *)(iVar4 + 8) * 4) = local_9c;
              local_98 = (int *)((int)local_98 + -1);
              *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
            } while (local_98 != (int *)0x0);
            ExceptionList = local_c;
            return 1;
          }
          ExceptionList = local_c;
          return 1;
        }
        if (iVar6 < iVar9) {
          iVar2 = *(int *)(iVar4 + 0x10);
          if (*(int *)(iVar4 + 0x10) < iVar6) {
            iVar2 = iVar6;
          }
          FUN_005a2a20(iVar2);
          *(int *)(iVar4 + 8) = iVar6;
          ExceptionList = local_c;
          return 1;
        }
        ExceptionList = local_c;
        return 1;
      }
      iVar6 = 0;
      if (0 < *(int *)(*(int *)((int)local_98 + *(int *)(param_1 + 0x50)) + 8)) {
        do {
          FUN_00649920(local_60,s_ConversationMgr_Conversations_Co_007440bc,iVar2,iVar6);
          local_4 = 10;
          uVar7 = FUN_00649940();
          iVar4 = FUN_00647e40(param_2,uVar7);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar4 == 0) {
            if ((*param_3 != 0xc) && (*param_3 != 1)) {
              ExceptionList = local_c;
              return 0;
            }
            if (DAT_007986ac == 0) {
              FUN_0059d1f0();
            }
            FUN_0064a320(param_3[0x93] * 0x2c + DAT_00798594);
            ExceptionList = local_c;
            return 1;
          }
          FUN_00649920(local_58,s_ConversationMgr_Conversations_Co_00744078,iVar2,iVar6);
          local_4 = 0xb;
          uVar7 = FUN_00649940();
          iVar4 = FUN_00647e40(param_2,uVar7);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar4 == 0) {
            if ((*param_3 != 0xd) && (*param_3 != 4)) {
              ExceptionList = local_c;
              return 0;
            }
            FUN_0064a2e0(param_3 + 2);
            ExceptionList = local_c;
            return 1;
          }
          FUN_00649920(local_50,s_ConversationMgr_Conversations_Co_00744038,iVar2,iVar6);
          local_4 = 0xc;
          uVar7 = FUN_00649940();
          iVar4 = FUN_00647e40(param_2,uVar7);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar4 == 0) {
            if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
              ExceptionList = local_c;
              return 0;
            }
            iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4) + 0xc) +
                            iVar6 * 4);
            *(int *)(iVar2 + 0x30) = param_3[0x90];
            *(int *)(iVar2 + 0x34) = param_3[0x91];
            ExceptionList = local_c;
            return 1;
          }
          FUN_00649920(local_48,s_ConversationMgr_Conversations_Co_00743ff8,iVar2,iVar6);
          local_4 = 0xd;
          uVar7 = FUN_00649940();
          iVar4 = FUN_00647e40(param_2,uVar7);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar4 == 0) {
            if (*param_3 == 2) {
              *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4) + 0xc) +
                               iVar6 * 4) + 0x38) = param_3[0x94];
              ExceptionList = local_c;
              return 1;
            }
            ExceptionList = local_c;
            return 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(*(int *)((int)local_98 + *(int *)(param_1 + 0x50)) + 8));
      }
      if (*(int *)(*(int *)((int)local_98 + *(int *)(param_1 + 0x50)) + 0x9c) == 1) {
        FUN_00649920(local_40,s_ConversationMgr_Conversations_Co_00743fbc,iVar2);
        local_4 = 0xe;
        uVar7 = FUN_00649940();
        iVar6 = FUN_00647e40(param_2,uVar7);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar6 == 0) {
          if (*param_3 != 1) {
            ExceptionList = local_c;
            return 0;
          }
          iVar6 = param_3[0x93];
          iVar4 = *(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4);
          iVar9 = *(int *)(iVar4 + 0x24);
          if (iVar9 < iVar6) {
            if (iVar9 < iVar6) {
              local_98 = (int *)(iVar6 - iVar9);
              do {
                local_9c = (int *)operator_new(0x18);
                if (local_9c == (int *)0x0) {
                  local_9c = (int *)0x0;
                }
                else {
                  *local_9c = 0;
                  local_9c[1] = 0;
                  local_9c[2] = 0;
                  local_9c[3] = 0;
                  local_9c[4] = 0;
                }
                iVar6 = *(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4);
                iVar4 = *(int *)(iVar6 + 0x24);
                if (*(int *)(iVar6 + 0x2c) < iVar4 + 1) {
                  if (*(int *)(iVar6 + 0x34) == 0) {
                    iVar9 = *(int *)(iVar6 + 0x2c) / 2;
                    iVar8 = 1;
                    if (0 < iVar9) {
                      iVar8 = iVar9;
                    }
                    if (iVar8 + iVar4 < 1) {
                      iVar9 = 1;
                    }
                    else {
                      if (iVar9 < 1) {
                        iVar9 = 1;
                      }
                      iVar9 = iVar9 + iVar4;
                    }
                  }
                  else {
                    iVar9 = *(int *)(iVar6 + 0x34) + iVar4;
                  }
                  pvVar5 = operator_new(iVar9 * 4);
                  iVar4 = 0;
                  if (0 < *(int *)(iVar6 + 0x24)) {
                    do {
                      *(undefined4 *)((int)pvVar5 + iVar4 * 4) =
                           *(undefined4 *)(*(int *)(iVar6 + 0x28) + iVar4 * 4);
                      iVar4 = iVar4 + 1;
                    } while (iVar4 < *(int *)(iVar6 + 0x24));
                  }
                  FUN_006bf840(*(undefined4 *)(iVar6 + 0x28));
                  *(void **)(iVar6 + 0x28) = pvVar5;
                  *(int *)(iVar6 + 0x2c) = iVar9;
                }
                *(int **)(*(int *)(iVar6 + 0x28) + *(int *)(iVar6 + 0x24) * 4) = local_9c;
                local_98 = (int *)((int)local_98 + -1);
                *(int *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x24) + 1;
              } while (local_98 != (int *)0x0);
              ExceptionList = local_c;
              return 1;
            }
            ExceptionList = local_c;
            return 1;
          }
          if (iVar6 < iVar9) {
            iVar2 = *(int *)(iVar4 + 0x2c);
            if (*(int *)(iVar4 + 0x2c) < iVar6) {
              iVar2 = iVar6;
            }
            FUN_005a2a20(iVar2);
            *(int *)(iVar4 + 0x24) = iVar6;
            ExceptionList = local_c;
            return 1;
          }
          ExceptionList = local_c;
          return 1;
        }
        iVar6 = 0;
        if (0 < *(int *)(*(int *)((int)local_98 + *(int *)(param_1 + 0x50)) + 0x24)) {
          do {
            FUN_00649920(local_74,s_ConversationMgr_Conversations_Co_00743f78,iVar2,iVar6);
            local_4 = 0xf;
            uVar7 = FUN_00649940();
            iVar4 = FUN_00647e40(param_2,uVar7);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) {
              if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
                ExceptionList = local_c;
                return 0;
              }
              piVar3 = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4) + 0x28) +
                                iVar6 * 4);
              *piVar3 = param_3[0x90];
              piVar3[1] = param_3[0x91];
              ExceptionList = local_c;
              return 1;
            }
            FUN_00649920(local_54,s_ConversationMgr_Conversations_Co_00743f30,iVar2,iVar6);
            local_4 = 0x10;
            uVar7 = FUN_00649940();
            iVar4 = FUN_00647e40(param_2,uVar7);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) {
              if (*param_3 == 2) {
                *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4) + 0x28) +
                                 iVar6 * 4) + 8) = param_3[0x94];
                ExceptionList = local_c;
                return 1;
              }
              ExceptionList = local_c;
              return 0;
            }
            FUN_00649920(local_6c,s_ConversationMgr_Conversations_Co_00743ee8,iVar2,iVar6);
            local_4 = 0x11;
            uVar7 = FUN_00649940();
            iVar4 = FUN_00647e40(param_2,uVar7);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) {
              if (*param_3 == 1) {
                *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4) + 0x28) +
                                 iVar6 * 4) + 0xc) = param_3[0x93];
                ExceptionList = local_c;
                return 1;
              }
              ExceptionList = local_c;
              return 0;
            }
            FUN_00649920(local_7c,s_ConversationMgr_Conversations_Co_00743ea8,iVar2,iVar6);
            local_4 = 0x12;
            uVar7 = FUN_00649940();
            iVar4 = FUN_00647e40(param_2,uVar7);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) {
              if (*param_3 == 3) {
                *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4) + 0x28) +
                                 iVar6 * 4) + 0x10) = param_3[0x95];
                ExceptionList = local_c;
                return 1;
              }
              ExceptionList = local_c;
              return 0;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(*(int *)((int)local_98 + *(int *)(param_1 + 0x50)) + 0x24));
        }
        iVar4 = 0;
        FUN_00649920(local_64,s_ConversationMgr_Conversations_Co_00743e68,iVar2);
        local_4 = 0x13;
        uVar7 = FUN_00649940();
        iVar6 = FUN_00647e40(param_2,uVar7);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar6 == 0) {
          if (*param_3 != 1) {
            ExceptionList = local_c;
            return 0;
          }
          iVar6 = param_3[0x93];
          iVar4 = *(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4);
          iVar9 = *(int *)(iVar4 + 0x40);
          if (iVar9 < iVar6) {
            if (iVar9 < iVar6) {
              local_98 = (int *)(iVar6 - iVar9);
              do {
                local_9c = (int *)operator_new(0x18);
                if (local_9c == (int *)0x0) {
                  local_9c = (int *)0x0;
                }
                else {
                  *local_9c = 0;
                  local_9c[1] = 0;
                  local_9c[2] = 0;
                  local_9c[3] = 0;
                  local_9c[4] = 0;
                  local_9c[5] = 0;
                }
                iVar6 = *(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4);
                iVar4 = *(int *)(iVar6 + 0x40);
                if (*(int *)(iVar6 + 0x48) < iVar4 + 1) {
                  if (*(int *)(iVar6 + 0x50) == 0) {
                    iVar9 = *(int *)(iVar6 + 0x48) / 2;
                    iVar8 = 1;
                    if (0 < iVar9) {
                      iVar8 = iVar9;
                    }
                    if (iVar8 + iVar4 < 1) {
                      iVar9 = 1;
                    }
                    else {
                      if (iVar9 < 1) {
                        iVar9 = 1;
                      }
                      iVar9 = iVar9 + iVar4;
                    }
                  }
                  else {
                    iVar9 = *(int *)(iVar6 + 0x50) + iVar4;
                  }
                  pvVar5 = operator_new(iVar9 * 4);
                  iVar4 = 0;
                  if (0 < *(int *)(iVar6 + 0x40)) {
                    do {
                      *(undefined4 *)((int)pvVar5 + iVar4 * 4) =
                           *(undefined4 *)(*(int *)(iVar6 + 0x44) + iVar4 * 4);
                      iVar4 = iVar4 + 1;
                    } while (iVar4 < *(int *)(iVar6 + 0x40));
                  }
                  FUN_006bf840(*(undefined4 *)(iVar6 + 0x44));
                  *(int *)(iVar6 + 0x48) = iVar9;
                  *(void **)(iVar6 + 0x44) = pvVar5;
                }
                *(int **)(*(int *)(iVar6 + 0x44) + *(int *)(iVar6 + 0x40) * 4) = local_9c;
                local_98 = (int *)((int)local_98 + -1);
                *(int *)(iVar6 + 0x40) = *(int *)(iVar6 + 0x40) + 1;
              } while (local_98 != (int *)0x0);
              ExceptionList = local_c;
              return 1;
            }
            ExceptionList = local_c;
            return 1;
          }
          if (iVar6 < iVar9) {
            iVar2 = *(int *)(iVar4 + 0x48);
            if (*(int *)(iVar4 + 0x48) < iVar6) {
              iVar2 = iVar6;
            }
            FUN_005a2a20(iVar2);
            *(int *)(iVar4 + 0x40) = iVar6;
            ExceptionList = local_c;
            return 1;
          }
          ExceptionList = local_c;
          return 1;
        }
        if (0 < *(int *)(*(int *)((int)local_98 + *(int *)(param_1 + 0x50)) + 0x40)) {
          do {
            FUN_00649920(local_4c,s_ConversationMgr_Conversations_Co_00743e20,iVar2,iVar4);
            local_4 = 0x14;
            uVar7 = FUN_00649940();
            iVar6 = FUN_00647e40(param_2,uVar7);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar6 == 0) {
              if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
                ExceptionList = local_c;
                return 0;
              }
              piVar3 = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4) + 0x44) +
                                iVar4 * 4);
              *piVar3 = param_3[0x90];
              piVar3[1] = param_3[0x91];
              ExceptionList = local_c;
              return 1;
            }
            FUN_00649920(local_5c,s_ConversationMgr_Conversations_Co_00743dd8,iVar2,iVar4);
            local_4 = 0x15;
            uVar7 = FUN_00649940();
            iVar6 = FUN_00647e40(param_2,uVar7);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar6 == 0) {
              if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
                ExceptionList = local_c;
                return 0;
              }
              iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4) + 0x44) +
                              iVar4 * 4);
              *(int *)(iVar2 + 8) = param_3[0x90];
              *(int *)(iVar2 + 0xc) = param_3[0x91];
              ExceptionList = local_c;
              return 1;
            }
            FUN_00649920(local_3c,s_ConversationMgr_Conversations_Co_00743d90,iVar2,iVar4);
            local_4 = 0x16;
            uVar7 = FUN_00649940();
            iVar6 = FUN_00647e40(param_2,uVar7);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar6 == 0) {
              if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
                ExceptionList = local_c;
                return 0;
              }
              iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4) + 0x44) +
                              iVar4 * 4);
              *(int *)(iVar2 + 0x10) = param_3[0x90];
              *(int *)(iVar2 + 0x14) = param_3[0x91];
              ExceptionList = local_c;
              return 1;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(*(int *)((int)local_98 + *(int *)(param_1 + 0x50)) + 0x40));
        }
        FUN_00649920(local_78,s_ConversationMgr_Conversations_Co_00743d58,iVar2);
        local_4 = 0x17;
        uVar7 = FUN_00649940();
        iVar6 = FUN_00647e40(param_2,uVar7);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar6 == 0) {
          if (*param_3 != 1) {
            ExceptionList = local_c;
            return 0;
          }
          iVar6 = param_3[0x93];
          iVar4 = *(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4);
          iVar9 = *(int *)(iVar4 + 0x5c);
          if (iVar6 <= iVar9) {
            if (iVar6 < iVar9) {
              iVar2 = *(int *)(iVar4 + 100);
              iVar9 = iVar6;
              if (iVar6 <= iVar2) {
                iVar9 = iVar2;
              }
              if (iVar9 != iVar2) {
                pvVar5 = operator_new(iVar9 * 4);
                iVar2 = 0;
                if (0 < *(int *)(iVar4 + 0x5c)) {
                  do {
                    *(undefined4 *)((int)pvVar5 + iVar2 * 4) =
                         *(undefined4 *)(*(int *)(iVar4 + 0x60) + iVar2 * 4);
                    iVar2 = iVar2 + 1;
                  } while (iVar2 < *(int *)(iVar4 + 0x5c));
                }
                FUN_006bf840(*(undefined4 *)(iVar4 + 0x60));
                *(void **)(iVar4 + 0x60) = pvVar5;
                *(int *)(iVar4 + 100) = iVar9;
              }
              *(int *)(iVar4 + 0x5c) = iVar6;
              ExceptionList = local_c;
              return 1;
            }
            ExceptionList = local_c;
            return 1;
          }
          if (iVar9 < iVar6) {
            local_98 = (int *)(iVar6 - iVar9);
            do {
              piVar3 = (int *)operator_new(0x60);
              local_4 = 0x18;
              local_8c = piVar3;
              if (piVar3 == (int *)0x0) {
                local_9c = (int *)0x0;
              }
              else {
                FUN_006499d0();
                piVar3[0x14] = 0;
                piVar3[0x13] = 0;
                piVar3[0x15] = 0;
                piVar3[0x17] = 0;
                piVar3[0x16] = 0;
                piVar3[0x11] = 0;
                piVar3[0x12] = 0;
                *piVar3 = 0;
                piVar3[1] = 0;
                piVar3[0xe] = 0;
                piVar3[0xf] = 0;
                piVar3[2] = -1;
                piVar3[0x10] = 0;
                local_9c = piVar3;
              }
              iVar6 = *(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4);
              iVar4 = *(int *)(iVar6 + 0x5c);
              local_4 = 0xffffffff;
              if (*(int *)(iVar6 + 100) < iVar4 + 1) {
                if (*(int *)(iVar6 + 0x6c) == 0) {
                  iVar9 = *(int *)(iVar6 + 100) / 2;
                  iVar8 = 1;
                  if (0 < iVar9) {
                    iVar8 = iVar9;
                  }
                  if (iVar8 + iVar4 < 1) {
                    iVar9 = 1;
                  }
                  else {
                    if (iVar9 < 1) {
                      iVar9 = 1;
                    }
                    iVar9 = iVar9 + iVar4;
                  }
                }
                else {
                  iVar9 = *(int *)(iVar6 + 0x6c) + iVar4;
                }
                pvVar5 = operator_new(iVar9 * 4);
                iVar4 = 0;
                if (0 < *(int *)(iVar6 + 0x5c)) {
                  do {
                    *(undefined4 *)((int)pvVar5 + iVar4 * 4) =
                         *(undefined4 *)(*(int *)(iVar6 + 0x60) + iVar4 * 4);
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < *(int *)(iVar6 + 0x5c));
                }
                FUN_006bf840(*(undefined4 *)(iVar6 + 0x60));
                *(int *)(iVar6 + 100) = iVar9;
                *(void **)(iVar6 + 0x60) = pvVar5;
              }
              *(int **)(*(int *)(iVar6 + 0x60) + *(int *)(iVar6 + 0x5c) * 4) = local_9c;
              local_98 = (int *)((int)local_98 + -1);
              *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
            } while (local_98 != (int *)0x0);
            ExceptionList = local_c;
            return 1;
          }
          ExceptionList = local_c;
          return 1;
        }
        iVar6 = 0;
        if (0 < *(int *)(*(int *)((int)local_98 + *(int *)(param_1 + 0x50)) + 0x5c)) {
          do {
            FUN_00649920(local_70,s_ConversationMgr_Conversations_Co_00743d18,iVar2,iVar6);
            local_4 = 0x19;
            uVar7 = FUN_00649940();
            iVar4 = FUN_00647e40(param_2,uVar7);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) {
              if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
                ExceptionList = local_c;
                return 0;
              }
              piVar3 = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4) + 0x60) +
                                iVar6 * 4);
              *piVar3 = param_3[0x90];
              piVar3[1] = param_3[0x91];
              ExceptionList = local_c;
              return 1;
            }
            FUN_00649920(local_68,s_ConversationMgr_Conversations_Co_00743cd8,iVar2,iVar6);
            local_4 = 0x1a;
            uVar7 = FUN_00649940();
            iVar4 = FUN_00647e40(param_2,uVar7);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) {
              if ((*param_3 != 1) && (*param_3 != 0xc)) {
                ExceptionList = local_c;
                return 0;
              }
              *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4) + 0x60) +
                               iVar6 * 4) + 8) = param_3[0x93];
              ExceptionList = local_c;
              return 1;
            }
            FUN_00649920(local_80,s_ConversationMgr_Conversations_Co_00743c90,iVar2,iVar6);
            local_4 = 0x1b;
            uVar7 = FUN_00649940();
            iVar4 = FUN_00647e40(param_2,uVar7);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) {
              if ((*param_3 != 0xd) && (*param_3 != 4)) {
                ExceptionList = local_c;
                return 0;
              }
              FUN_0064a2e0(param_3 + 2);
              ExceptionList = local_c;
              return 1;
            }
            FUN_00649920(local_84,s_ConversationMgr_Conversations_Co_00743c4c,iVar2,iVar6);
            local_4 = 0x1c;
            uVar7 = FUN_00649940();
            iVar4 = FUN_00647e40(param_2,uVar7);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) {
              if (*param_3 == 2) {
                *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4) + 0x60) +
                                 iVar6 * 4) + 0x40) = param_3[0x94];
                ExceptionList = local_c;
                return 1;
              }
              ExceptionList = local_c;
              return 0;
            }
            FUN_00649920(&local_88,s_ConversationMgr_Conversations_Co_00743c08,iVar2,iVar6);
            local_4 = 0x1d;
            uVar7 = FUN_00649940();
            iVar4 = FUN_00647e40(param_2,uVar7);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) {
              if (*param_3 == 2) {
                *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4) + 0x60) +
                                 iVar6 * 4) + 0x38) = param_3[0x94];
                ExceptionList = local_c;
                return 1;
              }
              ExceptionList = local_c;
              return 0;
            }
            FUN_00649920(&local_90,s_ConversationMgr_Conversations_Co_00743bc0,iVar2,iVar6);
            local_4 = 0x1e;
            uVar7 = FUN_00649940();
            iVar4 = FUN_00647e40(param_2,uVar7);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar4 == 0) {
              if (*param_3 == 1) {
                *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar2 * 4) + 0x60) +
                                 iVar6 * 4) + 0x3c) = param_3[0x93];
                ExceptionList = local_c;
                return 1;
              }
              ExceptionList = local_c;
              return 0;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(*(int *)((int)local_98 + *(int *)(param_1 + 0x50)) + 0x5c));
        }
      }
      iVar2 = iVar2 + 1;
      local_98 = local_98 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x4c));
  }
  iVar2 = FUN_00647e40(param_2,s_ConversationMgr_ConversationList_00743b84);
  if (iVar2 == 0) {
    if (*param_3 != 1) {
      ExceptionList = local_c;
      return 0;
    }
    iVar2 = param_3[0x93];
    iVar6 = *(int *)(param_1 + 0x68);
    if (iVar2 <= iVar6) {
      if (iVar2 < iVar6) {
        iVar6 = *(int *)(param_1 + 0x70);
        iVar4 = iVar2;
        if (iVar2 <= iVar6) {
          iVar4 = iVar6;
        }
        if (iVar4 != iVar6) {
          pvVar5 = operator_new(iVar4 * 4);
          iVar6 = 0;
          if (0 < *(int *)(param_1 + 0x68)) {
            do {
              *(undefined4 *)((int)pvVar5 + iVar6 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar6 * 4);
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(param_1 + 0x68));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x6c));
          *(void **)(param_1 + 0x6c) = pvVar5;
          *(int *)(param_1 + 0x70) = iVar4;
        }
        *(int *)(param_1 + 0x68) = iVar2;
        ExceptionList = local_c;
        return 1;
      }
      ExceptionList = local_c;
      return 1;
    }
    if (iVar6 < iVar2) {
      local_98 = (int *)(iVar2 - iVar6);
      do {
        piVar3 = (int *)operator_new(0x48);
        local_8c = piVar3;
        if (piVar3 == (int *)0x0) {
          local_9c = (int *)0x0;
        }
        else {
          piVar3[3] = 0;
          piVar3[2] = 0;
          piVar3[4] = 0;
          piVar3[6] = 0;
          piVar3[5] = 0;
          *piVar3 = 0;
          piVar3[1] = 0;
          local_4._0_1_ = 0x20;
          local_4._1_3_ = 0;
          FUN_006499d0();
          local_4 = CONCAT31(local_4._1_3_,0x21);
          FUN_0064a2e0(s_Enter_List_s_Name_00743678);
          local_9c = piVar3;
        }
        iVar2 = *(int *)(param_1 + 0x68);
        local_4 = 0xffffffff;
        if (*(int *)(param_1 + 0x70) < iVar2 + 1) {
          if (*(int *)(param_1 + 0x78) == 0) {
            iVar4 = *(int *)(param_1 + 0x70) / 2;
            iVar6 = 1;
            if (0 < iVar4) {
              iVar6 = iVar4;
            }
            if (iVar2 + iVar6 < 1) {
              iVar2 = 1;
            }
            else {
              if (iVar4 < 1) {
                iVar4 = 1;
              }
              iVar2 = iVar2 + iVar4;
            }
          }
          else {
            iVar2 = iVar2 + *(int *)(param_1 + 0x78);
          }
          pvVar5 = operator_new(iVar2 * 4);
          iVar6 = 0;
          if (0 < *(int *)(param_1 + 0x68)) {
            do {
              *(undefined4 *)((int)pvVar5 + iVar6 * 4) =
                   *(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar6 * 4);
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(param_1 + 0x68));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x6c));
          *(void **)(param_1 + 0x6c) = pvVar5;
          *(int *)(param_1 + 0x70) = iVar2;
        }
        *(int **)(*(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x68) * 4) = local_9c;
        local_98 = (int *)((int)local_98 + -1);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      } while (local_98 != (int *)0x0);
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 1;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    do {
      FUN_00649920(&local_90,s_ConversationMgr_ConversationList_00743b48,iVar2);
      local_4 = 0x22;
      uVar7 = FUN_00649940();
      iVar6 = FUN_00647e40(param_2,uVar7);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar6 == 0) {
        iVar2 = *param_3;
        if ((((iVar2 != 4) && (iVar2 != 7)) && (iVar2 != 6)) && (iVar2 != 0xd)) {
          ExceptionList = local_c;
          return 0;
        }
        FUN_0064a2e0(param_3 + 2);
        ExceptionList = local_c;
        return 1;
      }
      FUN_00649920(&local_88,s_ConversationMgr_ConversationList_00743b00,iVar2);
      local_4 = 0x23;
      uVar7 = FUN_00649940();
      iVar6 = FUN_00647e40(param_2,uVar7);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar6 == 0) {
        if (*param_3 != 1) {
          ExceptionList = local_c;
          return 0;
        }
        local_90 = (int *)param_3[0x93];
        iVar6 = *(int *)(*(int *)(param_1 + 0x6c) + iVar2 * 4);
        iVar4 = *(int *)(iVar6 + 8);
        if ((int)local_90 <= iVar4) {
          if ((int)local_90 < iVar4) {
            piVar3 = *(int **)(iVar6 + 0x10);
            local_9c = local_90;
            if ((int)local_90 <= (int)piVar3) {
              local_9c = piVar3;
            }
            if (local_9c != piVar3) {
              local_8c = (int *)operator_new((int)local_9c * 0x2c + 4);
              local_4 = 0x26;
              if (local_8c == (int *)0x0) {
                piVar3 = (int *)0x0;
              }
              else {
                piVar3 = local_8c + 1;
                *local_8c = (int)local_9c;
                FUN_006c043b(piVar3,0x2c,local_9c,FUN_006499d0,FUN_00649ba0);
              }
              iVar2 = 0;
              local_4 = 0xffffffff;
              if (0 < *(int *)(iVar6 + 8)) {
                iVar4 = 0;
                do {
                  FUN_0064a320(*(int *)(iVar6 + 0xc) + iVar4);
                  iVar2 = iVar2 + 1;
                  iVar4 = iVar4 + 0x2c;
                } while (iVar2 < *(int *)(iVar6 + 8));
              }
              if (*(int *)(iVar6 + 0xc) != 0) {
                FUN_00407f70(3);
              }
              *(int **)(iVar6 + 0xc) = piVar3;
              *(int **)(iVar6 + 0x10) = local_9c;
            }
            *(int **)(iVar6 + 8) = local_90;
            ExceptionList = local_c;
            return 1;
          }
          ExceptionList = local_c;
          return 1;
        }
        if (iVar4 < (int)local_90) {
          local_94 = (int *)((int)local_90 - iVar4);
          do {
            FUN_00649b20(&DAT_00720670);
            iVar6 = *(int *)(*(int *)(param_1 + 0x6c) + iVar2 * 4);
            iVar4 = *(int *)(iVar6 + 8);
            local_4 = 0x24;
            if (*(int *)(iVar6 + 0x10) < iVar4 + 1) {
              if (*(int *)(iVar6 + 0x18) == 0) {
                iVar8 = *(int *)(iVar6 + 0x10) / 2;
                iVar9 = 1;
                if (0 < iVar8) {
                  iVar9 = iVar8;
                }
                if (iVar9 + iVar4 < 1) {
                  piVar3 = (int *)0x1;
                }
                else {
                  if (iVar8 < 1) {
                    iVar8 = 1;
                  }
                  piVar3 = (int *)(iVar4 + iVar8);
                }
              }
              else {
                piVar3 = (int *)(*(int *)(iVar6 + 0x18) + iVar4);
              }
              local_9c = piVar3;
              local_8c = (int *)operator_new((int)piVar3 * 0x2c + 4);
              local_4._0_1_ = 0x25;
              if (local_8c == (int *)0x0) {
                local_98 = (int *)0x0;
              }
              else {
                piVar1 = local_8c + 1;
                *local_8c = (int)piVar3;
                FUN_006c043b(piVar1,0x2c,piVar3,FUN_006499d0,FUN_00649ba0);
                local_98 = piVar1;
              }
              iVar4 = 0;
              local_4 = CONCAT31(local_4._1_3_,0x24);
              if (0 < *(int *)(iVar6 + 8)) {
                iVar9 = 0;
                do {
                  FUN_0064a320(*(int *)(iVar6 + 0xc) + iVar9);
                  iVar4 = iVar4 + 1;
                  iVar9 = iVar9 + 0x2c;
                } while (iVar4 < *(int *)(iVar6 + 8));
              }
              iVar4 = *(int *)(iVar6 + 0xc);
              if (iVar4 != 0) {
                FUN_006c026a(iVar4,0x2c,*(undefined4 *)(iVar4 + -4),FUN_00649ba0);
                FUN_006bf840(iVar4 + -4);
              }
              *(int **)(iVar6 + 0xc) = local_98;
              *(int **)(iVar6 + 0x10) = local_9c;
            }
            FUN_0064a320(local_38);
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            local_4 = 0xffffffff;
            FUN_00649ba0();
            local_94 = (int *)((int)local_94 + -1);
          } while (local_94 != (int *)0x0);
          ExceptionList = local_c;
          return 1;
        }
        ExceptionList = local_c;
        return 1;
      }
      iVar6 = 0;
      if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x6c) + iVar2 * 4) + 8)) {
        do {
          FUN_00649920(local_84,s_ConversationMgr_ConversationList_00743ab8,iVar2,iVar6);
          local_4 = 0x27;
          uVar7 = FUN_00649940();
          iVar4 = FUN_00647e40(param_2,uVar7);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar4 == 0) {
            if ((*param_3 != 1) && (*param_3 != 0xc)) {
              ExceptionList = local_c;
              return 0;
            }
            FUN_0064a320(*(int *)(*(int *)(param_1 + 0x50) + param_3[0x93] * 4) + 0x70);
            ExceptionList = local_c;
            return 1;
          }
          FUN_00649920(local_80,s_ConversationMgr_ConversationList_00743a68,iVar2,iVar6);
          local_4 = 0x28;
          uVar7 = FUN_00649940();
          iVar4 = FUN_00647e40(param_2,uVar7);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar4 == 0) {
            iVar2 = *param_3;
            goto joined_r0x005a094b;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(*(int *)(*(int *)(param_1 + 0x6c) + iVar2 * 4) + 8));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x68));
  }
  iVar2 = FUN_00647e40(param_2,s_ConversationMgr_DialogLists_Dial_00743a3c);
  if (iVar2 == 0) {
    if (*param_3 != 1) {
      ExceptionList = local_c;
      return 0;
    }
    iVar2 = param_3[0x93];
    iVar6 = *(int *)(param_1 + 0x84);
    if (iVar6 < iVar2) {
      if (iVar6 < iVar2) {
        local_9c = (int *)(iVar2 - iVar6);
        do {
          piVar3 = (int *)operator_new(0x50);
          local_8c = piVar3;
          if (piVar3 == (int *)0x0) {
            local_94 = (int *)0x0;
          }
          else {
            piVar3[3] = 0;
            piVar3[2] = 0;
            piVar3[4] = 0;
            piVar3[6] = 0;
            piVar3[5] = 0;
            *piVar3 = 0;
            piVar3[1] = 0;
            local_4._0_1_ = 0x2a;
            local_4._1_3_ = 0;
            FUN_006499d0();
            local_4 = CONCAT31(local_4._1_3_,0x2b);
            FUN_0064a2e0(s_Enter_List_s_Name_00743678);
            local_94 = piVar3;
          }
          iVar2 = *(int *)(param_1 + 0x84);
          local_4 = 0xffffffff;
          if (*(int *)(param_1 + 0x8c) < iVar2 + 1) {
            if (*(int *)(param_1 + 0x94) == 0) {
              iVar4 = *(int *)(param_1 + 0x8c) / 2;
              iVar6 = 1;
              if (0 < iVar4) {
                iVar6 = iVar4;
              }
              if (iVar2 + iVar6 < 1) {
                iVar2 = 1;
              }
              else {
                if (iVar4 < 1) {
                  iVar4 = 1;
                }
                iVar2 = iVar2 + iVar4;
              }
            }
            else {
              iVar2 = iVar2 + *(int *)(param_1 + 0x94);
            }
            pvVar5 = operator_new(iVar2 * 4);
            iVar6 = 0;
            if (0 < *(int *)(param_1 + 0x84)) {
              do {
                *(undefined4 *)((int)pvVar5 + iVar6 * 4) =
                     *(undefined4 *)(*(int *)(param_1 + 0x88) + iVar6 * 4);
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(param_1 + 0x84));
            }
            FUN_006bf840(*(undefined4 *)(param_1 + 0x88));
            *(void **)(param_1 + 0x88) = pvVar5;
            *(int *)(param_1 + 0x8c) = iVar2;
          }
          *(int **)(*(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x84) * 4) = local_94;
          local_9c = (int *)((int)local_9c + -1);
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
        } while (local_9c != (int *)0x0);
        ExceptionList = local_c;
        return 1;
      }
    }
    else if (iVar2 < iVar6) {
      iVar6 = *(int *)(param_1 + 0x8c);
      iVar4 = iVar2;
      if (iVar2 <= iVar6) {
        iVar4 = iVar6;
      }
      if (iVar4 != iVar6) {
        pvVar5 = operator_new(iVar4 * 4);
        iVar6 = 0;
        if (0 < *(int *)(param_1 + 0x84)) {
          do {
            *(undefined4 *)((int)pvVar5 + iVar6 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x88) + iVar6 * 4);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(param_1 + 0x84));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x88));
        *(void **)(param_1 + 0x88) = pvVar5;
        *(int *)(param_1 + 0x8c) = iVar4;
      }
      *(int *)(param_1 + 0x84) = iVar2;
    }
    ExceptionList = local_c;
    return 1;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0x84) < 1) {
    ExceptionList = local_c;
    return 0;
  }
  do {
    FUN_00649920(&local_90,s_ConversationMgr_DialogLists_Dial_00743a0c,iVar2);
    local_4 = 0x2c;
    uVar7 = FUN_00649940();
    iVar6 = FUN_00647e40(param_2,uVar7);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar6 == 0) {
      iVar2 = *param_3;
      if (((iVar2 != 4) && (iVar2 != 7)) && ((iVar2 != 6 && (iVar2 != 0xd)))) {
        ExceptionList = local_c;
        return 0;
      }
      FUN_0064a2e0(param_3 + 2);
      ExceptionList = local_c;
      return 1;
    }
    FUN_00649920(&local_88,s_ConversationMgr_DialogLists_Dial_007439d8,iVar2);
    local_4 = 0x2d;
    uVar7 = FUN_00649940();
    iVar6 = FUN_00647e40(param_2,uVar7);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar6 == 0) {
      if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
        ExceptionList = local_c;
        return 0;
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x88) + iVar2 * 4);
      *(int *)(iVar2 + 0x48) = param_3[0x90];
      *(int *)(iVar2 + 0x4c) = param_3[0x91];
      ExceptionList = local_c;
      return 1;
    }
    FUN_00649920(local_84,s_ConversationMgr_DialogLists_Dial_007439a0,iVar2);
    local_4 = 0x2e;
    uVar7 = FUN_00649940();
    iVar6 = FUN_00647e40(param_2,uVar7);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar6 == 0) {
      if (*param_3 != 1) {
        ExceptionList = local_c;
        return 0;
      }
      local_90 = (int *)param_3[0x93];
      iVar6 = *(int *)(*(int *)(param_1 + 0x88) + iVar2 * 4);
      iVar4 = *(int *)(iVar6 + 8);
      if (iVar4 < (int)local_90) {
        if (iVar4 < (int)local_90) {
          local_94 = (int *)((int)local_90 - iVar4);
          do {
            FUN_00649b20(&DAT_00720670);
            iVar6 = *(int *)(*(int *)(param_1 + 0x88) + iVar2 * 4);
            iVar4 = *(int *)(iVar6 + 8);
            local_4 = 0x2f;
            if (*(int *)(iVar6 + 0x10) < iVar4 + 1) {
              if (*(int *)(iVar6 + 0x18) == 0) {
                iVar8 = *(int *)(iVar6 + 0x10) / 2;
                iVar9 = 1;
                if (0 < iVar8) {
                  iVar9 = iVar8;
                }
                if (iVar9 + iVar4 < 1) {
                  piVar3 = (int *)0x1;
                }
                else {
                  if (iVar8 < 1) {
                    iVar8 = 1;
                  }
                  piVar3 = (int *)(iVar4 + iVar8);
                }
              }
              else {
                piVar3 = (int *)(*(int *)(iVar6 + 0x18) + iVar4);
              }
              local_9c = piVar3;
              local_90 = (int *)operator_new((int)piVar3 * 0x2c + 4);
              local_4._0_1_ = 0x30;
              if (local_90 == (int *)0x0) {
                local_98 = (int *)0x0;
              }
              else {
                piVar1 = local_90 + 1;
                *local_90 = (int)piVar3;
                FUN_006c043b(piVar1,0x2c,piVar3,FUN_006499d0,FUN_00649ba0);
                local_98 = piVar1;
              }
              iVar4 = 0;
              local_4 = CONCAT31(local_4._1_3_,0x2f);
              if (0 < *(int *)(iVar6 + 8)) {
                iVar9 = 0;
                do {
                  FUN_0064a320(*(int *)(iVar6 + 0xc) + iVar9);
                  iVar4 = iVar4 + 1;
                  iVar9 = iVar9 + 0x2c;
                  piVar3 = local_9c;
                } while (iVar4 < *(int *)(iVar6 + 8));
              }
              iVar4 = *(int *)(iVar6 + 0xc);
              if (iVar4 != 0) {
                FUN_006c026a(iVar4,0x2c,*(undefined4 *)(iVar4 + -4),FUN_00649ba0);
                FUN_006bf840(iVar4 + -4);
              }
              *(int **)(iVar6 + 0x10) = piVar3;
              *(int **)(iVar6 + 0xc) = local_98;
            }
            FUN_0064a320(local_38);
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            local_4 = 0xffffffff;
            FUN_00649ba0();
            local_94 = (int *)((int)local_94 + -1);
          } while (local_94 != (int *)0x0);
          ExceptionList = local_c;
          return 1;
        }
      }
      else if ((int)local_90 < iVar4) {
        piVar3 = *(int **)(iVar6 + 0x10);
        local_9c = local_90;
        if ((int)local_90 <= (int)piVar3) {
          local_9c = piVar3;
        }
        if (local_9c != piVar3) {
          local_88 = (undefined4 *)operator_new((int)local_9c * 0x2c + 4);
          local_4 = 0x31;
          if (local_88 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            puVar10 = local_88 + 1;
            *local_88 = local_9c;
            FUN_006c043b(puVar10,0x2c,local_9c,FUN_006499d0,FUN_00649ba0);
          }
          iVar2 = 0;
          local_4 = 0xffffffff;
          if (0 < *(int *)(iVar6 + 8)) {
            iVar4 = 0;
            do {
              FUN_0064a320(*(int *)(iVar6 + 0xc) + iVar4);
              iVar2 = iVar2 + 1;
              iVar4 = iVar4 + 0x2c;
            } while (iVar2 < *(int *)(iVar6 + 8));
          }
          iVar2 = *(int *)(iVar6 + 0xc);
          if (iVar2 != 0) {
            FUN_006c026a(iVar2,0x2c,*(undefined4 *)(iVar2 + -4),FUN_00649ba0);
            FUN_006bf840(iVar2 + -4);
          }
          *(undefined4 **)(iVar6 + 0xc) = puVar10;
          *(int **)(iVar6 + 0x10) = local_9c;
        }
        *(int **)(iVar6 + 8) = local_90;
      }
      ExceptionList = local_c;
      return 1;
    }
    iVar6 = 0;
    if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x88) + iVar2 * 4) + 8)) {
      do {
        FUN_00649920(&local_8c,s_ConversationMgr_DialogLists_Dial_00743968,iVar2,iVar6);
        local_4 = 0x32;
        uVar7 = FUN_00649940();
        iVar4 = FUN_00647e40(param_2,uVar7);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar4 == 0) {
          iVar2 = *param_3;
joined_r0x005a094b:
          if ((iVar2 != 0xd) && (iVar2 != 4)) {
            ExceptionList = local_c;
            return 0;
          }
          FUN_0064a2e0(param_3 + 2);
          ExceptionList = local_c;
          return 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(*(int *)(*(int *)(param_1 + 0x88) + iVar2 * 4) + 8));
    }
    iVar2 = iVar2 + 1;
    if (*(int *)(param_1 + 0x84) <= iVar2) {
      ExceptionList = local_c;
      return 0;
    }
  } while( true );
}

