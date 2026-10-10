
undefined4 * __fastcall FUN_00524bf0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d7b18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006a22e0();
  local_4 = 0;
  FUN_00650250();
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *param_1 = &PTR_FUN_006f3808;
  ExceptionList = local_c;
  return param_1;
}

