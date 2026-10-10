
undefined4 * __fastcall FUN_004d3b70(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c0370();
  local_4 = 0;
  FUN_0064afa0();
  local_4._0_1_ = 1;
  FUN_006499d0();
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8e] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  local_4._0_1_ = 3;
  FUN_006499d0();
  *param_1 = &PTR_FUN_006ef1d8;
  DAT_0075dd40 = DAT_0075dd40 + 1;
  *(byte *)((int)param_1 + 0x7b) = *(byte *)((int)param_1 + 0x7b) & 0xf7;
  local_4._0_1_ = 4;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  uVar1 = FUN_00434e80(1);
  FUN_0064a2e0(uVar1);
  uVar1 = FUN_0064b130(&DAT_0075b6e0);
  local_4._0_1_ = 5;
  FUN_0064b7f0(uVar1);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_0064b190();
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x65] = 0;
  param_1[0x91] = 0;
  param_1[0x7e] = 0x3f800000;
  ExceptionList = local_c;
  return param_1;
}

