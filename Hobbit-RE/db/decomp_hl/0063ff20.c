
undefined4 __fastcall FUN_0063ff20(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5cd0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bin_in__ReadHeader_0074b2b0);
  local_4 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 0;
  }
  FUN_0063fe00(*(int *)(param_1 + 0x10));
  FUN_0063fe30(param_1 + 8,0x10);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 1;
}

