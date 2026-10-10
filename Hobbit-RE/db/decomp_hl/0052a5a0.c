
void __fastcall FUN_0052a5a0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d80c6;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00671570();
  local_4 = 0xffffffff;
  FUN_006c026a(param_1 + 0x30,0x20,2,thunk_FUN_00650380);
  ExceptionList = local_c;
  return;
}

