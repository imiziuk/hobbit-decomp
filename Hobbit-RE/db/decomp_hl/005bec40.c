
char * __fastcall FUN_005bec40(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x42);
  if (sVar1 == 0) {
    return (char *)&DAT_00720670;
  }
  if (sVar1 != 1) {
    if (sVar1 != 2) {
      return s_Unknown_Phase_00745b88;
    }
    return s_DEFENDING_00745b7c;
  }
  return s_Doing_a_goal_list_00745b68;
}

