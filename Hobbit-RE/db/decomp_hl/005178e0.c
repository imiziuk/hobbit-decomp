
void __fastcall FUN_005178e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d73f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f2d38;
  local_4 = 0;
  thunk_FUN_006a3050();
  local_4 = 0xffffffff;
  FUN_006a2380();
  ExceptionList = local_c;
  return;
}

