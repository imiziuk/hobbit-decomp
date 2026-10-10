
undefined4 * __thiscall FUN_005f2d50(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e2578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005f1160(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006f4e98;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = FUN_0041bcd0();
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = uVar1;
  ExceptionList = local_c;
  return param_1;
}

