
undefined4 __thiscall FUN_0053d7a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_94 [108];
  undefined4 local_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d916e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053ca20();
  local_4 = 0;
  FUN_0053dba0(param_1);
  FUN_0053ddc0(1,param_3);
  FUN_0064f420(local_94,0x88,1,param_2);
  FUN_0064f420(local_18,local_1c,1,param_2);
  FUN_0064f420(local_10,local_14,1,param_2);
  FUN_0064f420(local_28,0x15c,*(undefined4 *)(param_1 + 100),param_2);
  FUN_0053ddc0(0,param_3);
  local_4 = 0xffffffff;
  thunk_FUN_0053caa0();
  ExceptionList = local_c;
  return 1;
}

