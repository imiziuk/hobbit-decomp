
void __fastcall FUN_004744f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d16f8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00649ba0();
  *param_1 = &PTR_FUN_006ed02c;
  ExceptionList = local_c;
  return;
}

