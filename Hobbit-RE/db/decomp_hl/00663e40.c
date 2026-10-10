
void __fastcall FUN_00663e40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e6acc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f95d4;
  local_4 = 1;
  FUN_00664b90();
  FUN_00663ed0();
  FUN_006bf840(param_1[0xd9]);
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  FUN_006bf840(param_1[0xd5]);
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  ExceptionList = local_c;
  return;
}

