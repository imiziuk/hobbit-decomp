
void __thiscall FUN_004a3390(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *in_stack_00000030;
  int in_stack_00000058;
  undefined1 *in_stack_00000060;
  undefined4 in_stack_00000064;
  undefined1 auStack_a4 [40];
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 auStack_74 [44];
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puVar2 = in_stack_00000060;
  puStack_8 = &LAB_006d3b60;
  local_c = ExceptionList;
  local_4 = 1;
  if (in_stack_00000058 < 1) {
    puStack_44 = &stack0x00000004;
    puStack_48 = (undefined1 *)0x4a343c;
    ExceptionList = &local_c;
    FUN_00649b60();
    iVar1 = *(int *)(param_1 + 0x304);
    puStack_44 = local_38;
    local_4._0_1_ = 3;
    puStack_48 = (undefined1 *)0x4a3457;
    FUN_0064a320();
    *(undefined1 **)(iVar1 + 0x188) = in_stack_00000030;
    local_4 = CONCAT31(local_4._1_3_,1);
    puStack_44 = (undefined1 *)0x4a346f;
    FUN_00649ba0();
    puStack_44 = (undefined1 *)0x8;
    puStack_48 = (undefined1 *)0x4a347c;
    FUN_00592ac0();
    *(undefined4 *)(param_1 + 0x460) = 0;
    *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) & 0xfff7ffff;
  }
  else {
    puStack_44 = in_stack_00000060;
    puStack_48 = (undefined1 *)0x4a33d2;
    ExceptionList = &local_c;
    FUN_00594d70();
    puStack_44 = (undefined1 *)in_stack_00000064;
    puStack_48 = puVar2;
    in_stack_00000060 = auStack_74;
    puStack_78 = &stack0x00000034;
    uStack_7c = 0x4a33f4;
    FUN_00649b60();
    puStack_78 = in_stack_00000030;
    in_stack_00000030 = auStack_a4;
    local_4._0_1_ = 2;
    FUN_00649b60(&stack0x00000004);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00467260();
  }
  local_4 = local_4 & 0xffffff00;
  puStack_44 = (undefined1 *)0x4a34a5;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  puStack_44 = (undefined1 *)0x4a34b6;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

