
undefined4 * __fastcall FUN_004ee420(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5ef2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e3dd0();
  param_1[0x56] = 0x7fffffff;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_005a2ab0();
  local_4._0_1_ = 2;
  FUN_005a3f00();
  *param_1 = &PTR_FUN_006ef938;
  DAT_0075e330 = DAT_0075e330 + 1;
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0xdf;
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar1 = FUN_005496c0(s_WebWall1_xbmp_0072f054,&DAT_0071ef4c);
  FUN_00549430(param_1 + 0x56,uVar1);
  param_1[0x57] = 4;
  param_1[0x59] = 4;
  param_1[0x58] = 4;
  param_1[0x5a] = 4;
  param_1[0x5b] = 0x3f800000;
  param_1[0x5c] = 0x3f800000;
  param_1[0x5f] = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x7d) = 0;
  param_1[0x72] = 0;
  param_1[0x78] = 0;
  param_1[0x5e] = 0x41000000;
  param_1[0x5d] = 0x447a0000;
  param_1[0x79] = 0x40a00000;
  param_1[0x7a] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x7c] = 1;
  param_1[0x60] = 1;
  param_1[0x61] = 1;
  *(undefined1 *)((int)param_1 + 0x197) = 0xff;
  *(undefined1 *)((int)param_1 + 0x196) = 0xff;
  *(undefined1 *)((int)param_1 + 0x195) = 0xff;
  *(undefined1 *)(param_1 + 0x65) = 0xff;
  *(undefined1 *)((int)param_1 + 0x19b) = 0xff;
  *(undefined1 *)((int)param_1 + 0x19a) = 0;
  *(undefined1 *)((int)param_1 + 0x199) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) | 1;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_005a2ba0(&local_18);
  ExceptionList = local_c;
  return param_1;
}

