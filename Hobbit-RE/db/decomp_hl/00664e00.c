
void __fastcall FUN_00664e00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e6b1a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f95dc;
  local_4 = 0;
  FUN_00664e60();
  FUN_006bf840(param_1[9]);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ExceptionList = local_c;
  return;
}

