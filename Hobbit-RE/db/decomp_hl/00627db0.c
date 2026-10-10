
char * __fastcall FUN_00627db0(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    return &DAT_00744ed8;
  case 6:
    return s_Animating_0074a280;
  case 7:
    return s_Wandering_007490a0;
  case 8:
    return s_Patrolling_0074a274;
  case 9:
    return s_Patrol_Animation_0074a260;
  default:
    pcVar1 = (char *)FUN_005bec40();
    return pcVar1;
  }
}

