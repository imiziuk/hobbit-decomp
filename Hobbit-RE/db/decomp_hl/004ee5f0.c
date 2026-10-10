
void __fastcall FUN_004ee5f0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d5f32;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ef938;
  local_4 = 3;
  FUN_004f0380();
  DAT_0075e330 = DAT_0075e330 + -1;
  if (DAT_0075e330 == 0) {
    DAT_0072f048 = 1;
    if (DAT_0075e30c == 0) {
      if (DAT_0075e304 != 0) {
        iVar1 = DAT_0075e304 + -4;
        FUN_006c026a(DAT_0075e304,0x2c,*(undefined4 *)(DAT_0075e304 + -4),FUN_00649ba0);
        FUN_006bf840(iVar1);
      }
      DAT_0075e304 = 0;
      DAT_0075e308 = 0;
    }
    DAT_0075e300 = 0;
  }
  local_4._0_1_ = 2;
  FUN_005a32c0();
  local_4._0_1_ = 1;
  FUN_005a2ad0();
  param_1 = param_1 + 0x56;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_004e3e80();
  ExceptionList = local_c;
  return;
}

