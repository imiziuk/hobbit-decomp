
int * __thiscall FUN_0046f5f0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int local_9a4;
  undefined1 local_9a0 [4];
  int *local_99c;
  int local_998;
  undefined1 local_994 [4];
  undefined1 local_990 [4];
  undefined1 local_98c [4];
  undefined1 local_988 [4];
  undefined1 local_984 [4];
  undefined1 local_980 [4];
  uint local_97c;
  int local_978 [2];
  int local_970 [127];
  undefined1 local_771;
  undefined4 local_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined1 auStack_764 [12];
  undefined1 uStack_758;
  undefined1 uStack_757;
  undefined1 uStack_756;
  undefined1 uStack_755;
  int iStack_754;
  int iStack_750;
  int iStack_74c;
  undefined1 auStack_748 [16];
  int iStack_738;
  int iStack_734;
  int iStack_730;
  int local_72c;
  int local_728;
  uint local_724;
  undefined1 local_720 [4];
  undefined1 local_71c [4];
  undefined1 local_718 [4];
  int aiStack_714 [2];
  int aiStack_70c [128];
  undefined1 auStack_50c [24];
  undefined1 auStack_4f4 [4];
  undefined1 auStack_4f0 [12];
  undefined1 auStack_4e4 [16];
  int iStack_4d4;
  int iStack_4d0;
  int iStack_4cc;
  int iStack_4c8;
  int iStack_4c4;
  uint uStack_4c0;
  undefined4 auStack_4bc [149];
  uint uStack_268;
  int local_264 [2];
  undefined1 auStack_25c [592];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d14b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_998 = param_1;
  iVar1 = FUN_00647e40(param_3,s_Bilbo_Invisible_007273bc);
  if (iVar1 == 0) {
    FUN_00406a80();
    local_724 = *(uint *)(param_1 + 0x194) >> 6 & 1;
    local_978[0] = 3;
    *param_2 = 3;
    FUN_00424770(local_970);
    ExceptionList = local_c;
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Letterbox_00727204);
  if (iVar1 == 0) {
    FUN_00406a80();
    local_724 = *(uint *)(param_1 + 0x194) >> 0xf;
LAB_004710c4:
    local_724 = local_724 & 1;
LAB_004710d6:
    local_978[0] = 3;
    *param_2 = 3;
    FUN_00424770(local_970);
    ExceptionList = local_c;
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Disable_Control_00727628);
  if (iVar1 == 0) {
    FUN_00406a80();
    local_724 = (uint)*(byte *)(param_1 + 0x196);
  }
  else {
    iVar1 = FUN_00647e40(param_3,s_BypassQueue_007271e8);
    if (iVar1 == 0) {
      FUN_00406a80();
      local_724 = *(uint *)(param_1 + 0x194) >> 0x14 & 1;
      local_978[0] = 3;
      *param_2 = 3;
      FUN_00424770(local_970);
      ExceptionList = local_c;
      return param_2;
    }
    iVar1 = FUN_00647e40(param_3,s_LowPriority_007271dc);
    if (iVar1 == 0) {
      FUN_00406a80();
      local_724 = (uint)*(byte *)(param_1 + 0x197);
      goto LAB_004710c4;
    }
    iVar1 = FUN_00647e40(param_3,s_Subtitle_In_Box_00727618);
    if (iVar1 != 0) {
      iVar1 = FUN_00647e40(param_3,s_Camera_Pop_At_End_007273a8);
      if (iVar1 == 0) {
        FUN_00406a80();
        local_724 = *(uint *)(param_1 + 0x194) >> 3 & 1;
        local_978[0] = 3;
        *param_2 = 3;
        FUN_00424770(local_970);
        ExceptionList = local_c;
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_Add_Camera_Shot_00727a48);
      if (iVar1 == 0) {
LAB_0046f810:
        FUN_00406a80();
        local_724 = 0;
        goto LAB_0046f6d0;
      }
      iVar1 = FUN_00647e40(param_3,s_Shots_Number_of_Shots_007274f0);
      if (iVar1 == 0) {
        FUN_00406a80();
        local_72c = *(undefined4 *)(param_1 + 0xb0);
        goto LAB_0046f850;
      }
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0xb0)) {
        do {
          FUN_00649920(&local_9a4,s_Shot__d_Add_Action_at_Shot_Start_00727a24,iVar1);
          local_4 = 0;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            local_978[0] = 0xc;
            local_72c = 0;
            *param_2 = 0xc;
            FUN_00424770(local_970);
            ExceptionList = local_c;
            return param_2;
          }
          FUN_00649920(local_71c,s_Shot__d_Add_End_Transition_00727a08,iVar1);
          local_4 = 1;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            local_978[0] = 3;
            local_724 = 0;
            *param_2 = 3;
            FUN_00424770(local_970);
            ExceptionList = local_c;
            return param_2;
          }
          FUN_00649920(local_720,s_Shot__d_Name_007274e0,iVar1);
          local_4 = 2;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            local_978[0] = 4;
            FUN_00647d70(local_970,*(undefined4 *)(iVar1 * 0x3c + *(int *)(param_1 + 0xb4)),0x200);
            local_771 = 0;
            *param_2 = local_978[0];
            FUN_00424770(local_970);
            ExceptionList = local_c;
            return param_2;
          }
          FUN_00649920(local_718,s_Shot__d_Next_Shot_0072782c,iVar1);
          local_4 = 3;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            iVar1 = iVar1 * 0x3c;
            iVar3 = *(int *)(param_1 + 0xb4);
            goto LAB_004700d5;
          }
          FUN_00649920(&local_97c,s_Shot__d_Skip_Shot_00727818,iVar1);
          local_4 = 4;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            local_72c = *(int *)(iVar1 * 0x3c + 0x30 + *(int *)(param_1 + 0xb4));
            goto LAB_004700e1;
          }
          FUN_00649920(local_984,s_Shot__d_Max_Time_00727804,iVar1);
          local_4 = 5;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            iVar1 = iVar1 * 0x3c;
            iVar3 = *(int *)(param_1 + 0xb4);
            goto LAB_0047013f;
          }
          FUN_00649920(local_980,s_Shot__d_Time_007274d0,iVar1);
          local_4 = 6;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            local_978[0] = 2;
            local_728 = *(undefined4 *)(iVar1 * 0x3c + 0x38 + *(int *)(param_1 + 0xb4));
            *param_2 = 2;
            FUN_00424770(local_970);
            ExceptionList = local_c;
            return param_2;
          }
          FUN_00649920(local_988,s_Shot__d_Delete_Me_007279f4,iVar1);
          local_4 = 7;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) goto LAB_0046f810;
          FUN_00649920(local_994,s_Shots_Shot__d_Name_0072789c,iVar1);
          local_4 = 8;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            local_978[0] = 4;
            FUN_00647d70(local_970,*(undefined4 *)(iVar1 * 0x3c + *(int *)(param_1 + 0xb4)),0x200);
            local_771 = 0;
            *param_2 = local_978[0];
            FUN_00424770(local_970);
            ExceptionList = local_c;
            return param_2;
          }
          FUN_00649920(&local_99c,s_Shots_Shot__d_Next_Shot_00727884,iVar1);
          local_4 = 9;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            local_72c = *(undefined4 *)(iVar1 * 0x3c + 0x2c + *(int *)(param_1 + 0xb4));
