
char * __fastcall FUN_00630fe0(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    return s_Telling_Others_about_the_baddies_00748cc4;
  case 6:
    return s_Chasing_00748cb0;
  case 7:
    return s_Face_Target_0074a444;
  case 8:
    return s_Waiting_00748c9c;
  case 9:
    return s_Attacking_007492fc;
  case 10:
    return s_Miss_Recover_0074a434;
  case 0xb:
    return s_Attach_to_target_0074a2f8;
  case 0xc:
    return s_Attach_Recover_0074a424;
  case 0xd:
    return s_Returning_to_the_nearest_Nav_poi_0074a400;
  default:
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  }
}

