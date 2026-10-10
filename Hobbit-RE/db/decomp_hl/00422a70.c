
void __thiscall FUN_00422a70(int param_1)

{
  int iVar1;
  undefined1 *in_stack_00000030;
  int in_stack_00000058;
  char *in_stack_00000060;
  undefined1 *in_stack_00000064;
  undefined1 auStack_78 [40];
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 auStack_48 [36];
  undefined4 uStack_24;
  undefined4 uStack_20;
  char *pcStack_1c;
  undefined1 *puStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_006cf478;
  pvStack_c = ExceptionList;
  uStack_4 = 1;
  if (in_stack_00000058 < 1) {
    iVar1 = *(int *)(param_1 + 0x128);
    ExceptionList = &pvStack_c;
    if (iVar1 != 0) {
      puStack_18 = (undefined1 *)0x422af8;
      ExceptionList = &pvStack_c;
      FUN_005405d0();
      pcStack_1c = (char *)0x422afe;
      puStack_18 = (undefined1 *)iVar1;
      FUN_006bf840();
    }
    puStack_18 = &stack0x00000004;
    *(undefined4 *)(param_1 + 0x128) = 0;
    pcStack_1c = (char *)0x422b1b;
    FUN_0064a320();
    puStack_18 = (undefined1 *)0xf3b;
    pcStack_1c = s_C__projects_meridian_Support_Obj_007200c0;
    *(undefined1 **)(param_1 + 0xa4c) = in_stack_00000030;
    uStack_20 = 0x22;
    uStack_24 = 0x422b38;
    FUN_0043a3f0();
    *(undefined4 *)(param_1 + 0x9b4) = 1;
  }
  else {
    puStack_18 = in_stack_00000064;
    pcStack_1c = in_stack_00000060;
    in_stack_00000064 = auStack_48;
    puStack_4c = &stack0x00000034;
    uStack_50 = 0x422ab9;
    ExceptionList = &pvStack_c;
    FUN_00649b60();
    puStack_4c = in_stack_00000030;
    in_stack_00000030 = auStack_78;
    uStack_4._0_1_ = 2;
    FUN_00649b60(&stack0x00000004);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    FUN_00467260();
  }
  uStack_4 = uStack_4 & 0xffffff00;
  puStack_18 = (undefined1 *)0x422b50;
  FUN_00649ba0();
  uStack_4 = 0xffffffff;
  puStack_18 = (undefined1 *)0x422b61;
  FUN_00649ba0();
  ExceptionList = pvStack_c;
  return;
}

