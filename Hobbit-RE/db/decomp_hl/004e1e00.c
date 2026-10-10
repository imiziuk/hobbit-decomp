
void __fastcall FUN_004e1e00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d5946;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ef518;
  local_4 = 1;
  FUN_005a32c0();
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

