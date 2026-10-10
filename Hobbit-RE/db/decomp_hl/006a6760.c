
void __thiscall FUN_006a6760(int param_1,undefined4 param_2)

{
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 local_58 [76];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7b68;
  local_c = ExceptionList;
  local_68 = *(int *)(param_1 + 0x44) + 4;
  local_60 = *(int *)(param_1 + 0x4c) + -0x17;
  local_64 = *(int *)(param_1 + 0x48) + 4;
  local_5c = *(int *)(param_1 + 0x50) + -4;
  ExceptionList = &local_c;
  FUN_0064afa0();
  local_4 = 0;
  FUN_006a1a90(0,&local_68,param_2,local_58);
  FUN_0064b7f0(local_58);
  FUN_0069fc80(0,param_1 + 0x144,*(undefined4 *)(param_1 + 0x54),0xffffffff);
  *(undefined4 *)(param_1 + 0x160) = 0;
  local_4 = 0xffffffff;
  *(int *)(param_1 + 0x158) =
       (*(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x148)) / *(int *)(param_1 + 0x154);
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

