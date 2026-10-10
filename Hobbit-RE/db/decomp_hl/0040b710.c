
void __fastcall FUN_0040b710(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006cebd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006e93d4;
  local_4 = 0;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_00566dc0();
  ExceptionList = local_c;
  return;
}

