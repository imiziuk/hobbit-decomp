
void __fastcall FUN_0040a230(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [128];
  
  FUN_00647d10(param_1 + 4,s_CH09_Smaug_0071dd60);
  uVar1 = FUN_005496c0(s_SFX_Pony_audiopkg_0071d738,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_GUI_audiopkg_0071cde8,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Player_audiopkg_0071cdd4,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Weapons_audiopkg_0071cdbc,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_AMB_Chapter09_audiopkg_0071dd44,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Chapter09_audiopkg_0071dd2c,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Ring_audiopkg_0071cda8,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  FUN_00419620(auStack_80,s_DX_CH09_PC_audiopkg_0071dd18);
  FUN_00658080(auStack_80);
  FUN_00419620(auStack_80,s_DX_CH09a_PC_audiopkg_0071dd00);
  FUN_00658080(auStack_80);
  FUN_0054e6d0(s_CH_09_Smaug_SubTitles_bin_0071dce4);
  FUN_004fb060(5);
  uVar1 = FUN_00659600(s_CH09_Ambience_Loop_0071dcd0,1);
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  uVar2 = FUN_0054c210(s_Bilbo_Starting_Spot_Ph03_0071dcb4,1);
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  return;
}

