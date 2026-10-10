
undefined4 * __fastcall FUN_00568520(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00566d80(1);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 6;
  FUN_006499d0();
  param_1[0x17] = param_1[0x17] & 0xfffffffa | 2;
  *param_1 = &PTR_FUN_006e93d4;
  ExceptionList = local_c;
  return param_1;
}

