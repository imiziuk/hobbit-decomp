
char * __fastcall FUN_00620910(int param_1)

{
  short sVar1;
  char *pcVar2;
  
  sVar1 = *(short *)(param_1 + 0x42);
  if (sVar1 == 5) {
    return &DAT_00744ed8;
  }
  if (sVar1 != 6) {
    if (sVar1 != 7) {
      pcVar2 = (char *)FUN_005bec40();
      return pcVar2;
    }
    return s_Attacking_007492fc;
  }
  return s_Turning_00749f24;
}

