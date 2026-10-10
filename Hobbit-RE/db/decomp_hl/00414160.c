
void __fastcall FUN_00414160(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [128];
  
  FUN_0053f530(0x4b000);
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  FUN_00647d10(param_1 + 4,s_CH08_Laketown_0071f6c8);
  uVar1 = FUN_005496c0(s_SFX_HumansWar_audiopkg_0071f45c,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_ElvesWar_audiopkg_0071f474,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_GUI_audiopkg_0071cde8,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Player_audiopkg_0071cdd4,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Weapons_audiopkg_0071cdbc,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Spiders_audiopkg_0071ce5c,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Goblins_audiopkg_0071cdfc,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Leapers_audiopkg_0071d6ac,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_AMB_Chapter08_audiopkg_0071f6ac,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Chapter08_audiopkg_0071f694,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  uVar1 = FUN_005496c0(s_SFX_Ring_audiopkg_0071cda8,s_Audio_0071ce88);
  FUN_00658080(uVar1);
  FUN_00419620(auStack_80,s_DX_CH08_PC_audiopkg_0071f680);
  FUN_00658080(auStack_80);
  FUN_0054e6d0(s_CH_08_LakeTown_SubTitles_bin_0071f660);
  uStack_8c = 0xc4d98000;
  uStack_88 = 0xc5548000;
  uStack_84 = 0x44be0000;
  FUN_00417e90(&uStack_8c);
  FUN_00415070();
  uVar4 = FUN_0054c210(s_Bortan_Q002_0071f654,1);
  *(undefined8 *)(param_1 + 0x3d0) = uVar4;
  uVar4 = FUN_0054c210(s_Start_Volume_Q02_001_0071f63c,1);
  *(undefined8 *)(param_1 + 1000) = uVar4;
  uVar4 = FUN_0054c210(s_End_Volume_Q02_001_0071f628,1);
  *(undefined8 *)(param_1 + 0x3f0) = uVar4;
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  *(undefined4 *)(param_1 + 0x420) = 0;
  if (*(int *)(param_1 + 0x450) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x448));
    *(undefined4 *)(param_1 + 0x448) = 0;
    *(undefined4 *)(param_1 + 0x44c) = 0;
  }
  *(undefined4 *)(param_1 + 0x444) = 0;
  if (DAT_0075b7e4 == 0) {
    if (DAT_0075b7dc != 0) {
      iVar3 = DAT_0075b7dc + -4;
      FUN_006c026a(DAT_0075b7dc,0x2c,*(undefined4 *)(DAT_0075b7dc + -4),FUN_00649ba0);
      FUN_006bf840(iVar3);
    }
    DAT_0075b7dc = 0;
    DAT_0075b7e0 = 0;
  }
  DAT_0075b7d8 = 0;
  FUN_00417750(0x32);
  if (DAT_0075b754 == 0) {
    if (DAT_0075b74c != 0) {
      iVar3 = DAT_0075b74c + -4;
      FUN_006c026a(DAT_0075b74c,0x2c,*(undefined4 *)(DAT_0075b74c + -4),FUN_00649ba0);
      FUN_006bf840(iVar3);
    }
    DAT_0075b74c = 0;
    DAT_0075b750 = 0;
  }
  DAT_0075b748 = 0;
  FUN_00417750(0x32);
  if (DAT_0075b7c8 == 0) {
    FUN_006bf840(DAT_0075b7c0);
    DAT_0075b7c0 = (void *)0x0;
    DAT_0075b7c4 = 0;
LAB_004144c7:
    DAT_0075b7bc = 0;
    pvVar2 = operator_new(200);
    iVar3 = 0;
    if (0 < DAT_0075b7bc) {
      do {
        *(undefined4 *)((int)pvVar2 + iVar3 * 4) = *(undefined4 *)((int)DAT_0075b7c0 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_0075b7bc);
    }
    FUN_006bf840(DAT_0075b7c0);
    DAT_0075b7c4 = 0x32;
    DAT_0075b7c0 = pvVar2;
  }
  else {
    DAT_0075b7bc = 0;
    if (DAT_0075b7c4 != 0x32) goto LAB_004144c7;
  }
  if (DAT_0075b78c == 0) {
    FUN_006bf840(DAT_0075b784);
    DAT_0075b784 = (void *)0x0;
    DAT_0075b788 = 0;
LAB_0041454c:
    DAT_0075b780 = 0;
    pvVar2 = operator_new(200);
    iVar3 = 0;
    if (0 < DAT_0075b780) {
      do {
        *(undefined4 *)((int)pvVar2 + iVar3 * 4) = *(undefined4 *)((int)DAT_0075b784 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_0075b780);
    }
    FUN_006bf840(DAT_0075b784);
    DAT_0075b788 = 0x32;
    DAT_0075b784 = pvVar2;
  }
  else {
    DAT_0075b780 = 0;
    if (DAT_0075b788 != 0x32) goto LAB_0041454c;
  }
  if (DAT_0075b7ac == 0) {
    FUN_006bf840(DAT_0075b7a4);
    DAT_0075b7a4 = (void *)0x0;
    DAT_0075b7a8 = 0;
  }
  else {
    DAT_0075b7a0 = 0;
    if (DAT_0075b7a8 == 0x32) goto LAB_00414621;
  }
  DAT_0075b7a0 = 0;
  pvVar2 = operator_new(200);
  iVar3 = 0;
  if (0 < DAT_0075b7a0) {
    do {
      *(undefined4 *)((int)pvVar2 + iVar3 * 4) = *(undefined4 *)((int)DAT_0075b7a4 + iVar3 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_0075b7a0);
  }
  FUN_006bf840(DAT_0075b7a4);
  DAT_0075b7a8 = 0x32;
  DAT_0075b7a4 = pvVar2;
LAB_00414621:
  uVar4 = FUN_0054c210(s_WH3_In_Door_0071f61c,1);
  *(undefined8 *)(param_1 + 0x408) = uVar4;
  uVar4 = FUN_0054c210(s_WH3_Out_Door_0071f60c,1);
  *(undefined8 *)(param_1 + 0x410) = uVar4;
  uVar4 = FUN_0054c210(s_WH3_SwitchA_Gas_0071f5fc,1);
  *(undefined8 *)(param_1 + 0x418) = uVar4;
  *(undefined4 *)(param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x430) = 1;
  *(undefined4 *)(param_1 + 0x434) = 0xbf800000;
  FUN_00416110();
  FUN_00414ef0();
  FUN_00548de0(s_WINERACKPUZZLE_XSC_0071f5e8);
  FUN_00548de0(s_INST_LT_WP_WINERACK_RGEOM_0071f5cc);
  FUN_00548de0(s_Props_CoinPickUp05_rgeom_0071cce8);
  FUN_00548de0(s_Props_stonepile_rgeom_0071d7c0);
  FUN_00548de0(s_Props_chest_black_rgeom_0071f5b4);
  FUN_00548de0(s_Props_chest_wood_rgeom_0071f59c);
  FUN_00548de0(s_Props_chest_gold_rgeom_0071f584);
  FUN_00548de0(s_Props_gobbag_rgeom_0071f570);
  FUN_00548de0(s_Props_coinbag_rgeom_0071f55c);
  FUN_00548de0(s_Props_keyblack_rgeom_0071f544);
  FUN_00548de0(s_WINDOW_LONG_GRID01_D__XBMP_0071f528);
  FUN_00548de0(s_WINDOW_LONG_GRID01_A__XBMP_0071f50c);
  FUN_00548de0(s_GRUNGE_SIDE_03_D__XBMP_0071f4f4);
  FUN_00548de0(s_PAGRUNGE_SIDE_03_A__XBMP_0071f4da + 2);
  return;
}

