
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00533c70(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d8cb2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f39f8;
  local_4 = 0xb;
  FUN_00532030();
  if (0 < (int)param_1[0x48]) {
    iVar2 = 0;
    do {
      FUN_00532030();
      uVar1 = FUN_00437620();
      FUN_00649b60(uVar1);
      FUN_005314d0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0x48]);
  }
  if (DAT_00764558 == 0) {
    if (DAT_00764550 != 0) {
      FUN_006c026a();
      FUN_006bf840();
    }
    DAT_00764550 = 0;
    DAT_00764554 = 0;
  }
  DAT_0076454c = 0;
  if (DAT_00764510 == 0) {
    if (DAT_00764508 != 0) {
      FUN_006c026a();
      FUN_006bf840();
    }
    DAT_00764508 = 0;
    DAT_0076450c = 0;
  }
  DAT_00764504 = 0;
  if (DAT_007644f4 == 0) {
    if (DAT_007644ec != 0) {
      FUN_006c026a();
      FUN_006bf840();
    }
    DAT_007644ec = 0;
    _DAT_007644f0 = 0;
  }
  _DAT_007644e8 = 0;
  FUN_00649bd0();
  FUN_00649bd0();
  FUN_00649bd0();
  FUN_00649bd0();
  DAT_007647a0 = 0;
  local_4._0_1_ = 10;
  FUN_00649ba0();
  local_4._0_1_ = 9;
  FUN_00649ba0();
  local_4._0_1_ = 8;
  FUN_00649ba0();
  local_4._0_1_ = 7;
  FUN_00649ba0();
  local_4._0_1_ = 6;
  FUN_00649ba0();
  local_4._0_1_ = 5;
  FUN_00649ba0();
  local_4._0_1_ = 4;
  FUN_00649ba0();
  local_4._0_1_ = 3;
  if ((param_1[0x55] != 2) && (param_1[0x53] != 0)) {
    FUN_006c026a();
    FUN_006bf840();
  }
  local_4._0_1_ = 2;
  if ((param_1[0x4e] != 2) && (param_1[0x4c] != 0)) {
    FUN_006c026a();
    FUN_006bf840();
  }
  local_4._0_1_ = 1;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649ba0();
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

