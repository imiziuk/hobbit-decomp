
char * __fastcall FUN_00626ff0(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    return s_Telling_Others_about_the_baddies_00748cc4;
  case 6:
    return s_Waiting_00748c9c;
  case 7:
    return s_Jumping_Forward_0074a1ec;
  case 8:
    return s_Closing_00748c94;
  case 9:
    return s_Facing_Target_00748e94;
  case 10:
    return s_Attack_00744ec8;
  case 0xb:
    return s_Jump_Attack_0074a130;
  case 0xc:
    return s_Jump_Back_0074a1e0;
  case 0xd:
    return s_Backing_Up_00748c54;
  default:
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  }
}

