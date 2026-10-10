
undefined4 * __thiscall FUN_004a32c0(undefined4 *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3b2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  FUN_00651ed0(param_2 + 4);
  local_4 = 0;
  FUN_00651ed0(param_2 + 5);
  ExceptionList = local_c;
  return param_1;
}

