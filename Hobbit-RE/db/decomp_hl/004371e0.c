
void __thiscall FUN_004371e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_c4 [2];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_84 [120];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf969;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0064afa0();
  *(undefined4 *)(param_1 + 4 + param_2 * 4) = 1;
  local_4 = 0;
  if (DAT_0075cf1c != 0) {
    uVar1 = FUN_00437620(param_2);
    FUN_00649b60(uVar1);
    local_4._0_1_ = 1;
    local_bc = 0;
    local_b8 = 0;
    local_c4[0] = 0x15;
    FUN_006499d0();
    local_4._0_1_ = 2;
    FUN_0064a320(local_84);
    local_4._0_1_ = 0;
    FUN_00649ba0();
    local_4._0_1_ = 3;
    FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),local_c4);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649ba0();
  }
  FUN_004f8a80();
  FUN_00659600(s_QuestLogUpdated_00723c2c,1);
  FUN_0064e7d0(s__________________________________00723bf4);
  FUN_0064e7d0(s_____________________QUEST_FINISH_00723c3c);
  FUN_0064e7d0(s__________________________________00723b84);
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

