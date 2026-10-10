
undefined4 * __fastcall FUN_00457120(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d02d4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_005a3f00();
  *(byte *)((int)param_1 + 0x7a) = *(byte *)((int)param_1 + 0x7a) | 4;
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = &PTR_FUN_006ec540;
  FUN_004aa910(s_AudioEmitter_00725784);
  if (param_1[0x40] == 0) {
    iVar1 = param_1[0x3e];
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
      FUN_006bf840(iVar1 + -4);
    }
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
  }
  param_1[0x3d] = 0;
  param_1[0x4c] = 0;
  param_1[0x43] = param_1[0x43] & 0xfffffffe | 2;
  ExceptionList = local_c;
  return param_1;
}

