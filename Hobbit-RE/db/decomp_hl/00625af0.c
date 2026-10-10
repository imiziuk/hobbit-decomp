
char * __fastcall FUN_00625af0(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    return s_Telling_Others_about_the_baddies_00748cc4;
  case 6:
    return s_Waiting_00748c9c;
  case 7:
    return s_Chasing_00748cb0;
  case 8:
    return s_Strafing_00748ca4;
  case 9:
    return s_Closing_00748c94;
  case 10:
    return s_Facing_Target_00748e94;
  case 0xb:
    return s_Claw_Attack_0074a148;
  case 0xc:
    return s_Bite_Attack_0074a13c;
  case 0xd:
    return s_Jump_Attack_0074a130;
  case 0xe:
    return s_Backing_Up_00748c54;
  case 0xf:
    return s_Biting_From_Block_0074a11c;
  default:
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  }
}

