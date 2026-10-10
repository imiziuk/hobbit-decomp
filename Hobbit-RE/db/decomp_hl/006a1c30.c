
void __thiscall FUN_006a1c30(int param_1)

{
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e7738;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x398) = 1;
  FUN_0064a320(&stack0x00000004);
  *(undefined4 *)(param_1 + 0x3c8) = in_stack_00000030;
  *(undefined4 *)(param_1 + 0x3cc) = in_stack_00000034;
  *(undefined4 *)(param_1 + 0x3d0) = in_stack_00000038;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

