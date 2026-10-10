
undefined4 * __fastcall FUN_004b63a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d43e2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  param_1[0x2a] = 0x7fffffff;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_005c1540();
  local_4._0_1_ = 2;
  FUN_00404870(0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff);
  param_1[0x3f] = 0;
  param_1[0x54] = 1;
  FUN_005822d0();
  *param_1 = &PTR_FUN_006ee508;
  *(undefined1 *)(param_1 + 0x21) = 0x28;
  *(undefined1 *)((int)param_1 + 0x83) = 0x28;
  *(undefined1 *)((int)param_1 + 0x82) = 0x28;
  *(undefined1 *)((int)param_1 + 0x85) = 0xff;
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xdc;
  param_1[0x35] = param_1[4];
  param_1[0x31] = 0;
  param_1[0x38] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = param_1 + 0x3d;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0xffffffff;
  param_1[0x6d] = 0;
  param_1[0x62] = 0x3f800000;
  param_1[100] = 0x3f800000;
  DAT_0075d8a4 = DAT_0075d8a4 + 1;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined1 *)((int)param_1 + 0x85) = 0xff;
  *(undefined1 *)(param_1 + 0x21) = 0x96;
  *(undefined1 *)((int)param_1 + 0x83) = 0x96;
  *(undefined1 *)((int)param_1 + 0x82) = 0x96;
  FUN_00582310();
  ExceptionList = local_c;
  return param_1;
}

