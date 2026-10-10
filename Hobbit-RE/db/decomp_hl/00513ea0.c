
void __thiscall FUN_00513ea0(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_0052a660();
  if (iVar1 != 0x11) {
    if (param_2 == *(int *)(param_1 + 0x1c0)) {
      FUN_0054e6c0();
      FUN_006a16c0(DAT_00813038,1);
      FUN_0052a630(1);
      FUN_0054ec40();
      return;
    }
    if (param_2 == *(int *)(param_1 + 0x158)) {
      FUN_0054e910(s_Narrator_PT01_00733b08,0,0);
      pcVar2 = s_pt1_c1_6_17_00733afc;
    }
    else if (param_2 == *(int *)(param_1 + 0x15c)) {
      FUN_0054e910(s_Narrator_PT02_00733aec,0,0);
      pcVar2 = s_PageTurn_02_00733950;
    }
    else if (param_2 == *(int *)(param_1 + 0x160)) {
      FUN_0054e910(s_Narrator_PT03_00733adc,0,0);
      pcVar2 = s_PageTurn_03_00733944;
    }
    else if (param_2 == *(int *)(param_1 + 0x164)) {
      FUN_0054e910(s_Narrator_PT04_00733acc,0,0);
      pcVar2 = s_PageTurn_04_00733938;
    }
    else if (param_2 == *(int *)(param_1 + 0x168)) {
      FUN_0054e910(s_Narrator_PT05_00733abc,0,0);
      pcVar2 = s_PageTurn_05_0073392c;
    }
    else if (param_2 == *(int *)(param_1 + 0x16c)) {
      FUN_0054e910(s_Narrator_PT06_00733aac,0,0);
      pcVar2 = s_PageTurn_06_00733920;
    }
    else if (param_2 == *(int *)(param_1 + 0x170)) {
      FUN_0054e910(s_Narrator_PT07_00733a9c,0,0);
      pcVar2 = s_pt7_c2_pt8_c3_pt9_6_17_00733a84;
    }
    else if (param_2 == *(int *)(param_1 + 0x174)) {
      FUN_0054e910(s_Narrator_PT10_00733a74,0,0);
      pcVar2 = s_PageTurn_10_00733900;
    }
    else if (param_2 == *(int *)(param_1 + 0x178)) {
      FUN_0054e910(s_Narrator_PT11_00733a64,0,0);
      pcVar2 = s_PageTurn_11_007338f4;
    }
    else if (param_2 == *(int *)(param_1 + 0x17c)) {
      FUN_0054e910(s_Narrator_PT12_00733a54,0,0);
      pcVar2 = s_PageTurn_12_007338e8;
    }
    else if (param_2 == *(int *)(param_1 + 0x180)) {
      FUN_0054e910(s_Narrator_PT13_0071dd94,0,0);
      pcVar2 = s_PageTurn_13_0071dd88;
    }
    else if (param_2 == *(int *)(param_1 + 0x184)) {
      FUN_0054e910(s_Narrator_PT14_00733a44,0,0);
      pcVar2 = s_pt14_c4a_pt15_c4b_pt16_6_17_00733a28;
    }
    else if (param_2 == *(int *)(param_1 + 0x188)) {
      FUN_0054e910(s_Narrator_PT17_00733a18,0,0);
      pcVar2 = s_pt17_c5_pt18__6_17_00733a04;
    }
    else if (param_2 == *(int *)(param_1 + 0x18c)) {
      FUN_0054e910(s_Narrator_PT19_007339f4,0,0);
      pcVar2 = s_PageTurn_19_007338b0;
    }
    else {
      if (param_2 != *(int *)(param_1 + 0x1bc)) goto LAB_00514176;
      pcVar2 = s_intro_6_2_00730a20;
    }
    FUN_0052ae30(pcVar2,1,0x140);
  }
LAB_00514176:
  FUN_0054ec40();
  return;
}

