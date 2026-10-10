
char * __fastcall FUN_0060e7b0(int param_1)

{
  char *pcVar1;
  
  if (*(short *)(param_1 + 0x42) == 5) {
    return s_WispIdle_00744c90;
  }
  if (*(short *)(param_1 + 0x42) != 6) {
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  }
  return s_Wandering_007490a0;
}

