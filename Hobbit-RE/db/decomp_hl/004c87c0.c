
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c87c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d4a70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ee9c8;
  local_4 = 4;
  FUN_004c88f0();
  _DAT_0075daac = _DAT_0075daac + -1;
  if (_DAT_0075daac == 0) {
    DAT_0072d0e4 = 1;
    if (DAT_0075da5c == 0) {
      if (DAT_0075da54 != 0) {
        iVar1 = DAT_0075da54 + -4;
        FUN_006c026a(DAT_0075da54,0x2c,*(undefined4 *)(DAT_0075da54 + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_0075da54 = 0;
      DAT_0075da58 = 0;
    }
    DAT_0075da50 = 0;
  }
  local_4._0_1_ = 3;
  FUN_005a32c0();
  puVar2 = param_1 + 0x56;
  local_4._0_1_ = 2;
  FUN_00549580(puVar2);
  FUN_00549350(puVar2);
  *puVar2 = 0x7fffffff;
  puVar2 = param_1 + 0x38;
  local_4._0_1_ = 1;
  FUN_00549580(puVar2);
  FUN_00549350(puVar2);
  *puVar2 = 0x7fffffff;
  param_1 = param_1 + 0x37;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

