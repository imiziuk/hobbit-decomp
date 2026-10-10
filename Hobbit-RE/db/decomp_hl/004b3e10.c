
void __fastcall FUN_004b3e10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d41c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ee3f0;
  local_4 = 0;
  FUN_004d1f30();
  local_4 = 0xffffffff;
  FUN_004d0910();
  ExceptionList = local_c;
  return;
}

