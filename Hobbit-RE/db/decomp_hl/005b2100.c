
int * __thiscall FUN_005b2100(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_4dc [4];
  undefined1 local_4d8 [4];
  undefined1 local_4d4 [4];
  undefined1 local_4d0 [4];
  undefined1 local_4cc [4];
  undefined1 local_4c8 [4];
  undefined1 local_4c4 [4];
  undefined1 local_4c0 [4];
  int local_4bc [2];
  int local_4b4 [127];
  undefined1 local_2b5;
  undefined1 local_2b4 [12];
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
  int local_27c;
  int local_278;
  int iStack_274;
  int local_270;
  int iStack_26c;
  int local_268;
  int aiStack_264 [2];
  int aiStack_25c [128];
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined1 auStack_50 [12];
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
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de884;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((param_4 == 0) && (ExceptionList = &local_c, iVar1 = FUN_005af120(), iVar1 == 0)) {
    FUN_00425440();
    local_4bc[0] = 0;
    *param_2 = 0;
    FUN_00424770(local_4b4);
  }
  else {
    iVar1 = FUN_005af120();
    if ((*(int *)(iVar1 + 0x1b0) == 0x13) &&
       (iVar1 = FUN_00647e40(param_3,s_Eel_Info_Colony_007454fc), iVar1 == 0)) {
      FUN_00425440();
      local_27c = *(undefined4 *)(param_1 + 0x98);
      local_278 = *(undefined4 *)(param_1 + 0x9c);
      local_4bc[0] = 0xf;
      *param_2 = 0xf;
      FUN_00424770(local_4b4);
    }
    else {
      iVar1 = FUN_00647e40(param_3,s_AI_Tweaks_Goal_List_Count_007453cc);
      if (iVar1 == 0) {
        FUN_00406a80();
        local_270 = *(undefined4 *)(param_1 + 0xe0);
        local_4bc[0] = 1;
        *param_2 = 1;
        FUN_00424770(local_4b4);
      }
      else {
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0xe0)) {
          do {
            FUN_00649920(local_4c8,s_AI_Tweaks_Goal_List__d_Name_007453b0,iVar1);
            local_4 = 0;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              local_4bc[0] = 4;
              FUN_00647d70(local_4b4,*(int *)(*(int *)(param_1 + 0xe4) + iVar1 * 4) + 0x1c,0x200);
              local_2b5 = 0;
              *param_2 = local_4bc[0];
              FUN_00424770(local_4b4);
              ExceptionList = local_c;
              return param_2;
            }
            FUN_00649920(local_4cc,s_AI_Tweaks_Goal_List__d_Looping_00745390,iVar1);
            local_4 = 1;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              local_4bc[0] = 3;
              local_268 = (*(int *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar1 * 4) + 0x5c) << 0x1f)
                          >> 0x1f;
              *param_2 = 3;
              FUN_00424770(local_4b4);
              ExceptionList = local_c;
              return param_2;
            }
            FUN_00649920(local_4c4,s_AI_Tweaks_Goal_List__d_Loop_Star_00745368,iVar1);
            local_4 = 2;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              local_4bc[0] = 1;
              local_270 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar1 * 4) + 0x60);
              *param_2 = 1;
              FUN_00424770(local_4b4);
              ExceptionList = local_c;
              return param_2;
            }
            FUN_00649920(local_4c0,s_AI_Tweaks_Goal_List__d_Goal_Coun_00745344,iVar1);
            local_4 = 3;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              iVar3 = *(int *)(param_1 + 0xe4);
              goto LAB_005b2aae;
            }
            FUN_00649920(local_4dc,s_AI_Tweaks_Goal_List__d_Collision_00745320,iVar1);
            local_4 = 4;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              local_4bc[0] = 3;
              local_268 = (*(int *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar1 * 4) + 0x5c) << 0x1e)
                          >> 0x1f;
              *param_2 = 3;
              FUN_00424770(local_4b4);
              ExceptionList = local_c;
              return param_2;
            }
            FUN_00649920(local_4d8,s_AI_Tweaks_Goal_List__d_Must_Comp_007452f8,iVar1);
            local_4 = 5;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              local_4bc[0] = 3;
              local_268 = (*(int *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar1 * 4) + 0x5c) << 0x1d)
                          >> 0x1f;
              *param_2 = 3;
              FUN_00424770(local_4b4);
              ExceptionList = local_c;
              return param_2;
            }
            FUN_00649920(local_4d0,s_AI_Tweaks_Goal_List__d_Restart_F_007452c8,iVar1);
            local_4 = 6;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              local_4bc[0] = 3;
              local_268 = (*(int *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar1 * 4) + 0x5c) << 0x1c)
                          >> 0x1f;
              *param_2 = 3;
              FUN_00424770(local_4b4);
              ExceptionList = local_c;
              return param_2;
            }
            iVar3 = 0;
            if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar1 * 4) + 8)) {
              do {
                FUN_00649920(local_4d4,s_AI_Tweaks_Goal_List__d_Goal__d_G_0074529c,iVar1,iVar3);
                local_4 = 7;
                uVar2 = FUN_00649940();
                iVar4 = FUN_00647e40(param_3,uVar2);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar4 == 0) {
                  FUN_00406a80();
                  local_4bc[0] = 0xc;
                  local_270 = **(undefined4 **)
                                (*(int *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar1 * 4) + 0xc) +
                                iVar3 * 4);
                  *param_2 = 0xc;
                  FUN_00424770(local_4b4);
                  ExceptionList = local_c;
                  return param_2;
                }
                if ((*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar1 * 4) + 0xc
                                               ) + iVar3 * 4) + 4) != 0) &&
                   ((**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xe4) +
                                                                      iVar1 * 4) + 0xc) + iVar3 * 4)
                                           + 4) + 0xc))(local_4bc,param_3,iVar1,iVar3),
                   local_4bc[0] != 0)) {
                  *param_2 = local_4bc[0];
                  FUN_00424770(local_4b4);
                  ExceptionList = local_c;
                  return param_2;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(int *)(*(int *)(*(int *)(param_1 + 0xe4) + iVar1 * 4) + 8));
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(param_1 + 0xe0));
        }
        iVar1 = FUN_00647e40(param_3,s_AI_Tweaks_Goal_ListSet_Count_0074527c);
        if (iVar1 == 0) {
          FUN_00406a80();
          local_270 = *(undefined4 *)(param_1 + 0xfc);
          local_4bc[0] = 1;
          *param_2 = 1;
          FUN_00424770(local_4b4);
        }
        else {
          iVar1 = 0;
          if (0 < *(int *)(param_1 + 0xfc)) {
            do {
              FUN_00649920(local_4d4,s_AI_Tweaks_Goal_ListSet__d_Name_0074525c,iVar1);
              local_4 = 8;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                local_4bc[0] = 4;
                FUN_00647d70(local_4b4,*(int *)(*(int *)(param_1 + 0x100) + iVar1 * 4) + 0x1c,0x200)
                ;
                *param_2 = local_4bc[0];
                local_2b5 = 0;
                FUN_00424770(local_4b4);
                ExceptionList = local_c;
                return param_2;
              }
              FUN_00649920(local_4d0,s_AI_Tweaks_Goal_ListSet__d_GoalLi_00745230,iVar1);
              local_4 = 9;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                iVar3 = *(int *)(param_1 + 0x100);
LAB_005b2aae:
                local_4bc[0] = 1;
                local_270 = *(undefined4 *)(*(int *)(iVar3 + iVar1 * 4) + 8);
                *param_2 = 1;
                FUN_00424770(local_4b4);
                ExceptionList = local_c;
                return param_2;
              }
              iVar3 = 0;
              if (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x100) + iVar1 * 4) + 8)) {
                do {
                  FUN_00649920(local_4d8,s_AI_Tweaks_Goal_ListSet__d_GoalLi_00745204,iVar1,iVar3);
                  local_4 = 10;
                  uVar2 = FUN_00649940();
                  iVar4 = FUN_00647e40(param_3,uVar2);
                  local_4 = 0xffffffff;
                  FUN_00649950();
                  if (iVar4 == 0) {
                    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                    local_4bc[0] = 0xd;
                    FUN_00647d70(local_4b4,
                                 *(undefined4 *)
                                  (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x100) + iVar1 * 4)
                                                    + 0xc) + iVar3 * 4) + 4),0x200);
                    local_2b5 = 0;
                    *param_2 = local_4bc[0];
                    piVar5 = local_4b4;
                    piVar6 = param_2 + 2;
                    for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                      *piVar6 = *piVar5;
                      piVar5 = piVar5 + 1;
                      piVar6 = piVar6 + 1;
                    }
                    FUN_004357e0(local_2b4);
                    FUN_004357e0(auStack_2a8);
                    FUN_00425250(&uStack_29c);
                    FUN_004357e0(&iStack_298);
                    FUN_004357e0(&iStack_28c);
                    param_2[0x91] = local_278;
                    param_2[0x90] = local_27c;
                    param_2[0x92] = iStack_274;
                    param_2[0x94] = iStack_26c;
                    param_2[0x93] = local_270;
                    param_2[0x95] = local_268;
                    ExceptionList = local_c;
                    return param_2;
                  }
                  FUN_00649920(local_4dc,s_AI_Tweaks_Goal_ListSet__d_GoalLi_007451d4,iVar1,iVar3);
                  local_4 = 0xb;
                  uVar2 = FUN_00649940();
                  iVar4 = FUN_00647e40(param_3,uVar2);
                  local_4 = 0xffffffff;
                  FUN_00649950();
                  if (iVar4 == 0) {
                    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                    local_4bc[0] = 1;
                    local_270 = **(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x100) + iVar1 * 4)
                                                   + 0xc) + iVar3 * 4);
                    *param_2 = 1;
                    piVar5 = local_4b4;
                    piVar6 = param_2 + 2;
                    for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                      *piVar6 = *piVar5;
                      piVar5 = piVar5 + 1;
                      piVar6 = piVar6 + 1;
                    }
                    FUN_004357e0(local_2b4);
                    FUN_004357e0(auStack_2a8);
                    *(undefined1 *)((int)param_2 + 0x223) = uStack_299;
                    *(undefined1 *)((int)param_2 + 0x222) = uStack_29a;
                    *(undefined1 *)(param_2 + 0x88) = uStack_29c;
                    *(undefined1 *)((int)param_2 + 0x221) = uStack_29b;
                    FUN_004357e0(&iStack_298);
                    FUN_004357e0(&iStack_28c);
                    param_2[0x92] = iStack_274;
                    param_2[0x90] = local_27c;
                    param_2[0x91] = local_278;
                    param_2[0x95] = local_268;
                    param_2[0x93] = local_270;
                    param_2[0x94] = iStack_26c;
                    ExceptionList = local_c;
                    return param_2;
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < *(int *)(*(int *)(*(int *)(param_1 + 0x100) + iVar1 * 4) + 8));
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)(param_1 + 0xfc));
          }
          iVar1 = 0;
          if (0 < *(int *)(param_1 + 0xa8)) {
            do {
              (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + iVar1 * 4) + 0x74))
                        (aiStack_264,param_3);
              if (aiStack_264[0] != 0) {
                *param_2 = aiStack_264[0];
                piVar5 = aiStack_25c;
                piVar6 = param_2 + 2;
                for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                  *piVar6 = *piVar5;
                  piVar5 = piVar5 + 1;
                  piVar6 = piVar6 + 1;
                }
                param_2[0x82] = iStack_5c;
                param_2[0x83] = iStack_58;
                param_2[0x84] = iStack_54;
                FUN_004357e0(auStack_50);
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
                param_2[0x93] = iStack_18;
                param_2[0x94] = iStack_14;
                param_2[0x95] = iStack_10;
                ExceptionList = local_c;
                return param_2;
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)(param_1 + 0xa8));
          }
          *param_2 = 0;
          piVar5 = local_4b4;
          piVar6 = param_2 + 2;
          for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
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
          param_2[0x90] = local_27c;
          param_2[0x91] = local_278;
          param_2[0x92] = iStack_274;
          param_2[0x93] = local_270;
          param_2[0x94] = iStack_26c;
          param_2[0x95] = local_268;
        }
      }
    }
  }
  ExceptionList = local_c;
  return param_2;
}

