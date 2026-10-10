
void __fastcall FUN_0063e0f0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5b16;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_text_in__Rewind_0074a9f4);
  local_4 = 0;
  FUN_00643b40();
  if (*(int *)(param_1 + 0x6b4) != 0) {
    FUN_006bf840(*(int *)(param_1 + 0x6b4));
  }
  *(undefined4 *)(param_1 + 0x6b4) = 0;
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    FUN_0064ff40(*(int *)(param_1 + 0x10c),s_C__projects_meridian_xCore_Auxil_0074aa04,0x96);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  if (*(int *)(param_1 + 0x6a8) != 0) {
    FUN_0064ff40(*(int *)(param_1 + 0x6a8),s_C__projects_meridian_xCore_Auxil_0074aa3c,0x9a);
  }
  *(undefined4 *)(param_1 + 0x6a4) = 0;
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

