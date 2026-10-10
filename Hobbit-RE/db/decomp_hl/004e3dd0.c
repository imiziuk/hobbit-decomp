
undefined4 * __fastcall FUN_004e3dd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d59c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  local_4 = 1;
  FUN_005a3f00();
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0x57;
  *param_1 = &PTR_FUN_006ef610;
  *(undefined1 *)((int)param_1 + 0x7d) = 3;
  ExceptionList = local_c;
  return param_1;
}

