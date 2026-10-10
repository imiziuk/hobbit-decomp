
undefined4 * __fastcall FUN_006a2de0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006e7864;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_4 = 0;
  FUN_0064afa0();
  local_4._0_1_ = 1;
  FUN_006499d0();
  *param_1 = &PTR_FUN_006fcca4;
  param_1[0xc] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0x2a] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)((int)param_1 + 0xa7) = 0xff;
  *(undefined1 *)((int)param_1 + 0xa6) = 0xff;
  *(undefined1 *)((int)param_1 + 0xa5) = 0xff;
  *(undefined1 *)(param_1 + 0x29) = 0xff;
  FUN_0064a2e0(s_large_0071ceac);
  ExceptionList = local_c;
  return param_1;
}

