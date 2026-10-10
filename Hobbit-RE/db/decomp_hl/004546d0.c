
undefined4 * __thiscall FUN_004546d0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_4a8 [128];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [4];
  undefined1 auStack_28c [12];
  undefined1 auStack_280 [16];
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  int iStack_25c;
  undefined4 uStack_258;
  undefined1 auStack_250 [511];
  undefined1 uStack_51;
  
  FUN_00406a80();
  *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a) | 1;
  iVar1 = FUN_00647e40(param_3,s_Audio_Packages_Music_Level_File_00725108);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_258 = 0xe;
    FUN_00647d70(auStack_250,*(undefined4 *)(param_1 + 200),0x200);
    uStack_51 = 0;
    *param_2 = uStack_258;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_MinSilenceTime_00725094);
  if (iVar1 == 0) {
    uStack_260 = *(undefined4 *)(param_1 + 0x270);
LAB_004548eb:
    *param_2 = 2;
    FUN_00424770(auStack_4a8);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_MaxSilenceTime_00725084);
  if (iVar1 == 0) {
    uStack_260 = *(undefined4 *)(param_1 + 0x274);
    *param_2 = 2;
    FUN_00424770(auStack_4a8);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_VolumeFadeTime_00725074);
  if (iVar1 == 0) {
    uStack_260 = *(undefined4 *)(param_1 + 0x278);
    *param_2 = 2;
    FUN_00424770(auStack_4a8);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_PackageName_007250fc);
  if (iVar1 == 0) {
    FUN_00647d70(auStack_4a8,*(undefined4 *)(param_1 + 0x120),0x200);
    *param_2 = 0xe;
    FUN_00424770(auStack_4a8);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_m_TrackName_007250f0);
  if (iVar1 == 0) {
    FUN_00647d70(auStack_4a8,*(undefined4 *)(param_1 + 0x3d4),0x200);
    *param_2 = 0xd;
  }
  else {
    iVar1 = FUN_00647e40(param_3,s_m_FadeInTime_007250e0);
    if (iVar1 == 0) {
      uStack_260 = *(undefined4 *)(param_1 + 0x3b0);
      goto LAB_004548eb;
    }
    iVar1 = FUN_00647e40(param_3,s_m_FadeOutTime_007250d0);
    if (iVar1 == 0) {
      uStack_260 = *(undefined4 *)(param_1 + 0x3b4);
      *param_2 = 2;
      puVar2 = auStack_4a8;
      puVar3 = param_2 + 2;
      for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_00480f60(auStack_2a8);
      FUN_00425250(auStack_290);
      FUN_004357e0(auStack_28c);
      FUN_004357e0(auStack_280);
      param_2[0x91] = uStack_26c;
      param_2[0x90] = uStack_270;
      param_2[0x92] = uStack_268;
      param_2[0x94] = uStack_260;
      param_2[0x93] = uStack_264;
      param_2[0x95] = iStack_25c;
      return param_2;
    }
    iVar1 = FUN_00647e40(param_3,s_m_SwitchType_007250c0);
    if (iVar1 != 0) {
      iStack_25c = FUN_00647e40(param_3,s_LevelReset_0072073c);
      if (iStack_25c == 0) {
        *param_2 = 3;
        FUN_00424770(auStack_4a8);
        return param_2;
      }
      FUN_004abdf0(param_2,param_3);
      return param_2;
    }
    uStack_264 = *(undefined4 *)(param_1 + 0x3cc);
    *param_2 = 1;
  }
  puVar2 = auStack_4a8;
  puVar3 = param_2 + 2;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00480f60(auStack_2a8);
  FUN_00425250(auStack_290);
  FUN_004357e0(auStack_28c);
  FUN_004357e0(auStack_280);
  param_2[0x90] = uStack_270;
  param_2[0x91] = uStack_26c;
  param_2[0x92] = uStack_268;
  param_2[0x93] = uStack_264;
  param_2[0x94] = uStack_260;
  param_2[0x95] = iStack_25c;
  return param_2;
}

