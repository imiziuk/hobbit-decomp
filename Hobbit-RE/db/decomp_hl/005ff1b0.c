
undefined4 * __thiscall FUN_005ff1b0(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e3283;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005f1160(param_2);
  local_4 = 0;
  FUN_006499d0();
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_006f520c;
  uVar1 = FUN_0041bcd0();
  *(undefined8 *)(param_1 + 4) = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x13] = 2;
  ExceptionList = local_c;
  return param_1;
}

