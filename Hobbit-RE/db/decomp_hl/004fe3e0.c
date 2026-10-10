
undefined4 FUN_004fe3e0(void)

{
  int iVar1;
  undefined1 auStack_140 [28];
  undefined4 uStack_124;
  undefined4 uStack_120;
  char *pcStack_11c;
  char *pcStack_118;
  undefined1 *local_110;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d667b;
  local_c = ExceptionList;
  pcStack_118 = s_RunFrontEnd_00730bc8;
  pcStack_11c = (char *)0x4fe409;
  ExceptionList = &local_c;
  FUN_006501d0();
  local_4 = 0;
  pcStack_118 = (char *)0x4fe41e;
  FUN_0052ab10();
  pcStack_118 = s_Audio_0071ce88;
  pcStack_11c = s_SFX_GUI_audiopkg_0071cde8;
  uStack_120 = 0x4fe432;
  pcStack_118 = (char *)FUN_005496c0();
  pcStack_11c = (char *)0x4fe43d;
  FUN_00658080();
  local_110 = auStack_140;
  FUN_00649b20(s_MUSIC_Frontend_audiopkg_00730bb0);
  FUN_00531910();
  pcStack_118 = (char *)0x4fe464;
  iVar1 = FUN_0052ac00();
  while (iVar1 == 0) {
    pcStack_118 = (char *)0x4fe472;
    iVar1 = FUN_0052a660();
    if (iVar1 == 0x13) break;
    pcStack_118 = (char *)0x3f800000;
    pcStack_11c = (char *)0x4fe486;
    FUN_0052b560();
    pcStack_118 = (char *)0x4fe48b;
    iVar1 = FUN_0066f810();
    if (iVar1 != 0) {
      pcStack_118 = (char *)0x3f800000;
      pcStack_11c = (char *)0x4fe49f;
      FUN_006a0490();
    }
    pcStack_118 = (char *)0x4fe4aa;
    FUN_006a1120();
    pcStack_118 = (char *)0x4fe4af;
    FUN_0065f480();
    pcStack_118 = (char *)0x4fe4b9;
    iVar1 = FUN_0052ac00();
  }
  DAT_00760360 = 1;
  pcStack_118 = (char *)0x4fe4d1;
  FUN_00532030();
  pcStack_118 = s_Audio_0071ce88;
  pcStack_11c = s_SFX_GUI_audiopkg_0071cde8;
  uStack_120 = 0x4fe4e5;
  pcStack_118 = (char *)FUN_005496c0();
  pcStack_11c = (char *)0x4fe4f0;
  FUN_006581c0();
  local_110 = auStack_140;
  FUN_00649b20(s_MUSIC_Frontend_audiopkg_00730bb0);
  FUN_005314d0();
  pcStack_118 = (char *)0x3e800000;
  pcStack_11c = (char *)0x4fe51c;
  FUN_00658330();
  pcStack_118 = (char *)0x4fe526;
  FUN_0052abc0();
  pcStack_118 = local_10c;
  pcStack_11c = (char *)0x4fe535;
  FUN_0052a790();
  pcStack_118 = local_10c;
  pcStack_11c = "j";
  FUN_004fce90();
  pcStack_11c = (char *)0x0;
  uStack_120 = 2;
  uStack_124 = 0x4fe548;
  iVar1 = FUN_006710d0();
  local_4 = 0xffffffff;
  if (iVar1 == 0) {
    pcStack_118 = (char *)0x4fe57f;
    FUN_006501e0();
    ExceptionList = local_c;
    return 1;
  }
  pcStack_118 = (char *)0x4fe563;
  FUN_006501e0();
  ExceptionList = local_c;
  return 0;
}

