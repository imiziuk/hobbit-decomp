
int * __thiscall FUN_005657a0(int param_1,int *param_2,undefined4 param_3)

{
  void **ppvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_4c4;
  undefined1 auStack_4c0 [4];
  int local_4bc [2];
  int local_4b4 [127];
  undefined1 uStack_2b5;
  undefined1 auStack_2b4 [12];
  undefined1 auStack_2a8 [12];
  undefined1 uStack_29c;
  undefined1 uStack_29b;
  undefined1 uStack_29a;
  undefined1 uStack_299;
  int iStack_298;
  int iStack_294;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  int local_270;
  int iStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  int aiStack_25c [128];
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db07f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_00798540 != 0) {
    iVar4 = 0;
    ExceptionList = &pvStack_c;
    ppvVar1 = &pvStack_c;
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        ExceptionList = ppvVar1;
        FUN_00649920(&local_4c4,s_AIManager_Links_Link__d_ActiveSt_0073f45c,iVar4);
        local_4 = 0;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(param_3,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          FUN_00425440();
          local_270 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) + 8);
          goto LAB_005661aa;
        }
        iVar4 = iVar4 + 1;
        ppvVar1 = (void **)ExceptionList;
      } while (iVar4 < *(int *)(param_1 + 0x48));
    }
    iVar4 = FUN_00647f20(param_3,s_AIManager_Triggers_Trigger_0073f508);
    if ((((iVar4 != 0) && (iVar4 = FUN_005648f0(param_3), -1 < iVar4)) &&
        (iVar4 < *(int *)(param_1 + 0x10))) &&
       ((iVar4 = *(int *)(*(int *)(param_1 + 0x14) + iVar4 * 4), *(int *)(iVar4 + 0x5c) != 0 &&
        ((**(code **)(**(int **)(iVar4 + 0x5c) + 0x14))(local_4bc,param_3), local_4bc[0] != 0)))) {
      *param_2 = local_4bc[0];
      FUN_00424770(local_4b4);
      ExceptionList = pvStack_c;
      return param_2;
    }
    iVar4 = FUN_00647f20(param_3,s_AIManager_Actions_Action_0073f4ec);
    if (((iVar4 != 0) && (iVar4 = FUN_005648f0(param_3), -1 < iVar4)) &&
       ((iVar4 < *(int *)(param_1 + 0x2c) &&
        ((iVar4 = *(int *)(*(int *)(param_1 + 0x30) + iVar4 * 4), *(int *)(iVar4 + 0x5c) != 0 &&
         ((**(code **)(**(int **)(iVar4 + 0x5c) + 0x10))(local_4bc,param_3), local_4bc[0] != 0))))))
    {
      *param_2 = local_4bc[0];
      FUN_00424770(local_4b4);
      ExceptionList = pvStack_c;
      return param_2;
    }
  }
  iVar4 = FUN_00647e40(param_3,s_AIManager_Sort_All_0073f408);
  if (iVar4 == 0) {
    FUN_00406a80();
    local_4bc[0] = 3;
    iStack_268 = 0;
    *param_2 = 3;
    FUN_00424770(local_4b4);
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar4 = FUN_00647e40(param_3,s_AIManager_Filter_Type_0073f3f0);
  if (iVar4 == 0) {
    FUN_00406a80();
    local_270 = *(undefined4 *)(param_1 + 0xb0);
LAB_005661aa:
    local_4bc[0] = 0xc;
    *param_2 = 0xc;
LAB_005661b7:
    FUN_00424770(local_4b4);
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar4 = FUN_00647e40(param_3,s_AIManager_Filter_Object_0073f368);
  if (iVar4 == 0) {
    FUN_00406a80();
    iStack_27c = *(undefined4 *)(param_1 + 0xb8);
    iStack_278 = *(undefined4 *)(param_1 + 0xbc);
    local_4bc[0] = 0xf;
    *param_2 = 0xf;
    FUN_00424770(local_4b4);
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar4 = FUN_00647e40(param_3,s_AIManager_Filter_Trigger_0073f3d4);
  if (iVar4 == 0) {
    FUN_00406a80();
    uVar2 = *(undefined4 *)(param_1 + 0xc0);
  }
  else {
    iVar4 = FUN_00647e40(param_3,s_AIManager_Filter_Action_0073f3bc);
    if (iVar4 == 0) {
      FUN_00406a80();
      local_4bc[0] = 0xd;
      FUN_00647d70(local_4b4,*(undefined4 *)(param_1 + 0xec),0x200);
      uStack_2b5 = 0;
      *param_2 = local_4bc[0];
      FUN_00424770(local_4b4);
      ExceptionList = pvStack_c;
      return param_2;
    }
    iVar4 = FUN_00647e40(param_3,s_AIManager_Filter_QuestLog_0073f3a0);
    if (iVar4 == 0) {
      FUN_00406a80();
      local_4bc[0] = 0xd;
      FUN_00647d70(local_4b4,*(undefined4 *)(param_1 + 0x118),0x200);
      uStack_2b5 = 0;
      *param_2 = local_4bc[0];
      FUN_00424770(local_4b4);
      ExceptionList = pvStack_c;
      return param_2;
    }
    iVar4 = FUN_00647e40(param_3,s_AIManager_Filter_InfoOverlay_0073f380);
    if (iVar4 != 0) {
      iVar4 = FUN_00647e40(param_3,s_AIManager_Triggers_TriggerCount_0073f334);
      if (iVar4 == 0) {
        FUN_00406a80();
        local_270 = *(undefined4 *)(param_1 + 0x10);
        local_4bc[0] = 1;
        *param_2 = 1;
        goto LAB_005661b7;
      }
      iVar4 = FUN_00647f20(param_3,s_AIManager_Triggers_Trigger_0073f508);
      if (((iVar4 != 0) && (iVar4 = FUN_005648f0(param_3), -1 < iVar4)) &&
         (iVar4 < *(int *)(param_1 + 0x10))) {
        FUN_00649920(&local_4c4,s_AIManager_Triggers_Trigger__d_Na_0073f2f0,iVar4);
        local_4 = 1;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(param_3,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          FUN_00406a80();
          local_4bc[0] = 4;
          uVar2 = **(undefined4 **)(*(int *)(param_1 + 0x14) + iVar4 * 4);
          goto LAB_00565a38;
        }
        FUN_00649920(&local_4c4,s_AIManager_Triggers_Trigger__d_Ty_0073f2cc,iVar4);
        local_4 = 2;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(param_3,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          FUN_00406a80();
          local_270 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4 * 4) + 0x58);
          goto LAB_005661aa;
        }
        iVar4 = *(int *)(*(int *)(param_1 + 0x14) + iVar4 * 4);
        if ((*(int *)(iVar4 + 0x5c) != 0) &&
           ((**(code **)(**(int **)(iVar4 + 0x5c) + 0x14))(local_4bc,param_3), local_4bc[0] != 0)) {
          *param_2 = local_4bc[0];
          FUN_00424770(local_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
      }
      iVar4 = FUN_00647e40(param_3,s_AIManager_Actions_ActionCount_0073f298);
      if (iVar4 == 0) {
        FUN_00406a80();
        local_270 = *(undefined4 *)(param_1 + 0x2c);
        local_4bc[0] = 1;
        *param_2 = 1;
        goto LAB_005660fa;
      }
      iVar4 = FUN_00647f20(param_3,s_AIManager_Actions_Action_0073f4ec);
      if (((iVar4 == 0) || (iVar4 = FUN_005648f0(param_3), iVar4 < 0)) ||
         (*(int *)(param_1 + 0x2c) <= iVar4)) {
LAB_00565eca:
        iVar4 = FUN_00647e40(param_3,s_AIManager_Links_LinkCount_0073f208);
        if (iVar4 == 0) {
          FUN_00406a80();
          local_270 = *(undefined4 *)(param_1 + 0x48);
          local_4bc[0] = 1;
          *param_2 = 1;
          FUN_00424770(local_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        iVar4 = FUN_00647f20(param_3,s_AIManager_Links_Link_0073f4d4);
        if (((iVar4 == 0) || (iVar4 = FUN_005648f0(param_3), iVar4 < 0)) ||
           (*(int *)(param_1 + 0x48) <= iVar4)) {
LAB_00566824:
          *param_2 = 0;
          piVar5 = local_4b4;
          piVar6 = param_2 + 2;
          for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar6 = *piVar5;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          }
          param_2[0x82] = 0x7f7fffff;
          param_2[0x83] = 0x7f7fffff;
          param_2[0x84] = 0x7f7fffff;
          param_2[0x85] = -0x800001;
          param_2[0x86] = -0x800001;
          param_2[0x87] = -0x800001;
          *(undefined1 *)((int)param_2 + 0x223) = uStack_299;
          *(undefined1 *)((int)param_2 + 0x222) = uStack_29a;
          *(undefined1 *)((int)param_2 + 0x221) = uStack_29b;
          *(undefined1 *)(param_2 + 0x88) = uStack_29c;
          param_2[0x89] = iStack_298;
          param_2[0x8a] = iStack_294;
          param_2[0x8b] = iStack_290;
          param_2[0x8c] = iStack_28c;
          param_2[0x8d] = iStack_288;
          param_2[0x8e] = iStack_284;
          param_2[0x90] = iStack_27c;
          param_2[0x91] = iStack_278;
          param_2[0x92] = iStack_274;
          param_2[0x93] = local_270;
          param_2[0x94] = iStack_26c;
LAB_00566947:
          param_2[0x95] = iStack_268;
          ExceptionList = pvStack_c;
          return param_2;
        }
        FUN_00649920(&local_4c4,s_AIManager_Links_Link__d_Test_thi_0073f1c8,iVar4);
        local_4 = 5;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(param_3,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          FUN_00406a80();
          local_4bc[0] = 3;
          iStack_268 = (*(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) + 4) << 0x1e) >>
                       0x1f;
          *param_2 = 3;
          FUN_00424770(local_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        FUN_00649920(&local_4c4,s_AIManager_Links_Link__d_Repeats_0073f1a8,iVar4);
        local_4 = 6;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(param_3,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          FUN_00406a80();
          local_4bc[0] = 3;
          iStack_268 = (*(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) + 4) << 0x1f) >>
                       0x1f;
          *param_2 = 3;
          FUN_00424770(local_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        FUN_00649920(&local_4c4,s_AIManager_Links_Link__d_ActiveSt_0073f45c,iVar4);
        local_4 = 7;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(param_3,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 != 0) {
          FUN_00649920(&local_4c4,s_AIManager_Links_Link__d_Triggers_0073f17c,iVar4);
          local_4 = 8;
          uVar2 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 != 0) {
            iVar3 = *(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4);
            *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar3 + 8);
            FUN_00649920(&local_4c4,s_AIManager_Links_Link__d_TriggerC_0073f154,iVar4);
            local_4 = 9;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              local_4bc[0] = 1;
              local_270 = *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) + 0x70);
              *param_2 = 1;
              piVar5 = local_4b4;
              piVar6 = param_2 + 2;
              for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar6 = *piVar5;
                piVar5 = piVar5 + 1;
                piVar6 = piVar6 + 1;
              }
              FUN_00480f60(auStack_2b4);
              FUN_00425250(&uStack_29c);
LAB_00566612:
              FUN_004357e0(&iStack_298);
              FUN_004357e0(&iStack_28c);
              param_2[0x90] = iStack_27c;
              param_2[0x91] = iStack_278;
              param_2[0x92] = iStack_274;
              param_2[0x93] = local_270;
              param_2[0x94] = iStack_26c;
              param_2[0x95] = iStack_268;
              ExceptionList = pvStack_c;
              return param_2;
            }
            FUN_00649920(&local_4c4,s_AIManager_Links_Link__d_ActionCo_0073f130,iVar4);
            local_4 = 10;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              local_4bc[0] = 1;
              local_270 = *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) + 0x8c);
              *param_2 = 1;
              piVar5 = local_4b4;
              piVar6 = param_2 + 2;
              for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar6 = *piVar5;
                piVar5 = piVar5 + 1;
                piVar6 = piVar6 + 1;
              }
              FUN_00480f60(auStack_2b4);
              FUN_00425250(&uStack_29c);
              FUN_004357e0(&iStack_298);
              FUN_004357e0(&iStack_28c);
              param_2[0x90] = iStack_27c;
              param_2[0x91] = iStack_278;
              param_2[0x92] = iStack_274;
              param_2[0x93] = local_270;
              param_2[0x94] = iStack_26c;
              param_2[0x95] = iStack_268;
              ExceptionList = pvStack_c;
              return param_2;
            }
            local_4c4 = 0;
            if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) + 0x70)) {
              do {
                FUN_00649920(auStack_4c0,s_AIManager_Links_Link__d_Trigger_I_0073f108,iVar4,
                             local_4c4);
                local_4 = 0xb;
                uVar2 = FUN_00649940();
                iVar3 = FUN_00647e40(param_3,uVar2);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar3 == 0) {
                  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                  local_4bc[0] = 0xc;
                  local_270 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) +
                                               0x74) + local_4c4 * 4);
                  *param_2 = 0xc;
                  piVar5 = local_4b4;
                  piVar6 = param_2 + 2;
                  for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *piVar6 = *piVar5;
                    piVar5 = piVar5 + 1;
                    piVar6 = piVar6 + 1;
                  }
                  FUN_004357e0(auStack_2b4);
                  FUN_004357e0(auStack_2a8);
                  *(undefined1 *)((int)param_2 + 0x223) = uStack_299;
                  *(undefined1 *)((int)param_2 + 0x222) = uStack_29a;
                  *(undefined1 *)((int)param_2 + 0x221) = uStack_29b;
                  *(undefined1 *)(param_2 + 0x88) = uStack_29c;
                  goto LAB_00566612;
                }
                local_4c4 = local_4c4 + 1;
              } while (local_4c4 < *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) + 0x70));
            }
            local_4c4 = 0;
            if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) + 0x8c)) {
              do {
                FUN_00649920(auStack_4c0,s_AIManager_Links_Link__d_Action_I_0073f0e0,iVar4,local_4c4
                            );
                local_4 = 0xc;
                uVar2 = FUN_00649940();
                iVar3 = FUN_00647e40(param_3,uVar2);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar3 == 0) {
                  iStack_5c = 0x7f7fffff;
                  iStack_58 = 0x7f7fffff;
                  iStack_54 = 0x7f7fffff;
                  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                  uStack_264 = 0xc;
                  iStack_18 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) +
                                               0x90) + local_4c4 * 4);
                  *param_2 = 0xc;
                  piVar5 = aiStack_25c;
                  piVar6 = param_2 + 2;
                  for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *piVar6 = *piVar5;
                    piVar5 = piVar5 + 1;
                    piVar6 = piVar6 + 1;
                  }
                  param_2[0x82] = iStack_5c;
                  param_2[0x83] = iStack_58;
                  param_2[0x84] = iStack_54;
                  param_2[0x85] = iStack_50;
                  param_2[0x86] = iStack_4c;
                  param_2[0x87] = iStack_48;
                  *(undefined1 *)((int)param_2 + 0x223) = uStack_41;
                  *(undefined1 *)((int)param_2 + 0x222) = uStack_42;
                  *(undefined1 *)((int)param_2 + 0x221) = uStack_43;
                  *(undefined1 *)(param_2 + 0x88) = uStack_44;
                  param_2[0x89] = iStack_40;
                  param_2[0x8a] = iStack_3c;
                  param_2[0x8b] = iStack_38;
                  param_2[0x8c] = iStack_34;
                  param_2[0x8d] = iStack_30;
                  param_2[0x8e] = iStack_2c;
                  param_2[0x90] = iStack_24;
                  param_2[0x91] = iStack_20;
                  param_2[0x92] = iStack_1c;
                  param_2[0x94] = iStack_14;
                  param_2[0x93] = iStack_18;
                  iStack_268 = iStack_10;
                  goto LAB_00566947;
                }
                local_4c4 = local_4c4 + 1;
              } while (local_4c4 < *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) + 0x8c));
            }
            goto LAB_00566824;
          }
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_270 = **(undefined4 **)(*(int *)(param_1 + 0x4c) + iVar4 * 4);
          goto LAB_005661aa;
        }
        FUN_00406a80();
        local_270 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar4 * 4) + 8);
      }
      else {
        FUN_00649920(&local_4c4,s_AIManager_Actions_Action__d_Name_0073f258,iVar4);
        local_4 = 3;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(param_3,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          FUN_00406a80();
          local_4bc[0] = 4;
          FUN_00647d70(local_4b4,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30) + iVar4 * 4) + 4)
                       ,0x200);
          uStack_2b5 = 0;
          *param_2 = local_4bc[0];
          FUN_00424770(local_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        FUN_00649920(&local_4c4,s_AIManager_Actions_Action__d_Type_0073f234,iVar4);
        local_4 = 4;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(param_3,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 != 0) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x30) + iVar4 * 4);
          if ((*(int *)(iVar4 + 0x5c) != 0) &&
             ((**(code **)(**(int **)(iVar4 + 0x5c) + 0x10))(local_4bc,param_3), local_4bc[0] != 0))
          {
            *param_2 = local_4bc[0];
            FUN_00424770(local_4b4);
            ExceptionList = pvStack_c;
            return param_2;
          }
          goto LAB_00565eca;
        }
        FUN_00406a80();
        local_270 = **(undefined4 **)(*(int *)(param_1 + 0x30) + iVar4 * 4);
      }
      local_4bc[0] = 0xc;
      *param_2 = 0xc;
LAB_005660fa:
      FUN_00424770(local_4b4);
      ExceptionList = pvStack_c;
      return param_2;
    }
    FUN_00406a80();
    uVar2 = *(undefined4 *)(param_1 + 0x144);
  }
  local_4bc[0] = 0xd;
LAB_00565a38:
  FUN_00647d70(local_4b4,uVar2,0x200);
  *param_2 = local_4bc[0];
  uStack_2b5 = 0;
  FUN_00424770(local_4b4);
  ExceptionList = pvStack_c;
  return param_2;
}

