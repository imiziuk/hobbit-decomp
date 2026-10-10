
undefined4 FUN_0053c7c0(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9123;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_anim_loader__Load_007377b4);
  local_4 = 0;
  pvVar1 = operator_new(0x88);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0053ca20();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0053d8a0(param_1,param_2);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return uVar2;
}

