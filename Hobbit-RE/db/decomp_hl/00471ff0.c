
void __thiscall FUN_00471ff0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d15e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_0075d338 == 0) {
    ExceptionList = &pvStack_c;
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,s_IsCinematic_00727638);
    *(undefined4 *)(iVar3 + 0x84) = 2;
  }
  if ((*(byte *)(param_1 + 0x194) & 0x10) == 0) {
    if (DAT_0075d338 != 0) goto LAB_00472159;
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,s_Disable_Control_00727628);
    *(undefined4 *)(iVar3 + 0x84) = 2;
    if (DAT_0075d338 != 0) goto LAB_00472159;
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,s_Subtitle_In_Box_00727618);
    *(undefined4 *)(iVar3 + 0x84) = 2;
  }
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,s_BypassQueue_007271e8);
    *(undefined4 *)(iVar3 + 0x84) = 2;
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 3;
      FUN_00647d10(iVar3,s_LowPriority_007271dc);
      *(undefined4 *)(iVar3 + 0x84) = 2;
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 3;
        FUN_00647d10(iVar3,s_Has_Transition_Into_Cinema_007275fc);
        *(undefined4 *)(iVar3 + 0x84) = 2;
      }
    }
  }
LAB_00472159:
  if (*(char *)(param_1 + 0x194) < '\0') {
    if ((DAT_0075cc80 & 1) == 0) {
      DAT_0075cc80 = DAT_0075cc80 | 1;
      FUN_00649b20(s_Pre_Cinema_Transition_007275d0);
      FUN_006bfe55(&LAB_00472b10);
    }
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 5;
      FUN_00647d10(iVar3,s_Pre_Cinema_Transition_007275d0);
      *(undefined4 *)(iVar3 + 0x84) = 0x17;
      *(undefined **)(iVar3 + 0x100) = &DAT_0075cc84;
    }
    (**(code **)(*(int *)(param_1 + 0x118) + 0x10))(s_Pre_Cinema_Transition_007275d0,uVar2);
  }
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,s_Has_Transition_After_Cinema_00727574);
    *(undefined4 *)(iVar3 + 0x84) = 2;
  }
  if ((*(uint *)(param_1 + 0x194) & 0x100) != 0) {
    if ((DAT_0075cc80 & 2) == 0) {
      DAT_0075cc80 = DAT_0075cc80 | 2;
      FUN_00649b20(s_Post_Cinema_Transition_00727548);
      FUN_006bfe55(&LAB_00472b00);
    }
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 5;
      FUN_00647d10(iVar3,s_Post_Cinema_Transition_00727548);
      *(undefined4 *)(iVar3 + 0x84) = 0x17;
      *(undefined **)(iVar3 + 0x100) = &DAT_0075cc28;
    }
    (**(code **)(*(int *)(param_1 + 0x150) + 0x10))(s_Post_Cinema_Transition_00727548,uVar2);
  }
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 5;
    FUN_00647d10(iVar3,s_Shots_00727a94);
    *(undefined4 *)(iVar3 + 0x84) = 0x15;
    *(undefined4 *)(iVar3 + 0x100) = 0;
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 1;
      FUN_00647d10(iVar3,s_Shots_Number_of_Shots_007274f0);
      *(undefined4 *)(iVar3 + 0x84) = 0;
      *(undefined4 *)(iVar3 + 0xf0) = 0;
      *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
    }
  }
  iVar5 = 0;
  param_2 = 0;
  iVar3 = param_2;
  if (0 < *(int *)(param_1 + 0xb0)) {
    do {
      FUN_00649920(&param_2,s_Shots_Shot__d_Name_0072789c,iVar5);
      local_4 = 0;
      uVar4 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 4;
        FUN_00647d10(iVar3,uVar4);
        *(undefined4 *)(iVar3 + 0x84) = 0;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_1c,s_Shots_Shot__d_Max_Time_00727854,iVar5);
      local_4 = 1;
      uVar4 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 2;
        FUN_00647d10(iVar3,uVar4);
        *(undefined4 *)(iVar3 + 0x84) = 0;
        *(undefined4 *)(iVar3 + 0xf8) = 0x800000;
        *(undefined4 *)(iVar3 + 0xfc) = 0x7f7fffff;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_18,s_Shots_Shot__d_Time_00727840,iVar5);
      local_4 = 2;
      uVar4 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 2;
        FUN_00647d10(iVar3,uVar4);
        *(undefined4 *)(iVar3 + 0x84) = 4;
        *(undefined4 *)(iVar3 + 0xf8) = 0x800000;
        *(undefined4 *)(iVar3 + 0xfc) = 0x7f7fffff;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar5 = iVar5 + 1;
      iVar3 = iVar5;
    } while (iVar5 < *(int *)(param_1 + 0xb0));
  }
  param_2 = iVar3;
  iVar3 = param_2;
  if (DAT_0075d338 == 0) {
    iVar5 = FUN_00425010();
    *(undefined4 *)(iVar5 + 0x80) = 5;
    FUN_00647d10(iVar5,s_Sync_Points_007274c4);
    *(undefined4 *)(iVar5 + 0x84) = 0x15;
    *(undefined4 *)(iVar5 + 0x100) = 0;
    if (DAT_0075d338 == 0) {
      iVar5 = FUN_00425010();
      *(undefined4 *)(iVar5 + 0x80) = 1;
      FUN_00647d10(iVar5,s_Sync_Points_Number_of_Sync_Point_007274a0);
      *(undefined4 *)(iVar5 + 0x84) = 0;
      *(undefined4 *)(iVar5 + 0xf0) = 0;
      *(undefined4 *)(iVar5 + 0xf4) = 0xffffffff;
    }
  }
  if (iVar3 < *(int *)(param_1 + 0xcc)) {
    do {
      FUN_00649920(local_18,s_Sync_Points_Sync_Point__d_Offset_0072745c,0);
      local_4 = 3;
      uVar4 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 2;
        FUN_00647d10(iVar3,uVar4);
        *(undefined4 *)(iVar3 + 0x84) = 0;
        *(undefined4 *)(iVar3 + 0xf8) = 0x800000;
        *(undefined4 *)(iVar3 + 0xfc) = 0x7f7fffff;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(local_1c,s_Sync_Points_Sync_Point__d_Shot_I_00727434,0);
      local_4 = 4;
      uVar4 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 1;
        FUN_00647d10(iVar3,uVar4);
        *(undefined4 *)(iVar3 + 0x84) = 4;
        *(undefined4 *)(iVar3 + 0xf0) = 0;
        *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      if (*(int *)(*(int *)(param_1 + 0xd0) + 0x2c) == 1) {
        FUN_00649920(local_14,s_Sync_Points_Sync_Point__d_Offset_00727408,0);
        local_4 = 5;
        uVar4 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar3 = FUN_00425010();
          *(undefined4 *)(iVar3 + 0x80) = 3;
          FUN_00647d10(iVar3,uVar4);
          *(undefined4 *)(iVar3 + 0x84) = 0;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
      }
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(param_1 + 0xcc));
  }
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 5;
    FUN_00647d10(iVar3,s_Actions_00727a8c);
    *(undefined4 *)(iVar3 + 0x84) = 0x17;
    *(undefined4 *)(iVar3 + 0x100) = 0;
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 1;
      FUN_00647d10(iVar3,s_Actions_Number_of_Actions_00727794);
      *(undefined4 *)(iVar3 + 0x84) = 0;
      *(undefined4 *)(iVar3 + 0xf0) = 0;
      *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xe8)) {
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0xec) + iVar3 * 4) + 0x30);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x14))(iVar3,uVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xe8));
  }
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,s_Letterbox_00727204);
    *(undefined4 *)(iVar3 + 0x84) = 2;
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 3;
      FUN_00647d10(iVar3,s_Camera_Pop_At_End_007273a8);
      *(undefined4 *)(iVar3 + 0x84) = 2;
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 1;
        FUN_00647d10(iVar3,s_Num_Participants_00727394);
        *(undefined4 *)(iVar3 + 0x84) = 4;
        *(undefined4 *)(iVar3 + 0xf0) = 0;
        *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
      }
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1c8)) {
    do {
      FUN_00649920(&param_2,s_Participant__d_00727384,iVar3);
      local_4 = 6;
      uVar4 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar5 = FUN_00425010();
        *(undefined4 *)(iVar5 + 0x80) = 0x10;
        FUN_00647d10(iVar5,uVar4);
        *(undefined4 *)(iVar5 + 0x84) = 4;
        *(undefined4 *)(iVar5 + 0x100) = 0x50;
        *(undefined4 *)(iVar5 + 0x104) = 0;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x1c8));
  }
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 2;
    FUN_00647d10(iVar3,s_Total_Duration_00727374);
    *(undefined4 *)(iVar3 + 0x84) = 4;
    *(undefined4 *)(iVar3 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar3 + 0xfc) = 0x7f7fffff;
  }
  iVar3 = FUN_00425010();
  *(undefined4 *)(iVar3 + 0x80) = 3;
  FUN_00647d10(iVar3,&DAT_0072736c);
  *(undefined4 *)(iVar3 + 0x84) = 0x34;
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,s_Repeatable_Conversation_00727354);
    *(undefined4 *)(iVar3 + 0x84) = 2;
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 3;
      FUN_00647d10(iVar3,s_Bilbo_Invisible_007273bc);
      *(undefined4 *)(iVar3 + 0x84) = 2;
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 3;
        FUN_00647d10(iVar3,s_Skippable_00727250);
        *(undefined4 *)(iVar3 + 0x84) = 2;
      }
    }
  }
  if ((*(uint *)(param_1 + 0x194) & 0x200) != 0) {
    FUN_00499e60(uVar2,s_Number_of_Skip_Actions_007276b4,2,0,0xffffffff);
    FUN_00649920(&param_2,s_SkipActions_00727a80);
    local_4 = 7;
    uVar4 = FUN_00649940(0,0);
    FUN_00474220(uVar2,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x1a0)) {
      do {
        if (*(int *)(*(int *)(iVar3 * 4 + *(int *)(param_1 + 0x1a4)) + 0x30) != 0) {
          FUN_00649920(local_10,s_SkipActions_Action__d_00727644,iVar3);
          iVar5 = **(int **)(*(int *)(*(int *)(param_1 + 0x1a4) + iVar3 * 4) + 0x30);
          local_4 = 8;
          uVar4 = FUN_00649940(uVar2);
          (**(code **)(iVar5 + 0x10))(uVar4);
          local_4 = 0xffffffff;
          FUN_00649950();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x1a0));
    }
  }
  FUN_005669e0(uVar2,s_Is_Death_Cinema_00727344,2);
  FUN_005669e0(uVar2,s_Force_No_Weapon_00727334,2);
  FUN_005669e0(uVar2,s_Force_Use_Sting_00727324,2);
  FUN_005669e0(uVar2,s_Force_Use_Stick_00727314,2);
  FUN_004ab4e0(uVar2);
  ExceptionList = pvStack_c;
  return;
}

