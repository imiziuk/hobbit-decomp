
void __fastcall FUN_004d9060(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d5540;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ef310;
  local_4 = 1;
  FUN_005a32c0();
  local_4 = local_4 & 0xffffff00;
  FUN_006c026a(param_1 + 0x2a,4,3,FUN_00406ba0);
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

