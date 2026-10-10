
void __fastcall FUN_00515d40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d7346;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f2c18;
  local_4 = 1;
  thunk_FUN_006a3050();
  local_4 = local_4 & 0xffffff00;
  FUN_0064b190();
  local_4 = 0xffffffff;
  FUN_006a2380();
  ExceptionList = local_c;
  return;
}

