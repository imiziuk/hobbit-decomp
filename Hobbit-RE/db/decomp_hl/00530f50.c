
void __fastcall FUN_00530f50(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d8920;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  FUN_00649ba0();
  local_4 = CONCAT31(local_4._1_3_,4);
  if ((*(int *)(param_1 + 0x100) != 2) && (iVar1 = *(int *)(param_1 + 0xf8), iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  if (*(int *)(param_1 + 0xe4) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xdc));
  }
  if (*(int *)(param_1 + 200) != 2) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc0));
  }
  local_4._0_1_ = 6;
  if ((*(int *)(param_1 + 0xac) != 2) && (iVar1 = *(int *)(param_1 + 0xa4), iVar1 != 0)) {
    FUN_006c026a(iVar1,0x78,*(undefined4 *)(iVar1 + -4),FUN_00533570);
    FUN_006bf840(iVar1 + -4);
  }
  local_4._0_1_ = 1;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

