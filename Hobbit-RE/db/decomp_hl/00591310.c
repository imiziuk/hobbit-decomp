
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00591310(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006dcf23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f40b8;
  local_4 = 9;
  FUN_006bf840(param_1[0xd]);
  iVar1 = param_1[0x14];
  if (iVar1 != 0) {
    FUN_005405d0();
    FUN_006bf840(iVar1);
  }
  FUN_005491a0(param_1[2]);
  if (param_1[0x54] == 0) {
    FUN_006bf840(param_1[0x52]);
    param_1[0x52] = 0;
    param_1[0x53] = 0;
  }
  param_1[0x51] = 0;
  if (param_1[0x6a] == 0) {
    FUN_006bf840(param_1[0x68]);
    param_1[0x68] = 0;
    param_1[0x69] = 0;
  }
  param_1[0x67] = 0;
  if (param_1[0xb4] == 0) {
    iVar1 = param_1[0xb2];
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
      FUN_006bf840(iVar1 + -4);
    }
    param_1[0xb2] = 0;
    param_1[0xb3] = 0;
  }
  param_1[0xb1] = 0;
  _DAT_00798584 = _DAT_00798584 + -1;
  if (_DAT_00798584 == 0) {
    if (DAT_00798560 == 0) {
      if (DAT_00798558 != 0) {
        iVar1 = DAT_00798558 + -4;
        FUN_006c026a(DAT_00798558,0x2c,*(undefined4 *)(DAT_00798558 + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_00798558 = 0;
      DAT_0079855c = 0;
    }
    DAT_00798554 = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,8);
  if ((param_1[0xb4] != 2) && (param_1[0xb2] != 0)) {
    FUN_00407f70(3);
  }
  if (param_1[0x6a] != 2) {
    FUN_006bf840(param_1[0x68]);
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_00649ba0();
  if (param_1[0x54] != 2) {
    FUN_006bf840(param_1[0x52]);
  }
  local_4._0_1_ = 4;
  FUN_00649ba0();
  local_4._0_1_ = 3;
  FUN_005426a0();
  local_4._0_1_ = 2;
  FUN_005432e0();
  local_4._0_1_ = 1;
  FUN_005432e0();
  param_1 = param_1 + 0x15;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

