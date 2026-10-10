
undefined4 * __thiscall FUN_005dee80(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e1033;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc290(param_2);
  local_4 = 0;
  FUN_006499d0();
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_006f4900;
  FUN_0064a2e0(s_Select_Quest_ID_007475bc);
  param_1[8] = 1;
  ExceptionList = local_c;
  return param_1;
}

