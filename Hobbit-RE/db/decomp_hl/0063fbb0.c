
void __fastcall FUN_0063fbb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5c9a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bin_in__CloseFile_0074b144);
  local_4 = 0;
  if (param_1[1] != 0) {
    FUN_0064f2b0(param_1[1]);
    param_1[1] = 0;
    FUN_0064ff40(*param_1,s_C__projects_meridian_xCore_Auxil_0074b158,0x36);
    *param_1 = 0;
    FUN_0064ff40(param_1[8],s_C__projects_meridian_xCore_Auxil_0074b190,0x39);
    param_1[8] = 0;
    param_1[9] = 0;
    FUN_0064ff40(param_1[0xd],s_C__projects_meridian_xCore_Auxil_0074b1c8,0x3d);
    param_1[0xd] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

