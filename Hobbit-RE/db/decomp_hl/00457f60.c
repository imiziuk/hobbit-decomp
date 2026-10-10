
void __thiscall FUN_00457f60(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4 [3];
  undefined1 local_98 [12];
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d033b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_emitter__OnImport_00725868);
  local_4 = 0;
  FUN_004aa740(param_2);
  FUN_006403a0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,local_98);
  FUN_00640420(s_TriggerRadius_00725854,&local_b0);
  FUN_00640420(s_FarRadius_00725848,&local_bc);
  FUN_00640420(s_NearRadius_0072583c,&local_b8);
  FUN_00640420(s_OffsetRadius_0072582c,&local_ac);
  FUN_00640420(s_MinDelay_00725820,&local_a8);
  FUN_00640420(s_MaxDelay_00725814,&local_b4);
  FUN_00640450(s_AudioFlags_00725808,local_a4);
  FUN_004573d0(local_98,local_b0,local_b8,local_bc,local_ac,local_a8,local_b4,local_a4[0]);
  local_c0 = *(undefined4 *)(param_1 + 200);
  FUN_00640450(s_Playback_007257fc,&local_c0);
  *(undefined4 *)(param_1 + 200) = local_c0;
  FUN_00640420(s_FadeTime_007257f0,param_1 + 0xcc);
  FUN_00640420(s_FadeVolume_007257e4,(undefined4 *)(param_1 + 0xd0));
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0xd0);
  FUN_006405e0(s_AttachedGuid_007257d4,param_1 + 0xd8);
  FUN_006403a0(s_AttachedOffset_007257c4,param_1 + 0xe0);
  FUN_0063ff20();
  iVar1 = *(int *)(param_2 + 0xc);
  FUN_00457320(iVar1);
  if (0 < iVar1) {
    do {
      FUN_0063ffc0();
      FUN_00640480(s_DescriptorName_007257b4,local_8c);
      FUN_0064a2e0(local_8c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

