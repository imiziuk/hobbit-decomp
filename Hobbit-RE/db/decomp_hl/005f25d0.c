
void __fastcall FUN_005f25d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e24d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f4e64;
  local_4 = 0;
  FUN_00649ba0();
  FUN_005f11a0();
  ExceptionList = local_c;
  return;
}

