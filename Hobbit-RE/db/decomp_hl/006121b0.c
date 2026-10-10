
char * __fastcall FUN_006121b0(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    return s_Waiting_00748c9c;
  case 6:
    return s_Taunting_00748c60;
  default:
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  case 8:
  case 9:
  case 10:
  case 0xb:
    return s_Attacking_007492fc;
  case 0xd:
    return s_Swatting_a_Rock_007492ec;
  }
}

