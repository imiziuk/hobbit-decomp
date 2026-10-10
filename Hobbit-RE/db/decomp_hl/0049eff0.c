
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0049eff0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d36f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00464130();
  param_1[0x9c] = 0x7fffffff;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_006499d0();
  local_4._0_1_ = 2;
  FUN_006499d0();
  local_4._0_1_ = 3;
  FUN_00580370();
  local_4._0_1_ = 4;
  FUN_006499d0();
  local_4._0_1_ = 5;
  FUN_006499d0();
  local_4._0_1_ = 6;
  *param_1 = &PTR_FUN_006edd20;
  FUN_006501d0(s_NPCObject__NPCObject___0072ac68);
  param_1[0xa3] = 0;
  _DAT_0075d2c8 = _DAT_0075d2c8 + 1;
  param_1[0xa4] = 0x41200000;
  param_1[0xa5] = 0x41200000;
  param_1[0x9a] = param_1[0x9a] & 0xffcdeb7f | 0xda300;
  local_4._0_1_ = 7;
  param_1[0x97] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xa6] = 3;
  param_1[0x69] = 2;
  param_1[0xa0] = 0;
  param_1[0x117] = 0x3f800000;
  param_1[0xa7] = 0;
  param_1[0x118] = 0x40833333;
  param_1[0x11f] = 0;
  param_1[0xa8] = 0x3f800000;
  param_1[0x9b] = 0xffffffff;
  param_1[0xa9] = 0x3f800000;
  param_1[0x9d] = 0;
  param_1[0x98] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0x138] = 0x3f800000;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0x11e] = param_1[0x11e] & 0xffffffef | 8;
  FUN_0064a2e0(s_DeathEffect_0072ac5c);
  FUN_0064a2e0(s_EnemyDeathFade_00724b54);
  param_1[0x11e] = param_1[0x11e] & 0xffffff9f | 7;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x121] = 0xffffffff;
  param_1[0x9a] = param_1[0x9a] & 0xf83fffff | 0x1000007f;
  param_1[0x99] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  uVar1 = FUN_005496c0(s_ShadowDisc_xbmp_0071ef3c,&DAT_0071ef4c);
  FUN_00549430(param_1 + 0x9c,uVar1);
  FUN_004ab450(0);
  FUN_004ab480(0);
  param_1[0x139] = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_006501e0();
  ExceptionList = local_c;
  return param_1;
}

