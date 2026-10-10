
undefined4 * __thiscall FUN_005d38e0(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e0393;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc290(param_2);
  local_4 = 0;
  FUN_006499d0();
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_006f46c4;
  FUN_0064a2e0(&DAT_00720670);
  param_1[0x11] = 1;
  param_1[0x12] = 1;
  DAT_007cc530 = 0x12;
  uVar1 = FUN_0041bcd0();
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  ExceptionList = local_c;
  return param_1;
}

