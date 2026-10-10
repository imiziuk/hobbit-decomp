
undefined4 * __fastcall FUN_004d8f10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5510;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  local_4 = 0;
  FUN_006c043b(param_1 + 0x2a,4,3,&LAB_00484230,FUN_00406ba0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005a3f00();
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  *param_1 = &PTR_FUN_006ef310;
  param_1[0x2d] = 0x42700000;
  param_1[0x30] = 1;
  param_1[0x32] = 0x3f800000;
  param_1[0x38] = 0x451c4000;
  param_1[0x39] = 0x44bb8000;
  param_1[0x2e] = 0x40a00000;
  *(undefined1 *)((int)param_1 + 0xeb) = 0xff;
  *(undefined1 *)((int)param_1 + 0xea) = 0xff;
  *(undefined1 *)((int)param_1 + 0xe9) = 0xff;
  *(undefined1 *)(param_1 + 0x3a) = 0xff;
  param_1[0x3d] = 0x40a00000;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(ushort *)((int)param_1 + 0x7a) = *(ushort *)((int)param_1 + 0x7a) & 0xffdf | 0x10;
  param_1[0x3b] = 0x44fa0000;
  param_1[0x3c] = 0x453b8000;
  param_1[0x45] = 1;
  ExceptionList = local_c;
  return param_1;
}

