
void FUN_0050c8f0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d6e48;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0064b190();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

