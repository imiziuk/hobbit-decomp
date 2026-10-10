
void __fastcall FUN_005b9460(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006ded54;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f42c8;
  local_4 = 2;
  if (DAT_007ba73c == param_1) {
    DAT_007ba73c = (undefined4 *)0x0;
  }
  FUN_004f8a30(0xffffffff);
  local_4._0_1_ = 1;
  FUN_005432e0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006cde30();
  local_4 = 0xffffffff;
  FUN_006386b0();
  ExceptionList = local_c;
  return;
}

