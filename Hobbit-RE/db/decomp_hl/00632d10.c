
char * __fastcall FUN_00632d10(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    return s_Goto_Navpoint_0074a494;
  case 6:
    return &DAT_00744ed8;
  case 7:
    return s_Face_Target_0074a444;
  case 8:
    return s_Chasing_00748cb0;
  case 9:
    return s_Attacking_007492fc;
  case 10:
    return s_Taunting_00748c60;
  case 0xb:
    return s_Evading_0074a48c;
  case 0xc:
    return s_Draw_weapon_0074a480;
  case 0xd:
    return s_Telling_Others_about_the_baddies_00748cc4;
  default:
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  }
}

