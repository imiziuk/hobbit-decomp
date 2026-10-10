
void FUN_00531830(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000030;
  undefined4 local_64;
  undefined4 local_38;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d89d8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00649b60(&stack0x00000004);
  local_4._0_1_ = 1;
  uVar3 = FUN_005496c0(local_38,s_Audio_0071ce88);
  FUN_00649b20(uVar3);
  iVar2 = in_stack_00000030;
  local_4._0_1_ = 2;
  if (*(int *)(in_stack_00000030 + 0x14) == 0) {
    iVar1 = *(int *)(in_stack_00000030 + 0xc);
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
      FUN_006bf840(iVar1 + -4);
    }
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  FUN_00658290(local_64,iVar2);
  local_4._0_1_ = 1;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

