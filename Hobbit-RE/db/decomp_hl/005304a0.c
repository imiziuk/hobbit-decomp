
void FUN_005304a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint in_stack_000000a8;
  int in_stack_000000ac;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d8690;
  local_c = ExceptionList;
  local_4 = 0;
  iVar3 = param_1 + 0x2c;
  ExceptionList = &local_c;
  while( true ) {
    iVar4 = iVar3 + -0xa8;
    if ((in_stack_000000ac < *(int *)(iVar3 + -0x30)) ||
       ((in_stack_000000ac <= *(int *)(iVar3 + -0x30) &&
        (in_stack_000000a8 <= *(uint *)(iVar3 + -0x34))))) break;
    iVar1 = iVar3 + -0xd4;
    FUN_0064a320(iVar1);
    FUN_0064b7f0(iVar4);
    puVar5 = (undefined4 *)(iVar3 + -0x5c);
    puVar6 = (undefined4 *)(param_1 + 0x78);
    for (iVar2 = 0xc; iVar3 = iVar4, param_1 = iVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  FUN_0064a320(&stack0x00000008);
  FUN_0064b7f0(&stack0x00000034);
  puVar5 = (undefined4 *)&stack0x00000080;
  puVar6 = (undefined4 *)(param_1 + 0x78);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_4 = 1;
  FUN_0064b190();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

