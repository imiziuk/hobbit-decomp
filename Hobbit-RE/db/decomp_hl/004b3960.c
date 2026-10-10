
void __fastcall FUN_004b3960(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d4136;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ee2f8;
  local_4 = 1;
  FUN_005a32c0();
  local_4 = local_4 & 0xffffff00;
  FUN_0064b190();
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

