
void __fastcall FUN_0052d1a0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  CRect aCStack_40 [16];
  undefined4 uStack_30;
  int *piStack_2c;
  int *piStack_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piStack_28 = &local_14;
  piStack_2c = &local_18;
  uStack_30 = 0x52d1b7;
  FUN_0065f8a0();
  if (((NAN((float)local_18) || NAN(*(float *)(param_1 + 0xc18))) ==
       ((float)local_18 == *(float *)(param_1 + 0xc18))) ||
     ((NAN((float)local_14) || NAN(*(float *)(param_1 + 0xc1c))) ==
      ((float)local_14 == *(float *)(param_1 + 0xc1c)))) {
    piStack_28 = (int *)0x52d1e3;
    FUN_0052db20();
  }
  switch(*(undefined4 *)(param_1 + 0xc28)) {
  case 1:
    piStack_28 = (int *)0x1;
    piStack_2c = DAT_00813038;
    uStack_30 = 0x52d20e;
    FUN_006a16c0();
    piStack_28 = &local_10;
    piStack_2c = &local_c;
    uStack_30 = 0x52d21d;
    FUN_0065f8a0();
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x5;
    uStack_30 = 0;
    CRect::CRect(aCStack_40,0x10,0x10,local_c + -0x10,local_10 + -0x10);
    pcVar2 = s_text_box_00735534;
    goto LAB_0052d421;
  case 2:
  case 8:
    piStack_28 = (int *)0x1;
    piStack_2c = DAT_00813038;
    uStack_30 = 0x52d474;
    FUN_006a16c0();
    piStack_28 = &local_c;
    piStack_2c = &local_10;
    uStack_30 = 0x52d483;
    FUN_0065f8a0();
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x5;
    uStack_30 = 0;
    CRect::CRect(aCStack_40,0x10,0x10,local_10 + -0x10,local_c + -0x10);
    pcVar2 = s_pause_summary_00733344;
    break;
  case 3:
    piStack_28 = (int *)0x1;
    piStack_2c = DAT_00813038;
    uStack_30 = 0x52d262;
    FUN_006a16c0();
    piStack_28 = &local_c;
    piStack_2c = &local_10;
    uStack_30 = 0x52d271;
    FUN_0065f8a0();
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x5;
    uStack_30 = 0;
    CRect::CRect(aCStack_40,0x10,0x10,local_10 + -0x10,local_c + -0x10);
    FUN_006a1430(DAT_00813038,s_pause_inventory_007330c4);
    piStack_2c = DAT_00813038;
    goto LAB_0052d4c9;
  case 4:
    piStack_28 = (int *)0x1;
    piStack_2c = DAT_00813038;
    uStack_30 = 0x52d2d0;
    FUN_006a16c0();
    piStack_28 = &local_c;
    piStack_2c = &local_10;
    uStack_30 = 0x52d2df;
    FUN_0065f8a0();
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x5;
    uStack_30 = 0;
    CRect::CRect(aCStack_40,0x10,0x10,local_10 + -0x10,local_c + -0x10);
    pcVar2 = s_pick_lock_00734f34;
    break;
  case 5:
    piStack_28 = (int *)0x1;
    piStack_2c = DAT_00813038;
    uStack_30 = 0x52d324;
    FUN_006a16c0();
    piStack_28 = &local_c;
    piStack_2c = &local_10;
    uStack_30 = 0x52d333;
    FUN_0065f8a0();
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x5;
    uStack_30 = 0;
    CRect::CRect(aCStack_40,0x10,0x10,local_10 + -0x10,local_c + -0x10);
    FUN_006a1430(DAT_00813038,s_pause_questlog_00733360);
    piStack_2c = DAT_00813038;
    goto LAB_0052d4c9;
  case 6:
    piStack_28 = (int *)0x1;
    piStack_2c = DAT_00813038;
    uStack_30 = 0x52d392;
    FUN_006a16c0();
    piStack_28 = &local_c;
    piStack_2c = &local_10;
    uStack_30 = 0x52d3a1;
    FUN_0065f8a0();
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x15;
    uStack_30 = 0;
    CRect::CRect(aCStack_40,0x10,0x10,local_10 + -0x10,local_c + -0x10);
    pcVar2 = s_pause_options_00732bbc;
    break;
  case 7:
    piStack_28 = (int *)0x1;
    piStack_2c = DAT_00813038;
    uStack_30 = 0x52d3e6;
    FUN_006a16c0();
    piStack_28 = &local_c;
    piStack_2c = &local_10;
    uStack_30 = 0x52d3f5;
    FUN_0065f8a0();
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x5;
    uStack_30 = 0;
    CRect::CRect(aCStack_40,0x10,0x10,local_10 + -0x10,local_c + -0x10);
    pcVar2 = s_pause_inventory_007330c4;
LAB_0052d421:
    FUN_006a1430(DAT_00813038,pcVar2);
    piStack_28 = (int *)0xffffffff;
    piStack_2c = DAT_00813038;
    uStack_30 = 0x52d447;
    FUN_006a0410();
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x52d450;
    FUN_0052db90();
    piStack_28 = (int *)0x52d45a;
    FUN_005c8690();
    return;
  case 9:
    piStack_28 = (int *)0x1;
    piStack_2c = DAT_00813038;
    uStack_30 = 0x52d502;
    FUN_006a16c0();
    piStack_28 = &local_c;
    piStack_2c = &local_10;
    uStack_30 = 0x52d511;
    FUN_0065f8a0();
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x5;
    uStack_30 = 0;
    CRect::CRect(aCStack_40,0x10,0x10,local_10 + -0x10,local_c + -0x10);
    FUN_006a1430(DAT_00813038,s_save_game_pc_007348f4);
    piStack_28 = (int *)0xffffffff;
    piStack_2c = DAT_00813038;
    uStack_30 = 0x52d563;
    FUN_006a0410();
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x52d56c;
    FUN_0052db90();
    piStack_28 = (int *)0x52d576;
    FUN_005c8690();
    return;
  case 10:
    piStack_28 = (int *)0x1;
    piStack_2c = DAT_00813038;
    uStack_30 = 0x52d590;
    FUN_006a16c0();
    piStack_28 = &local_c;
    piStack_2c = &local_10;
    uStack_30 = 0x52d59f;
    FUN_0065f8a0();
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x5;
    uStack_30 = 0;
    CRect::CRect(aCStack_40,0x10,0x10,local_10 + -0x10,local_c + -0x10);
    uVar1 = FUN_006a1430(DAT_00813038,s_text_box_00735534);
    piStack_28 = *(int **)(param_1 + 0xc34);
    piStack_2c = *(int **)(param_1 + 0xc80);
    *(undefined4 *)(param_1 + 0xc30) = uVar1;
    uStack_30 = 0x52d603;
    FUN_00524360();
    piStack_28 = (int *)0xffffffff;
    piStack_2c = DAT_00813038;
    uStack_30 = 0x52d616;
    FUN_006a0410();
    piStack_28 = (int *)0x52d61d;
    FUN_0064b1c0();
    piStack_28 = (int *)0x52d624;
    FUN_0064b1d0();
    piStack_28 = (int *)0x52d62b;
    FUN_0064b1c0();
    piStack_28 = (int *)0x52d632;
    FUN_0064b1d0();
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x52d63b;
    FUN_0052db90();
    piStack_28 = (int *)0x52d645;
    FUN_005c8690();
    return;
  case 0xb:
    piStack_28 = (int *)0x1;
    piStack_2c = DAT_00813038;
    uStack_30 = 0x52d660;
    FUN_006a16c0();
    piStack_28 = &local_8;
    piStack_2c = &local_4;
    uStack_30 = 0x52d66f;
    FUN_0065f8a0();
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x5;
    uStack_30 = 0;
    CRect::CRect(aCStack_40,0x10,0x10,local_4 + -0x10,local_8 + -0x10);
    FUN_006a1430(DAT_00813038,s_quick_tips_pc_00735258);
    piStack_28 = (int *)0xffffffff;
    piStack_2c = DAT_00813038;
    uStack_30 = 0x52d6c1;
    FUN_006a0410();
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x52d6ca;
    FUN_0052db90();
    piStack_28 = (int *)0x52d6d4;
    FUN_005c8690();
    return;
  case 0xc:
    piStack_28 = (int *)0x52d6e0;
    FUN_0041bcc0();
    piStack_28 = (int *)0x52d6ed;
    FUN_0051efa0();
  default:
    piStack_28 = (int *)0x52d6f7;
    FUN_005c8690();
    return;
  }
  FUN_006a1430(DAT_00813038,pcVar2);
  piStack_2c = DAT_00813038;
LAB_0052d4c9:
  piStack_28 = (int *)0xffffffff;
  uStack_30 = 0x52d4d4;
  DAT_00813038 = piStack_2c;
  FUN_006a0410();
  piStack_28 = (int *)0x0;
  piStack_2c = (int *)0x52d4dd;
  FUN_0052db90();
  piStack_28 = (int *)0x52d4e7;
  FUN_005c8690();
  return;
}

