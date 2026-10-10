
void __thiscall FUN_004a6d10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xd;
    FUN_00647d10(iVar1,s_Creature_Type_Name_0072b704);
    *(undefined4 *)(iVar1 + 0x84) = 0x82;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = DAT_0075cbe4;
    *(undefined **)(iVar1 + 0x100) = &DAT_0075cbdc;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 3;
      FUN_00647d10(iVar1,s_Geometry_Is_Smooth_0072b6f0);
      *(undefined4 *)(iVar1 + 0x84) = 2;
    }
  }
  if ((*(uint *)(param_1 + 0x268) & 0x1000) == 0) {
    if (DAT_0075d338 != 0) goto LAB_004a6e1c;
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 7;
    FUN_00647d10(iVar1,s_Geometry_Resource_007299e4);
    *(undefined4 *)(iVar1 + 0x100) = 2;
  }
  else {
    if (DAT_0075d338 != 0) goto LAB_004a6e1c;
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 7;
    FUN_00647d10(iVar1,s_Smooth_Geometry_Resource_0072b6d4);
    *(undefined4 *)(iVar1 + 0x100) = 5;
  }
  *(undefined4 *)(iVar1 + 0x84) = 2;
  *(undefined4 *)(iVar1 + 0x104) = 0;
LAB_004a6e1c:
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 1;
  FUN_00647d10(iVar1,s_Team_1_Bilbo_s_0072b6c4);
  *(undefined4 *)(iVar1 + 0x84) = 0x22;
  *(undefined4 *)(iVar1 + 0xf0) = 0;
  *(undefined4 *)(iVar1 + 0xf4) = 0xffffffff;
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 3;
    FUN_00647d10(iVar1,s_Use_Default_HPs_0072b6b4);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 2;
      FUN_00647d10(iVar1,s_Max_Hit_Points_0072b6a4);
      *(undefined4 *)(iVar1 + 0x84) = 2;
      *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
      *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 3;
        FUN_00647d10(iVar1,s_Use_Default_CP_0072b694);
        *(undefined4 *)(iVar1 + 0x84) = 2;
        if (DAT_0075d338 == 0) {
          iVar1 = FUN_00425010();
          *(undefined4 *)(iVar1 + 0x80) = 1;
          FUN_00647d10(iVar1,s_Courage_Pts_0072b688);
          *(undefined4 *)(iVar1 + 0x84) = 2;
          *(undefined4 *)(iVar1 + 0xf0) = 0;
          *(undefined4 *)(iVar1 + 0xf4) = 0xffffffff;
        }
      }
    }
  }
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 2;
  FUN_00647d10(iVar1,s_Current_Hit_Points_0072b674);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
  *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 3;
  FUN_00647d10(iVar1,s_LevelReset_0072073c);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  iVar1 = FUN_00425010();
  *(undefined4 *)(iVar1 + 0x80) = 0xf;
  FUN_00647d10(iVar1,s_ShieldGuid_0072b668);
  *(undefined4 *)(iVar1 + 0x84) = 0x38;
  *(undefined4 *)(iVar1 + 0x100) = 0x1e;
  *(undefined4 *)(iVar1 + 0x104) = 1;
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xf;
    FUN_00647d10(iVar1,s_Death_Cinema_0072b658);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    *(undefined4 *)(iVar1 + 0x100) = 0x11;
    *(undefined4 *)(iVar1 + 0x104) = 1;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 5;
      FUN_00647d10(iVar1,s_Tweaks_0072b650);
      *(undefined4 *)(iVar1 + 0x84) = 0x17;
      *(undefined4 *)(iVar1 + 0x100) = 0;
      if (DAT_0075d338 == 0) {
        iVar1 = FUN_00425010();
        *(undefined4 *)(iVar1 + 0x80) = 3;
        FUN_00647d10(iVar1,s_Tweaks_Use_Default_Personal_Spac_0072b62c);
        *(undefined4 *)(iVar1 + 0x84) = 2;
        if (DAT_0075d338 == 0) {
          iVar1 = FUN_00425010();
          *(undefined4 *)(iVar1 + 0x80) = 2;
          FUN_00647d10(iVar1,s_Tweaks_Personal_Space_Radius_0072b60c);
          *(undefined4 *)(iVar1 + 0x84) = 2;
          *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
          *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
          if (DAT_0075d338 == 0) {
            iVar1 = FUN_00425010();
            *(undefined4 *)(iVar1 + 0x80) = 2;
            FUN_00647d10(iVar1,s_Tweaks_Activity_Sphere_Radius_0072b5ec);
            *(undefined4 *)(iVar1 + 0x84) = 2;
            *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
            *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
            if (DAT_0075d338 == 0) {
              iVar1 = FUN_00425010();
              *(undefined4 *)(iVar1 + 0x80) = 3;
              FUN_00647d10(iVar1,s_Tweaks_Die_Immediately_0072b5d4);
              *(undefined4 *)(iVar1 + 0x84) = 2;
              if (DAT_0075d338 == 0) {
                iVar1 = FUN_00425010();
                *(undefined4 *)(iVar1 + 0x80) = 3;
                FUN_00647d10(iVar1,s_Tweaks_Sleeps_When_OffCamera_0072b5b4);
                *(undefined4 *)(iVar1 + 0x84) = 2;
              }
            }
          }
        }
      }
    }
  }
  FUN_005669e0(param_2,s_Tweaks_Pushable_By_Bilbo_0072b598,2);
  FUN_005669e0(param_2,s_Tweaks_Root_to_Position_0072b580,2);
  FUN_005669e0(param_2,s_Tweaks_Invulnerable_0072b56c,0x22);
  FUN_005669e0(param_2,s_Tweaks_Run_AI_0072b55c,0x22);
  FUN_00537ff0(param_2,s_Tweaks_Sleep_Timer_0072b548,0x38,0x800000,0x7f7fffff);
  FUN_005669e0(param_2,s_Tweaks_Do_Render_0072b534,0x22);
  FUN_005669e0(param_2,s_Tweaks_Do_Shadow_0072b520,0x22);
  FUN_005669e0(param_2,s_Tweaks_Do_Collision_0072b50c,0x22);
  FUN_005669e0(param_2,s_Tweaks_Do_StateControl_0072b4f4,0x22);
  FUN_005669e0(param_2,s_Tweaks_Do_PhysControl_0072b4dc,0x22);
  FUN_005669e0(param_2,s_Tweaks_Do_Senses_0072b4c8,0x22);
  FUN_00474220(param_2,s_Debug_0072b4c0,2,0);
  FUN_005669e0(param_2,s_Debug_Log_State_Changes_0072b4a8,2);
  FUN_005669e0(param_2,s_Debug_Log_Animation_Changes_0072b48c,2);
  uVar2 = FUN_0059aa60(0x12);
  FUN_00538050(param_2,s_Debug_Current_Anim_Name_0072b474,uVar2);
  uVar2 = FUN_005b0110(0x12);
  FUN_00538050(param_2,s_Debug_Current_State_0072b460,uVar2);
  FUN_00481150(param_2,s_Debug_Current_Target_0072b448,0x50,1,0x12);
  FUN_00474220(param_2,s_Conversations_0072b438,2,0);
  uVar2 = FUN_0059d060(0x22);
  FUN_00538050(param_2,s_Conversations_Triggered_Conversa_0072b40c,uVar2);
  FUN_00474220(param_2,s_Cinemas_0072b404,2,0);
  FUN_00459f30(param_2,s_Cinemas_Triggered_Cinema_0072b3e8,0x11,1,0x22,0);
  FUN_00474220(param_2,s_Combat_Tweaks_0072b3d8,2,0);
  FUN_00499e60(param_2,s_Combat_Tweaks_Block_Percent_0072b3bc,2,0,0xffffffff);
  FUN_00499e60(param_2,s_Combat_Tweaks_Evade_Percent_0072b3a0,2,0,0xffffffff);
  FUN_00499e60(param_2,s_Combat_Tweaks_Shove_Percent_0072b384,2,0,0xffffffff);
  FUN_00499e60(param_2,s_Combat_Tweaks_Strafe_Percent_0072b364,2,0,0xffffffff);
  FUN_005669e0(param_2,s_Combat_Tweaks_Can_Block_Stones_0072b344,2);
  FUN_00537ff0(param_2,s_Combat_Tweaks_Blocking_Damage_Mo_0072b31c,2,0x800000,0x7f7fffff);
  FUN_00537ff0(param_2,s_Combat_Tweaks_Shield_Blocking_Da_0072b2ec,2,0x800000,0x7f7fffff);
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_0059ac20(param_2);
  }
  if (*(int **)(param_1 + 0x308) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x308) + 4))(param_2);
  }
  if (*(int **)(param_1 + 0x300) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x300) + 4))(param_2);
  }
  FUN_005669e0(param_2,s_Use_Default_LocalBBox_0072b2d4,2);
  FUN_004ab4e0(param_2);
  return;
}

