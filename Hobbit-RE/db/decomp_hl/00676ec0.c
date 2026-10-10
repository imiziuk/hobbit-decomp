
void __fastcall FUN_00676ec0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e6c88;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x48) != 2) {
    ExceptionList = &local_c;
    FUN_006bf840(*(undefined4 *)(param_1 + 0x40));
  }
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

