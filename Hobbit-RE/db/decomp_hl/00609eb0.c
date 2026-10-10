
char * __fastcall FUN_00609eb0(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    return s_Draw_Weapon_00748cb8;
  case 6:
    return s_Chasing_00748cb0;
  case 7:
    return s_Strafing_00748ca4;
  case 8:
    return s_Waiting_00748c9c;
  case 9:
    return s_Casting_00748c8c;
  case 10:
    return s_Summoning_00748c80;
  case 0xb:
    return s_Closing_00748c94;
  case 0xc:
    return s_WightBossAttacking_00748c6c;
  case 0xd:
    return s_Taunting_00748c60;
  case 0xe:
    return s_Backing_Up_00748c54;
  default:
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  case 0x10:
    return s_Telling_Others_about_the_baddies_00748cc4;
  }
}

