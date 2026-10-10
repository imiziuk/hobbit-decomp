
void __fastcall FUN_0041c680(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006cf390;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006e9818;
  local_4 = 0x11;
  DAT_0075ba3c = 0;
  FUN_0044e150();
  DAT_0075ba40 = DAT_0075ba40 + -1;
  if (DAT_0075ba08 == 0) {
    if (DAT_0075ba00 != 0) {
      FUN_004253b0(3);
    }
    DAT_0075ba00 = 0;
    DAT_0075ba04 = 0;
  }
  DAT_0075b9fc = 0;
  if (param_1[0x110] != 0) {
    FUN_006bf840(param_1[0x110]);
  }
  if (param_1[0x111] != 0) {
    FUN_006bf840(param_1[0x111]);
  }
  if (param_1[0x112] != 0) {
    FUN_006bf840(param_1[0x112]);
  }
  if (param_1[0x27a] != 0) {
    FUN_00659c80(param_1[0x27a],0);
    param_1[0x27a] = 0;
  }
  FUN_006bf840(param_1[0x17b]);
  FUN_006bf840(param_1[0x17c]);
  local_4._0_1_ = 0x10;
  FUN_005432e0();
  local_4._0_1_ = 0xf;
  FUN_005426a0();
  puVar1 = param_1 + 0x17a4;
  local_4._0_1_ = 0xe;
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  local_4._0_1_ = 0xd;
  FUN_006c026a(param_1 + 0x1664,0x50,0x10,FUN_0044e0c0);
  puVar1 = param_1 + 0x165e;
  local_4._0_1_ = 0xc;
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  puVar1 = param_1 + 0x165d;
  local_4 = CONCAT31(local_4._1_3_,0xb);
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  if (param_1[0x163a] != 2) {
    FUN_006bf840(param_1[0x1638]);
  }
  local_4._0_1_ = 9;
  FUN_0051ee00();
  puVar1 = param_1 + 0x13ac;
  local_4._0_1_ = 8;
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  local_4._0_1_ = 7;
  FUN_00649ba0();
  local_4._0_1_ = 6;
  FUN_005432e0();
  local_4._0_1_ = 5;
  FUN_005405d0();
  puVar1 = param_1 + 0x10b;
  local_4._0_1_ = 4;
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  puVar1 = param_1 + 0x10a;
  local_4._0_1_ = 3;
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  local_4._0_1_ = 2;
  FUN_005805b0();
  puVar1 = param_1 + 0x96;
  local_4._0_1_ = 1;
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  param_1 = param_1 + 0x95;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_004642a0();
  ExceptionList = pvStack_c;
  return;
}

