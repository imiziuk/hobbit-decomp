
char * __fastcall FUN_00633fe0(int param_1)

{
  short sVar1;
  char *pcVar2;
  
  sVar1 = *(short *)(param_1 + 0x42);
  if (sVar1 == 5) {
    return s_Seeking_Cover_0074a508;
  }
  if (sVar1 != 6) {
    if (sVar1 != 7) {
      pcVar2 = (char *)FUN_005bec40();
      return pcVar2;
    }
    return s_Wandering_007490a0;
  }
  return s_Taking_Cover_0074a518;
}

