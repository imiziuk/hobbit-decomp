
undefined4 * __fastcall FUN_00519bb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d7598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006a22e0();
  local_4 = 0;
  FUN_0064afa0();
  *param_1 = &PTR_FUN_006f31a8;
  ExceptionList = local_c;
  return param_1;
}

