
undefined4 * __thiscall FUN_00537690(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_4c0 [4];
  undefined4 uStack_4bc;
  undefined4 auStack_4b4 [128];
  undefined1 auStack_2b4 [12];
  undefined1 auStack_2a8 [12];
  undefined1 auStack_29c [4];
  undefined1 auStack_298 [12];
  undefined1 auStack_28c [16];
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  undefined1 auStack_25c [511];
  undefined1 uStack_5d;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d8e7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00406a80();
  *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a) | 1;
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 300);
  iVar1 = FUN_00647e40(param_3,s_Audio_Packages_Count_00737644);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_18 = *(undefined4 *)(param_1 + 0x120);
    uStack_264 = 1;
    *param_2 = 1;
    FUN_00424770(auStack_25c);
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Audio_Packages_Music_Level_File_00725108);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_264 = 0xe;
    FUN_00647d70(auStack_25c,*(undefined4 *)(param_1 + 200),0x200);
    *param_2 = uStack_264;
    uStack_5d = 0;
    FUN_00424770(auStack_25c);
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_PreCombat_Vertical_Range_007375b0);
  if (iVar1 == 0) {
    uStack_26c = *(undefined4 *)(param_1 + 0x260);
LAB_005377b7:
    uStack_4bc = 2;
    *param_2 = 2;
    FUN_00424770(auStack_4b4);
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_PreCombatRange_007375fc);
  if (iVar1 == 0) {
    uStack_26c = *(undefined4 *)(param_1 + 0x254);
LAB_005377ff:
    uStack_4bc = 2;
    *param_2 = 2;
    FUN_00424770(auStack_4b4);
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_CombatRange_007375f0);
  if (iVar1 == 0) {
    uStack_26c = *(undefined4 *)(param_1 + 0x25c);
LAB_00537b38:
    uStack_4bc = 2;
    *param_2 = 2;
    FUN_00424770(auStack_4b4);
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_ExitCombatRange_007375e0);
  if (iVar1 == 0) {
    uStack_26c = *(undefined4 *)(param_1 + 600);
    goto LAB_005377b7;
  }
  iVar1 = FUN_00647e40(param_3,s_CombatExitDelayTime_007375cc);
  if (iVar1 == 0) {
    uStack_26c = *(undefined4 *)(param_1 + 0x288);
    goto LAB_005377ff;
  }
  iVar1 = FUN_00647e40(param_3,s_MinSilenceTime_00725094);
  if (iVar1 == 0) {
    uStack_26c = *(undefined4 *)(param_1 + 0x278);
    goto LAB_00537b38;
  }
  iVar1 = FUN_00647e40(param_3,s_MaxSilenceTime_00725084);
  if (iVar1 == 0) {
    uStack_26c = *(undefined4 *)(param_1 + 0x27c);
    goto LAB_005377b7;
  }
  iVar1 = FUN_00647e40(param_3,s_VolumeFadeTime_00725074);
  if (iVar1 == 0) {
    uStack_26c = *(undefined4 *)(param_1 + 0x280);
    goto LAB_005377ff;
  }
  iVar1 = FUN_00647e40(param_3,s_MinCombatTimeForStinger_0073760c);
  if (iVar1 == 0) {
    uStack_26c = *(undefined4 *)(param_1 + 0x2fc);
    goto LAB_00537b38;
  }
  iVar1 = FUN_00647e40(param_3,s_Default_Suite_007375a0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x164);
