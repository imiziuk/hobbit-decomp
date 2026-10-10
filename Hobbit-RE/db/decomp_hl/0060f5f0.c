
char * __fastcall FUN_0060f5f0(int param_1)

{
  short sVar1;
  char *pcVar2;
  
  sVar1 = *(short *)(param_1 + 0x42);
  if (sVar1 == 5) {
    return s_ALERT_IDLE_0074919c;
  }
  if (sVar1 != 6) {
    if (sVar1 != 7) {
      pcVar2 = (char *)FUN_005bec40();
      return pcVar2;
    }
    return s_Flinching_007491b4;
  }
  return s_Struggling_007491a8;
}

