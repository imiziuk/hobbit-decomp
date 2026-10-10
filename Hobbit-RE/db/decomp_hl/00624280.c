
char * __fastcall FUN_00624280(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    return s_Waiting_00748c9c;
  case 6:
    return s_Chasing_00748cb0;
  case 7:
    return s_Closing_00748c94;
  case 8:
    return s_Turning_00749f24;
  case 9:
    return s_Attacking_007492fc;
  case 10:
    return s_Standing_0074a0f4;
  case 0xb:
    return s_Attacking_from_Stand_0074a040;
  case 0xc:
    return s_Finding_nearest_nav_0074a02c;
  default:
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  }
}

