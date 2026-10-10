
undefined4 * __fastcall FUN_00499fa0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3468;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  local_4 = 0;
  FUN_005a3f00();
  *param_1 = &PTR_FUN_006edae0;
  ExceptionList = local_c;
  return param_1;
}

