
void FUN_004a1130(void)

{
  undefined1 *in_stack_00000030;
  undefined1 auStack_40 [44];
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d3950;
  local_c = ExceptionList;
  uStack_14 = in_stack_00000030;
  in_stack_00000030 = auStack_40;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00649b60(&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  FUN_004aa030();
  FUN_005929d0();
  local_4 = 0xffffffff;
  uStack_14 = 0x4a118c;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

