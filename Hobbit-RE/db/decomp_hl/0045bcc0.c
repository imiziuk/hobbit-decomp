
undefined4 * __fastcall FUN_0045bcc0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0576;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  local_4 = 0;
  FUN_005a3f00();
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_006ec898;
  *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) & 0xfe | 2;
  puVar2 = (undefined4 *)FUN_00588a30(local_10);
  uVar1 = *puVar2;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = uVar1;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0x3f800000;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  ExceptionList = local_c;
  return param_1;
}

