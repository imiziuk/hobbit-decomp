
void __fastcall FUN_004844b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d2b40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ed2b0;
  local_4 = 1;
  FUN_006bf840(param_1[0x5a]);
  FUN_006bf840(param_1[0x5b]);
  param_1[0x90] = 0x7fffffff;
  param_1[0x91] = 0x7fffffff;
  FUN_005a32c0();
  local_4 = local_4 & 0xffffff00;
  FUN_006c026a(param_1 + 0x90,4,2,FUN_00406ba0);
  local_4 = 0xffffffff;
  FUN_004e1e00();
  ExceptionList = local_c;
  return;
}

