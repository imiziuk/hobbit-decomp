
undefined8 FUN_004b52b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_006d426b;
  local_14 = ExceptionList;
  iVar3 = 0;
  local_c = 0;
  puVar2 = &DAT_0075d494;
  ExceptionList = &local_14;
  do {
    iVar1 = FUN_00647ed0();
    if (iVar1 == 0) {
      FUN_004357e0(&stack0x00000038);
      uVar4 = FUN_004b53a0((&DAT_0075d490)[iVar3 * 9],in_stack_00000030,in_stack_00000034);
      local_c = 0xffffffff;
      FUN_00649ba0();
      ExceptionList = local_14;
      return uVar4;
    }
    puVar2 = puVar2 + 9;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x75d8a8);
  local_c = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_14;
  return 0;
}

