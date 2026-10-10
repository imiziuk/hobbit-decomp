
int * __thiscall FUN_004a8190(int param_1,int *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int local_740 [2];
  int local_738 [127];
  undefined1 local_539;
  undefined1 local_538 [12];
  undefined1 local_52c [12];
  undefined1 local_520 [4];
  undefined1 local_51c [12];
  undefined1 local_510 [16];
  undefined8 local_500;
  int local_4f8;
  int local_4f4;
  int local_4f0;
  int local_4ec;
  int local_4e8;
  int aiStack_4e0 [2];
  undefined1 auStack_4d8 [504];
  undefined1 local_2e0 [12];
  undefined1 local_2d4 [12];
  undefined1 auStack_2c8 [4];
  int iStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  undefined1 auStack_2b8 [16];
  int iStack_2a8;
  int iStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  undefined1 local_290 [44];
  undefined1 auStack_264 [600];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3d06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_004675a0(local_290,*(undefined4 *)(param_1 + 0x1b0));
  uVar7 = 0;
  local_4 = 0;
  FUN_0064a320(uVar2);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  iVar3 = *(int *)(param_1 + 0x260);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = *(undefined4 *)(iVar3 + 0x10);
    uVar7 = *(undefined4 *)(iVar3 + 0x14);
  }
  iVar3 = FUN_00647e40(param_3,s_ShieldGuid_0072b668);
  if (iVar3 == 0) {
    FUN_00425440();
    local_740[0] = 0xf;
    *param_2 = 0xf;
    local_500._0_4_ = uVar2;
    local_500._4_4_ = uVar7;
    FUN_00424770(local_738);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Creature_Type_Name_0072b704);
  if (iVar3 == 0) {
    FUN_00425440();
    iVar3 = DAT_0075d244;
LAB_004a8285:
    local_740[0] = 0xd;
    FUN_00647d70(local_738,iVar3,0x200);
    local_539 = 0;
    *param_2 = local_740[0];
    FUN_00424770(local_738);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Geometry_Is_Smooth_0072b6f0);
  if (iVar3 == 0) {
    FUN_00425440();
    local_4ec = (*(int *)(param_1 + 0x268) << 0x13) >> 0x1f;
    local_740[0] = 3;
    *param_2 = 3;
    FUN_00424770(local_738);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Geometry_Resource_007299e4);
  if (iVar3 == 0) {
    FUN_00425440();
    local_740[0] = 7;
    iVar3 = FUN_00580ae0();
    if (iVar3 == 0) {
      local_738[0]._0_1_ = 0;
      *param_2 = local_740[0];
      FUN_00424770(local_738);
      ExceptionList = local_c;
      return param_2;
    }
    FUN_00647d70(local_738,iVar3,0x200);
LAB_004a8361:
    *param_2 = local_740[0];
    local_539 = 0;
    FUN_00424770(local_738);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Smooth_Geometry_Resource_0072b6d4);
  if (iVar3 == 0) {
    FUN_00425440();
    local_740[0] = 7;
    iVar3 = FUN_00580ae0();
    if (iVar3 != 0) {
      FUN_00647d70(local_738,iVar3,0x200);
      local_539 = 0;
      *param_2 = local_740[0];
      FUN_00424770(local_738);
      ExceptionList = local_c;
      return param_2;
    }
    local_738[0]._0_1_ = 0;
    *param_2 = local_740[0];
    FUN_00424770(local_738);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Team_1_Bilbo_s_0072b6c4);
  if (iVar3 == 0) {
    FUN_00425440();
    local_4f4 = *(undefined4 *)(param_1 + 0x1a4);
    goto LAB_004a8dab;
  }
  iVar3 = FUN_00647e40(param_3,s_Courage_Pts_0072b688);
  if (iVar3 == 0) {
    FUN_00425440();
    local_4f4 = *(undefined4 *)(param_1 + 0x298);
    local_740[0] = 1;
    *param_2 = 1;
    FUN_00424770(local_738);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Max_Hit_Points_0072b6a4);
  if (iVar3 == 0) {
    FUN_00425440();
    local_4f0 = *(undefined4 *)(param_1 + 0x294);
LAB_004a84e8:
    local_740[0] = 2;
    *param_2 = 2;
    FUN_00424770(local_738);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Current_Hit_Points_0072b674);
  if (iVar3 == 0) {
    FUN_00425440();
    local_4f0 = *(undefined4 *)(param_1 + 0x290);
LAB_004a8539:
    local_740[0] = 2;
    *param_2 = 2;
    FUN_00424770(local_738);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Death_Cinema_0072b658);
  if (iVar3 == 0) {
    FUN_00425440();
    local_500._4_4_ = *(undefined4 *)(param_1 + 0x27c);
    local_500._0_4_ = *(undefined4 *)(param_1 + 0x278);
    local_740[0] = 0xf;
    *param_2 = 0xf;
    FUN_00424770(local_738);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Tweaks_Use_Default_Personal_Spac_0072b62c);
  if (iVar3 == 0) {
    FUN_00425440();
    local_4ec = *(int *)(param_1 + 0x478);
LAB_004a85e8:
    local_4ec = local_4ec << 0x1d;
  }
  else {
    iVar3 = FUN_00647e40(param_3,s_Tweaks_Personal_Space_Radius_0072b60c);
    if (iVar3 == 0) {
      FUN_00406a80();
      local_4f0 = *(undefined4 *)(param_1 + 0xec);
      goto LAB_004a84e8;
    }
    iVar3 = FUN_00647e40(param_3,s_Tweaks_Activity_Sphere_Radius_0072b5ec);
    if (iVar3 == 0) {
      FUN_00406a80();
      local_4f0 = *(undefined4 *)(param_1 + 0x30c);
      goto LAB_004a8539;
    }
    iVar3 = FUN_00647e40(param_3,s_Use_Default_HPs_0072b6b4);
    if (iVar3 == 0) {
      FUN_00406a80();
      local_4ec = *(int *)(param_1 + 0x478) << 0x1f;
    }
    else {
      iVar3 = FUN_00647e40(param_3,s_Use_Default_CP_0072b694);
      if (iVar3 == 0) {
        FUN_00406a80();
        local_4ec = (*(int *)(param_1 + 0x478) << 0x1e) >> 0x1f;
        goto LAB_004a8a2d;
      }
      iVar3 = FUN_00647e40(param_3,s_Use_Default_LocalBBox_0072b2d4);
      if (iVar3 == 0) {
        FUN_00406a80();
        local_4ec = *(int *)(param_1 + 0x478);
LAB_004a86ef:
        local_4ec = local_4ec << 0x1c;
LAB_004a86f2:
        local_4ec = local_4ec >> 0x1f;
LAB_004a86fc:
        local_740[0] = 3;
        *param_2 = 3;
        FUN_00424770(local_738);
        ExceptionList = local_c;
        return param_2;
      }
      iVar3 = FUN_00647e40(param_3,s_Tweaks_Die_Immediately_0072b5d4);
      if (iVar3 == 0) {
        FUN_00406a80();
        local_4ec = *(int *)(param_1 + 0x478) << 0x19;
      }
      else {
        iVar3 = FUN_00647e40(param_3,s_Tweaks_Sleeps_When_OffCamera_0072b5b4);
        if (iVar3 == 0) {
          FUN_00406a80();
          local_4ec = (*(int *)(param_1 + 0x268) << 0x12) >> 0x1f;
LAB_004a8a2d:
          local_740[0] = 3;
          *param_2 = 3;
          FUN_00424770(local_738);
          ExceptionList = local_c;
          return param_2;
        }
        iVar3 = FUN_00647e40(param_3,s_Tweaks_Pushable_By_Bilbo_0072b598);
        if (iVar3 == 0) {
          FUN_00406a80();
          local_4ec = (*(int *)(param_1 + 0x268) << 0xd) >> 0x1f;
          local_740[0] = 3;
          *param_2 = 3;
          FUN_00424770(local_738);
          ExceptionList = local_c;
          return param_2;
        }
        iVar3 = FUN_00647e40(param_3,s_Tweaks_Invulnerable_0072b56c);
        if (iVar3 != 0) {
          iVar3 = FUN_00647e40(param_3,s_Tweaks_Root_to_Position_0072b580);
          if (iVar3 == 0) {
            FUN_00406a80();
            local_4ec = (*(int *)(param_1 + 0x268) << 0x18) >> 0x1f;
            goto LAB_004a8a2d;
          }
          iVar3 = FUN_00647e40(param_3,s_Tweaks_Run_AI_0072b55c);
          if (iVar3 == 0) {
            FUN_00406a80();
            local_4ec = *(int *)(param_1 + 0x268);
            goto LAB_004a86ef;
          }
          iVar3 = FUN_00647e40(param_3,s_Tweaks_Sleep_Timer_0072b548);
          if (iVar3 == 0) {
            FUN_00406a80();
            local_4f0 = *(undefined4 *)(param_1 + 0x460);
            local_740[0] = 2;
            *param_2 = 2;
            FUN_00424770(local_738);
            ExceptionList = local_c;
            return param_2;
          }
          iVar3 = FUN_00647e40(param_3,s_Tweaks_Do_Render_0072b534);
          if (iVar3 == 0) {
            FUN_00406a80();
            local_4ec = (*(int *)(param_1 + 0x268) << 0x1e) >> 0x1f;
            goto LAB_004a8a2d;
          }
          iVar3 = FUN_00647e40(param_3,s_Tweaks_Do_Shadow_0072b520);
          if (iVar3 == 0) {
            FUN_00406a80();
            local_4ec = *(int *)(param_1 + 0x268) << 0x19;
          }
          else {
            iVar3 = FUN_00647e40(param_3,s_Tweaks_Do_Collision_0072b50c);
            if (iVar3 == 0) {
              FUN_00406a80();
              local_4ec = *(int *)(param_1 + 0x268);
              goto LAB_004a85e8;
            }
            iVar3 = FUN_00647e40(param_3,s_Tweaks_Do_StateControl_0072b4f4);
            if (iVar3 == 0) {
              FUN_00406a80();
              local_4ec = (*(int *)(param_1 + 0x268) << 0x1c) >> 0x1f;
              goto LAB_004a8a2d;
            }
            iVar3 = FUN_00647e40(param_3,s_Tweaks_Do_PhysControl_0072b4dc);
            if (iVar3 != 0) {
              iVar3 = FUN_00647e40(param_3,s_Tweaks_Do_Senses_0072b4c8);
              if (iVar3 != 0) {
                iVar3 = FUN_00647e40(param_3,s_LevelReset_0072073c);
                if (iVar3 == 0) {
                  FUN_00406a80();
                  goto LAB_004a86fc;
                }
                iVar3 = FUN_00647e40(param_3,s_Debug_Log_State_Changes_0072b4a8);
                if (iVar3 != 0) {
                  iVar3 = FUN_00647e40(param_3,s_Debug_Log_Animation_Changes_0072b48c);
                  if (iVar3 == 0) {
                    FUN_00406a80();
                    local_4ec = *(int *)(param_1 + 600);
                    goto LAB_004a8a2d;
                  }
                  iVar3 = FUN_00647e40(param_3,s_Debug_Current_Anim_Name_0072b474);
                  if (iVar3 == 0) {
                    if (*(int *)(*(int *)(param_1 + 0x304) + 0x158) == 0) {
                      FUN_00406a80();
                      goto LAB_004a85f5;
                    }
                    iVar3 = FUN_00647e40(param_3,s_Debug_Current_Anim_Name_0072b474);
                    if (iVar3 == 0) {
                      FUN_00406a80();
                      iVar3 = *(int *)(*(int *)(param_1 + 0x304) + 0x158) + 8;
                      goto LAB_004a8285;
                    }
                  }
                  else {
                    iVar3 = FUN_00647e40(param_3,s_Debug_Current_State_0072b460);
                    if (iVar3 == 0) {
                      FUN_00406a80();
                      local_740[0] = 0xd;
                      FUN_00647d10(local_738,&DAT_00720670);
                      if (*(int *)(*(int *)(param_1 + 0x300) + 0xbc) != 0) {
                        uVar2 = FUN_005bece0();
                        FUN_00647d10(local_738,uVar2);
                      }
                      *param_2 = local_740[0];
                      FUN_00424770(local_738);
                      ExceptionList = local_c;
                      return param_2;
                    }
                  }
                  iVar3 = FUN_00647e40(param_3,s_Debug_Current_Target_0072b448);
                  if (iVar3 == 0) {
                    FUN_00406a80();
                    local_740[0] = 0xf;
                    local_500 = FUN_005af0f0();
LAB_004a8c2a:
                    *param_2 = local_740[0];
                    FUN_00424770(local_738);
                    ExceptionList = local_c;
                    return param_2;
                  }
                  iVar3 = FUN_00647e40(param_3,s_Conversations_Triggered_Conversa_0072b40c);
                  if (iVar3 == 0) {
                    FUN_00406a80();
                    local_740[0] = 0xd;
                    puVar4 = (undefined4 *)FUN_004aa040(local_290);
                    local_4 = 1;
                    FUN_00647d70(local_738,*puVar4,0x200);
                    local_4 = 0xffffffff;
                    FUN_00649ba0();
                    goto LAB_004a8361;
                  }
                  iVar3 = FUN_00647e40(param_3,s_Cinemas_Triggered_Cinema_0072b3e8);
                  if (iVar3 == 0) {
                    FUN_00406a80();
                    local_740[0] = 0xf;
                    local_500 = FUN_005aef40(1);
                    goto LAB_004a8c2a;
                  }
                  iVar3 = FUN_00647e40(param_3,s_Combat_Tweaks_Block_Percent_0072b3bc);
                  if (iVar3 == 0) {
                    FUN_00406a80();
                    local_4f4 = **(undefined4 **)(*(int *)(param_1 + 0x300) + 0x214);
LAB_004a8dab:
                    local_740[0] = 1;
                    *param_2 = 1;
                    FUN_00424770(local_738);
                    ExceptionList = local_c;
                    return param_2;
                  }
                  iVar3 = FUN_00647e40(param_3,s_Combat_Tweaks_Evade_Percent_0072b3a0);
                  if (iVar3 == 0) {
                    FUN_00406a80();
                    local_740[0] = 1;
                    local_4f4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x300) + 0x214) + 4);
                    *param_2 = 1;
                    FUN_00424770(local_738);
                    ExceptionList = local_c;
                    return param_2;
                  }
                  iVar3 = FUN_00647e40(param_3,s_Combat_Tweaks_Shove_Percent_0072b384);
                  if (iVar3 == 0) {
                    FUN_00406a80();
                    local_740[0] = 1;
                    local_4f4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x300) + 0x214) + 8);
                    *param_2 = 1;
                    FUN_00424770(local_738);
                    ExceptionList = local_c;
                    return param_2;
                  }
                  iVar3 = FUN_00647e40(param_3,s_Combat_Tweaks_Strafe_Percent_0072b364);
                  if (iVar3 == 0) {
                    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                    local_4f4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x300) + 0x214) + 0xc);
                    goto LAB_004a8dab;
                  }
                  iVar3 = FUN_00647e40(param_3,s_Combat_Tweaks_Can_Block_Stones_0072b344);
                  if (iVar3 == 0) {
                    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                    local_740[0] = 3;
                    local_4ec = *(int *)(*(int *)(*(int *)(param_1 + 0x300) + 0x214) + 0x18);
                    *param_2 = 3;
                    piVar5 = local_738;
                    piVar8 = param_2 + 2;
                    for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
                      *piVar8 = *piVar5;
                      piVar5 = piVar5 + 1;
                      piVar8 = piVar8 + 1;
                    }
                    FUN_00480f60(local_538);
