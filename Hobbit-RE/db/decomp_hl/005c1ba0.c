
void __fastcall FUN_005c1ba0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006df496;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_005c1c10();
  if (*(int *)(param_1 + 0x38) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x1c) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x14));
  }
  ExceptionList = local_c;
  return;
}

