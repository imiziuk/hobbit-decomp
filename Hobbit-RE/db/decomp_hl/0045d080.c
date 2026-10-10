
undefined4 * __fastcall FUN_0045d080(undefined4 *param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0666;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  local_4 = 0;
  FUN_0064cbe0();
  FUN_005a3f00();
  *param_1 = &PTR_FUN_006ec990;
  param_1[0xb] = 0xc1200000;
  param_1[0xc] = 0xc1200000;
  param_1[0xd] = 0xc1200000;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_18 = 0x41200000;
  local_14 = 0x41200000;
  local_10 = 0x41200000;
  FUN_004357e0(&local_18);
  param_1[0x11] = param_1[0xb];
  param_1[0x12] = param_1[0xc];
  param_1[0x13] = param_1[0xd];
  param_1[0x14] = param_1[0xe];
  param_1[0x15] = param_1[0xf];
  param_1[0x16] = param_1[0x10];
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_0064cc30();
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x3e] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = 0x3f800000;
  param_1[0x31] = 0x49742400;
  ExceptionList = local_c;
  return param_1;
}

