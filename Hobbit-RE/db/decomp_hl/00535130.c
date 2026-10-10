
void __fastcall FUN_00535130(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x24c) < 0xc) {
    pcVar1 = (&PTR_s_STATE_NONE_007370b0)[*(int *)(param_1 + 0x24c)];
  }
  else {
    pcVar1 = s_UNKNOWN_MUSIC_LOGIC_STATE_007371c8;
  }
  PTR_s_UNKNOWN_MUSIC_LOGIC_STATE_007370ac = pcVar1;
  if (DAT_0076479c != 0) {
    FUN_0064f0d0(0,0x14,s_MusicLogicState____s_00737354,pcVar1);
    uVar2 = FUN_00533f30();
    FUN_0064f0d0(0,0x15,s_Combat_Intensity____d____d____02_00737330,DAT_007647a8,DAT_007647ac,uVar2)
    ;
    FUN_0064f0d0(0,0x16,s_Total_Threat____02_2f_00737318,(double)*(float *)(param_1 + 0x300));
    FUN_0064f0d0(0,0x17,s_m_DefaultTrack____s_00737304,*(undefined4 *)(param_1 + 400));
    FUN_0064f0d0(0,0x18,s_m_DefaultAmbientTrack____s_007372e8,*(undefined4 *)(param_1 + 0x1bc));
    FUN_0064f0d0(0,0x19,s_m_DefaultCombatTrack____s_007372cc,*(undefined4 *)(param_1 + 0x1e8));
  }
  return;
}

