
void __thiscall FUN_006a86f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_a4 [152];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7dd3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_0064b0f0(param_2);
  local_4 = 0;
  uVar1 = FUN_0064bb70(local_a4,uVar1,param_1 + 4);
  local_4._0_1_ = 1;
  FUN_0064b7f0(uVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0064b190();
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

