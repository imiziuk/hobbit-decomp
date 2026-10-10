
char * __fastcall FUN_0061e2b0(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    return s_Underground_Idle_00749d20;
  case 6:
    return s_Traveling_Underground_00749d08;
  case 7:
    return s_looking_around_00749cf8;
  case 8:
    return s_retracting_00749cec;
  default:
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  }
}

