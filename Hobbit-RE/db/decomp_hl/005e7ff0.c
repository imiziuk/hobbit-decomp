
void __fastcall FUN_005e7ff0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e1a73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f4b68;
  local_4 = 1;
  FUN_005e8050();
  if (param_1[0xb] != 2) {
    FUN_006bf840(param_1[9]);
  }
  FUN_005cc2e0();
  ExceptionList = local_c;
  return;
}

