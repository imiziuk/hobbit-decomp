
void __fastcall FUN_00643ab0(undefined4 *param_1)

{
  if (param_1[0x15d] == 0) {
    FUN_0064ff40(param_1[1],s_C__projects_meridian_xCore_Auxil_0074b84c,0x177);
    param_1[1] = 0;
    *param_1 = 0;
  }
  else if (param_1[0x160] != 0) {
    FUN_0064ff40(param_1[0x160],s_C__projects_meridian_xCore_Auxil_0074b810,0x16c);
    param_1[0x15e] = 0xffffffff;
    param_1[0x15f] = 0xffffffff;
    param_1[0x160] = 0;
    if (param_1[0x162] != 0) {
      FUN_0064f2b0(param_1[0x162]);
    }
    param_1[0x162] = 0;
    return;
  }
  return;
}

