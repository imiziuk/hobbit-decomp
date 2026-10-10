
undefined4 * __fastcall FUN_004e1d60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5926;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  local_4 = 0;
  FUN_006499d0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005a3f00();
  *param_1 = &PTR_FUN_006ef518;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

