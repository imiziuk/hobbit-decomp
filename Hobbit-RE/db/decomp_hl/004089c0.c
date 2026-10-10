
void __fastcall FUN_004089c0(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_80 [128];
  
  FUN_00647d10(param_1 + 4,s_CH06__Mirkwood_0071d97c);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (DAT_00760114 == 0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = 1;
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0xe;
  uVar1 = FUN_005496c0(s_SFX_Spiders_audiopkg_0071ce5c,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Pods_audiopkg_0071d6dc,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Wights_audiopkg_0071d968,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_GUI_audiopkg_0071cde8,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Player_audiopkg_0071cdd4,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Weapons_audiopkg_0071cdbc,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_AMB_Chapter06_audiopkg_0071d94c,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Chapter06_audiopkg_0071d934,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Ring_audiopkg_0071cda8,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  FUN_00419620(auStack_80,s_DX_CH06_PC_audiopkg_0071d920);
  FUN_00658080(auStack_80);
  FUN_00419620(auStack_80,s_DX_CH06a_PC_audiopkg_0071d908);
  FUN_00658080(auStack_80);
  FUN_0054e6d0(s_CH_06_Mirkwood_SubTitles_bin_0071d8e8);
  FUN_004fb060(4);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  return;
}