LAB_00470233:
            local_978[0] = 0xc;
            *param_2 = 0xc;
            FUN_00424770(local_970);
            ExceptionList = local_c;
            return param_2;
          }
          FUN_00649920(local_990,s_Shots_Shot__d_Skip_Shot_0072786c,iVar1);
          local_4 = 10;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            local_72c = *(undefined4 *)(iVar1 * 0x3c + 0x30 + *(int *)(param_1 + 0xb4));
            goto LAB_00470233;
          }
          FUN_00649920(local_98c,s_Shots_Shot__d_Max_Time_00727854,iVar1);
          local_4 = 0xb;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            local_978[0] = 2;
            local_728 = *(undefined4 *)(iVar1 * 0x3c + 0x34 + *(int *)(param_1 + 0xb4));
            *param_2 = 2;
            FUN_00424770(local_970);
            ExceptionList = local_c;
            return param_2;
          }
          FUN_00649920(local_9a0,s_Shots_Shot__d_Time_00727840,iVar1);
          local_4 = 0xc;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            local_728 = *(undefined4 *)(iVar1 * 0x3c + 0x38 + *(int *)(param_1 + 0xb4));
            goto LAB_0047014b;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0xb0));
      }
      iVar1 = FUN_00647e40(param_3,s_Sync_Points_Number_of_Sync_Point_007274a0);
      if (iVar1 != 0) {
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0xcc)) {
          local_9a4 = 0;
          do {
            FUN_00649920(local_9a0,s_Sync_Points_Sync_Point__d_Name_00727480,iVar1);
            local_4 = 0xd;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              uVar2 = *(undefined4 *)(iVar1 * 0x40 + *(int *)(local_998 + 0xd0));
              goto LAB_0047030d;
            }
            FUN_00649920(local_98c,s_Sync_Points_Sync_Point__d_Type_007279d4,iVar1);
            local_4 = 0xe;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              iVar3 = *(int *)(local_998 + 0xd0);
              iVar1 = iVar1 << 6;
LAB_004700d5:
              local_72c = *(int *)(iVar1 + 0x2c + iVar3);
              goto LAB_004700e1;
            }
            FUN_00649920(local_990,s_Sync_Points_Sync_Point__d_Action_007277d0,iVar1);
            local_4 = 0xf;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              local_978[0] = 0xc;
              local_72c = *(undefined4 *)(iVar1 * 0x40 + 0x30 + *(int *)(local_998 + 0xd0));
              *param_2 = 0xc;
              goto LAB_0046f865;
            }
            FUN_00649920(&local_99c,s_Sync_Points_Sync_Point__d_Shot_007277b0,iVar1);
            local_4 = 0x10;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              local_978[0] = 0xc;
              local_72c = *(undefined4 *)(iVar1 * 0x40 + 0x30 + *(int *)(local_998 + 0xd0));
              *param_2 = 0xc;
              FUN_00424770(local_970);
              ExceptionList = local_c;
              return param_2;
            }
            FUN_00649920(local_994,s_Sync_Points_Sync_Point__d_Offset_0072745c,iVar1);
            local_4 = 0x11;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              iVar3 = *(int *)(local_998 + 0xd0);
              iVar1 = iVar1 << 6;
