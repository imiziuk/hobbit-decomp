
void __fastcall FUN_0052b310(int param_1)

{
  char *pcVar1;
  
  FUN_00532030();
  FUN_0054e6d0(s_PageTurns_SubTitles_bin_0071dda4);
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 1:
    FUN_0054e910(s_Narrator_PT02_00733aec,0,0);
    pcVar1 = s_PageTurn_02_00733950;
    break;
  case 2:
    FUN_0054e910(s_Narrator_PT03_00733adc,0,0);
    pcVar1 = s_PageTurn_03_00733944;
    break;
  case 3:
    FUN_0054e910(s_Narrator_PT04_00733acc,0,0);
    pcVar1 = s_PageTurn_04_00733938;
    break;
  case 4:
    FUN_0054e910(s_Narrator_PT05_00733abc,0,0);
    pcVar1 = s_PageTurn_05_0073392c;
    break;
  case 5:
    FUN_0054e910(s_Narrator_PT06_00733aac,0,0);
    pcVar1 = s_PageTurn_06_00733920;
    break;
  case 6:
    FUN_0054e910(s_Narrator_PT07_00733a9c,0,0);
    pcVar1 = s_pt7_c2_pt8_c3_pt9_6_17_00733a84;
    break;
  case 7:
    FUN_0054e910(s_Narrator_PT10_00733a74,0,0);
    pcVar1 = s_PageTurn_10_00733900;
    break;
  case 8:
    FUN_0054e910(s_Narrator_PT11_00733a64,0,0);
    pcVar1 = s_PageTurn_11_007338f4;
    break;
  case 9:
    FUN_0054e910(s_Narrator_PT12_00733a54,0,0);
    pcVar1 = s_PageTurn_12_007338e8;
    break;
  case 10:
    FUN_0054e910(s_Narrator_PT14_00733a44,0,0);
    pcVar1 = s_pt14_c4a_pt15_c4b_pt16_6_17_00733a28;
    break;
  case 0xb:
    FUN_0054e910(s_Narrator_PT17_00733a18,0,0);
    pcVar1 = s_pt17_c5_pt18__6_17_00733a04;
    break;
  case 0xc:
    FUN_0054e910(s_Narrator_PT19_007339f4,0,0);
    pcVar1 = s_PageTurn_19_007338b0;
    break;
  default:
    goto switchD_0052b339_default;
  }
  FUN_0052ae30(pcVar1,1,0x140);
  FUN_0054ec40();
switchD_0052b339_default:
  FUN_0054e6c0();
  FUN_00532c80(DAT_00762ae0);
  if (*(int *)(param_1 + 0x7c) < 0xc) {
    *(undefined4 *)(param_1 + 0x78) = 0x13;
    return;
  }
  *(undefined4 *)(param_1 + 0x78) = 0xb;
  return;
}

