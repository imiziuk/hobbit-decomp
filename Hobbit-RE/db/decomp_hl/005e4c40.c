
undefined4 * __thiscall FUN_005e4c40(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e16a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc290(param_2);
  local_4 = 0;
  FUN_006499d0();
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_006f4a8c;
  FUN_0064a2e0(s_Select_Quest_ID_007475bc);
  ExceptionList = local_c;
  return param_1;
}

