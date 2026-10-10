
void __fastcall FUN_004e3e80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d59e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ef610;
  local_4 = 1;
  FUN_005a32c0();
  if (param_1[0x33] != 2) {
    FUN_006bf840(param_1[0x31]);
  }
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

