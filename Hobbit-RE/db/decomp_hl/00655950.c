
void FUN_00655950(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e65b0;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00653b00();
  local_4 = 0xffffffff;
  FUN_00653b00();
  ExceptionList = local_c;
  return;
}

