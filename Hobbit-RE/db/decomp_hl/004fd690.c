
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fd690(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d65f4;
  local_c = ExceptionList;
  if (param_1 == 0x1e240) {
    ExceptionList = &local_c;
    FUN_00650250();
    local_4 = 0;
    FUN_00652780(1);
    FUN_006af3c0();
    local_4._0_1_ = 1;
    FUN_0063c8f0();
    local_4._0_1_ = 2;
    FUN_0063c970(0x400);
    FUN_00651e50();
    local_4._0_1_ = 3;
    _DAT_00746064 = 1;
    pvVar1 = operator_new(0x140);
    local_4._0_1_ = 4;
    if (pvVar1 != (void *)0x0) {
      FUN_005c1340();
    }
    local_4._0_1_ = 3;
    thunk_FUN_005bffb0();
    local_4._0_1_ = 2;
    FUN_00651f20();
    local_4._0_1_ = 1;
    thunk_FUN_0063c930();
    local_4 = (uint)local_4._1_3_ << 8;
    thunk_FUN_006af3f0();
    local_4 = 0xffffffff;
    thunk_FUN_00650380();
  }
  ExceptionList = local_c;
  return;
}

