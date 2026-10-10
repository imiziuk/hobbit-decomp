
void FUN_00453150(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006cff06;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00649ba0();
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

