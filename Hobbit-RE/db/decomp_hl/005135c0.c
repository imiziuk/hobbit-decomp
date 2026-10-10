
undefined4 FUN_005135c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *in_stack_0000005c;
  undefined1 auStack_60 [76];
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_006d70d8;
  pvStack_c = ExceptionList;
  uStack_14 = in_stack_0000005c;
  in_stack_0000005c = auStack_60;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_0064b170(&stack0x00000010);
  uVar1 = FUN_005097b0(param_1,param_2,param_3);
  uStack_4 = 0xffffffff;
  uStack_14 = 0x513624;
  FUN_0064b190();
  ExceptionList = pvStack_c;
  return uVar1;
}

