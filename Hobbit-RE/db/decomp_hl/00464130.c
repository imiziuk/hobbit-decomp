
undefined4 * __fastcall FUN_00464130(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d080c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  local_4 = 0;
  FUN_00543280();
  local_4._0_1_ = 1;
  FUN_006499d0();
  local_4._0_1_ = 2;
  *param_1 = &PTR_FUN_006ecc88;
  FUN_006501d0(s__CharacterObject___00726253 + 1);
  local_4._0_1_ = 3;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3a] = param_1[0x3a] & 0xfffffffc;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x68] = 0x3f800000;
  param_1[0x3b] = 0x41f00000;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x3c] = 0xffffffff;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 2;
  FUN_0064a2e0(&DAT_0075b6e0);
  param_1[0x67] = 0xffffffff;
  param_1[0x4a] = 0;
  param_1[0x4b] = param_1[0x4b] & 0xfffffffd;
  param_1[0x49] = 0;
  FUN_00468450();
  FUN_00429100();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_006501e0();
  ExceptionList = local_c;
  return param_1;
}

