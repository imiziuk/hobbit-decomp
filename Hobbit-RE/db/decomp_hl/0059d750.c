
void __fastcall FUN_0059d750(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int **ppiVar12;
  int *local_194;
  int *local_190;
  int *local_18c;
  int *local_188;
  int *local_184;
  int *local_180;
  int *local_17c;
  undefined1 local_178 [4];
  int local_174;
  int *local_170;
  int local_16c;
  undefined1 local_168 [4];
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int *local_150;
  undefined1 local_14c [4];
  undefined4 local_148;
  undefined1 local_144 [4];
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  undefined1 local_110 [4];
  undefined1 local_10c [64];
  undefined1 local_cc [64];
  undefined1 local_8c [64];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dda4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0063ff20();
  FUN_0063ffc0();
  local_17c = (int *)0x0;
  local_174 = 0;
  local_15c = 0;
  local_160 = 0;
  local_154 = 0;
  local_158 = 0;
  local_164 = 0;
  FUN_00640450(s_ConversationCount_00743954,&local_17c);
  FUN_00640450(s_ConversationListCount_0074393c,&local_158);
  FUN_00640450(s_DialogListCount_0074392c,&local_164);
  local_194 = (int *)0x0;
  if (0 < (int)local_17c) {
    do {
      local_190 = (int *)operator_new(0xa0);
      local_180 = local_190;
      if (local_190 == (int *)0x0) {
        local_190 = (int *)0x0;
      }
      else {
        local_190[3] = 0;
        local_190[2] = 0;
        local_190[4] = 0;
        local_190[6] = 0;
        local_190[5] = 0;
        *local_190 = 0;
        local_190[1] = 0;
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
        local_190[0x27] = 0;
      }
      iVar3 = *(int *)(param_1 + 0x4c);
      local_4 = 0xffffffff;
      if (*(int *)(param_1 + 0x54) < iVar3 + 1) {
        if (*(int *)(param_1 + 0x5c) == 0) {
          iVar1 = *(int *)(param_1 + 0x54) / 2;
          iVar6 = 1;
          if (0 < iVar1) {
            iVar6 = iVar1;
          }
          if (iVar6 + iVar3 < 1) {
            iVar1 = 1;
          }
          else {
            if (iVar1 < 1) {
              iVar1 = 1;
            }
            iVar1 = iVar1 + iVar3;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x5c) + iVar3;
        }
        pvVar2 = operator_new(iVar1 * 4);
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x4c)) {
          do {
            *(undefined4 *)((int)pvVar2 + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x4c));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x50));
        *(int *)(param_1 + 0x54) = iVar1;
        *(void **)(param_1 + 0x50) = pvVar2;
      }
      *(int **)(*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x4c) * 4) = local_190;
      local_194 = (int *)((int)local_194 + 1);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    } while ((int)local_194 < (int)local_17c);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      FUN_0063ff20();
      FUN_0063ffc0();
      FUN_00649920(local_120,s_Conversation_d_Name_00743918,iVar3);
      puVar9 = local_10c;
      local_4 = 6;
      uVar4 = FUN_00649940(puVar9);
      FUN_00640480(uVar4,puVar9);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_0064a2e0(local_10c);
      FUN_00649920(local_124,s_Conversation_d_Type_00743904,iVar3);
      puVar10 = &local_148;
      local_4 = 7;
      uVar4 = FUN_00649940(puVar10);
      FUN_00640450(uVar4,puVar10);
      local_4 = 0xffffffff;
      FUN_00649950();
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x9c) = local_148;
      FUN_00649920(local_140,s_Conversation_d_DialogCount_007438e8,iVar3);
      piVar11 = &local_174;
      local_4 = 8;
      uVar4 = FUN_00649940(piVar11);
      FUN_00640450(uVar4,piVar11);
      local_4 = 0xffffffff;
      FUN_00649950();
      local_194 = (int *)0x0;
      if (0 < local_174) {
        do {
          local_188 = (int *)operator_new(0x40);
          local_4 = 9;
          local_180 = local_188;
          if (local_188 == (int *)0x0) {
            local_188 = (int *)0x0;
          }
          else {
            FUN_006499d0();
            local_188[0xc] = 0;
            local_188[0xd] = 0;
            local_188[0xe] = 0;
          }
          iVar1 = *(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4);
          iVar6 = *(int *)(iVar1 + 8);
          local_4 = 0xffffffff;
          if (*(int *)(iVar1 + 0x10) < iVar6 + 1) {
            if (*(int *)(iVar1 + 0x18) == 0) {
              iVar5 = *(int *)(iVar1 + 0x10) / 2;
              iVar8 = 1;
              if (0 < iVar5) {
                iVar8 = iVar5;
              }
              if (iVar8 + iVar6 < 1) {
                local_18c = (int *)0x1;
              }
              else {
                if (iVar5 < 1) {
                  iVar5 = 1;
                }
                local_18c = (int *)(iVar6 + iVar5);
              }
            }
            else {
              local_18c = (int *)(*(int *)(iVar1 + 0x18) + iVar6);
            }
            pvVar2 = operator_new((int)local_18c * 4);
            iVar6 = 0;
            if (0 < *(int *)(iVar1 + 8)) {
              do {
                *(undefined4 *)((int)pvVar2 + iVar6 * 4) =
                     *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar6 * 4);
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(iVar1 + 8));
            }
            FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
            *(void **)(iVar1 + 0xc) = pvVar2;
            *(int **)(iVar1 + 0x10) = local_18c;
          }
          *(int **)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) * 4) = local_188;
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
          local_194 = (int *)((int)local_194 + 1);
        } while ((int)local_194 < local_174);
      }
      iVar1 = 0;
      if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 8)) {
        do {
          FUN_00649920(local_138,s_Conversation_d_Dialog_d_DialogNa_007438c4,iVar3,iVar1);
          puVar9 = local_8c;
          local_4 = 10;
          uVar4 = FUN_00649940(puVar9);
          FUN_00640480(uVar4,puVar9);
          local_4 = 0xffffffff;
          FUN_00649950();
          FUN_0064a2e0(local_8c);
          FUN_00649920(local_130,s_Conversation_d_Dialog_d_Speaker_007438a4,iVar3,iVar1);
          iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0xc) +
                          iVar1 * 4) + 0x30;
          local_4 = 0xb;
          uVar4 = FUN_00649940(iVar6);
          FUN_006405e0(uVar4,iVar6);
          local_4 = 0xffffffff;
          FUN_00649950();
          FUN_00649920(local_128,s_Conversation_d_Dialog_d_Delay_00743884,iVar3,iVar1);
          iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0xc) +
                          iVar1 * 4) + 0x38;
          local_4 = 0xc;
          uVar4 = FUN_00649940(iVar6);
          FUN_00640420(uVar4,iVar6);
          local_4 = 0xffffffff;
          FUN_00649950();
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 8));
      }
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x9c) == 1) {
        FUN_00649920(local_14c,s_Conversation_d_CameraInfos_00743868,iVar3);
        piVar11 = &local_15c;
        local_4 = 0xd;
        uVar4 = FUN_00649940(piVar11);
        FUN_00640450(uVar4,piVar11);
        local_4 = 0xffffffff;
        FUN_00649950();
        local_194 = (int *)0x0;
        if (0 < local_15c) {
          do {
            local_190 = (int *)operator_new(0x18);
            if (local_190 == (undefined4 *)0x0) {
              local_190 = (undefined4 *)0x0;
            }
            else {
              *local_190 = 0;
              local_190[1] = 0;
              local_190[2] = 0;
              local_190[3] = 0;
              local_190[4] = 0;
            }
            iVar1 = *(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4);
            iVar6 = *(int *)(iVar1 + 0x24);
            if (*(int *)(iVar1 + 0x2c) < iVar6 + 1) {
              if (*(int *)(iVar1 + 0x34) == 0) {
                iVar5 = *(int *)(iVar1 + 0x2c) / 2;
                iVar8 = 1;
                if (0 < iVar5) {
                  iVar8 = iVar5;
                }
                if (iVar8 + iVar6 < 1) {
                  local_18c = (int *)0x1;
                }
                else {
                  if (iVar5 < 1) {
                    iVar5 = 1;
                  }
                  local_18c = (int *)(iVar6 + iVar5);
                }
              }
              else {
                local_18c = (int *)(*(int *)(iVar1 + 0x34) + iVar6);
              }
              pvVar2 = operator_new((int)local_18c * 4);
              iVar6 = 0;
              if (0 < *(int *)(iVar1 + 0x24)) {
                do {
                  *(undefined4 *)((int)pvVar2 + iVar6 * 4) =
                       *(undefined4 *)(*(int *)(iVar1 + 0x28) + iVar6 * 4);
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(int *)(iVar1 + 0x24));
              }
              FUN_006bf840(*(undefined4 *)(iVar1 + 0x28));
              *(void **)(iVar1 + 0x28) = pvVar2;
              *(int **)(iVar1 + 0x2c) = local_18c;
            }
            *(int **)(*(int *)(iVar1 + 0x28) + *(int *)(iVar1 + 0x24) * 4) = local_190;
            *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + 1;
            local_194 = (int *)((int)local_194 + 1);
          } while ((int)local_194 < local_15c);
        }
        iVar1 = 0;
        if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x24)) {
          do {
            FUN_00649920(local_144,s_Conversation_d_Camera_d_CameraPa_00743844,iVar3,iVar1);
            uVar4 = *(undefined4 *)
                     (*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x28) + iVar1 * 4);
            local_4 = 0xe;
            uVar7 = FUN_00649940(uVar4);
            FUN_006405e0(uVar7,uVar4);
            local_4 = 0xffffffff;
            FUN_00649950();
            FUN_00649920(local_118,s_Conversation_d_Camera_d_StartTim_00743820,iVar3,iVar1);
            iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x28) +
                            iVar1 * 4) + 8;
            local_4 = 0xf;
            uVar4 = FUN_00649940(iVar6);
            FUN_00640420(uVar4,iVar6);
            local_4 = 0xffffffff;
            FUN_00649950();
            FUN_00649920(local_13c,s_Conversation_d_Camera_d_TimeRefI_007437fc,iVar3,iVar1);
            iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x28) +
                            iVar1 * 4) + 0xc;
            local_4 = 0x10;
            uVar4 = FUN_00649940(iVar6);
            FUN_00640450(uVar4,iVar6);
            local_4 = 0xffffffff;
            FUN_00649950();
            FUN_00649920(local_11c,s_Conversation_d_Camera_d_Looping_007437dc,iVar3,iVar1);
            local_4 = 0x11;
            iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x28) +
                            iVar1 * 4) + 0x10;
            uVar4 = FUN_00649940(iVar6);
            FUN_006405b0(uVar4,iVar6);
            local_4 = 0xffffffff;
            FUN_00649950();
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x24));
        }
        FUN_00649920(local_134,s_Conversation_d_PopToPositions_007437bc,iVar3);
        piVar11 = &local_154;
        local_4 = 0x12;
        uVar4 = FUN_00649940(piVar11);
        FUN_00640450(uVar4,piVar11);
        local_4 = 0xffffffff;
        FUN_00649950();
        local_194 = (int *)0x0;
        if (0 < local_154) {
          do {
            local_190 = (int *)operator_new(0x18);
            if (local_190 == (undefined4 *)0x0) {
              local_190 = (undefined4 *)0x0;
            }
            else {
              *local_190 = 0;
              local_190[1] = 0;
              local_190[2] = 0;
              local_190[3] = 0;
              local_190[4] = 0;
              local_190[5] = 0;
            }
            iVar1 = *(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4);
            iVar6 = *(int *)(iVar1 + 0x40);
            if (*(int *)(iVar1 + 0x48) < iVar6 + 1) {
              if (*(int *)(iVar1 + 0x50) == 0) {
                iVar5 = *(int *)(iVar1 + 0x48) / 2;
                iVar8 = 1;
                if (0 < iVar5) {
                  iVar8 = iVar5;
                }
                if (iVar8 + iVar6 < 1) {
                  local_18c = (int *)0x1;
                }
                else {
                  if (iVar5 < 1) {
                    iVar5 = 1;
                  }
                  local_18c = (int *)(iVar5 + iVar6);
                }
              }
              else {
                local_18c = (int *)(*(int *)(iVar1 + 0x50) + iVar6);
              }
              pvVar2 = operator_new((int)local_18c * 4);
              iVar6 = 0;
              if (0 < *(int *)(iVar1 + 0x40)) {
                do {
                  *(undefined4 *)((int)pvVar2 + iVar6 * 4) =
                       *(undefined4 *)(*(int *)(iVar1 + 0x44) + iVar6 * 4);
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(int *)(iVar1 + 0x40));
              }
              FUN_006bf840(*(undefined4 *)(iVar1 + 0x44));
              *(void **)(iVar1 + 0x44) = pvVar2;
              *(int **)(iVar1 + 0x48) = local_18c;
            }
            *(int **)(*(int *)(iVar1 + 0x44) + *(int *)(iVar1 + 0x40) * 4) = local_190;
            *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
            local_194 = (int *)((int)local_194 + 1);
          } while ((int)local_194 < local_154);
        }
        iVar1 = 0;
        if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x40)) {
          do {
            FUN_00649920(local_110,s_Conversation_d_PopPosition_d_Cha_00743794,iVar3,iVar1);
            uVar4 = *(undefined4 *)
                     (*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x44) + iVar1 * 4);
            local_4 = 0x13;
            uVar7 = FUN_00649940(uVar4);
            FUN_006405e0(uVar7,uVar4);
            local_4 = 0xffffffff;
            FUN_00649950();
            FUN_00649920(local_12c,s_Conversation_d_PopPosition_d_Vol_00743770,iVar3,iVar1);
            iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x44) +
                            iVar1 * 4) + 8;
            local_4 = 0x14;
            uVar4 = FUN_00649940(iVar6);
            FUN_006405e0(uVar4,iVar6);
            local_4 = 0xffffffff;
            FUN_00649950();
            FUN_00649920(local_114,s_Conversation_d_PopPosition_d_Fac_0074374c,iVar3,iVar1);
            iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x44) +
                            iVar1 * 4) + 0x10;
            local_4 = 0x15;
            uVar4 = FUN_00649940(iVar6);
            FUN_006405e0(uVar4,iVar6);
            local_4 = 0xffffffff;
            FUN_00649950();
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x40));
        }
        FUN_00649920(&local_150,s_Conversation_d_AnimInfos_00743730,iVar3);
        piVar11 = &local_160;
        local_4 = 0x16;
        uVar4 = FUN_00649940(piVar11);
        FUN_00640450(uVar4,piVar11);
        local_4 = 0xffffffff;
        FUN_00649950();
        local_194 = (int *)0x0;
        if (0 < local_160) {
          do {
            local_190 = (int *)operator_new(0x60);
            local_4 = 0x17;
            local_180 = local_190;
            if (local_190 == (int *)0x0) {
              local_190 = (int *)0x0;
            }
            else {
              FUN_006499d0();
              local_190[0x14] = 0;
              local_190[0x13] = 0;
              local_190[0x15] = 0;
              local_190[0x17] = 0;
              local_190[0x16] = 0;
              local_190[0x11] = 0;
              local_190[0x12] = 0;
              *local_190 = 0;
              local_190[1] = 0;
              local_190[0xe] = 0;
              local_190[0xf] = 0;
              local_190[2] = -1;
              local_190[0x10] = 0;
            }
            iVar1 = *(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4);
            iVar6 = *(int *)(iVar1 + 0x5c);
            local_4 = 0xffffffff;
            if (*(int *)(iVar1 + 100) < iVar6 + 1) {
              if (*(int *)(iVar1 + 0x6c) == 0) {
                iVar5 = *(int *)(iVar1 + 100) / 2;
                iVar8 = 1;
                if (0 < iVar5) {
                  iVar8 = iVar5;
                }
                if (iVar8 + iVar6 < 1) {
                  local_18c = (int *)0x1;
                }
                else {
                  if (iVar5 < 1) {
                    iVar5 = 1;
                  }
                  local_18c = (int *)(iVar5 + iVar6);
                }
              }
              else {
                local_18c = (int *)(*(int *)(iVar1 + 0x6c) + iVar6);
              }
              pvVar2 = operator_new((int)local_18c * 4);
              iVar6 = 0;
              if (0 < *(int *)(iVar1 + 0x5c)) {
                do {
                  *(undefined4 *)((int)pvVar2 + iVar6 * 4) =
                       *(undefined4 *)(*(int *)(iVar1 + 0x60) + iVar6 * 4);
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(int *)(iVar1 + 0x5c));
              }
              FUN_006bf840(*(undefined4 *)(iVar1 + 0x60));
              *(void **)(iVar1 + 0x60) = pvVar2;
              *(int **)(iVar1 + 100) = local_18c;
            }
            *(int **)(*(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 0x5c) * 4) = local_190;
            *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) + 1;
            local_194 = (int *)((int)local_194 + 1);
          } while ((int)local_194 < local_160);
        }
        iVar1 = 0;
        if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x5c)) {
          do {
            FUN_00649920(&local_16c,s_Conversation_d_Anim_d_Character_00743710,iVar3,iVar1);
            uVar4 = *(undefined4 *)
                     (*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x60) + iVar1 * 4);
            local_4 = 0x18;
            uVar7 = FUN_00649940(uVar4);
            FUN_006405e0(uVar7,uVar4);
            local_4 = 0xffffffff;
            FUN_00649950();
            FUN_00649920(&local_184,s_Conversation_d_Anim_d_AnimationN_007436ec,iVar3,iVar1);
            puVar9 = local_cc;
            local_4 = 0x19;
            uVar4 = FUN_00649940(puVar9);
            FUN_00640480(uVar4,puVar9);
            local_4 = 0xffffffff;
            FUN_00649950();
            FUN_0064a2e0(local_cc);
            FUN_00649920(&local_170,s_Conversation_d_Anim_d_Length_007436cc,iVar3,iVar1);
            iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x60) +
                            iVar1 * 4) + 0x40;
            local_4 = 0x1a;
            uVar4 = FUN_00649940(iVar6);
            FUN_00640420(uVar4,iVar6);
            local_4 = 0xffffffff;
            FUN_00649950();
            FUN_00649920(local_168,s_Conversation_d_Anim_d_StartTime_007436ac,iVar3,iVar1);
            local_4 = 0x1b;
            iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x60) +
                            iVar1 * 4) + 0x38;
            uVar4 = FUN_00649940(iVar6);
            FUN_00640420(uVar4,iVar6);
            local_4 = 0xffffffff;
            FUN_00649950();
            FUN_00649920(local_178,s_Conversation_d_Anim_d_TimeRefID_0074368c,iVar3,iVar1);
            iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x60) +
                            iVar1 * 4) + 0x3c;
            local_4 = 0x1c;
            uVar4 = FUN_00649940(iVar6);
            FUN_00640450(uVar4,iVar6);
            local_4 = 0xffffffff;
            FUN_00649950();
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(*(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4) + 0x5c));
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x4c));
  }
  local_194 = (int *)0x0;
  if (0 < local_158) {
    do {
      local_188 = (int *)operator_new(0x48);
      local_180 = local_188;
      if (local_188 == (int *)0x0) {
        local_188 = (int *)0x0;
      }
      else {
        local_188[3] = 0;
        local_188[2] = 0;
        local_188[4] = 0;
        local_188[6] = 0;
        local_188[5] = 0;
        *local_188 = 0;
        local_188[1] = 0;
        local_4._0_1_ = 0x1e;
        local_4._1_3_ = 0;
        FUN_006499d0();
        local_4 = CONCAT31(local_4._1_3_,0x1f);
        FUN_0064a2e0(s_Enter_List_s_Name_00743678);
      }
      iVar3 = *(int *)(param_1 + 0x68);
      local_4 = 0xffffffff;
      if (*(int *)(param_1 + 0x70) < iVar3 + 1) {
        if (*(int *)(param_1 + 0x78) == 0) {
          iVar6 = *(int *)(param_1 + 0x70) / 2;
          iVar1 = 1;
          if (0 < iVar6) {
            iVar1 = iVar6;
          }
          if (iVar1 + iVar3 < 1) {
            iVar3 = 1;
          }
          else {
            if (iVar6 < 1) {
              iVar6 = 1;
            }
            iVar3 = iVar3 + iVar6;
          }
        }
        else {
          iVar3 = iVar3 + *(int *)(param_1 + 0x78);
        }
        pvVar2 = operator_new(iVar3 * 4);
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0x68)) {
          do {
            *(undefined4 *)((int)pvVar2 + iVar1 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar1 * 4);
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(param_1 + 0x68));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x6c));
        *(void **)(param_1 + 0x6c) = pvVar2;
        *(int *)(param_1 + 0x70) = iVar3;
      }
      *(int **)(*(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x68) * 4) = local_188;
      local_194 = (int *)((int)local_194 + 1);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    } while ((int)local_194 < local_158);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    do {
      FUN_0063ff20();
      FUN_0063ffc0();
      FUN_00649920(local_178,s_ConversationList_d_Name_00743660,iVar3);
      puVar9 = local_10c;
      local_4 = 0x20;
      uVar4 = FUN_00649940(puVar9);
      FUN_00640480(uVar4,puVar9);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_0064a2e0(local_10c);
      FUN_00649920(local_168,s_ConversationList_d_ConversationC_00743638,iVar3);
      ppiVar12 = &local_17c;
      local_4 = 0x21;
      uVar4 = FUN_00649940(ppiVar12);
      FUN_00640450(uVar4,ppiVar12);
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + iVar3 * 4);
      piVar11 = *(int **)(iVar1 + 0x10);
      local_184 = local_17c;
      local_194 = local_17c;
      if ((int)local_17c <= (int)piVar11) {
        local_194 = piVar11;
      }
      if (local_194 != piVar11) {
        local_180 = (int *)operator_new((int)local_194 * 0x2c + 4);
        local_4 = 0x22;
        if (local_180 == (int *)0x0) {
          local_190 = (int *)0x0;
        }
        else {
          *local_180 = (int)local_194;
          local_170 = local_180 + 1;
          FUN_006c043b(local_170,0x2c,local_194,FUN_006499d0,FUN_00649ba0);
          local_190 = local_170;
        }
        local_4 = 0xffffffff;
        local_188 = (int *)0x0;
        if (0 < *(int *)(iVar1 + 8)) {
          local_18c = (int *)0x0;
          do {
            FUN_0064a320(*(int *)(iVar1 + 0xc) + (int)local_18c);
            local_188 = (int *)((int)local_188 + 1);
            local_18c = (int *)((int)local_18c + 0x2c);
          } while ((int)local_188 < *(int *)(iVar1 + 8));
        }
        if (*(int *)(iVar1 + 0xc) != 0) {
          FUN_00407f70(3);
        }
        *(int **)(iVar1 + 0xc) = local_190;
        *(int **)(iVar1 + 0x10) = local_194;
      }
      *(int **)(iVar1 + 8) = local_184;
      iVar1 = 0;
      if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x6c) + iVar3 * 4) + 8)) {
        do {
          FUN_00649920(&local_16c,s_ConversationList_d_ConversationN_00743610,iVar3,iVar1);
          puVar9 = local_cc;
          local_4 = 0x23;
          uVar4 = FUN_00649940(puVar9);
          FUN_00640480(uVar4,puVar9);
          local_4 = 0xffffffff;
          FUN_00649950();
          FUN_0064a2e0(local_cc);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(*(int *)(*(int *)(param_1 + 0x6c) + iVar3 * 4) + 8));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x68));
  }
  local_194 = (int *)0x0;
  if (0 < local_164) {
    do {
      local_188 = (int *)operator_new(0x50);
      local_180 = local_188;
      if (local_188 == (int *)0x0) {
        local_188 = (int *)0x0;
      }
      else {
        local_188[3] = 0;
        local_188[2] = 0;
        local_188[4] = 0;
        local_188[6] = 0;
        local_188[5] = 0;
        *local_188 = 0;
        local_188[1] = 0;
        local_4._0_1_ = 0x25;
        local_4._1_3_ = 0;
        FUN_006499d0();
        local_4 = CONCAT31(local_4._1_3_,0x26);
        FUN_0064a2e0(s_Enter_List_s_Name_00743678);
      }
      iVar3 = *(int *)(param_1 + 0x84);
      local_4 = 0xffffffff;
      if (*(int *)(param_1 + 0x8c) < iVar3 + 1) {
        if (*(int *)(param_1 + 0x94) == 0) {
          iVar6 = *(int *)(param_1 + 0x8c) / 2;
          iVar1 = 1;
          if (0 < iVar6) {
            iVar1 = iVar6;
          }
          if (iVar1 + iVar3 < 1) {
            iVar3 = 1;
          }
          else {
            if (iVar6 < 1) {
              iVar6 = 1;
            }
            iVar3 = iVar3 + iVar6;
          }
        }
        else {
          iVar3 = iVar3 + *(int *)(param_1 + 0x94);
        }
        pvVar2 = operator_new(iVar3 * 4);
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0x84)) {
          do {
            *(undefined4 *)((int)pvVar2 + iVar1 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x88) + iVar1 * 4);
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(param_1 + 0x84));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0x88));
        *(void **)(param_1 + 0x88) = pvVar2;
        *(int *)(param_1 + 0x8c) = iVar3;
      }
      *(int **)(*(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x84) * 4) = local_188;
      local_194 = (int *)((int)local_194 + 1);
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    } while ((int)local_194 < local_164);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x84)) {
    do {
      FUN_0063ff20();
      FUN_0063ffc0();
      FUN_00649920(local_178,s_DialogList_d_Name_007435fc,iVar3);
      puVar9 = local_10c;
      local_4 = 0x27;
      uVar4 = FUN_00649940(puVar9);
      FUN_00640480(uVar4,puVar9);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_0064a2e0(local_10c);
      FUN_00649920(local_168,s_DialogList_d_Speaker_007435e4,iVar3);
      iVar1 = *(int *)(*(int *)(param_1 + 0x88) + iVar3 * 4) + 0x48;
      local_4 = 0x28;
      uVar4 = FUN_00649940(iVar1);
      FUN_006405e0(uVar4,iVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(&local_170,s_DialogList_d_DialogCount_007435c8,iVar3);
      piVar11 = &local_174;
      local_4 = 0x29;
      uVar4 = FUN_00649940(piVar11);
      FUN_00640450(uVar4,piVar11);
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar1 = *(int *)(*(int *)(param_1 + 0x88) + iVar3 * 4);
      iVar6 = *(int *)(iVar1 + 0x10);
      local_16c = local_174;
      local_194 = (int *)local_174;
      if (local_174 <= iVar6) {
        local_194 = (int *)iVar6;
      }
      if (local_194 != (int *)iVar6) {
        local_150 = (int *)operator_new((int)local_194 * 0x2c + 4);
        local_4 = 0x2a;
        if (local_150 == (int *)0x0) {
          local_18c = (int *)0x0;
        }
        else {
          *local_150 = (int)local_194;
          local_184 = local_150 + 1;
          FUN_006c043b(local_184,0x2c,local_194,FUN_006499d0,FUN_00649ba0);
          local_18c = local_184;
        }
        local_4 = 0xffffffff;
        local_188 = (int *)0x0;
        if (0 < *(int *)(iVar1 + 8)) {
          local_190 = (int *)0x0;
          do {
            FUN_0064a320(*(int *)(iVar1 + 0xc) + (int)local_190);
            local_188 = (int *)((int)local_188 + 1);
            local_190 = (int *)((int)local_190 + 0x2c);
          } while ((int)local_188 < *(int *)(iVar1 + 8));
        }
        iVar6 = *(int *)(iVar1 + 0xc);
        if (iVar6 != 0) {
          local_184 = (int *)(iVar6 + -4);
          FUN_006c026a(iVar6,0x2c,*(undefined4 *)(iVar6 + -4),FUN_00649ba0);
          FUN_006bf840(local_184);
        }
        *(int **)(iVar1 + 0xc) = local_18c;
        *(int **)(iVar1 + 0x10) = local_194;
      }
      *(int *)(iVar1 + 8) = local_16c;
      iVar1 = 0;
      if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x88) + iVar3 * 4) + 8)) {
        do {
          FUN_00649920(&local_180,s_DialogList_d_DialogName_d_007435ac,iVar3,iVar1);
          puVar9 = local_4c;
          local_4 = 0x2b;
          uVar4 = FUN_00649940(puVar9);
          FUN_00640480(uVar4,puVar9);
          local_4 = 0xffffffff;
          FUN_00649950();
          FUN_0064a2e0(local_4c);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(*(int *)(*(int *)(param_1 + 0x88) + iVar3 * 4) + 8));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x84));
  }
  ExceptionList = local_c;
  return;
}

