
char * __fastcall FUN_0062fca0(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 7:
    return s_Chasing_00748cb0;
  case 8:
    return s_Strafing_00748ca4;
  case 9:
    return s_Waiting_00748c9c;
  case 10:
    return s_Closing_00748c94;
  case 0xb:
    return s_Attacking_007492fc;
  default:
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  case 0xd:
    return s_Taunting_00748c60;
  case 0xe:
    return s_Backing_Up_00748c54;
  }
}