LAB_004a9047:
                    FUN_00425250(local_520);
                    FUN_004357e0(local_51c);
                    FUN_004357e0(local_510);
                    param_2[0x90] = (int)local_500;
                    param_2[0x91] = local_500._4_4_;
                    param_2[0x92] = local_4f8;
                    param_2[0x93] = local_4f4;
                    param_2[0x94] = local_4f0;
                    param_2[0x95] = local_4ec;
                    ExceptionList = local_c;
                    return param_2;
                  }
                  iVar3 = FUN_00647e40(param_3,s_Combat_Tweaks_Blocking_Damage_Mo_0072b31c);
                  if (iVar3 == 0) {
                    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                    local_740[0] = 2;
                    local_4f0 = *(int *)(*(int *)(*(int *)(param_1 + 0x300) + 0x214) + 0x1c);
                    *param_2 = 2;
                    piVar5 = local_738;
                    piVar8 = param_2 + 2;
                    for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
                      *piVar8 = *piVar5;
                      piVar5 = piVar5 + 1;
                      piVar8 = piVar8 + 1;
                    }
                    FUN_00480f60(local_538);
                    FUN_00425250(local_520);
                    FUN_004357e0(local_51c);
                    FUN_004357e0(local_510);
                    param_2[0x90] = (int)local_500;
                    param_2[0x91] = local_500._4_4_;
                    param_2[0x92] = local_4f8;
                    param_2[0x93] = local_4f4;
                    param_2[0x94] = local_4f0;
                    param_2[0x95] = local_4ec;
                    ExceptionList = local_c;
                    return param_2;
                  }
                  iVar3 = FUN_00647e40(param_3,s_Combat_Tweaks_Shield_Blocking_Da_0072b2ec);
                  if (iVar3 == 0) {
                    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                    local_740[0] = 2;
                    local_4f0 = *(int *)(*(int *)(*(int *)(param_1 + 0x300) + 0x214) + 0x20);
                    *param_2 = 2;
                    piVar5 = local_738;
                    piVar8 = param_2 + 2;
                    for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
                      *piVar8 = *piVar5;
                      piVar5 = piVar5 + 1;
                      piVar8 = piVar8 + 1;
                    }
                    FUN_004357e0(local_538);
                    FUN_004357e0(local_52c);
                    goto LAB_004a9047;
                  }
                  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                  local_4e8 = 0;
                  if (*(int **)(param_1 + 0x300) != (int *)0x0) {
                    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x300) + 0xc))
                                              (local_740,param_3,0);
                    local_4e8 = *piVar5;
                    uVar6 = 0;
                    do {
                      puVar1 = (undefined1 *)((int)aiStack_4e0 + uVar6);
                      uVar6 = uVar6 + 1;
                      *puVar1 = puVar1[(int)piVar5 + (8 - (int)aiStack_4e0)];
                    } while (uVar6 < 0x200);
                    FUN_004357e0(piVar5 + 0x82);
                    FUN_004357e0(piVar5 + 0x85);
                    FUN_00425250(piVar5 + 0x88);
                    iStack_2c4 = piVar5[0x89];
                    iStack_2c0 = piVar5[0x8a];
                    iStack_2bc = piVar5[0x8b];
                    FUN_004357e0(piVar5 + 0x8c);
                    iStack_2a8 = piVar5[0x90];
                    iStack_2a4 = piVar5[0x91];
                    iStack_2a0 = piVar5[0x92];
                    iStack_29c = piVar5[0x93];
                    iStack_298 = piVar5[0x94];
                    iStack_294 = piVar5[0x95];
                    if (local_4e8 != 0) goto LAB_004a9506;
                  }
                  if (*(int **)(param_1 + 0x308) != (int *)0x0) {
                    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x308) + 0xc))
                                              (local_740,param_3);
                    local_4e8 = *piVar5;
                    uVar6 = 0;
                    do {
                      puVar1 = (undefined1 *)((int)aiStack_4e0 + uVar6);
                      uVar6 = uVar6 + 1;
                      *puVar1 = puVar1[(int)piVar5 + (8 - (int)aiStack_4e0)];
                    } while (uVar6 < 0x200);
                    FUN_004357e0(piVar5 + 0x82);
                    FUN_004357e0(piVar5 + 0x85);
                    FUN_00425250(piVar5 + 0x88);
                    FUN_004357e0(piVar5 + 0x89);
                    FUN_004357e0(piVar5 + 0x8c);
                    iStack_2a8 = piVar5[0x90];
                    iStack_2a4 = piVar5[0x91];
                    iStack_2a0 = piVar5[0x92];
                    iStack_29c = piVar5[0x93];
                    iStack_298 = piVar5[0x94];
                    iStack_294 = piVar5[0x95];
                    if (local_4e8 != 0) goto LAB_004a9506;
                  }
                  if (*(int *)(param_1 + 0x304) != 0) {
                    piVar5 = (int *)FUN_0059ae70(local_740,param_3);
                    local_4e8 = *piVar5;
                    uVar6 = 0;
                    do {
                      puVar1 = (undefined1 *)((int)aiStack_4e0 + uVar6);
                      uVar6 = uVar6 + 1;
                      *puVar1 = puVar1[(int)piVar5 + (8 - (int)aiStack_4e0)];
                    } while (uVar6 < 0x200);
                    FUN_004357e0(piVar5 + 0x82);
                    FUN_004357e0(piVar5 + 0x85);
                    FUN_00425250(piVar5 + 0x88);
                    FUN_004357e0(piVar5 + 0x89);
                    FUN_004357e0(piVar5 + 0x8c);
                    iStack_2a8 = piVar5[0x90];
                    iStack_2a4 = piVar5[0x91];
                    iStack_2a0 = piVar5[0x92];
                    iStack_29c = piVar5[0x93];
                    iStack_298 = piVar5[0x94];
                    iStack_294 = piVar5[0x95];
                    if (local_4e8 != 0) goto LAB_004a9506;
                  }
                  piVar5 = (int *)FUN_004abdf0(auStack_264,param_3);
                  uVar6 = 0;
                  local_4e8 = *piVar5;
                  do {
                    puVar1 = (undefined1 *)((int)aiStack_4e0 + uVar6);
                    uVar6 = uVar6 + 1;
                    *puVar1 = puVar1[(int)piVar5 + (8 - (int)aiStack_4e0)];
                  } while (uVar6 < 0x200);
                  FUN_004357e0(piVar5 + 0x82);
                  FUN_004357e0(piVar5 + 0x85);
                  FUN_00425250(piVar5 + 0x88);
                  FUN_004357e0(piVar5 + 0x89);
                  FUN_004357e0(piVar5 + 0x8c);
                  iStack_2a8 = piVar5[0x90];
                  iStack_2a4 = piVar5[0x91];
                  iStack_2a0 = piVar5[0x92];
                  iStack_29c = piVar5[0x93];
                  iStack_298 = piVar5[0x94];
                  iStack_294 = piVar5[0x95];
