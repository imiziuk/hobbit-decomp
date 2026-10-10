
undefined4 * __thiscall FUN_005f7850(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e2a63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005f1160(param_2);
  local_4 = 0;
  FUN_006499d0();
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_006f4fd0;
  FUN_0064a2e0(&DAT_00720670);
  param_1[0xe] = 1;
  ExceptionList = local_c;
  return param_1;
}

