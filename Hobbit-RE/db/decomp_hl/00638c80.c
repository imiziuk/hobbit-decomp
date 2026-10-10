
char * __fastcall FUN_00638c80(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    return s_ALERT_IDLE_0074919c;
  case 6:
    return s_TURNING_0074a66c;
  case 7:
    return s_Moving_to_a_Sound_0074a658;
  case 8:
    return s_Looking_around_0074a648;
  default:
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  }
}

