
void __fastcall FUN_00493ff0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x4c))();
  FUN_006414f0(&DAT_00725c94,uVar1);
  FUN_00641480(&DAT_00729ad4,param_1[0x43]);
  FUN_00641370(s_Color_00728924,param_1[0x33]);
  FUN_00641400(s_Intensity_0072550c,param_1[0x35]);
  FUN_006412e0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,param_1 + 5);
  FUN_00641400(s_FlickerAmp_00729ac8,param_1[0x3b]);
  FUN_00641400(s_FlickerJitter_00729ab8,param_1[0x3c]);
  FUN_00641400(s_FlickerSpeed_00729aa8,param_1[0x3a]);
  FUN_00641400(s_AttenStart_00729a9c,param_1[0x38]);
  FUN_00641400(s_AttenEnd_00729a90,param_1[0x39]);
  uVar1 = FUN_00494680();
  FUN_00641480(s_Dynamic_00729a88,uVar1);
  uVar1 = FUN_00494690();
  FUN_00641480(s_Flicker_00729a80,uVar1);
  FUN_00641480(s_TargetAttr_00729a74,param_1[0x42]);
  FUN_00641480(s_LightChannel_00729a64,(char)param_1[0x44]);
  FUN_006412c0();
  return;
}

