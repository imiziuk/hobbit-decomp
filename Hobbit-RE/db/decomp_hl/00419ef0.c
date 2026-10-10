
void __fastcall FUN_00419ef0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006cf0d8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x450) != 2) {
    ExceptionList = &local_c;
    FUN_006bf840(*(undefined4 *)(param_1 + 0x448));
  }
  FUN_00429100();
  local_4 = 0xffffffff;
  FUN_0041a030();
  ExceptionList = local_c;
  return;
}

