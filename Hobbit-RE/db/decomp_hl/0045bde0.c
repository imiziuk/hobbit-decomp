
void __fastcall FUN_0045bde0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d0596;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ec898;
  local_4 = 1;
  FUN_00588b20(param_1[0x2a]);
  local_4 = local_4 & 0xffffff00;
  FUN_005a32c0();
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

