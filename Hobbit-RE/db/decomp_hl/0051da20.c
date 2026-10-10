
void __fastcall FUN_0051da20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d7796;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f34a0;
  local_4 = 1;
  FUN_0051db30();
  local_4 = local_4 & 0xffffff00;
  FUN_00529270();
  local_4 = 0xffffffff;
  FUN_006a2380();
  ExceptionList = local_c;
  return;
}

