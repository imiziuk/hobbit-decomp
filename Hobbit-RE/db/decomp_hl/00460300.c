
undefined4 * __fastcall FUN_00460300(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0746;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  local_4 = 0;
  FUN_006499d0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005a3f00();
  *param_1 = &PTR_FUN_006ecb80;
  param_1[0x5f] = 0;
  param_1[0x5b] = 0;
  param_1[0x57] = 0;
  param_1[0x60] = 0;
  param_1[0x5c] = 0;
  param_1[0x54] = 0;
  param_1[0x61] = 0;
  param_1[0x59] = 0;
  param_1[0x55] = 0;
  param_1[0x5e] = 0;
  param_1[0x5a] = 0;
  param_1[0x56] = 0;
  param_1[0x53] = 0x3f800000;
  param_1[0x58] = 0x3f800000;
  param_1[0x5d] = 0x3f800000;
  param_1[0x62] = 0x3f800000;
  param_1[0x51] = 0;
  ExceptionList = local_c;
  return param_1;
}

