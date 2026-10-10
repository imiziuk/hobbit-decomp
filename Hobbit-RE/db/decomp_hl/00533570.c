
void __fastcall FUN_00533570(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d8b1b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x70) == 0) {
    ExceptionList = &local_c;
    FUN_006bf840(*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x70) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x68));
  }
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

