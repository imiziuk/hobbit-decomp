
void __fastcall FUN_0050b570(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d6d78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006efee0;
  local_4 = 0;
  thunk_FUN_006a3050();
  local_4 = 0xffffffff;
  FUN_005081d0();
  ExceptionList = local_c;
  return;
}

