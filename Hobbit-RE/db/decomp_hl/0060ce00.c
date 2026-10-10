
undefined4 * __thiscall FUN_0060ce00(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e3e2c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005be0e0(param_2,1,param_3);
  local_4 = 0;
  FUN_006499d0();
  local_4._0_1_ = 1;
  FUN_006499d0();
  local_4._0_1_ = 2;
  FUN_006499d0();
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_006499d0();
  *param_1 = &PTR_FUN_006f56c8;
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  param_1[0x12] = 0;
  ExceptionList = local_c;
  return param_1;
}

