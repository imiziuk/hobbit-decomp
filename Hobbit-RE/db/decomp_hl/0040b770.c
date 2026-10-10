
void __fastcall FUN_0040b770(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006cebf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006e93f8;
  local_4 = 0;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_00566dc0();
  ExceptionList = local_c;
  return;
}

