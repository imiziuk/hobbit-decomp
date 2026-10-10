
undefined * FUN_00411c90(undefined4 param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case 0:
    pcVar1 = s_CLOSED_IDLE_0071ef30;
    break;
  case 1:
    pcVar1 = s_CLOSED_IMPACT_0071ef20;
    break;
  case 2:
    pcVar1 = s_OPEN_IDLE_0071ef14;
    break;
  case 3:
    pcVar1 = s_OPEN_IMPACT_0071ef08;
    break;
  case 4:
    pcVar1 = s_CLOSING_0071ef00;
    break;
  default:
    FUN_0064f190(&DAT_0075b700,s____UNKNOWN____0071eee4);
    return &DAT_0075b700;
  }
  FUN_0064f190(&DAT_0075b700,s_STATE__s_0071eef4,pcVar1);
  return &DAT_0075b700;
}

