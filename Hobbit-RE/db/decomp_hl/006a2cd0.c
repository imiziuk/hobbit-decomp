
undefined4 __thiscall FUN_006a2cd0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000060;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e7828;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_0069fe40(param_3,s_button_00731f30,&stack0x00000010,param_1,in_stack_00000060);
  *param_4 = iVar2;
  if (iVar2 == 0) {
    local_4 = 0xffffffff;
    FUN_00649ba0();
    uVar3 = 0;
  }
  else {
    FUN_006a32c0(in_stack_00000030);
    iVar2 = *(int *)*param_4;
    uVar3 = FUN_006ab1a0(&DAT_0071ceb4,in_stack_00000034);
    (**(code **)(iVar2 + 0x1c))(uVar3);
    FUN_006aa840(&stack0x00000020);
    for (iVar2 = in_stack_00000024; iVar1 = in_stack_00000020, iVar2 < in_stack_0000002c;
        iVar2 = iVar2 + 1) {
      for (; iVar1 < in_stack_00000028; iVar1 = iVar1 + 1) {
        *(int *)(*(int *)(param_1 + 0xfc) + (*(int *)(param_1 + 0xe0) * iVar2 + iVar1) * 4) =
             *param_4;
      }
    }
    local_4 = 0xffffffff;
    FUN_00649ba0();
    uVar3 = 1;
  }
  ExceptionList = local_c;
  return uVar3;
}

