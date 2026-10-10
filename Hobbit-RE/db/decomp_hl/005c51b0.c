
void __fastcall FUN_005c51b0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006df688;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005c5210();
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x14) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
  }
  ExceptionList = local_c;
  return;
}

