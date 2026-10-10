
void __fastcall FUN_004fc020(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d644e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0xa0) != 0) {
    ExceptionList = &local_c;
    FUN_00674e10(param_1 + 0x80);
    FUN_00650380();
  }
  local_4 = 0xffffffff;
  thunk_FUN_00650380();
  ExceptionList = local_c;
  return;
}

