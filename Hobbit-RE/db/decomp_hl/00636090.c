
char * __fastcall FUN_00636090(int param_1)

{
  char *pcVar1;
  
  if (*(short *)(param_1 + 0x42) == 5) {
    return s_Retreating_0074a624;
  }
  if (*(short *)(param_1 + 0x42) != 6) {
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  }
  return s_Evading_0074a48c;
}

