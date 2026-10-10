
char * __fastcall FUN_0060dc80(int param_1)

{
  char *pcVar1;
  
  if (*(short *)(param_1 + 0x42) == 5) {
    return s_IDLE__following__0074902c;
  }
  if (*(short *)(param_1 + 0x42) != 6) {
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  }
  return s_Following_00749040;
}

