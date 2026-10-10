
void FUN_00656550(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  
  param_2 = param_2 + -1;
  if (0 < param_2) {
    pcVar1 = (char *)(param_1 + 1 + param_2 * 4);
    do {
      if (((pcVar1[1] != '\0') || (*pcVar1 != -1)) || (pcVar1[-1] != '\0')) break;
      param_2 = param_2 + -1;
      pcVar1 = pcVar1 + -4;
    } while (0 < param_2);
  }
  DAT_007e87a0 = param_2 + 1;
  DAT_007e87bc = param_3;
  DAT_007e87f4 = param_1;
  if (param_3 == 0) {
    DAT_007e883c = thunk_FUN_0064ff70(0x100000,s_C__projects_meridian_xCore_x_fil_0074df40,0x326);
    DAT_007e8838 = thunk_FUN_0064ff70(0x40000,s_C__projects_meridian_xCore_x_fil_0074df88,0x327);
    FUN_00655b20();
    FUN_0064ff40(DAT_007e883c,s_C__projects_meridian_xCore_x_fil_0074dfd0,0x32d);
    DAT_007e883c = 0;
  }
  return;
}