LAB_0047013f:
              local_728 = *(undefined4 *)(iVar1 + 0x34 + iVar3);
LAB_0047014b:
              local_978[0] = 2;
              *param_2 = 2;
              FUN_00424770(local_970);
              ExceptionList = local_c;
              return param_2;
            }
            FUN_00649920(local_988,s_Sync_Points_Sync_Point__d_Shot_I_00727434,iVar1);
            local_4 = 0x12;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              local_72c = (int)*(short *)(iVar1 * 0x40 + 0x38 + *(int *)(local_998 + 0xd0));
              goto LAB_0047042b;
            }
            local_97c = (*(byte *)(*(int *)(local_998 + 0xd0) + 0x3a + local_9a4) & 2) >> 1;
            FUN_00649920(local_980,s_Sync_Points_Sync_Point__d_Offset_00727408,iVar1);
            local_4 = 0x13;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              local_724 = local_97c;
              goto LAB_0046f6d0;
            }
            FUN_00649920(local_984,s_Sync_Points_Sync_Point__d_Delete_007279b0,iVar1);
            local_4 = 0x14;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) goto LAB_00470466;
            iVar1 = iVar1 + 1;
            local_9a4 = local_9a4 + 0x40;
            param_1 = local_998;
          } while (iVar1 < *(int *)(local_998 + 0xcc));
        }
        iVar1 = FUN_00647e40(param_3,s_Number_of_Shots_007273f8);
        if (iVar1 == 0) {
          FUN_00406a80();
          local_72c = *(undefined4 *)(param_1 + 0xb0);
LAB_0047052e:
          local_978[0] = 1;
          *param_2 = 1;
          FUN_00424770(local_970);
          ExceptionList = local_c;
          return param_2;
        }
        iVar1 = FUN_00647e40(param_3,s_Number_of_Sync_Points_007273e0);
        if (iVar1 != 0) {
          iVar1 = FUN_00647e40(param_3,s_Number_of_Actions_007273cc);
          if (iVar1 == 0) {
            FUN_00406a80();
            local_72c = *(int *)(param_1 + 0xe8);
LAB_0047042b:
            local_978[0] = 1;
            *param_2 = 1;
            FUN_00424770(local_970);
            ExceptionList = local_c;
            return param_2;
          }
          iVar1 = FUN_00647e40(param_3,s_Actions_Number_of_Actions_00727794);
          if (iVar1 == 0) {
            FUN_00406a80();
            local_72c = *(undefined4 *)(param_1 + 0xe8);
            goto LAB_0047052e;
          }
          iVar1 = 0;
          if (0 < *(int *)(param_1 + 0xe8)) {
            do {
              FUN_00649920(local_9a0,s_Actions_Action__d_Name_0072777c,iVar1);
              local_4 = 0x15;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xec) + iVar1 * 4) + 4);
