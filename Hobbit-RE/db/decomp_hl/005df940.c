
undefined4 * __thiscall FUN_005df940(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e1123;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc290(param_2);
  local_4 = 0;
  FUN_006499d0();
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_006f492c;
  FUN_0064a2e0(&DAT_00720670);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  ExceptionList = local_c;
  return param_1;
}

