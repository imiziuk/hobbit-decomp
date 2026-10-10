
void __fastcall FUN_006a5520(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e7a28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006fce54;
  local_4 = 0;
  FUN_006a3050();
  local_4 = 0xffffffff;
  FUN_006aa6c0();
  ExceptionList = local_c;
  return;
}

