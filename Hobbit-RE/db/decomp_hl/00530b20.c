
undefined4 __thiscall FUN_00530b20(undefined4 param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d87d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649b60(param_2);
  local_4 = 0;
  FUN_0064b170(param_2 + 0x2c);
  ExceptionList = local_c;
  return param_1;
}

