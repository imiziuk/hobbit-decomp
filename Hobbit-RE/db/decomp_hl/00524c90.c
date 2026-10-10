
void __fastcall FUN_00524c90(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d7b54;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006f3808;
  local_4 = 2;
  FUN_005253b0();
  local_4._0_1_ = 1;
  if ((param_1[0x6f] != 2) && (iVar1 = param_1[0x6d], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x5c,*(undefined4 *)(iVar1 + -4),FUN_005253a0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_00650380();
  local_4 = 0xffffffff;
  FUN_006a2380();
  ExceptionList = pvStack_c;
  return;
}