LAB_0047030d:
                local_978[0] = 4;
                FUN_00647d70(local_970,uVar2,0x200);
                *param_2 = local_978[0];
                local_771 = 0;
                FUN_00424770(local_970);
                ExceptionList = local_c;
                return param_2;
              }
              FUN_00649920(local_98c,s_Actions_Action__d_Type_00727764,iVar1);
              local_4 = 0x16;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                local_72c = **(int **)(*(int *)(param_1 + 0xec) + iVar1 * 4);
LAB_004700e1:
                local_978[0] = 0xc;
                *param_2 = 0xc;
                FUN_00424770(local_970);
                ExceptionList = local_c;
                return param_2;
              }
              FUN_00649920(local_990,s_Actions_Action__d_Add_Action_Aft_00727988,iVar1);
              local_4 = 0x17;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                local_978[0] = 0xc;
                local_72c = 0;
                *param_2 = 0xc;
                FUN_00424770(local_970);
                ExceptionList = local_c;
                return param_2;
              }
              FUN_00649920(&local_99c,s_Actions_Action__d_Add_Action_In_M_00727960,iVar1);
              local_4 = 0x18;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                local_978[0] = 0xc;
                local_72c = 0;
                *param_2 = 0xc;
                FUN_00424770(local_970);
                ExceptionList = local_c;
                return param_2;
              }
              FUN_00649920(local_994,s_Actions_Action__d_Add_Shot_After_00727938,iVar1);
              local_4 = 0x19;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) goto LAB_00470466;
              FUN_00649920(local_988,s_Actions_Action__d_Delete_Me_0072791c,iVar1);
              local_4 = 0x1a;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                local_978[0] = 3;
                local_724 = 0;
                *param_2 = 3;
                FUN_00424770(local_970);
                ExceptionList = local_c;
                return param_2;
              }
              if (*(int *)(*(int *)(*(int *)(param_1 + 0xec) + iVar1 * 4) + 0x30) != 0) {
                FUN_00649920(local_980,s_Actions_Action__d_Sync_Point_00727744,iVar1);
                local_4 = 0x1b;
                uVar2 = FUN_00649940();
                iVar3 = FUN_00647e40(param_3,uVar2);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar3 == 0) {
                  FUN_00406a80();
                  local_72c = (int)*(short *)(*(int *)(*(int *)(*(int *)(param_1 + 0xec) + iVar1 * 4
                                                               ) + 0x30) + 0xc);
                  goto LAB_004700e1;
                }
                FUN_00649920(local_984,s_Actions_Action__d_FinishShot_00727724,iVar1);
                local_4 = 0x1c;
                uVar2 = FUN_00649940();
                iVar3 = FUN_00647e40(param_3,uVar2);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar3 == 0) {
                  FUN_00406a80();
                  local_724 = (int)(short)(*(short *)(*(int *)(*(int *)(*(int *)(param_1 + 0xec) +
                                                                       iVar1 * 4) + 0x30) + 0x10) <<
                                          0xf) >> 0xf;
                  goto LAB_004710d6;
                }
                (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xec) + iVar1 * 4) + 0x30) +
                            0x24))(local_264,iVar1,param_3);
                if (local_264[0] != 0) {
                  *param_2 = local_264[0];
                  FUN_00424770(auStack_25c);
                  ExceptionList = local_c;
                  return param_2;
                }
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)(param_1 + 0xe8));
          }
          iVar1 = *(int *)(param_1 + 0x1c8);
          local_9a4 = iVar1;
          iVar3 = FUN_00647e40(param_3,s_Num_Participants_00727394);
          if (iVar3 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            local_978[0] = 1;
            *param_2 = 1;
            local_72c = iVar1;
            FUN_00424770(local_970);
            ExceptionList = local_c;
            return param_2;
          }
          iVar1 = 0;
          if (0 < local_9a4) {
            do {
              FUN_00649920(local_9a0,s_Participant__d_00727384,iVar1);
              local_4 = 0x1d;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                local_978[0] = 0x10;
                iStack_738 = *(undefined4 *)(*(int *)(param_1 + 0x1cc) + iVar1 * 8);
                iStack_734 = *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 4 + iVar1 * 8);
                *param_2 = 0x10;
                FUN_00424770(local_970);
                ExceptionList = local_c;
                return param_2;
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < local_9a4);
          }
          iVar1 = FUN_00647e40(param_3,s_Total_Duration_00727374);
          if (iVar1 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            local_728 = *(undefined4 *)(param_1 + 0x1bc);
            local_978[0] = 2;
            *param_2 = 2;
            FUN_00424770(local_970);
            ExceptionList = local_c;
            return param_2;
          }
          iVar1 = FUN_00647e40(param_3,&DAT_0072736c);
          if (iVar1 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            local_724 = *(uint *)(param_1 + 0x194) >> 1;
            goto LAB_0046f6c6;
          }
          iVar1 = FUN_00647e40(param_3,s_AutoGenerateShots_SyncPoints_007278fc);
          if (iVar1 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            goto LAB_00470472;
          }
          iVar1 = FUN_00647e40(param_3,s_Repeatable_Conversation_00727354);
          if (iVar1 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            local_724 = *(uint *)(param_1 + 0x194) & 1;
            local_978[0] = 3;
            *param_2 = 3;
            FUN_00424770(local_970);
            ExceptionList = local_c;
            return param_2;
          }
          iVar1 = FUN_00647e40(param_3,s_Is_Death_Cinema_00727344);
          if (iVar1 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            local_724 = *(uint *)(param_1 + 0x194) >> 0xb & 1;
            local_978[0] = 3;
            *param_2 = 3;
            FUN_00424770(local_970);
            ExceptionList = local_c;
            return param_2;
          }
          iVar1 = FUN_00647e40(param_3,s_Initial_Shot_007276cc);
          if (iVar1 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            local_72c = (int)*(short *)(param_1 + 0x18c);
            local_978[0] = 0xc;
            *param_2 = 0xc;
LAB_00470dd2:
            piVar5 = local_970;
            piVar6 = param_2 + 2;
            for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar6 = *piVar5;
              piVar5 = piVar5 + 1;
              piVar6 = piVar6 + 1;
            }
            FUN_00480f60(&local_770);
            FUN_00425250(&uStack_758);
            FUN_004357e0(&iStack_754);
            FUN_004357e0(auStack_748);
            param_2[0x90] = iStack_738;
            param_2[0x91] = iStack_734;
            param_2[0x92] = iStack_730;
            param_2[0x93] = local_72c;
            param_2[0x94] = local_728;
            param_2[0x95] = local_724;
            ExceptionList = local_c;
            return param_2;
          }
          iVar1 = FUN_00647e40(param_3,s_IsCinematic_00727638);
          if (iVar1 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            local_978[0] = 3;
            local_724 = *(uint *)(param_1 + 0x194) >> 4 & 1;
            *param_2 = 3;
LAB_00470eff:
            piVar5 = local_970;
            piVar6 = param_2 + 2;
            for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar6 = *piVar5;
              piVar5 = piVar5 + 1;
              piVar6 = piVar6 + 1;
            }
            FUN_00480f60(&local_770);
            FUN_00425250(&uStack_758);
            FUN_004357e0(&iStack_754);
            FUN_004357e0(auStack_748);
            param_2[0x90] = iStack_738;
            param_2[0x91] = iStack_734;
            param_2[0x92] = iStack_730;
            param_2[0x93] = local_72c;
            param_2[0x94] = local_728;
            param_2[0x95] = local_724;
            ExceptionList = local_c;
            return param_2;
          }
          iVar1 = FUN_00647e40(param_3,s_Has_Transition_Into_Cinema_007275fc);
          if (iVar1 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            uVar4 = *(uint *)(param_1 + 0x194) >> 7;
LAB_00471005:
            local_978[0] = 3;
            local_724 = uVar4 & 1;
            *param_2 = 3;
            piVar5 = local_970;
            piVar6 = param_2 + 2;
            for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar6 = *piVar5;
              piVar5 = piVar5 + 1;
              piVar6 = piVar6 + 1;
            }
            FUN_00480f60(&local_770);
