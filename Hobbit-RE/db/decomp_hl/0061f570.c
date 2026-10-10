
char * __fastcall FUN_0061f570(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    return s_Warning_others_00749dd0;
  case 6:
    return s_Waiting_to_attack_00749dbc;
  case 7:
    return s_Moving_underground_00749da8;
  case 8:
    return s_Bursting_00749d94;
  case 9:
    return s_Whipping_00749d88;
  case 10:
    return s_Striking_00749d7c;
  case 0xb:
    return s_Idling_00749da0;
  case 0xc:
    return s_Retracting_00749d70;
  default:
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  }
}

