
void __fastcall FUN_00474430(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d16de;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  if ((param_1[0x22] != 2) && (iVar2 = param_1[0x20], ExceptionList = &local_c, iVar2 != 0)) {
    ExceptionList = &local_c;
    FUN_006c026a(iVar2,0x2c,*(undefined4 *)(iVar2 + -4),FUN_00649ba0);
    FUN_006bf840(iVar2 + -4);
  }
  puVar1 = param_1 + 0x15;
  local_4._0_1_ = 1;
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649ba0();
  *param_1 = &PTR_FUN_006ed02c;
  ExceptionList = local_c;
  return;
}

