
char * __fastcall FUN_00634c70(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    return &DAT_00744ed8;
  case 6:
    return s_Chasing_00748cb0;
  case 7:
    return s_Casting_00748c8c;
  case 8:
    return s_Taunting_00748c60;
  case 9:
    return s_Evading_0074a48c;
  default:
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  }
}

