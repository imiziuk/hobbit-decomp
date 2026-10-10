
undefined4 * __thiscall FUN_005c50d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df66b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006499d0();
  local_4 = 0;
  FUN_0064a2e0(param_2);
  *param_1 = param_3;
  uVar1 = FUN_005c76a0();
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  ExceptionList = local_c;
  return param_1;
}

