
undefined4 * __fastcall FUN_00542630(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d93d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00545720();
  local_4 = 0;
  param_1[1] = 0x7fffffff;
  FUN_005492b0(param_1 + 1,0);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_006f3c18;
  param_1[2] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

