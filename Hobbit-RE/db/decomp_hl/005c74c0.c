
void FUN_005c74c0(void)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char **ppcVar7;
  char *local_a0 [4];
  char *local_90;
  char *local_8c;
  char *local_88;
  char *local_84;
  char *local_80;
  char *local_7c;
  char *local_78;
  char *local_74;
  char *local_70;
  char *local_6c;
  char *local_68;
  char *local_64;
  char *local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  undefined *local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  undefined1 local_8 [8];
  
  local_a0[0] = s_ahunter_007463f4;
  local_a0[1] = s_gomelchuck_007463e8;
  local_a0[2] = s_mfong_007463e0;
  local_a0[3] = s_acheng_007463d8;
  local_90 = s_jcossigny_007463cc;
  local_8c = s_mreed_007463c4;
  local_88 = s_athyssen_007463b8;
  local_84 = s_jslate_007463b0;
  local_80 = s_phaskins_007463a4;
  local_7c = s_bbickerton_00746398;
  local_78 = s_jrichardson_0074638c;
  local_74 = s_pfranco_00746384;
  local_70 = s_bspears_0074637c;
  local_6c = s_jnagle_00746374;
  local_68 = s_rbrown_0074636c;
  local_64 = s_bpavlock_00746360;
  local_60 = s_jversluis_00746354;
  local_5c = s_rshelley_00746348;
  local_58 = s_bmarques_0074633c;
  local_54 = s_jfalcon_00746334;
  local_50 = s_rbyrd_0074632c;
  local_4c = s_bsalinas_00746320;
  local_48 = s_lgustafson_00746314;
  local_44 = s_starrant_00746308;
  local_40 = s_bwatson_00746300;
  local_3c = s_mschaefgen_007462f4;
  local_38 = s_shird_007462ec;
  local_34 = s_clupher_007462e4;
  local_30 = s_mcoven_007462dc;
  local_2c = s_sbroumley_007462d0;
  local_28 = s_cgalley_007462c8;
  local_24 = s_mmcclelland_007462bc;
  local_20 = s_theimann_007462b0;
  local_1c = &DAT_007462a8;
  local_18 = s_mtraub_007462a0;
  local_14 = s_tarce_00746298;
  local_10 = s_jfranklin_0074628c;
  local_c = s_finished_00746280;
  ppcVar7 = local_a0;
  iVar6 = 1;
  do {
    pcVar1 = *ppcVar7;
    iVar3 = FUN_00647e40(pcVar1,s_finished_00746280);
    if (iVar3 == 0) {
      return;
    }
    uVar4 = FUN_005c73e0(pcVar1);
    FUN_005c7480(uVar4,local_8);
    for (iVar3 = iVar6; iVar3 < 100; iVar3 = iVar3 + 1) {
      pcVar1 = local_a0[iVar3];
      iVar5 = FUN_00647e40(pcVar1,s_finished_00746280);
      if (iVar5 == 0) break;
      FUN_005c73e0(pcVar1);
    }
    ppcVar7 = ppcVar7 + 1;
    bVar2 = 99 < iVar6;
    iVar6 = iVar6 + 1;
    if (bVar2) {
      return;
    }
  } while( true );
}

