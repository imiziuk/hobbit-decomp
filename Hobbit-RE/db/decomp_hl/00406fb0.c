
void __fastcall FUN_00406fb0(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int *piVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  FUN_00647d10(param_1 + 4,s_CH02_RoastMutton_0071d74c);
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  if (*(int *)(param_1 + 0x1ac) == 0) {
    iVar8 = *(int *)(param_1 + 0x1a4);
    if (iVar8 != 0) {
      FUN_006c026a(iVar8,0x2c,*(undefined4 *)(iVar8 + -4),FUN_00649ba0);
      FUN_006bf840(iVar8 + -4);
    }
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  uVar6 = FUN_005496c0(s_SFX_Pony_audiopkg_0071d738,s_Audio_0071ce88);
  FUN_00658080(uVar6);
  uVar6 = FUN_005496c0(s_SFX_Wolves_audiopkg_0071d724,s_Audio_0071ce88);
  FUN_00658080(uVar6);
  uVar6 = FUN_005496c0(s_SFX_AMB_Chapter02_audiopkg_0071d708,s_Audio_0071ce88);
  FUN_00658080(uVar6);
  uVar6 = FUN_005496c0(s_SFX_AMB_Weather_audiopkg_0071d578,s_Audio_0071ce88);
  FUN_00658080(uVar6);
  uVar6 = FUN_005496c0(s_SFX_Badgers_audiopkg_0071d6f0,s_Audio_0071ce88);
  FUN_00658080(uVar6);
  uVar6 = FUN_005496c0(s_SFX_Pods_audiopkg_0071d6dc,s_Audio_0071ce88);
  FUN_00658080(uVar6);
  uVar6 = FUN_005496c0(s_SFX_Chapter02_audiopkg_0071d6c4,s_Audio_0071ce88);
  FUN_00658080(uVar6);
  uVar6 = FUN_005496c0(s_SFX_GUI_audiopkg_0071cde8,s_Audio_0071ce88);
  FUN_00658080(uVar6);
  uVar6 = FUN_005496c0(s_SFX_Leapers_audiopkg_0071d6ac,s_Audio_0071ce88);
  FUN_00658080(uVar6);
  uVar6 = FUN_005496c0(s_SFX_Player_audiopkg_0071cdd4,s_Audio_0071ce88);
  FUN_00658080(uVar6);
  uVar6 = FUN_005496c0(s_SFX_Weapons_audiopkg_0071cdbc,s_Audio_0071ce88);
  FUN_00658080(uVar6);
  FUN_00419620(auStack_80,s_DX_CH02_PC_audiopkg_0071d698);
  FUN_00658080(auStack_80);
  FUN_0054e6d0(s_CH_02_RoastMutton_SubTitles_bin_0071d678);
  FUN_004fb060(2);
  iVar8 = DAT_0075cf1c;
  if (DAT_0075cf1c != 0) {
    uVar1 = *(undefined1 *)(DAT_0075cf1c + 0xb9);
    uVar2 = *(undefined1 *)(DAT_0075cf1c + 0xba);
    uVar3 = *(undefined1 *)(DAT_0075cf1c + 0xb8);
    *(undefined1 *)(param_1 + 0x127) = *(undefined1 *)(DAT_0075cf1c + 0xbb);
    *(undefined1 *)(param_1 + 0x126) = uVar2;
    *(undefined1 *)(param_1 + 0x125) = uVar1;
    *(undefined1 *)(param_1 + 0x124) = uVar3;
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(iVar8 + 0xbc);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(iVar8 + 0xc0);
  }
  uVar6 = FUN_0054c5c0(0x35,s_C__projects_meridian_Support_Lev_0071d630,0x7e);
  sVar5 = FUN_0054c7c0();
  while (-1 < sVar5) {
    if ((((sVar5 != -1) && (piVar4 = *(int **)(DAT_0076f648 + sVar5 * 0x14), piVar4 != (int *)0x0))
        && ((*(byte *)((int)piVar4 + 0x7f) & 0x10) != 0)) && (piVar4 != (int *)0x0)) {
      uVar7 = (**(code **)(*piVar4 + 0x4c))(s_WetTrigger_0071d620);
      iVar8 = FUN_00647ed0(uVar7);
      if (iVar8 == 0) {
        *(int *)(param_1 + 0x108) = piVar4[2];
        *(int *)(param_1 + 0x10c) = piVar4[3];
        FUN_004e1a10(1);
      }
    }
    sVar5 = FUN_0054c7c0();
  }
  FUN_0054c880(uVar6);
  uVar6 = FUN_00553ce0(s_Lvl_roast_m_smallbolders01_wet_0071d600);
  *(undefined4 *)(param_1 + 0x150) = uVar6;
  uVar6 = FUN_00553ce0(s_Lvl_roast_m_smallbolders02_wet_0071d5e0);
  *(undefined4 *)(param_1 + 0x154) = uVar6;
  uVar6 = FUN_00553ce0(s_Lvl_roast_m_largebolders_wet_0071d5c0);
  *(undefined4 *)(param_1 + 0x158) = uVar6;
  puVar9 = (undefined4 *)FUN_00553dc0(auStack_90,*(undefined4 *)(param_1 + 0x150),0);
  *(undefined4 *)(param_1 + 0x128) = *puVar9;
  puVar9 = (undefined4 *)FUN_00553dc0(auStack_90,*(undefined4 *)(param_1 + 0x154),0);
  *(undefined4 *)(param_1 + 300) = *puVar9;
  puVar9 = (undefined4 *)FUN_00553dc0(auStack_90,*(undefined4 *)(param_1 + 0x158),0);
  *(undefined4 *)(param_1 + 0x130) = *puVar9;
  FUN_00551280(1,0);
  FUN_00548de0(s__Ambient_WispOuter_xbmp_0071d5a7 + 1);
  FUN_00548de0(s_Props_CoinPickUp05_rgeom_0071cce8);
  return;
}

