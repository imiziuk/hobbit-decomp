
char * __fastcall FUN_005bb810(int param_1)

{
  short sVar1;
  char *pcVar2;
  
  sVar1 = *(short *)(param_1 + 0x42);
  if (sVar1 == 5) {
    return s_Snoozing_007459a4;
  }
  if (sVar1 != 6) {
    if (sVar1 != 7) {
      pcVar2 = (char *)FUN_005bec40();
      return pcVar2;
    }
    return s_Almost_Wakid_007459bc;
  }
  return s_Restless_007459b0;
}

