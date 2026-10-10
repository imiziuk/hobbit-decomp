
undefined4 * __fastcall FUN_00543280(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9443;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00545720();
  param_1[1] = 0x7fffffff;
  local_4 = 1;
  *param_1 = &PTR_FUN_006f3c4c;
  param_1[10] = 0;
  FUN_00543370();
  ExceptionList = local_c;
  return param_1;
}

