
void __fastcall FUN_0069e2f0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006e7153;
  local_c = ExceptionList;
  local_4 = 0xb;
  ExceptionList = &local_c;
  FUN_0069e950();
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_00649ba0();
  if (*(int *)(param_1 + 0x38c) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 900));
  }
  local_4._0_1_ = 8;
  FUN_006c026a(param_1 + 0x110,0x20,0x13,thunk_FUN_00650380);
  local_4 = CONCAT31(local_4._1_3_,7);
  thunk_FUN_00650380();
  if (*(int *)(param_1 + 0xe0) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xd8));
  }
  if (*(int *)(param_1 + 0xc4) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xbc));
  }
  if (*(int *)(param_1 + 0xa8) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xa0));
  }
  if (*(int *)(param_1 + 0x8c) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x84));
  }
  if (*(int *)(param_1 + 0x70) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x68));
  }
  local_4._0_1_ = 1;
  if ((*(int *)(param_1 + 0x54) != 2) && (iVar1 = *(int *)(param_1 + 0x4c), iVar1 != 0)) {
    FUN_006c026a(iVar1,0x34,*(undefined4 *)(iVar1 + -4),thunk_FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((*(int *)(param_1 + 0x38) != 2) && (iVar1 = *(int *)(param_1 + 0x30), iVar1 != 0)) {
    FUN_006c026a(iVar1,0x30,*(undefined4 *)(iVar1 + -4),thunk_FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  if (*(int *)(param_1 + 0x1c) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x14));
  }
  ExceptionList = local_c;
  return;
}