LAB_00471048:
            FUN_00425250(&uStack_758);
            FUN_004357e0(&iStack_754);
          }
          else {
            iVar1 = FUN_00647e40(param_3,s_Has_Transition_After_Cinema_00727574);
            if (iVar1 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              local_724 = *(uint *)(param_1 + 0x194) >> 8;
              goto LAB_004710c4;
            }
            (**(code **)(*(int *)(param_1 + 0x118) + 0x20))
                      (aiStack_714,s_Pre_Cinema_Transition_007275d0,param_3);
            if (aiStack_714[0] != 0) {
              *param_2 = aiStack_714[0];
              piVar5 = aiStack_70c;
              piVar6 = param_2 + 2;
              for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                *piVar6 = *piVar5;
                piVar5 = piVar5 + 1;
                piVar6 = piVar6 + 1;
              }
              FUN_00480f60(auStack_50c);
              FUN_00425250(auStack_4f4);
              FUN_004357e0(auStack_4f0);
              FUN_004357e0(auStack_4e4);
              param_2[0x90] = iStack_4d4;
              param_2[0x91] = iStack_4d0;
              param_2[0x92] = iStack_4cc;
              local_728 = iStack_4c4;
              local_724 = uStack_4c0;
              local_72c = iStack_4c8;
              goto LAB_00471a25;
            }
            piVar5 = (int *)(**(code **)(*(int *)(param_1 + 0x150) + 0x20))
                                      (local_264,s_Post_Cinema_Transition_00727548,param_3);
            aiStack_714[0] = *piVar5;
            FUN_00424890(piVar5 + 2);
            if (aiStack_714[0] != 0) {
              *param_2 = aiStack_714[0];
              piVar5 = aiStack_70c;
              piVar6 = param_2 + 2;
              for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                *piVar6 = *piVar5;
                piVar5 = piVar5 + 1;
                piVar6 = piVar6 + 1;
              }
              FUN_00480f60(auStack_50c);
              FUN_00425250(auStack_4f4);
              FUN_004357e0(auStack_4f0);
              FUN_004357e0(auStack_4e4);
              param_2[0x90] = iStack_4d4;
              param_2[0x91] = iStack_4d0;
              param_2[0x92] = iStack_4cc;
              param_2[0x93] = iStack_4c8;
              param_2[0x94] = iStack_4c4;
              param_2[0x95] = uStack_4c0;
              ExceptionList = local_c;
              return param_2;
            }
            iVar1 = FUN_00647e40(param_3,s_Skippable_00727250);
            if (iVar1 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              uVar4 = *(uint *)(param_1 + 0x194) >> 9;
              goto LAB_00471005;
            }
            iVar1 = FUN_00647e40(param_3,s_Number_of_Skip_Actions_007276b4);
            if (iVar1 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              local_72c = *(int *)(param_1 + 0x1a0);
              local_978[0] = 1;
              *param_2 = 1;
              goto LAB_00470dd2;
            }
            local_9a4 = 0;
            if (0 < *(int *)(param_1 + 0x1a0)) {
              do {
                iVar1 = local_9a4;
                FUN_00649920(local_9a0,s_SkipActions_Action__d_Name_00727698,local_9a4);
                local_4 = 0x1e;
                uVar2 = FUN_00649940();
                iVar3 = FUN_00647e40(param_3,uVar2);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar3 == 0) {
                  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                  local_978[0] = 4;
                  FUN_00647d70(local_970,
                               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a4) + iVar1 * 4) + 4),
                               0x200);
                  local_771 = 0;
                  *param_2 = local_978[0];
                  goto LAB_00470eff;
                }
                FUN_00649920(local_98c,s_SkipActions_Action__d_Type_0072767c,iVar1);
                local_4 = 0x1f;
                uVar2 = FUN_00649940();
                iVar3 = FUN_00647e40(param_3,uVar2);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar3 == 0) {
                  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                  local_978[0] = 0xc;
                  local_72c = **(int **)(*(int *)(param_1 + 0x1a4) + iVar1 * 4);
                  *param_2 = 0xc;
                  piVar5 = local_970;
                  piVar6 = param_2 + 2;
                  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                    *piVar6 = *piVar5;
                    piVar5 = piVar5 + 1;
                    piVar6 = piVar6 + 1;
                  }
                  FUN_004357e0(&local_770);
                  FUN_004357e0(auStack_764);
                  goto LAB_00471048;
                }
                FUN_00649920(local_990,s_SkipActions_Action__d_Delete_Me_0072765c,iVar1);
                local_4 = 0x20;
                uVar2 = FUN_00649940();
                iVar3 = FUN_00647e40(param_3,uVar2);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar3 == 0) {
                  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                  local_978[0] = 3;
                  local_724 = 0;
                  *param_2 = 3;
                  piVar5 = local_970;
                  piVar6 = param_2 + 2;
                  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                    *piVar6 = *piVar5;
                    piVar5 = piVar5 + 1;
                    piVar6 = piVar6 + 1;
                  }
                  FUN_004357e0(&local_770);
                  FUN_004357e0(auStack_764);
                  FUN_00425250(&uStack_758);
                  FUN_004357e0(&iStack_754);
                  FUN_004357e0(auStack_748);
                  param_2[0x92] = iStack_730;
                  param_2[0x90] = iStack_738;
                  param_2[0x91] = iStack_734;
                  param_2[0x95] = local_724;
                  param_2[0x93] = local_72c;
                  param_2[0x94] = local_728;
                  ExceptionList = local_c;
                  return param_2;
                }
                local_99c = (int *)(iVar1 * 4);
                if (*(int *)(*(int *)(*(int *)(param_1 + 0x1a4) + iVar1 * 4) + 0x30) != 0) {
                  FUN_00649920(local_994,s_SkipActions_Action__d_00727644,iVar1);
                  local_99c = *(int **)(*(int *)(*(int *)(param_1 + 0x1a4) + (int)local_99c) + 0x30)
                  ;
                  iVar1 = *local_99c;
                  local_4 = 0x21;
                  uVar2 = FUN_00649940(param_3);
                  (**(code **)(iVar1 + 0x20))(local_978,uVar2);
                  local_4 = 0xffffffff;
                  FUN_00649950();
                  iVar1 = local_9a4;
                  if (local_978[0] == 0) goto LAB_00471526;
                  *param_2 = local_978[0];
                  goto LAB_004715ae;
                }
