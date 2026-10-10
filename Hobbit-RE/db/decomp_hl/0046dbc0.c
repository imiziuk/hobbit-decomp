
uint __thiscall FUN_0046dbc0(int param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  ushort uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  bool bVar11;
  uint local_2b4;
  int local_2b0;
  int local_2ac;
  int iStack_2a8;
  undefined1 auStack_2a4 [4];
  undefined1 auStack_2a0 [4];
  undefined1 auStack_29c [4];
  undefined1 auStack_298 [4];
  undefined1 auStack_294 [4];
  int local_290;
  undefined1 auStack_28c [4];
  undefined1 auStack_288 [4];
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined1 auStack_26c [4];
  undefined1 auStack_268 [4];
  int local_264 [150];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d132a;
  local_c = ExceptionList;
  local_284 = 0x7f7fffff;
  local_280 = 0x7f7fffff;
  local_27c = 0x7f7fffff;
  local_278 = 0xff7fffff;
  local_274 = 0xff7fffff;
  local_270 = 0xff7fffff;
  ExceptionList = &local_c;
  iVar5 = FUN_00647cf0(s_LocalBBox_00724d04);
  iVar6 = FUN_00647e80(param_2,s_LocalBBox_00724d04,iVar5);
  if (iVar6 == 0) {
    iVar6 = FUN_00647cf0(param_2);
    if (iVar5 == iVar6) {
      if (*param_3 == 9) {
        FUN_004357e0(param_3 + 0x82);
        FUN_004357e0(param_3 + 0x85);
        ExceptionList = local_c;
        return 1;
      }
    }
    else {
      iVar6 = FUN_004bfed0(iVar5 + param_2,param_3,&DAT_007278f4,&local_284);
      if (iVar6 != 0) {
        ExceptionList = local_c;
        return 1;
      }
      iVar5 = FUN_004bfed0(iVar5 + param_2,param_3,&DAT_007278ec,&local_278);
      if (iVar5 != 0) {
        ExceptionList = local_c;
        return 1;
      }
    }
  }
  iVar5 = FUN_00647cf0(s_WorldBBox_00724d10);
  iVar6 = FUN_00647e80(param_2,s_WorldBBox_00724d10,iVar5);
  if (iVar6 == 0) {
    iVar6 = FUN_00647cf0(param_2);
    if (iVar5 == iVar6) {
      if (*param_3 == 9) {
        FUN_004357e0(param_3 + 0x82);
        FUN_004357e0(param_3 + 0x85);
        ExceptionList = local_c;
        return 1;
      }
    }
    else {
      iVar6 = FUN_004bfed0(iVar5 + param_2,param_3,&DAT_007278f4,&local_284);
      if (iVar6 != 0) {
        ExceptionList = local_c;
        return 1;
      }
      iVar5 = FUN_004bfed0(iVar5 + param_2,param_3,&DAT_007278ec,&local_278);
      if (iVar5 != 0) {
        ExceptionList = local_c;
        return 1;
      }
    }
  }
  iVar5 = FUN_00647cf0(s_Position_00724d1c);
  iVar6 = FUN_00647e80(param_2,s_Position_00724d1c,iVar5);
  if (iVar6 == 0) {
    iVar6 = FUN_00647cf0(param_2);
    if (iVar5 == iVar6) {
      bVar11 = *param_3 == 8;
    }
    else {
      iVar5 = iVar5 + param_2;
      iVar6 = FUN_00647e40(&DAT_00724e78,iVar5);
      if (((iVar6 != 0) && (iVar6 = FUN_00647e40(&DAT_00724e74,iVar5), iVar6 != 0)) &&
         (iVar5 = FUN_00647e40(&DAT_00724e70,iVar5), iVar5 != 0)) goto LAB_0046ddab;
      bVar11 = *param_3 == 2;
    }
    if (bVar11) {
      ExceptionList = local_c;
      return 1;
    }
  }
LAB_0046ddab:
  iVar5 = FUN_00647e40(param_2,s_Reset_Default_Audio_Durations_007278cc);
  if (((iVar5 == 0) && (*param_3 == 3)) && (param_3[0x95] != 0)) {
    local_290 = *(int *)(param_1 + 0xe8);
    iVar5 = 0;
    if (0 < local_290) {
      do {
        piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0xec) + iVar5 * 4) + 0x30);
        if (piVar3 != (int *)0x0) {
          FUN_00649920(&local_2ac,s_Actions_Action__d_Sample_007278b0,iVar5);
          iVar6 = *piVar3;
          local_4 = 0;
          uVar7 = FUN_00649940();
          (**(code **)(iVar6 + 0x24))(local_264,iVar5,uVar7);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (local_264[0] != 0) {
            FUN_00649920(auStack_28c,s_Actions_Action__d_Sample_007278b0,iVar5);
            iVar6 = *piVar3;
            local_4 = 1;
            uVar7 = FUN_00649940(local_264);
            (**(code **)(iVar6 + 0x1c))(iVar5,uVar7);
            local_4 = 0xffffffff;
            FUN_00649950();
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_290);
    }
  }
  iVar5 = FUN_00647e40(param_2,s_Letterbox_00727204);
  if (iVar5 == 0) {
    if (*param_3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    *(uint *)(param_1 + 0x194) =
         (param_3[0x95] << 0xf ^ *(uint *)(param_1 + 0x194)) & 0x8000 ^ *(uint *)(param_1 + 0x194);
  }
  else {
    iVar5 = FUN_00647e40(param_2,s_Disable_Control_00727628);
    if (iVar5 == 0) {
      if (*param_3 != 3) {
        ExceptionList = local_c;
        return 0;
      }
      *(uint *)(param_1 + 0x194) =
           (param_3[0x95] << 0x10 ^ *(uint *)(param_1 + 0x194)) & 0x10000 ^
           *(uint *)(param_1 + 0x194);
    }
    else {
      iVar5 = FUN_00647e40(param_2,s_BypassQueue_007271e8);
      if (iVar5 == 0) {
        if (*param_3 != 3) {
          ExceptionList = local_c;
          return 0;
        }
        *(uint *)(param_1 + 0x194) =
             (param_3[0x95] << 0x14 ^ *(uint *)(param_1 + 0x194)) & 0x100000 ^
             *(uint *)(param_1 + 0x194);
      }
      else {
        iVar5 = FUN_00647e40(param_2,s_LowPriority_007271dc);
        if ((iVar5 == 0) && (*param_3 == 3)) {
          iVar5 = param_3[0x95];
          uVar8 = (iVar5 << 0x18 ^ *(uint *)(param_1 + 0x194)) & 0x1000000 ^
                  *(uint *)(param_1 + 0x194);
          *(uint *)(param_1 + 0x194) = uVar8;
          if (iVar5 != 0) {
            *(uint *)(param_1 + 0x194) = uVar8 & 0xfffffdff;
          }
        }
        else {
          iVar5 = FUN_00647e40(param_2,s_Subtitle_In_Box_00727618);
          if (iVar5 == 0) {
            if (*param_3 != 3) {
              ExceptionList = local_c;
              return 0;
            }
            *(uint *)(param_1 + 0x194) =
                 (param_3[0x95] << 0x16 ^ *(uint *)(param_1 + 0x194)) & 0x400000 ^
                 *(uint *)(param_1 + 0x194);
          }
          else {
            iVar5 = FUN_00647e40(param_2,s_Camera_Pop_At_End_007273a8);
            if (iVar5 == 0) {
              if (*param_3 != 3) {
                ExceptionList = local_c;
                return 0;
              }
              *(uint *)(param_1 + 0x194) =
                   (param_3[0x95] << 3 ^ *(uint *)(param_1 + 0x194)) & 8 ^
                   *(uint *)(param_1 + 0x194);
            }
            else {
              iVar5 = FUN_00647e40(param_2,s_Shots_Number_of_Shots_007274f0);
              if ((iVar5 == 0) && (*param_3 == 1)) {
                FUN_0046af70(param_3[0x93],1);
              }
              else {
                iVar5 = 0;
                if (0 < *(int *)(param_1 + 0xb0)) {
                  do {
                    FUN_00649920(auStack_28c,s_Shots_Shot__d_Name_0072789c,iVar5);
                    local_4 = 2;
                    uVar7 = FUN_00649940();
                    iVar6 = FUN_00647e40(param_2,uVar7);
                    if ((iVar6 == 0) &&
                       ((((iVar6 = *param_3, iVar6 == 4 || (iVar6 == 7)) || (iVar6 == 6)) ||
                        (iVar6 == 0xd)))) {
                      FUN_0064a2e0(param_3 + 2);
                    }
                    else {
                      FUN_00649920(&local_290,s_Shot__d_Name_007274e0,iVar5);
                      local_4 = CONCAT31(local_4._1_3_,3);
                      uVar7 = FUN_00649940();
                      iVar6 = FUN_00647e40(param_2,uVar7);
                      if ((iVar6 == 0) &&
                         (((iVar6 = *param_3, iVar6 == 4 || (iVar6 == 7)) ||
                          ((iVar6 == 6 || (iVar6 == 0xd)))))) {
                        FUN_0064a2e0(param_3 + 2);
                      }
                      local_4 = CONCAT31(local_4._1_3_,2);
                      FUN_00649950();
                    }
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    FUN_00649920(&local_2ac,s_Shots_Shot__d_Next_Shot_00727884,iVar5);
                    local_4 = 4;
                    uVar7 = FUN_00649940();
                    iVar6 = FUN_00647e40(param_2,uVar7);
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar6 == 0) {
                      if ((*param_3 != 1) && (*param_3 != 0xc)) {
                        ExceptionList = local_c;
                        return 0;
                      }
                      *(int *)(iVar5 * 0x3c + 0x2c + *(int *)(param_1 + 0xb4)) = param_3[0x93];
                      ExceptionList = local_c;
                      return 1;
                    }
                    FUN_00649920(auStack_26c,s_Shots_Shot__d_Skip_Shot_0072786c,iVar5);
                    local_4 = 5;
                    uVar7 = FUN_00649940();
                    iVar6 = FUN_00647e40(param_2,uVar7);
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar6 == 0) {
LAB_0046e568:
                      if ((*param_3 != 1) && (*param_3 != 0xc)) {
                        ExceptionList = local_c;
                        return 0;
                      }
                      *(int *)(iVar5 * 0x3c + 0x30 + *(int *)(param_1 + 0xb4)) = param_3[0x93];
                      ExceptionList = local_c;
                      return 1;
                    }
                    FUN_00649920(auStack_288,s_Shots_Shot__d_Max_Time_00727854,iVar5);
                    local_4 = 6;
                    uVar7 = FUN_00649940();
                    iVar6 = FUN_00647e40(param_2,uVar7);
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar6 == 0) {
LAB_0046e59a:
                      if (*param_3 == 2) {
                        *(int *)(iVar5 * 0x3c + 0x34 + *(int *)(param_1 + 0xb4)) = param_3[0x94];
                        ExceptionList = local_c;
                        return 1;
                      }
                      ExceptionList = local_c;
                      return 0;
                    }
                    FUN_00649920(auStack_29c,s_Shots_Shot__d_Time_00727840,iVar5);
                    local_4 = 7;
                    uVar7 = FUN_00649940();
                    iVar6 = FUN_00647e40(param_2,uVar7);
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar6 == 0) {
LAB_0046e5c5:
                      if (*param_3 == 2) {
                        *(int *)(iVar5 * 0x3c + 0x38 + *(int *)(param_1 + 0xb4)) = param_3[0x94];
                        ExceptionList = local_c;
                        return 1;
                      }
                      ExceptionList = local_c;
                      return 0;
                    }
                    FUN_00649920(auStack_294,s_Shot__d_Next_Shot_0072782c,iVar5);
                    local_4 = 8;
                    uVar7 = FUN_00649940();
                    iVar6 = FUN_00647e40(param_2,uVar7);
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar6 == 0) {
                      if ((*param_3 != 1) && (*param_3 != 0xc)) {
                        ExceptionList = local_c;
                        return 0;
                      }
                      *(int *)(iVar5 * 0x3c + 0x2c + *(int *)(param_1 + 0xb4)) = param_3[0x93];
                      ExceptionList = local_c;
                      return 1;
                    }
                    FUN_00649920(auStack_298,s_Shot__d_Skip_Shot_00727818,iVar5);
                    local_4 = 9;
                    uVar7 = FUN_00649940();
                    iVar6 = FUN_00647e40(param_2,uVar7);
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar6 == 0) goto LAB_0046e568;
                    FUN_00649920(auStack_2a4,s_Shot__d_Max_Time_00727804,iVar5);
                    local_4 = 10;
                    uVar7 = FUN_00649940();
                    iVar6 = FUN_00647e40(param_2,uVar7);
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar6 == 0) goto LAB_0046e59a;
                    FUN_00649920(auStack_2a0,s_Shot__d_Time_007274d0,iVar5);
                    local_4 = 0xb;
                    uVar7 = FUN_00649940();
                    iVar6 = FUN_00647e40(param_2,uVar7);
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if (iVar6 == 0) goto LAB_0046e5c5;
                    local_2b4 = 0;
                    FUN_00649920(&iStack_2a8,s_Shot__d_Test_Me_007277f4,iVar5);
                    local_4 = 0xc;
                    uVar7 = FUN_00649940();
                    iVar6 = FUN_00647e40(param_2,uVar7);
                    if ((iVar6 == 0) && (*param_3 == 3)) {
                      local_2b4 = param_3[0x95];
                      bVar11 = true;
                    }
                    else {
                      bVar11 = false;
                    }
                    local_4 = 0xffffffff;
                    FUN_00649950();
                    if ((bVar11) && (local_2b4 != 0)) {
                      *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) | 4;
                      *(short *)(param_1 + 0x18e) = (short)iVar5;
                      ExceptionList = local_c;
                      return 1;
                    }
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < *(int *)(param_1 + 0xb0));
                }
                iVar5 = FUN_00647e40(param_2,s_Sync_Points_Number_of_Sync_Point_007274a0);
                if ((iVar5 == 0) && (*param_3 == 1)) {
                  FUN_0046b050(param_3[0x93],1);
                }
                else {
                  iVar5 = 0;
                  if (0 < *(int *)(param_1 + 0xcc)) {
                    local_2b0 = 0;
                    do {
                      FUN_00649920(&iStack_2a8,s_Sync_Points_Sync_Point__d_Name_00727480,iVar5);
                      local_4 = 0xd;
                      uVar7 = FUN_00649940();
                      iVar6 = FUN_00647e40(param_2,uVar7);
                      if ((iVar6 == 0) &&
                         ((((iVar6 = *param_3, iVar6 == 4 || (iVar6 == 7)) || (iVar6 == 6)) ||
                          (iVar6 == 0xd)))) {
                        FUN_0064a2e0(param_3 + 2);
                      }
                      local_4 = 0xffffffff;
                      FUN_00649950();
                      FUN_00649920(auStack_2a0,s_Sync_Points_Sync_Point__d_Action_007277d0,iVar5);
                      local_4 = 0xe;
                      uVar7 = FUN_00649940();
                      iVar6 = FUN_00647e40(param_2,uVar7);
                      local_4 = 0xffffffff;
                      FUN_00649950();
                      if (iVar6 == 0) {
LAB_0046e94b:
                        if ((*param_3 != 1) && (*param_3 != 0xc)) {
                          ExceptionList = local_c;
                          return 0;
                        }
                        *(int *)(iVar5 * 0x40 + 0x30 + *(int *)(param_1 + 0xd0)) = param_3[0x93];
                        ExceptionList = local_c;
                        return 1;
                      }
                      FUN_00649920(auStack_2a4,s_Sync_Points_Sync_Point__d_Shot_007277b0,iVar5);
                      local_4 = 0xf;
                      uVar7 = FUN_00649940();
                      iVar6 = FUN_00647e40(param_2,uVar7);
                      local_4 = 0xffffffff;
                      FUN_00649950();
                      if (iVar6 == 0) goto LAB_0046e94b;
                      FUN_00649920(auStack_298,s_Sync_Points_Sync_Point__d_Offset_0072745c,iVar5);
                      local_4 = 0x10;
                      uVar7 = FUN_00649940();
                      iVar6 = FUN_00647e40(param_2,uVar7);
                      local_4 = 0xffffffff;
                      FUN_00649950();
                      if (iVar6 == 0) {
                        if (*param_3 == 2) {
                          *(int *)(iVar5 * 0x40 + 0x34 + *(int *)(param_1 + 0xd0)) = param_3[0x94];
                          ExceptionList = local_c;
                          return 1;
                        }
                        ExceptionList = local_c;
                        return 0;
                      }
                      local_2b4 = (*(byte *)(*(int *)(param_1 + 0xd0) + 0x3a + local_2b0) & 2) >> 1;
                      FUN_00649920(auStack_294,s_Sync_Points_Sync_Point__d_Offset_00727408,iVar5);
                      local_4 = 0x11;
                      uVar7 = FUN_00649940();
                      iVar6 = FUN_00647e40(param_2,uVar7);
                      if ((iVar6 == 0) && (*param_3 == 3)) {
                        local_2b4 = param_3[0x95];
                        bVar11 = true;
                      }
                      else {
                        bVar11 = false;
                      }
                      local_4 = 0xffffffff;
                      FUN_00649950();
                      if (bVar11) {
                        if (local_2b4 != 0) {
                          pbVar1 = (byte *)(iVar5 * 0x40 + 0x3a + *(int *)(param_1 + 0xd0));
                          *pbVar1 = *pbVar1 | 2;
                          ExceptionList = local_c;
                          return 1;
                        }
                        pbVar1 = (byte *)(iVar5 * 0x40 + 0x3a + *(int *)(param_1 + 0xd0));
                        *pbVar1 = *pbVar1 & 0xfd;
                        ExceptionList = local_c;
                        return 1;
                      }
                      FUN_00649920(auStack_29c,s_Sync_Points_Sync_Point__d_Shot_I_00727434,iVar5);
                      local_4 = 0x12;
                      uVar7 = FUN_00649940();
                      iVar6 = FUN_00647e40(param_2,uVar7);
                      local_4 = 0xffffffff;
                      FUN_00649950();
                      if (iVar6 == 0) {
                        if (*param_3 == 1) {
                          *(short *)(iVar5 * 0x40 + 0x38 + *(int *)(param_1 + 0xd0)) =
                               (short)param_3[0x93];
                          ExceptionList = local_c;
                          return 1;
                        }
                        ExceptionList = local_c;
                        return 0;
                      }
                      iVar5 = iVar5 + 1;
                      local_2b0 = local_2b0 + 0x40;
                    } while (iVar5 < *(int *)(param_1 + 0xcc));
                  }
                  iVar5 = FUN_00647e40(param_2,s_Actions_Number_of_Actions_00727794);
                  if (((iVar5 == 0) && (*param_3 == 1)) ||
                     ((iVar5 = FUN_00647e40(param_2,s_Number_of_Actions_007273cc), iVar5 == 0 &&
                      (*param_3 == 1)))) {
                    FUN_0046b180(param_3[0x93],1);
                  }
                  else {
                    iVar5 = 0;
                    local_2ac = 0;
                    if (0 < *(int *)(param_1 + 0xe8)) {
                      do {
                        iStack_2a8 = *(int *)(*(int *)(param_1 + 0xec) + iVar5 * 4) + 4;
                        FUN_00649920(auStack_2a0,s_Actions_Action__d_Name_0072777c,iVar5);
                        local_4 = 0x13;
                        uVar7 = FUN_00649940();
                        iVar6 = FUN_00647e40(param_2,uVar7);
                        if ((iVar6 == 0) &&
                           ((((iVar6 = *param_3, iVar6 == 4 || (iVar6 == 7)) || (iVar6 == 6)) ||
                            (iVar6 == 0xd)))) {
                          FUN_0064a2e0(param_3 + 2);
                          bVar11 = true;
                        }
                        else {
                          bVar11 = false;
                        }
                        local_4 = 0xffffffff;
                        FUN_00649950();
                        if (bVar11) {
                          ExceptionList = local_c;
                          return 1;
                        }
                        FUN_00649920(auStack_2a4,s_Actions_Action__d_Type_00727764,iVar5);
                        local_4 = 0x14;
                        uVar7 = FUN_00649940();
                        iVar6 = FUN_00647e40(param_2,uVar7);
                        if ((iVar6 == 0) && ((*param_3 == 1 || (*param_3 == 0xc)))) {
                          local_2ac = param_3[0x93];
                          bVar11 = true;
                        }
                        else {
                          bVar11 = false;
                        }
                        local_4 = 0xffffffff;
                        FUN_00649950();
                        if (bVar11) {
                          if (local_2ac < 0xc) {
                            if (local_2ac < 0) {
                              local_2ac = 0;
                            }
                          }
                          else {
                            local_2ac = 0xc;
                          }
                          iVar6 = local_2ac;
                          iVar5 = iVar5 * 4;
                          piVar3 = *(int **)(iVar5 + *(int *)(param_1 + 0xec));
                          if (*piVar3 != local_2ac) {
                            puVar4 = (undefined4 *)piVar3[0xc];
                            if (puVar4 != (undefined4 *)0x0) {
                              (**(code **)*puVar4)(1);
                            }
                            iVar9 = *(int *)(param_1 + 0xec);
                            uVar7 = FUN_00471b00(iVar6);
                            *(undefined4 *)(*(int *)(iVar9 + iVar5) + 0x30) = uVar7;
                            **(int **)(iVar5 + *(int *)(param_1 + 0xec)) = iVar6;
                          }
                          if (*(int *)(param_1 + 0xcc) == 0) {
                            FUN_0046b050(1,1);
                          }
                          if (*(int *)(param_1 + 0xb0) != 0) {
                            ExceptionList = local_c;
                            return 1;
                          }
                          FUN_0046af70(1,1);
                          FUN_0064a2e0(s_Shot_0_007276dc);
                          ExceptionList = local_c;
                          return 1;
                        }
                        iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0xec) + iVar5 * 4) + 0x30);
                        if (iVar6 != 0) {
                          local_2b0._0_2_ = *(undefined2 *)(iVar6 + 0xc);
                          FUN_00649920(auStack_298,s_Actions_Action__d_Sync_Point_00727744,iVar5);
                          local_4 = 0x15;
                          uVar7 = FUN_00649940();
                          iVar6 = FUN_00647e40(param_2,uVar7);
                          if ((iVar6 == 0) && ((*param_3 == 1 || (*param_3 == 0xc)))) {
                            local_2b0._0_2_ = (undefined2)param_3[0x93];
                            bVar11 = true;
                          }
                          else {
                            bVar11 = false;
                          }
                          local_4 = 0xffffffff;
                          FUN_00649950();
                          if (bVar11) {
                            *(undefined2 *)
                             (*(int *)(*(int *)(*(int *)(param_1 + 0xec) + iVar5 * 4) + 0x30) + 0xc)
                                 = (undefined2)local_2b0;
                            ExceptionList = local_c;
                            return 1;
                          }
                          local_2b0._0_1_ =
                               (byte)((short)(*(short *)(*(int *)(*(int *)(*(int *)(param_1 + 0xec)
                                                                          + iVar5 * 4) + 0x30) +
                                                        0x10) << 0xf) >> 0xf);
                          FUN_00649920(auStack_294,s_Actions_Action__d_FinishShot_00727724,iVar5);
                          local_4 = 0x16;
                          uVar7 = FUN_00649940();
                          iVar6 = FUN_00647e40(param_2,uVar7);
                          if ((iVar6 == 0) && (*param_3 == 3)) {
                            local_2b0._0_1_ = (byte)param_3[0x95];
                            bVar11 = true;
                          }
                          else {
                            bVar11 = false;
                          }
                          local_4 = 0xffffffff;
                          FUN_00649950();
                          if (bVar11) {
                            iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0xec) + iVar5 * 4) + 0x30);
                            uVar2 = *(ushort *)(iVar5 + 0x10);
                            *(ushort *)(iVar5 + 0x10) =
                                 (byte)((byte)uVar2 ^ (byte)local_2b0) & 1 ^ uVar2;
                            ExceptionList = local_c;
                            return 1;
                          }
                          local_2b0 = 0;
                          FUN_00649920(auStack_29c,s_Actions_Action__d_Finish_Shot_00727704,iVar5);
                          local_4 = 0x17;
                          uVar7 = FUN_00649940();
                          iVar6 = FUN_00647e40(param_2,uVar7);
                          if ((iVar6 == 0) && (*param_3 == 1)) {
                            local_2b0 = param_3[0x93];
                            bVar11 = true;
                          }
                          else {
                            bVar11 = false;
                          }
                          local_4 = 0xffffffff;
                          FUN_00649950();
                          if (bVar11) {
                            iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0xec) + iVar5 * 4) + 0x30);
                            if (local_2b0 ==
                                *(short *)(*(short *)(iVar5 + 0xc) * 0x40 + 0x38 +
                                          *(int *)(param_1 + 0xd0))) {
                              *(byte *)(iVar5 + 0x10) = *(byte *)(iVar5 + 0x10) | 1;
                              ExceptionList = local_c;
                              return 1;
                            }
                            *(byte *)(iVar5 + 0x10) = *(byte *)(iVar5 + 0x10) & 0xfe;
                            ExceptionList = local_c;
                            return 1;
                          }
                          if (**(int **)(*(int *)(param_1 + 0xec) + iVar5 * 4) == 0xb) {
                            FUN_00649920(auStack_288,s_Actions_Action__d_Ends_In_Shot_007276e4,iVar5
                                        );
                            local_4 = 0x18;
                            uVar7 = FUN_00649940();
                            iVar6 = FUN_00647e40(param_2,uVar7);
                            if (iVar6 == 0) {
                              bVar11 = *param_3 == 1;
                            }
                            else {
                              bVar11 = false;
                            }
                            local_4 = 0xffffffff;
                            FUN_00649950();
                            if (bVar11) {
                              ExceptionList = local_c;
                              return 1;
                            }
                          }
                          iVar6 = (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xec) +
                                                                  iVar5 * 4) + 0x30) + 0x1c))
                                            (iVar5,param_2,param_3);
                          if (iVar6 != 0) {
                            ExceptionList = local_c;
                            return 1;
                          }
                        }
                        iVar5 = iVar5 + 1;
                      } while (iVar5 < *(int *)(param_1 + 0xe8));
                    }
                    local_2b0 = *(int *)(param_1 + 0x1c8);
                    iVar5 = FUN_00647e40(param_2,s_Num_Participants_00727394);
                    if ((iVar5 == 0) && (*param_3 == 1)) {
                      local_2b0 = param_3[0x93];
                      iVar5 = *(int *)(param_1 + 0x1c8);
                      while (local_2b0 < iVar5) {
                        iVar5 = (*(int *)(param_1 + 0x1c8) - local_2b0) + -1;
                        if (0 < iVar5) {
                          iVar6 = local_2b0 * 8;
                          do {
                            iVar9 = *(int *)(param_1 + 0x1cc);
                            *(undefined4 *)(iVar9 + iVar6) = *(undefined4 *)(iVar9 + 8 + iVar6);
                            *(undefined4 *)(iVar9 + 4 + iVar6) =
                                 *(undefined4 *)(iVar9 + 0xc + iVar6);
                            iVar6 = iVar6 + 8;
                            iVar5 = iVar5 + -1;
                          } while (iVar5 != 0);
                        }
                        iVar5 = *(int *)(param_1 + 0x1c8) + -1;
                        *(int *)(param_1 + 0x1c8) = iVar5;
                      }
                      while (iVar5 < local_2b0) {
                        iVar5 = *(int *)(param_1 + 0x1c8);
                        if (*(int *)(param_1 + 0x1d0) < iVar5 + 1) {
                          if (*(int *)(param_1 + 0x1d8) == 0) {
                            iVar9 = *(int *)(param_1 + 0x1d0) / 2;
                            iVar6 = 1;
                            if (0 < iVar9) {
                              iVar6 = iVar9;
                            }
                            if (iVar6 + iVar5 < 1) {
                              local_2b4 = 1;
                            }
                            else {
                              if (iVar9 < 1) {
                                iVar9 = 1;
                              }
                              local_2b4 = iVar9 + iVar5;
                            }
                          }
                          else {
                            local_2b4 = *(int *)(param_1 + 0x1d8) + iVar5;
                          }
                          pvVar10 = operator_new(local_2b4 * 8);
                          iVar5 = 0;
                          if (0 < *(int *)(param_1 + 0x1c8)) {
                            do {
                              iVar6 = *(int *)(param_1 + 0x1cc);
                              *(undefined4 *)((int)pvVar10 + iVar5 * 8) =
                                   *(undefined4 *)(iVar6 + iVar5 * 8);
                              *(undefined4 *)((int)pvVar10 + iVar5 * 8 + 4) =
                                   *(undefined4 *)(iVar6 + 4 + iVar5 * 8);
                              iVar5 = iVar5 + 1;
                            } while (iVar5 < *(int *)(param_1 + 0x1c8));
                          }
                          FUN_006bf840(*(undefined4 *)(param_1 + 0x1cc));
                          *(uint *)(param_1 + 0x1d0) = local_2b4;
                          *(void **)(param_1 + 0x1cc) = pvVar10;
                        }
                        iVar5 = *(int *)(param_1 + 0x1c8) + 1;
                        *(int *)(param_1 + 0x1c8) = iVar5;
                      }
                    }
                    iVar5 = 0;
                    if (0 < local_2b0) {
                      do {
                        FUN_00649920(&iStack_2a8,s_Participant__d_00727384,iVar5);
                        local_4 = 0x19;
                        uVar7 = FUN_00649940();
                        iVar6 = FUN_00647e40(param_2,uVar7);
                        local_4 = 0xffffffff;
                        FUN_00649950();
                        if (iVar6 == 0) {
                          if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
                            ExceptionList = local_c;
                            return 0;
                          }
                          iVar6 = *(int *)(param_1 + 0x1cc);
                          *(int *)(iVar6 + iVar5 * 8) = param_3[0x90];
                          *(int *)(iVar6 + 4 + iVar5 * 8) = param_3[0x91];
                          ExceptionList = local_c;
                          return 1;
                        }
                        iVar5 = iVar5 + 1;
                      } while (iVar5 < local_2b0);
                    }
                    iVar5 = FUN_00647e40(param_2,s_Total_Duration_00727374);
                    if (iVar5 == 0) {
                      if (*param_3 != 2) {
                        ExceptionList = local_c;
                        return 0;
                      }
                      *(int *)(param_1 + 0x1bc) = param_3[0x94];
                    }
                    else {
                      iVar5 = FUN_00647e40(param_2,&DAT_0072736c);
                      if (iVar5 == 0) {
                        if (*param_3 != 3) {
                          ExceptionList = local_c;
                          return 0;
                        }
                        *(uint *)(param_1 + 0x194) =
                             (param_3[0x95] << 1 ^ *(uint *)(param_1 + 0x194)) & 2 ^
                             *(uint *)(param_1 + 0x194);
                      }
                      else {
                        iVar5 = FUN_00647e40(param_2,s_Repeatable_Conversation_00727354);
                        if (iVar5 == 0) {
                          if (*param_3 != 3) {
                            ExceptionList = local_c;
                            return 0;
                          }
                          *(uint *)(param_1 + 0x194) =
                               (param_3[0x95] ^ *(uint *)(param_1 + 0x194)) & 1 ^
                               *(uint *)(param_1 + 0x194);
                        }
                        else {
                          iVar5 = FUN_00647e40(param_2,s_Is_Death_Cinema_00727344);
                          if (iVar5 == 0) {
                            if (*param_3 != 3) {
                              ExceptionList = local_c;
                              return 0;
                            }
                            *(uint *)(param_1 + 0x194) =
                                 (param_3[0x95] << 0xb ^ *(uint *)(param_1 + 0x194)) & 0x800 ^
                                 *(uint *)(param_1 + 0x194);
                          }
                          else {
                            iVar5 = FUN_00647e40(param_2,s_Initial_Shot_007276cc);
                            if (iVar5 == 0) {
                              if ((*param_3 != 1) && (*param_3 != 0xc)) {
                                ExceptionList = local_c;
                                return 0;
                              }
                              *(short *)(param_1 + 0x18c) = (short)param_3[0x93];
                            }
                            else {
                              iVar5 = FUN_00647e40(param_2,s_IsCinematic_00727638);
                              if ((iVar5 == 0) && (*param_3 == 3)) {
                                *(uint *)(param_1 + 0x194) =
                                     (param_3[0x95] << 4 ^ *(uint *)(param_1 + 0x194)) & 0x10 ^
                                     *(uint *)(param_1 + 0x194);
                              }
                              else {
                                iVar5 = FUN_00647e40(param_2,s_Has_Transition_Into_Cinema_007275fc);
                                if (iVar5 == 0) {
                                  if (*param_3 != 3) {
                                    ExceptionList = local_c;
                                    return 0;
                                  }
                                  *(uint *)(param_1 + 0x194) =
                                       (param_3[0x95] << 7 ^ *(uint *)(param_1 + 0x194)) & 0x80 ^
                                       *(uint *)(param_1 + 0x194);
                                }
                                else {
                                  iVar5 = FUN_00647e40(param_2,
                                                  s_Has_Transition_After_Cinema_00727574);
                                  if (iVar5 == 0) {
                                    if (*param_3 != 3) {
                                      ExceptionList = local_c;
                                      return 0;
                                    }
                                    *(uint *)(param_1 + 0x194) =
                                         (param_3[0x95] << 8 ^ *(uint *)(param_1 + 0x194)) & 0x100 ^
                                         *(uint *)(param_1 + 0x194);
                                  }
                                  else {
                                    iVar5 = (**(code **)(*(int *)(param_1 + 0x118) + 0x18))
                                                      (s_Pre_Cinema_Transition_007275d0,param_2,
                                                       param_3);
                                    if ((iVar5 == 0) &&
                                       (iVar5 = (**(code **)(*(int *)(param_1 + 0x150) + 0x18))
                                                          (s_Post_Cinema_Transition_00727548,param_2
                                                           ,param_3), iVar5 == 0)) {
                                      iVar5 = FUN_00647e40(param_2,s_Skippable_00727250);
                                      if ((iVar5 == 0) && (*param_3 == 3)) {
                                        *(uint *)(param_1 + 0x194) =
                                             (param_3[0x95] << 9 ^ *(uint *)(param_1 + 0x194)) &
                                             0x200 ^ *(uint *)(param_1 + 0x194);
                                      }
                                      else {
                                        iVar5 = FUN_00647e40(param_2,
                                                  s_Number_of_Skip_Actions_007276b4);
                                        if ((iVar5 == 0) && (*param_3 == 1)) {
                                          FUN_0046b3b0(param_3[0x93],1);
                                        }
                                        else {
                                          local_2b0 = 0;
                                          if (0 < *(int *)(param_1 + 0x1a0)) {
                                            do {
                                              FUN_00649920(&iStack_2a8,
                                                           s_SkipActions_Action__d_Name_00727698,
                                                           local_2b0);
                                              local_4 = 0x1a;
                                              uVar7 = FUN_00649940();
                                              iVar5 = FUN_00647e40(param_2,uVar7);
                                              if ((iVar5 == 0) &&
                                                 ((((iVar5 = *param_3, iVar5 == 4 || (iVar5 == 7))
                                                   || (iVar5 == 6)) || (iVar5 == 0xd)))) {
                                                FUN_0064a2e0(param_3 + 2);
                                                bVar11 = true;
                                              }
                                              else {
                                                bVar11 = false;
                                              }
                                              local_4 = 0xffffffff;
                                              FUN_00649950();
                                              if (bVar11) {
                                                ExceptionList = local_c;
                                                return 1;
                                              }
                                              FUN_00649920(auStack_2a0,
                                                           s_SkipActions_Action__d_Type_0072767c,
                                                           local_2b0);
                                              local_4 = 0x1b;
                                              uVar7 = FUN_00649940();
                                              iVar5 = FUN_00647e40(param_2,uVar7);
                                              if ((iVar5 == 0) &&
                                                 ((*param_3 == 1 || (*param_3 == 0xc)))) {
                                                local_2ac = param_3[0x93];
                                                bVar11 = true;
                                              }
                                              else {
                                                bVar11 = false;
                                              }
                                              local_4 = 0xffffffff;
                                              FUN_00649950();
                                              if (bVar11) {
                                                if (local_2ac < 0xc) {
                                                  if (local_2ac < 0) {
                                                    local_2ac = 0;
                                                  }
                                                  else {
                                                    if (local_2ac == 4) {
                                                      ExceptionList = local_c;
                                                      return 0;
                                                    }
                                                    if (local_2ac == 5) {
                                                      ExceptionList = local_c;
                                                      return 0;
                                                    }
                                                    if (local_2ac == 2) {
                                                      ExceptionList = local_c;
                                                      return 0;
                                                    }
                                                    if (local_2ac == 3) {
                                                      ExceptionList = local_c;
                                                      return 0;
                                                    }
                                                    if (local_2ac == 0xb) {
                                                      ExceptionList = local_c;
                                                      return 0;
                                                    }
                                                  }
                                                }
                                                else {
                                                  local_2ac = 0xc;
                                                }
                                                iVar5 = local_2ac;
                                                local_2b0 = local_2b0 * 4;
                                                piVar3 = *(int **)(local_2b0 +
                                                                  *(int *)(param_1 + 0x1a4));
                                                if (*piVar3 == local_2ac) {
                                                  ExceptionList = local_c;
                                                  return 1;
                                                }
                                                puVar4 = (undefined4 *)piVar3[0xc];
                                                if (puVar4 != (undefined4 *)0x0) {
                                                  (**(code **)*puVar4)(1);
                                                }
                                                iVar6 = *(int *)(param_1 + 0x1a4);
                                                uVar7 = FUN_00471b00(iVar5);
                                                *(undefined4 *)(*(int *)(iVar6 + local_2b0) + 0x30)
                                                     = uVar7;
                                                **(int **)(local_2b0 + *(int *)(param_1 + 0x1a4)) =
                                                     iVar5;
                                                *(undefined2 *)
                                                 (*(int *)(*(int *)(*(int *)(param_1 + 0x1a4) +
                                                                   local_2b0) + 0x30) + 0xe) = 0;
                                                ExceptionList = local_c;
                                                return 1;
                                              }
                                              FUN_00649920(auStack_2a4,
                                                                                                                      
                                                  s_SkipActions_Action__d_Delete_Me_0072765c,
                                                  local_2b0);
                                              local_4 = 0x1c;
                                              uVar7 = FUN_00649940();
                                              iVar5 = FUN_00647e40(param_2,uVar7);
                                              local_4 = 0xffffffff;
                                              FUN_00649950();
                                              if (iVar5 == 0) {
                                                ExceptionList = local_c;
                                                return (uint)(*param_3 == 3);
                                              }
                                              if (*(int *)(*(int *)(*(int *)(param_1 + 0x1a4) +
                                                                   local_2b0 * 4) + 0x30) != 0) {
                                                FUN_00649920(auStack_268,
                                                             s_SkipActions_Action__d_00727644,
                                                             local_2b0);
                                                iVar5 = **(int **)(*(int *)(*(int *)(param_1 + 0x1a4
                                                                                    ) +
                                                                           local_2b0 * 4) + 0x30);
                                                local_4 = 0x1d;
                                                uVar7 = FUN_00649940(param_2,param_3);
                                                (**(code **)(iVar5 + 0x18))(uVar7);
                                                local_4 = 0xffffffff;
                                                FUN_00649950();
                                              }
                                              local_2b0 = local_2b0 + 1;
                                            } while (local_2b0 < *(int *)(param_1 + 0x1a0));
                                          }
                                          iVar5 = FUN_00647e40(param_2,s_Bilbo_Invisible_007273bc);
                                          if (iVar5 != 0) {
                                            uVar8 = FUN_004ab750(param_2,param_3);
                                            ExceptionList = local_c;
                                            return uVar8;
                                          }
                                          if (*param_3 != 3) {
                                            ExceptionList = local_c;
                                            return 0;
                                          }
                                          *(uint *)(param_1 + 0x194) =
                                               (param_3[0x95] << 6 ^ *(uint *)(param_1 + 0x194)) &
                                               0x40 ^ *(uint *)(param_1 + 0x194);
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
      }
    }
  }
  ExceptionList = local_c;
  return 1;
}

