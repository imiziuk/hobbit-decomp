
undefined4 * __thiscall FUN_006558f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e659b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00653af0();
  local_4 = 0;
  FUN_00653af0();
  param_1[6] = param_3;
  param_1[5] = param_2;
  *param_1 = 1;
  ExceptionList = local_c;
  return param_1;
}

