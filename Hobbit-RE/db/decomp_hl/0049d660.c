
undefined4 * __fastcall FUN_0049d660(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d35b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  local_4 = 1;
  *param_1 = &PTR_FUN_006edc20;
  FUN_004aa910(s_NavPoint_0072a51c);
  param_1[0x30] = 2;
  *(undefined1 *)((int)param_1 + 0x7d) = 2;
  *(undefined1 *)(param_1 + 0x35) = 0;
  ExceptionList = local_c;
  return param_1;
}

