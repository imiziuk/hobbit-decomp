
char * __fastcall FUN_0060bf40(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    return s_PHASE_WARIDLESTATE_PATROL_00748ed0;
  case 6:
    return &DAT_00744ed8;
  case 7:
    return s_Side_Stepping_00748ec0;
  case 8:
    return s_Shoot_00748eb8;
  case 9:
    return s_Draw_Weapon_00748cb8;
  case 10:
    return s_Returning_To_Origin_00748ea4;
  case 0xb:
    return s_Facing_Target_00748e94;
  default:
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  }
}