LAB_004a9506:
                  FUN_00580a90((*(int *)(param_1 + 0x268) << 0x13) >> 0x1f);
                  *param_2 = local_4e8;
                  piVar5 = aiStack_4e0;
                  piVar8 = param_2 + 2;
                  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *piVar8 = *piVar5;
                    piVar5 = piVar5 + 1;
                    piVar8 = piVar8 + 1;
                  }
                  FUN_004357e0(local_2e0);
                  FUN_004357e0(local_2d4);
                  FUN_00425250(auStack_2c8);
                  param_2[0x89] = iStack_2c4;
                  param_2[0x8b] = iStack_2bc;
                  param_2[0x8a] = iStack_2c0;
                  FUN_004357e0(auStack_2b8);
                  param_2[0x90] = iStack_2a8;
                  param_2[0x91] = iStack_2a4;
                  param_2[0x92] = iStack_2a0;
                  param_2[0x93] = iStack_29c;
                  param_2[0x94] = iStack_298;
                  param_2[0x95] = iStack_294;
                  ExceptionList = local_c;
                  return param_2;
                }
                FUN_00406a80();
                local_4ec = *(int *)(param_1 + 0x254);
                goto LAB_004a85f5;
              }
              FUN_00406a80();
              local_4ec = *(int *)(param_1 + 0x268) << 0x1a;
              goto LAB_004a85eb;
            }
            FUN_00406a80();
            local_4ec = *(int *)(param_1 + 0x268) << 0x1b;
          }
          goto LAB_004a86f2;
        }
        FUN_00406a80();
        local_4ec = *(int *)(param_1 + 0xe8) << 0x1f;
      }
    }
  }
LAB_004a85eb:
  local_4ec = local_4ec >> 0x1f;
LAB_004a85f5:
  local_740[0] = 3;
  *param_2 = 3;
  FUN_00424770(local_738);
  ExceptionList = local_c;
  return param_2;
}

