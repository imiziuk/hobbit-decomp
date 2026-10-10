
void FUN_004ff4d0(void)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d67b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  FUN_0065f940();
  if (DAT_00760360 != 0) {
    FUN_004f8fb0();
  }
  FUN_00649600();
  local_4._0_1_ = 1;
  FUN_004ff8a0();
  local_4._0_1_ = 0;
  FUN_00649720();
  FUN_00649600();
  local_4._0_1_ = 2;
  FUN_004ff8b0();
  local_4._0_1_ = 0;
  FUN_00649720();
  if (DAT_0075fba4 != 0) {
    FUN_00649600();
    local_4 = CONCAT31(local_4._1_3_,3);
    iVar1 = FUN_0065f190();
    if (iVar1 != 0) {
      FUN_005855e0();
      FUN_0065f430();
    }
    local_4._0_1_ = 0;
    FUN_00649720();
    if (DAT_0075fba4 != 0) {
      FUN_00649600();
      local_4._0_1_ = 4;
      FUN_00586880();
      local_4._0_1_ = 0;
      FUN_00649720();
    }
  }
  if (DAT_0075fc00 != (int *)0x0) {
    FUN_00649600();
    local_4._0_1_ = 5;
    (**(code **)(*DAT_0075fc00 + 0x10))();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if ((DAT_007600f4 == 0) || (DAT_007602a8 != 0)) {
    FUN_00649600();
    local_4._0_1_ = 6;
    FUN_004f32f0();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if ((DAT_007600f4 == 0) || (DAT_007602a8 != 0)) {
    FUN_0054edf0();
  }
  if ((DAT_007600f4 == 0) || (DAT_007602a8 != 0)) {
    FUN_00649600();
    local_4._0_1_ = 7;
    FUN_0052ccc0();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if ((DAT_007600f4 == 0) || (DAT_007602a8 != 0)) {
    FUN_00649600();
    local_4._0_1_ = 8;
    FUN_006a1120();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if ((DAT_007600f4 == 0) || (DAT_007602a8 != 0)) {
    FUN_00649600();
    local_4._0_1_ = 9;
    FUN_0041bcc0();
    FUN_0051f4d0();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if (DAT_0075fc00 != (int *)0x0) {
    FUN_00649600();
    local_4._0_1_ = 10;
    (**(code **)(*DAT_0075fc00 + 0x14))();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  FUN_0058ea40();
  if (DAT_007600f4 == 0) {
    FUN_00649600();
    local_4._0_1_ = 0xb;
    FUN_004ff8d0();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if (DAT_00760350 % 0x1e == 0) {
    FUN_0064f020();
  }
  if (DAT_007600e0 != 0) {
    FUN_0065fce0();
    FUN_0065fed0(&DAT_007601a8,DAT_007600f8,DAT_007600fc,DAT_00760100);
    DAT_007600e0 = 0;
    DAT_007602a8 = 0;
    DAT_007600f8 = 200;
    DAT_007600fc = 0x96;
    DAT_00760100 = 0;
  }
  FUN_0065f480();
  FUN_004fd1c0();
  local_4 = 0xffffffff;
  FUN_00649720();
  DAT_00760350 = DAT_00760350 + 1;
  if (DAT_007600f4 != 0) {
    DAT_007600f4 = 0;
    DAT_007600e0 = 1;
  }
  ExceptionList = pvStack_c;
  return;
}