LAB_00471526:
                local_9a4 = iVar1 + 1;
              } while (local_9a4 < *(int *)(param_1 + 0x1a0));
            }
            iVar1 = FUN_00647e40(param_3,s_Force_No_Weapon_00727334);
            if (iVar1 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              local_978[0] = 3;
              local_724 = *(uint *)(param_1 + 0x194) >> 0xc & 1;
              *param_2 = 3;
LAB_004715ae:
              piVar5 = local_970;
              piVar6 = param_2 + 2;
              for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                *piVar6 = *piVar5;
                piVar5 = piVar5 + 1;
                piVar6 = piVar6 + 1;
              }
              FUN_004357e0(&local_770);
              FUN_004357e0(auStack_764);
              *(undefined1 *)((int)param_2 + 0x223) = uStack_755;
              *(undefined1 *)((int)param_2 + 0x222) = uStack_756;
              *(undefined1 *)((int)param_2 + 0x221) = uStack_757;
              *(undefined1 *)(param_2 + 0x88) = uStack_758;
              FUN_004357e0(&iStack_754);
              FUN_004357e0(auStack_748);
              param_2[0x90] = iStack_738;
              param_2[0x91] = iStack_734;
              param_2[0x92] = iStack_730;
              param_2[0x93] = local_72c;
              param_2[0x94] = local_728;
              param_2[0x95] = local_724;
              ExceptionList = local_c;
              return param_2;
            }
            iVar1 = FUN_00647e40(param_3,s_Force_Use_Stick_00727314);
            if (iVar1 != 0) {
              iVar1 = FUN_00647e40(param_3,s_Force_Use_Sting_00727324);
              if (iVar1 == 0) {
                FUN_00471ac0();
                uStack_268 = *(uint *)(param_1 + 0x194) >> 0xe & 1;
                auStack_4bc[0] = 3;
                FUN_00463a40(auStack_4bc);
                ExceptionList = local_c;
                return param_2;
              }
              FUN_004abdf0(param_2,param_3);
              ExceptionList = local_c;
              return param_2;
            }
            local_770 = 0x7f7fffff;
            uStack_76c = 0x7f7fffff;
            uStack_768 = 0x7f7fffff;
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            local_978[0] = 3;
            local_724 = *(uint *)(param_1 + 0x194) >> 0xd & 1;
            *param_2 = 3;
            piVar5 = local_970;
            piVar6 = param_2 + 2;
            for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar6 = *piVar5;
              piVar5 = piVar5 + 1;
              piVar6 = piVar6 + 1;
            }
            FUN_004357e0(&local_770);
            FUN_004357e0(auStack_764);
            *(undefined1 *)((int)param_2 + 0x223) = uStack_755;
            *(undefined1 *)((int)param_2 + 0x222) = uStack_756;
            *(undefined1 *)((int)param_2 + 0x221) = uStack_757;
            *(undefined1 *)(param_2 + 0x88) = uStack_758;
            param_2[0x89] = iStack_754;
            param_2[0x8a] = iStack_750;
            param_2[0x8b] = iStack_74c;
          }
          FUN_004357e0(auStack_748);
          param_2[0x90] = iStack_738;
          param_2[0x91] = iStack_734;
          param_2[0x92] = iStack_730;
LAB_00471a25:
          param_2[0x93] = local_72c;
          param_2[0x94] = local_728;
          param_2[0x95] = local_724;
          ExceptionList = local_c;
          return param_2;
        }
      }
      FUN_00406a80();
      local_72c = *(undefined4 *)(param_1 + 0xcc);
LAB_0046f850:
      local_978[0] = 1;
      *param_2 = 1;
LAB_0046f865:
      FUN_00424770(local_970);
      ExceptionList = local_c;
      return param_2;
    }
    FUN_00406a80();
    local_724 = *(uint *)(param_1 + 0x194) >> 0x16;
  }
LAB_0046f6c6:
  local_724 = local_724 & 1;
LAB_0046f6d0:
  local_978[0] = 3;
  *param_2 = 3;
  FUN_00424770(local_970);
  ExceptionList = local_c;
  return param_2;
LAB_00470466:
  FUN_00406a80();
LAB_00470472:
  local_724 = 0;
  goto LAB_004710d6;
}

