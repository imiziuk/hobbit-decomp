
undefined4 * __fastcall FUN_004d8dc0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d54be;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006499d0();
  local_4 = 0;
  FUN_006499d0();
  local_4._0_1_ = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = FUN_0064b130(&DAT_0075b6e0);
  local_4._0_1_ = 2;
  FUN_0064a360(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0064b190();
  param_1[0x10] = 0x3f800000;
  FUN_0064a2e0(&DAT_0075b6e0);
  param_1[0x1c] = 1;
  ExceptionList = local_c;
  return param_1;
}

