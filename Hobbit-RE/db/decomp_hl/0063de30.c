
void __fastcall FUN_0063de30(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006e5ace;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00649600(s_text_in___text_in_0074a8dc);
  local_4._0_1_ = 1;
  FUN_0063df00();
  FUN_006bf840(*(undefined4 *)(param_1 + 0x6b4));
  FUN_0064ff40(*(undefined4 *)(param_1 + 0x10c),s_C__projects_meridian_xCore_Auxil_0074a8f0,0x2e);
  FUN_0064ff40(*(undefined4 *)(param_1 + 0x6a8),s_C__projects_meridian_xCore_Auxil_0074a928,0x2f);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649720();
  local_4 = 0xffffffff;
  FUN_00643a00();
  ExceptionList = local_c;
  return;
}

