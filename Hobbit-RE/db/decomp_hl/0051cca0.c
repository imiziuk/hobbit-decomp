
void __fastcall FUN_0051cca0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d76f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f3410;
  local_4 = 1;
  thunk_FUN_006a3050();
  local_4 = local_4 & 0xffffff00;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_006a2380();
  ExceptionList = local_c;
  return;
}

