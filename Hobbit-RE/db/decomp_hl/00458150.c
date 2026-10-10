
void __thiscall FUN_00458150(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_004aa650(param_2);
  FUN_006412e0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,param_1 + 0x14);
  FUN_00641400(s_TriggerRadius_00725854,*(undefined4 *)(param_1 + 0xac));
  FUN_00641400(s_FarRadius_00725848,*(undefined4 *)(param_1 + 0xb4));
  FUN_00641400(s_NearRadius_0072583c,*(undefined4 *)(param_1 + 0xb0));
  FUN_00641400(s_OffsetRadius_0072582c,*(undefined4 *)(param_1 + 0xb8));
  FUN_00641400(s_MinDelay_00725820,*(undefined4 *)(param_1 + 0xbc));
  FUN_00641400(s_MaxDelay_00725814,*(undefined4 *)(param_1 + 0xc0));
  FUN_00641480(s_AudioFlags_00725808,*(undefined4 *)(param_1 + 0xc4));
  FUN_00641480(s_Playback_007257fc,*(undefined4 *)(param_1 + 200));
  FUN_00641400(s_FadeTime_007257f0,*(undefined4 *)(param_1 + 0xcc));
  FUN_00641400(s_FadeVolume_007257e4,*(undefined4 *)(param_1 + 0xd0));
  FUN_006417e0(s_AttachedGuid_007257d4,*(undefined4 *)(param_1 + 0xd8),
               *(undefined4 *)(param_1 + 0xdc));
  FUN_006412e0(s_AttachedOffset_007257c4,param_1 + 0xe0);
  FUN_006412c0();
  FUN_006408e0(s_SoundList_00725884,*(undefined4 *)(param_1 + 0xf4));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xf4)) {
    iVar2 = 0;
    do {
      FUN_006414f0(s_DescriptorName_007257b4,*(undefined4 *)(*(int *)(param_1 + 0xf8) + iVar2));
      FUN_006412c0();
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar1 < *(int *)(param_1 + 0xf4));
  }
  return;
}

