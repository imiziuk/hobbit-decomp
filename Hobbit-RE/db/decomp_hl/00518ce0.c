
void __fastcall FUN_00518ce0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d7540;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f3118;
  local_4 = 1;
  thunk_FUN_006a3050();
  local_4 = local_4 & 0xffffff00;
  FUN_006c026a(param_1 + 0x61,0x20,4,thunk_FUN_00650380);
  local_4 = 0xffffffff;
  FUN_006a2380();
  ExceptionList = local_c;
  return;
}

