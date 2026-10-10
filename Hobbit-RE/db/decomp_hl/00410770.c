
void __fastcall FUN_00410770(int param_1)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_80 [128];
  
  FUN_00647d10(param_1 + 4,s_CH07_BarrelsOutOfBond_0071ed10);
  FUN_0053f530(0x64000);
  uVar3 = FUN_005496c0(s_SFX_Goblins_audiopkg_0071cdfc,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_Elves_audiopkg_0071ecfc,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_GUI_audiopkg_0071cde8,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_Player_audiopkg_0071cdd4,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_Weapons_audiopkg_0071cdbc,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_Spiders_audiopkg_0071ce5c,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_Leapers_audiopkg_0071d6ac,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_AMB_Chapter07_audiopkg_0071ece0,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_Chapter07_audiopkg_0071ecc8,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  uVar3 = FUN_005496c0(s_SFX_Ring_audiopkg_0071cda8,s_Audio_0071ce88);
  FUN_00658080(uVar3);
  FUN_00419620(auStack_80,s_DX_CH07_PC_audiopkg_0071ecb4);
  FUN_00658080(auStack_80);
  FUN_0054e6d0(s_CH_07_BarrelsOutOfBond_SubTitles_0071ec8c);
  FUN_0064e7d0(s__________________________________0071ec68);
  FUN_0064e7d0(s__________________________________0071ec68);
  FUN_0064e7d0(s__________________________________0071ec68);
  FUN_0064e7d0(s__________________________________0071ec68);
  FUN_0064e7d0(s__________________________________0071ec68);
  FUN_0064e7d0(s__________________________________0071ec68);
  FUN_0064e7d0(s__________________________________0071ec68);
  FUN_0064e7d0(s__________________________________0071ec68);
  FUN_0064e7d0(s__________________________________0071ec68);
  FUN_0064e7d0(s__________________________________0071ec68);
  FUN_004fb060(4);
  uVar3 = FUN_0054c5c0(5,s_C__projects_meridian_Support_Lev_0071ec18,0x62);
  sVar2 = FUN_0054c7c0();
  while (-1 < sVar2) {
    if (sVar2 == -1) {
      piVar5 = (int *)0x0;
    }
    else {
      uVar1 = *(uint *)(DAT_0076f648 + sVar2 * 0x14);
      if (uVar1 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
      }
    }
    (**(code **)(*piVar5 + 0x9c))(0);
    uVar4 = (**(code **)(*piVar5 + 0xd4))();
    FUN_00647ed0(uVar4,s_braziertall_rgeom_0071ec04);
    FUN_00647ed0(uVar4,s_braziersmall_rgeom_0071ebf0);
    sVar2 = FUN_0054c7c0();
  }
  FUN_0054c880(uVar3);
  FUN_00548de0(s_TRIGGER_GALION_XSC_0071ebdc);
  FUN_00548de0(s__Ambient_WispOuter_xbmp_0071d5a7 + 1);
  FUN_00548de0(s_PROPS_BalinsAxe_Txtr_copy_D__xbm_0071ebb8);
  FUN_00548de0(s_props_treasurechestwood_copy_D___0071eb90);
  FUN_00548de0(s_props_chestblack_D__xbmp_0071eb74);
  FUN_00548de0(s_props_treasurechest2_copy_d__xbm_0071eb50);
  FUN_00548de0(s_EKH_TREE_BARKB_01_D__XBMP_0071eb34);
  FUN_00548de0(s_OUBLIETTETABLE_D__XBMP_0071eb1c);
  FUN_00548de0(s_ENVIROMENTMAPE_D__XBMP_0071eb04);
  FUN_00548de0(s_Props_antidote_potion_rgeom_0071cccc);
  FUN_00548de0(s_OPENINGCRYSTAL_CRYSTALPED_BLUE_P_0071eadc);
  FUN_00548de0(s_EKH_VINETWIST_01_D__XBMP_0071eac0);
  FUN_00548de0(s_Common_FX_MissingTexture_xbmp_0071eaa0);
  return;
}

