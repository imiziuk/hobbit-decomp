
void __thiscall FUN_0046d160(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar2 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d11c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00471ff0(param_2);
  iVar6 = 0;
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,s_IsCinematic_00727638);
    *(undefined4 *)(iVar3 + 0x84) = 2;
  }
  if ((*(byte *)(param_1 + 0x194) & 0x10) == 0) {
    if (DAT_0075d338 != 0) goto LAB_0046d2cf;
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,s_Disable_Control_00727628);
    *(undefined4 *)(iVar3 + 0x84) = 2;
    if (DAT_0075d338 != 0) goto LAB_0046d2cf;
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
LAB_0046d2cf:
  if (*(char *)(param_1 + 0x194) < '\0') {
    if ((DAT_0075cc08 & 1) == 0) {
      DAT_0075cc08 = DAT_0075cc08 | 1;
      FUN_00649b20(s_Fade_Out_Transition_007275e8);
      FUN_006bfe55(&LAB_0046dbb0);
    }
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 5;
      FUN_00647d10(iVar3,s_Pre_Cinema_Transition_007275d0);
      *(undefined4 *)(iVar3 + 0x84) = 0x17;
      *(undefined **)(iVar3 + 0x100) = &DAT_0075ccb0;
    }
    (**(code **)(*(int *)(param_1 + 0x118) + 0x10))(s_Pre_Cinema_Transition_007275d0,iVar2);
    iVar3 = 0;
    if (0 < *(int *)(iVar2 + 8)) {
      do {
        iVar7 = *(int *)(iVar2 + 0xc) + iVar6;
        iVar4 = FUN_00647e40(iVar7,s_Pre_Cinema_Transition_Fadeout_007275b0);
        if ((iVar4 == 0) ||
           (iVar4 = FUN_00647e40(iVar7,s_Pre_Cinema_Transition_Wipeout_00727590), iVar4 == 0)) {
          *(uint *)(iVar7 + 0x84) = *(uint *)(iVar7 + 0x84) | 4;
          break;
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0x108;
      } while (iVar3 < *(int *)(iVar2 + 8));
    }
  }
  iVar6 = 0;
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,s_Has_Transition_After_Cinema_00727574);
    *(undefined4 *)(iVar3 + 0x84) = 2;
  }
  if ((*(uint *)(param_1 + 0x194) & 0x100) != 0) {
    if ((DAT_0075cc08 & 2) == 0) {
      DAT_0075cc08 = DAT_0075cc08 | 2;
      FUN_00649b20(s_Fade_In_Transition_00727560);
      FUN_006bfe55(&LAB_0046dba0);
    }
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 5;
      FUN_00647d10(iVar3,s_Post_Cinema_Transition_00727548);
      *(undefined4 *)(iVar3 + 0x84) = 0x17;
      *(undefined **)(iVar3 + 0x100) = &DAT_0075cc54;
    }
    (**(code **)(*(int *)(param_1 + 0x150) + 0x10))(s_Post_Cinema_Transition_00727548,iVar2);
    iVar3 = 0;
    if (0 < *(int *)(iVar2 + 8)) {
      do {
        iVar7 = *(int *)(iVar2 + 0xc) + iVar6;
        iVar4 = FUN_00647e40(iVar7,s_Post_Cinema_Transition_Fadeout_00727528);
        if ((iVar4 == 0) ||
           (iVar4 = FUN_00647e40(iVar7,s_Post_Cinema_Transition_Wipeout_00727508), iVar4 == 0)) {
          *(uint *)(iVar7 + 0x84) = *(uint *)(iVar7 + 0x84) | 4;
          break;
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0x108;
      } while (iVar3 < *(int *)(iVar2 + 8));
    }
  }
  iVar6 = 0;
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 1;
    FUN_00647d10(iVar3,s_Shots_Number_of_Shots_007274f0);
    *(undefined4 *)(iVar3 + 0x84) = 8;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
  }
  param_2 = 0;
  if (0 < *(int *)(param_1 + 0xb0)) {
    do {
      FUN_00649920(auStack_1c,s_Shot__d_Name_007274e0,param_2);
      uStack_4 = 0;
      uVar5 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 4;
        FUN_00647d10(iVar3,uVar5);
        *(undefined4 *)(iVar3 + 0x84) = 0;
      }
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_18,s_Shot__d_Time_007274d0,param_2);
      uStack_4 = 1;
      uVar5 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 2;
        FUN_00647d10(iVar3,uVar5);
        *(undefined4 *)(iVar3 + 0x84) = 4;
        *(undefined4 *)(iVar3 + 0xf8) = 0x800000;
        *(undefined4 *)(iVar3 + 0xfc) = 0x7f7fffff;
      }
      uStack_4 = 0xffffffff;
      FUN_00649950();
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(param_1 + 0xb0));
  }
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 5;
    FUN_00647d10(iVar3,s_Sync_Points_007274c4);
    *(undefined4 *)(iVar3 + 0x84) = 0x15;
    *(undefined4 *)(iVar3 + 0x100) = 0;
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 1;
      FUN_00647d10(iVar3,s_Sync_Points_Number_of_Sync_Point_007274a0);
      *(undefined4 *)(iVar3 + 0x84) = 8;
      *(undefined4 *)(iVar3 + 0xf0) = 0;
      *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
    }
  }
  if (param_2 < *(int *)(param_1 + 0xcc)) {
    do {
      FUN_00649920(auStack_18,s_Sync_Points_Sync_Point__d_Name_00727480,0);
      uStack_4 = 2;
      uVar5 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 4;
        FUN_00647d10(iVar3,uVar5);
        *(undefined4 *)(iVar3 + 0x84) = 0;
      }
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_1c,s_Sync_Points_Sync_Point__d_Offset_0072745c,0);
      uStack_4 = 3;
      uVar5 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 2;
        FUN_00647d10(iVar3,uVar5);
        *(undefined4 *)(iVar3 + 0x84) = 0;
        *(undefined4 *)(iVar3 + 0xf8) = 0x800000;
        *(undefined4 *)(iVar3 + 0xfc) = 0x7f7fffff;
      }
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_14,s_Sync_Points_Sync_Point__d_Shot_I_00727434,0);
      uStack_4 = 4;
      uVar5 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 1;
        FUN_00647d10(iVar3,uVar5);
        *(undefined4 *)(iVar3 + 0x84) = 4;
        *(undefined4 *)(iVar3 + 0xf0) = 0;
        *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
      }
      uStack_4 = 0xffffffff;
      FUN_00649950();
      if (*(int *)(*(int *)(param_1 + 0xd0) + 0x2c) == 1) {
        FUN_00649920(auStack_10,s_Sync_Points_Sync_Point__d_Offset_00727408,0);
        uStack_4 = 5;
        uVar5 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar3 = FUN_00425010();
          *(undefined4 *)(iVar3 + 0x80) = 3;
          FUN_00647d10(iVar3,uVar5);
          *(undefined4 *)(iVar3 + 0x84) = 0;
        }
        uStack_4 = 0xffffffff;
        FUN_00649950();
      }
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(param_1 + 0xcc));
  }
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 1;
    FUN_00647d10(iVar3,s_Number_of_Shots_007273f8);
    *(undefined4 *)(iVar3 + 0x84) = 0x14;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 1;
      FUN_00647d10(iVar3,s_Number_of_Sync_Points_007273e0);
      *(undefined4 *)(iVar3 + 0x84) = 0x14;
      *(undefined4 *)(iVar3 + 0xf0) = 0;
      *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 1;
        FUN_00647d10(iVar3,s_Number_of_Actions_007273cc);
        *(undefined4 *)(iVar3 + 0x84) = 0x14;
        *(undefined4 *)(iVar3 + 0xf0) = 0;
        *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
        if (DAT_0075d338 == 0) {
          iVar3 = FUN_00425010();
          *(undefined4 *)(iVar3 + 0x80) = 3;
          FUN_00647d10(iVar3,s_Bilbo_Invisible_007273bc);
          *(undefined4 *)(iVar3 + 0x84) = 2;
          if (DAT_0075d338 == 0) {
            iVar3 = FUN_00425010();
            *(undefined4 *)(iVar3 + 0x80) = 3;
            FUN_00647d10(iVar3,s_Letterbox_00727204);
            *(undefined4 *)(iVar3 + 0x84) = 2;
          }
        }
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x194);
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,s_Camera_Pop_At_End_007273a8);
    *(uint *)(iVar3 + 0x84) = (~uVar1 & 0x10 | 8) >> 2;
  }
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 1;
    FUN_00647d10(iVar3,s_Num_Participants_00727394);
    *(undefined4 *)(iVar3 + 0x84) = 4;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
  }
  if (0 < *(int *)(param_1 + 0x1c8)) {
    do {
      FUN_00649920(&param_2,s_Participant__d_00727384,iVar6);
      uStack_4 = 6;
      uVar5 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar3 = FUN_00425010();
        *(undefined4 *)(iVar3 + 0x80) = 0x10;
        FUN_00647d10(iVar3,uVar5);
        *(undefined4 *)(iVar3 + 0x84) = 4;
        *(undefined4 *)(iVar3 + 0x100) = 0x50;
        *(undefined4 *)(iVar3 + 0x104) = 0;
      }
      uStack_4 = 0xffffffff;
      FUN_00649950();
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x1c8));
  }
  if (DAT_0075d338 == 0) {
    iVar6 = FUN_00425010();
    *(undefined4 *)(iVar6 + 0x80) = 2;
    FUN_00647d10(iVar6,s_Total_Duration_00727374);
    *(undefined4 *)(iVar6 + 0x84) = 4;
    *(undefined4 *)(iVar6 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar6 + 0xfc) = 0x7f7fffff;
  }
  FUN_005669e0(iVar2,&DAT_0072736c,0x34);
  FUN_005669e0(iVar2,s_Repeatable_Conversation_00727354,2);
  FUN_005669e0(iVar2,s_Is_Death_Cinema_00727344,2);
  FUN_005669e0(iVar2,s_Force_No_Weapon_00727334,2);
  FUN_005669e0(iVar2,s_Force_Use_Sting_00727324,2);
  FUN_005669e0(iVar2,s_Force_Use_Stick_00727314,2);
  FUN_004ab4e0(iVar2);
  ExceptionList = pvStack_c;
  return;
}

