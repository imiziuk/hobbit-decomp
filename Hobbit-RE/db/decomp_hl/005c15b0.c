
void __fastcall FUN_005c15b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006df468;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f4484;
  local_4 = 0;
  FUN_005c1610();
  local_4 = 0xffffffff;
  FUN_005a32c0();
  ExceptionList = local_c;
  return;
}

