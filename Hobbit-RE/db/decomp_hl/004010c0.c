
void __fastcall FUN_004010c0(int param_1)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_80 [128];
  
  FUN_00647d10(param_1 + 4,s_Ch05_Swordlight_0071ce90);
  uVar3 = FUN_005496c0(s_SFX_Bats_audiopkg_0071ce74,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_Spiders_audiopkg_0071ce5c,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_Chapter05_audiopkg_0071ce44,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_AMB_Chapter05_audiopkg_0071ce28,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_Eels_audiopkg_0071ce14,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_Goblins_audiopkg_0071cdfc,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_GUI_audiopkg_0071cde8,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_Player_audiopkg_0071cdd4,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_Weapons_audiopkg_0071cdbc,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_Ring_audiopkg_0071cda8,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  FUN_00419620(auStack_80,s_DX_CH05_PC_audiopkg_0071cd94);
  FUN_00658080(auStack_80);
  FUN_0054e6d0(s_CH_05_SwordLight_SubTitles_bin_0071cd74);
  FUN_004fb060(3);
  uVar3 = FUN_0054c5c0(5,s_C__projects_meridian_Support_Lev_0071cd30,0x74);
  sVar2 = FUN_0054c7c0();
  while (-1 < sVar2) {
    if (sVar2 == -1) {
      piVar4 = (int *)0x0;
    }
    else {
      uVar1 = *(uint *)(DAT_0076f648 + sVar2 * 0x14);
      if (uVar1 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
      }
    }
    (**(code **)(*piVar4 + 0x9c))(0);
    sVar2 = FUN_0054c7c0();
  }
  FUN_0054c880(uVar3);
  FUN_00548de0(s_MineCartRide_MineCartRideAnims_c_0071cd04);
  FUN_00548de0(s_Props_CoinPickUp05_rgeom_0071cce8);
  FUN_00548de0(s_Props_antidote_potion_rgeom_0071cccc);
  FUN_00548de0(s_BProps_health_rgeom_0071ccb7 + 1);
  return;
}

