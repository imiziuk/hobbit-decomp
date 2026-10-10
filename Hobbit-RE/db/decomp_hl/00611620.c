
char * __fastcall FUN_00611620(int param_1)

{
  char *pcVar1;
  
  if (*(short *)(param_1 + 0x42) == 5) {
    return &DAT_00744ed8;
  }
  if (*(short *)(param_1 + 0x42) != 6) {
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  }
  return s_Flinching_007491b4;
}

