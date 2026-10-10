
undefined4 * __fastcall FUN_006a22e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e77a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006a2de0();
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  local_4 = 1;
  FUN_006499d0();
  *param_1 = &PTR_FUN_006fcc14;
  ExceptionList = local_c;
  return param_1;
}

