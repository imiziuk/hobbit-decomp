
void __fastcall FUN_0052de60(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d8319;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_00649ba0();
  local_4._0_1_ = 1;
  thunk_FUN_00650380();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0064b190();
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  local_4 = 0xffffffff;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0xa8) {
    local_4 = 3;
    FUN_0064b190();
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  ExceptionList = local_c;
  return;
}

