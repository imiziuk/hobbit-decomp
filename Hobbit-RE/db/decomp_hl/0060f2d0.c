
void __fastcall FUN_0060f2d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e4038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f58e8;
  local_4 = 0;
  FUN_006c026a(param_1 + 0x2e,0x38,4,FUN_00429100);
  local_4 = 0xffffffff;
  FUN_006386b0();
  ExceptionList = local_c;
  return;
}

