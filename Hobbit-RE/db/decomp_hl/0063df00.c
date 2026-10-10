
void FUN_0063df00(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5ae0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_text_in__CloseFile_0074a978);
  local_4 = 0;
  FUN_00643ab0();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

