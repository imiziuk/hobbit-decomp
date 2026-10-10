
char * __fastcall FUN_00632050(int param_1)

{
  short sVar1;
  char *pcVar2;
  
  sVar1 = *(short *)(param_1 + 0x42);
  if (sVar1 == 5) {
    return s_PHASE_PATROLIDLESTATE_PATROL_0074a454;
  }
  if (sVar1 != 6) {
    if (sVar1 != 7) {
      pcVar2 = (char *)FUN_005bec40();
      return pcVar2;
    }
    return s_Side_Stepping_00748ec0;
  }
  return &DAT_00744ed8;
}

