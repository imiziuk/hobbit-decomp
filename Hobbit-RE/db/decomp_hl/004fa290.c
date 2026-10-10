
void FUN_004fa290(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d62d8;
  local_c = ExceptionList;
  if (DAT_0075f8c8 != 0) {
    ExceptionList = &local_c;
    FUN_00649600(s_LoadScreen__Kill_0072fd48);
    local_4 = 0;
    FUN_00674e10(&DAT_0075f878);
    FUN_00650380();
    DAT_0075f8c8 = 0;
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  ExceptionList = local_c;
  return;
}

