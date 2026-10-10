
void __fastcall FUN_0051ee00(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d788b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00671570();
  local_4 = 0xffffffff;
  FUN_006c026a(param_1 + 0x98,400,3,FUN_004f9240);
  ExceptionList = local_c;
  return;
}

