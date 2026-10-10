
void __thiscall FUN_0046b5d0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  void *pvStack_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d10a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  uVar2 = param_2;
  FUN_004aa650(param_2);
  FUN_00641760(s_Repeatable_007272f4,param_1[0x65] & 1);
  FUN_00641760(s_PopAtEnd_007272e8,(uint)param_1[0x65] >> 3 & 1);
  FUN_00641760(s_Cinematic_007272dc,(uint)param_1[0x65] >> 4 & 1);
  FUN_00641400(&DAT_007272d4,param_1[0x6d]);
  FUN_00641400(s_Duration_007272c8,param_1[0x6f]);
  FUN_00641480(s_nShots_007272c0,param_1[0x2c]);
  FUN_00641480(s_nSyncPoints_007272b4,param_1[0x33]);
  FUN_00641480(s_nActions_007272a8,param_1[0x3a]);
  FUN_00641480(s_nParticipants_00727298,param_1[0x72]);
  FUN_00641480(s_InitialShot_0072728c,(int)(short)param_1[99]);
  FUN_00641760(s_BilboInvisible_0072727c,(uint)param_1[0x65] >> 6 & 1);
  FUN_00641760(s_HasIntroTrans_0072726c,(uint)param_1[0x65] >> 7 & 1);
  FUN_00641760(s_HasOutroTrans_0072725c,(uint)param_1[0x65] >> 8 & 1);
  FUN_00641760(s_Skippable_00727250,(uint)param_1[0x65] >> 9 & 1);
  FUN_00641760(s_IsDeathCinema_00727240,(uint)param_1[0x65] >> 0xb & 1);
  FUN_00641760(s_ForceNoWeapon_00727230,(uint)param_1[0x65] >> 0xc & 1);
  FUN_00641760(s_ForceUseStick_00727220,(uint)param_1[0x65] >> 0xd & 1);
  FUN_00641760(s_ForceUseSting_00727210,(uint)param_1[0x65] >> 0xe & 1);
  FUN_00641760(s_Letterbox_00727204,(uint)param_1[0x65] >> 0xf & 1);
  FUN_00641760(s_DisableControl_007271f4,*(byte *)((int)param_1 + 0x196) & 1);
  FUN_00641760(s_BypassQueue_007271e8,(uint)param_1[0x65] >> 0x14 & 1);
  FUN_00641760(s_LowPriority_007271dc,*(byte *)((int)param_1 + 0x197) & 1);
  FUN_00641760(s_SubtitleInBox_007271cc,(uint)param_1[0x65] >> 0x16 & 1);
  iVar5 = 0;
  if (0 < param_1[0x2c]) {
    iVar6 = 0;
    do {
      FUN_006412c0();
      FUN_00649920(&param_2,s_Shot_d_007271c4,iVar5);
      uVar7 = 1;
      uStack_4 = 0;
      uVar3 = FUN_00649940(1);
      FUN_006408e0(uVar3,uVar7);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      uStack_30 = *(undefined4 *)(param_1[0x2d] + iVar6);
      FUN_00649920(auStack_2c,s_Shot_d_Name_007271b8,iVar5);
      uStack_4 = 1;
      uVar3 = uStack_30;
      uVar7 = FUN_00649940(uStack_30);
      FUN_006414f0(uVar7,uVar3);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_28,s_Shot_d_NextShot_007271a8,iVar5);
      uVar3 = *(undefined4 *)(param_1[0x2d] + 0x2c + iVar6);
      uStack_4 = 2;
      uVar7 = FUN_00649940(uVar3);
      FUN_00641480(uVar7,uVar3);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_24,s_Shot_d_SkipShot_00727198,iVar5);
      uVar3 = *(undefined4 *)(param_1[0x2d] + 0x30 + iVar6);
      uStack_4 = 3;
      uVar7 = FUN_00649940(uVar3);
      FUN_00641480(uVar7,uVar3);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_20,s_Shot_d_MaxTime_00727188,iVar5);
      uVar3 = *(undefined4 *)(param_1[0x2d] + 0x34 + iVar6);
      uStack_4 = 4;
      uVar7 = FUN_00649940(uVar3);
      FUN_00641400(uVar7,uVar3);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(&pvStack_1c,s_Shot_d_Time_0072717c,iVar5);
      uVar3 = *(undefined4 *)(param_1[0x2d] + 0x38 + iVar6);
      uStack_4 = 5;
      uVar7 = FUN_00649940(uVar3);
      FUN_00641400(uVar7,uVar3);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x3c;
    } while (iVar5 < param_1[0x2c]);
  }
  iVar5 = 0;
  if (0 < param_1[0x33]) {
    iVar6 = 0;
    do {
      FUN_006412c0();
      FUN_00649920(&param_2,s_SyncPoint_d_00727170,iVar5);
      uVar7 = 1;
      uStack_4 = 6;
      uVar3 = FUN_00649940(1);
      FUN_006408e0(uVar3,uVar7);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      pvStack_1c = *(void **)(param_1[0x34] + iVar6);
      FUN_00649920(auStack_20,s_SyncPoint_d_Name_0072715c,iVar5);
      uStack_4 = 7;
      pvVar8 = pvStack_1c;
      uVar3 = FUN_00649940(pvStack_1c);
      FUN_006414f0(uVar3,pvVar8);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_24,s_SyncPoint_d_Type_00727148,iVar5);
      uVar3 = *(undefined4 *)(param_1[0x34] + 0x2c + iVar6);
      uStack_4 = 8;
      uVar7 = FUN_00649940(uVar3);
      FUN_00641480(uVar7,uVar3);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_28,s_SyncPoint_d_Action_00727134,iVar5);
      uVar3 = *(undefined4 *)(param_1[0x34] + 0x30 + iVar6);
      uStack_4 = 9;
      uVar7 = FUN_00649940(uVar3);
      FUN_00641480(uVar7,uVar3);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_2c,s_SyncPoint_d_Offset_00727120,iVar5);
      uVar3 = *(undefined4 *)(param_1[0x34] + 0x34 + iVar6);
      uStack_4 = 10;
      uVar7 = FUN_00649940(uVar3);
      FUN_00641400(uVar7,uVar3);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(&uStack_30,s_SyncPoint_d_Shot_0072710c,iVar5);
      iVar4 = (int)*(short *)(param_1[0x34] + 0x38 + iVar6);
      uStack_4 = 0xb;
      uVar3 = FUN_00649940(iVar4);
      FUN_00641480(uVar3,iVar4);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_18,s_SyncPoint_d_FromEnd_007270f8,iVar5);
      iVar4 = (int)(short)(*(short *)(param_1[0x34] + 0x3a + iVar6) << 0xe) >> 0xf;
      uStack_4 = 0xc;
      uVar3 = FUN_00649940(iVar4);
      FUN_00641760(uVar3,iVar4);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_14,s_SyncPoint_d_AbsoluteTimeStart_007270d8,iVar5);
      uVar3 = *(undefined4 *)(param_1[0x34] + 0x3c + iVar6);
      uStack_4 = 0xd;
      uVar7 = FUN_00649940(uVar3);
      FUN_00641400(uVar7,uVar3);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x40;
    } while (iVar5 < param_1[0x33]);
  }
  iVar5 = 0;
  if (0 < param_1[0x3a]) {
    do {
      FUN_006412c0();
      FUN_00649920(&param_2,s_Action_d_007270cc,iVar5);
      uVar7 = 1;
      uStack_4 = 0xe;
      uVar3 = FUN_00649940(1);
      FUN_006408e0(uVar3,uVar7);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      uVar3 = *(undefined4 *)(*(int *)(param_1[0x3b] + iVar5 * 4) + 4);
      FUN_00649920(auStack_14,s_Action_d_Name_007270bc,iVar5);
      uStack_4 = 0xf;
      uVar7 = FUN_00649940(uVar3);
      FUN_006414f0(uVar7,uVar3);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      FUN_00649920(auStack_10,s_Action_d_Type_007270ac,iVar5);
      uVar3 = **(undefined4 **)(param_1[0x3b] + iVar5 * 4);
      uStack_4 = 0x10;
      uVar7 = FUN_00649940(uVar3);
      FUN_00641480(uVar7,uVar3);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      piVar1 = *(int **)(*(int *)(param_1[0x3b] + iVar5 * 4) + 0x30);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x28))(iVar5,uVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[0x3a]);
  }
  FUN_006412c0();
  if (param_1[0x72] != 0) {
    FUN_006408e0(s_Participants_0072709c,param_1[0x72]);
    iVar5 = 0;
    if (0 < param_1[0x72]) {
      do {
        FUN_006417e0(s_PGuid_00727094,*(undefined4 *)(param_1[0x73] + iVar5 * 8),
                     *(undefined4 *)(param_1[0x73] + 4 + iVar5 * 8));
        FUN_006412c0();
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1[0x72]);
    }
  }
  FUN_006408e0(s_Action_1_00727088,0xffffffff);
  (**(code **)(param_1[0x46] + 0x28))(0xffffffff,uVar2);
  FUN_006412c0();
  FUN_006408e0(s_Action_2_0072707c,0xffffffff);
  (**(code **)(param_1[0x54] + 0x28))(0xfffffffe,uVar2);
  ExceptionList = pvStack_1c;
  return;
}

