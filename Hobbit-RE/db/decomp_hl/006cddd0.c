
undefined4 * __fastcall FUN_006cddd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8663;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00545720();
  param_1[1] = 0x7fffffff;
  local_4 = 1;
  *param_1 = &PTR_FUN_006fe03c;
  FUN_006cdeb0();
  ExceptionList = local_c;
  return param_1;
}