LAB_00537946:
    FUN_00647d10(auStack_4b4,uVar2);
    uStack_4bc = 0xd;
    *param_2 = 0xd;
    FUN_00424770(auStack_4b4);
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Default_Track_00737590);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 400);
    goto LAB_00537946;
  }
  iVar1 = FUN_00647e40(param_3,s_Default_State_00737580);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x29c);
    goto LAB_00537946;
  }
  iVar1 = 0;
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 300);
  if (0 < *(int *)(param_1 + 300)) {
    do {
      FUN_00649920(auStack_4c0,s_Audio_Packages_AudioPackage_02d_00737624,iVar1);
      uStack_4 = 0;
      uVar2 = FUN_00649940();
      iVar3 = FUN_00647e40(param_3,uVar2);
      uStack_4 = 0xffffffff;
      FUN_00649950();
      if (iVar3 == 0) {
        FUN_00647d10(auStack_4b4,*(undefined4 *)(*(int *)(param_1 + 0x130) + iVar1 * 0x2c));
        uStack_4bc = 0xe;
        *param_2 = 0xe;
        FUN_00424770(auStack_4b4);
        ExceptionList = pvStack_c;
        return param_2;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x120));
  }
  iVar1 = FUN_00647e40(param_3,s_MinCombatThreshold_0073756c);
  if (iVar1 == 0) {
    uStack_4bc = 2;
    uStack_26c = *(undefined4 *)(param_1 + 0x2f4);
    *param_2 = 2;
  }
  else {
    iVar1 = FUN_00647e40(param_3,s_MaxCombatThreshold_00737558);
    if (iVar1 == 0) {
      uStack_26c = *(undefined4 *)(param_1 + 0x2f8);
      goto LAB_00537b38;
    }
    iVar1 = FUN_00647e40(param_3,s_m_PreviousState_00737548);
    if (iVar1 == 0) {
      uStack_270 = *(undefined4 *)(param_1 + 0x250);
LAB_00537b84:
      uStack_4bc = 1;
      *param_2 = 1;
      puVar4 = auStack_4b4;
      puVar5 = param_2 + 2;
      for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_00480f60(auStack_2b4);
      FUN_00425250(auStack_29c);
      FUN_004357e0(auStack_298);
      FUN_004357e0(auStack_28c);
      param_2[0x90] = uStack_27c;
      param_2[0x91] = uStack_278;
      param_2[0x92] = uStack_274;
      param_2[0x93] = uStack_270;
      param_2[0x94] = uStack_26c;
      param_2[0x95] = iStack_268;
      ExceptionList = pvStack_c;
      return param_2;
    }
    iVar1 = FUN_00647e40(param_3,s_m_MaxLoopCount_00737538);
    if (iVar1 == 0) {
      uStack_270 = *(undefined4 *)(param_1 + 0x294);
    }
    else {
      iVar1 = FUN_00647e40(param_3,s_m_CurrentState_00737528);
      if (iVar1 == 0) {
        uStack_270 = *(undefined4 *)(param_1 + 0x24c);
        uStack_4bc = 1;
        *param_2 = 1;
        FUN_00424770(auStack_4b4);
        ExceptionList = pvStack_c;
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_m_AmbientIntensity_00737514);
      if (iVar1 == 0) {
        uStack_270 = *(undefined4 *)(param_1 + 0x264);
        goto LAB_00537b84;
      }
      iVar1 = FUN_00647e40(param_3,s_m_CurrentIntensity_00737500);
      if (iVar1 != 0) {
        iVar1 = FUN_00647e40(param_3,s_m_DefaultVolumeFadeTime_007374e8);
        if (iVar1 == 0) {
          uStack_26c = *(undefined4 *)(param_1 + 0x284);
          uStack_4bc = 2;
          *param_2 = 2;
        }
        else {
          iVar1 = FUN_00647e40(param_3,s_m_DefaultAmbientTrack_007374d0);
          if (iVar1 != 0) {
            iVar1 = FUN_00647e40(param_3,s_m_DefaultCombatTrack_007374b8);
            if (iVar1 == 0) {
              FUN_00647d10(auStack_4b4,*(undefined4 *)(param_1 + 0x1e8));
              uStack_4bc = 0xd;
              *param_2 = 0xd;
              puVar4 = auStack_4b4;
              puVar5 = param_2 + 2;
              for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                *puVar5 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar5 = puVar5 + 1;
              }
              FUN_004357e0(auStack_2b4);
              FUN_004357e0(auStack_2a8);
              FUN_00425250(auStack_29c);
              FUN_004357e0(auStack_298);
              FUN_004357e0(auStack_28c);
              param_2[0x92] = uStack_274;
              param_2[0x90] = uStack_27c;
              param_2[0x91] = uStack_278;
              param_2[0x95] = iStack_268;
              param_2[0x93] = uStack_270;
              param_2[0x94] = uStack_26c;
              ExceptionList = pvStack_c;
              return param_2;
            }
            iStack_268 = FUN_00647e40(param_3,s_LevelReset_0072073c);
            if (iStack_268 != 0) {
              FUN_004abdf0(param_2,param_3);
              ExceptionList = pvStack_c;
              return param_2;
            }
            uStack_4bc = 3;
            *param_2 = 3;
            puVar4 = auStack_4b4;
            puVar5 = param_2 + 2;
            for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
            FUN_004357e0(auStack_2b4);
            FUN_004357e0(auStack_2a8);
            goto LAB_00537ef9;
          }
          FUN_00647d10(auStack_4b4,*(undefined4 *)(param_1 + 0x1bc));
          uStack_4bc = 0xd;
          *param_2 = 0xd;
        }
        puVar4 = auStack_4b4;
        puVar5 = param_2 + 2;
        for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        FUN_00480f60(auStack_2b4);
LAB_00537ef9:
        FUN_00425250(auStack_29c);
        FUN_004357e0(auStack_298);
        FUN_004357e0(auStack_28c);
        param_2[0x90] = uStack_27c;
        param_2[0x91] = uStack_278;
        param_2[0x92] = uStack_274;
        param_2[0x93] = uStack_270;
        param_2[0x94] = uStack_26c;
        param_2[0x95] = iStack_268;
        ExceptionList = pvStack_c;
        return param_2;
      }
      uStack_270 = *(undefined4 *)(param_1 + 0x248);
    }
    uStack_4bc = 1;
    *param_2 = 1;
  }
  puVar4 = auStack_4b4;
  puVar5 = param_2 + 2;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00480f60(auStack_2b4);
  FUN_00425250(auStack_29c);
  FUN_004357e0(auStack_298);
  FUN_004357e0(auStack_28c);
  param_2[0x90] = uStack_27c;
  param_2[0x91] = uStack_278;
  param_2[0x92] = uStack_274;
  param_2[0x93] = uStack_270;
  param_2[0x94] = uStack_26c;
  param_2[0x95] = iStack_268;
  ExceptionList = pvStack_c;
  return param_2;
}

