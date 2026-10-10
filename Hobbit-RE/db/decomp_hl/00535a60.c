
undefined4 FUN_00535a60(void)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d8d08;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00649b60(&stack0x00000004);
  uVar1 = FUN_00531f00();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return uVar1;
}

