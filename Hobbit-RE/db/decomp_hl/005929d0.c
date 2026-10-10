
void FUN_005929d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000030;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006dd040;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00649b60(&stack0x00000004);
  local_4 = local_4 & 0xffffff00;
  FUN_00592920();
  uVar2 = FUN_0059b640();
  iVar3 = FUN_005b72f0(uVar2);
  if (iVar3 != 0) {
    FUN_00592920();
    iVar1 = in_stack_00000030;
    iVar4 = FUN_005b7390();
    while (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 4) = 0x34;
      FUN_00592920();
      iVar4 = FUN_005b7390();
    }
    *(int *)(iVar3 + 4) = iVar1;
    if (iVar1 == 1) {
      FUN_0064a320();
    }
  }
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

