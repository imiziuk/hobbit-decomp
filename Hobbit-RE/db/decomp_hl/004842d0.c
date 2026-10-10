
undefined4 * __fastcall FUN_004842d0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2b0e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e1d60();
  local_4 = 0;
  FUN_006c043b(param_1 + 0x90,4,2,&LAB_00484230,FUN_00406ba0);
  local_4._0_1_ = 1;
  FUN_005a3f00();
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = &PTR_FUN_006ed2b0;
  uVar1 = FUN_005496c0(s_FogSprite1_xbmp_00728d14,&DAT_0071ef4c);
  FUN_00549430(param_1 + 0x90,uVar1);
  uVar1 = FUN_005496c0(s_FogSprite2_xbmp_00728d04,&DAT_0071ef4c);
  FUN_00549430(param_1 + 0x91,uVar1);
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x4c] = 0;
  param_1[0x40] = 0x42c80000;
  param_1[0x45] = 0x42800000;
  *(undefined1 *)((int)param_1 + 0x119) = 0x40;
  param_1[0x4d] = 1;
  param_1[0x41] = 0x10;
  param_1[0x42] = 0x10;
  *(undefined1 *)(param_1 + 0x46) = 0x10;
  param_1[0x43] = 0x14;
  param_1[0x44] = 0x14;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x48] = 0x3f000000;
  param_1[0x52] = 0x3f000000;
  param_1[0x47] = 0x3fc00000;
  param_1[0x49] = 0x3dcccccd;
  param_1[0x4a] = 0x3f733333;
  param_1[0x53] = 7;
  param_1[0x51] = 0x3f800000;
  *(undefined1 *)((int)param_1 + 0x153) = 0xff;
  *(undefined1 *)((int)param_1 + 0x152) = 0xff;
  *(undefined1 *)((int)param_1 + 0x151) = 0xff;
  *(undefined1 *)(param_1 + 0x54) = 0xff;
  param_1[0x55] = 0;
  param_1[0x8f] = 0;
  param_1[0x56] = 0x40000000;
  param_1[0x57] = 0x40800000;
  param_1[0x58] = 0x3f800000;
  param_1[0x4b] = 0x457a0000;
  ExceptionList = local_c;
  return param_1;
}

