
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_004e7400(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5af0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e1d60();
  param_1[0x78] = 0x7fffffff;
  param_1[0x79] = 0x7fffffff;
  param_1[0x7a] = 0x7fffffff;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  FUN_005a3f00();
  *param_1 = &PTR_FUN_006ef708;
  _DAT_0075e2d4 = _DAT_0075e2d4 + 1;
  *(undefined1 *)(param_1 + 0x74) = 0x3c;
  *(undefined1 *)((int)param_1 + 0x1d1) = 0x82;
  *(undefined1 *)((int)param_1 + 0x177) = 0xff;
  *(undefined1 *)((int)param_1 + 0x176) = 0;
  *(undefined1 *)((int)param_1 + 0x175) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x5e] = 0x3f800000;
  param_1[0xa2] = 0x40a00000;
  param_1[0xa3] = 0x3f800000;
  param_1[0xb0] = 0;
  param_1[0xb4] = 0x43c80000;
  param_1[0xb8] = 0;
  param_1[0xbc] = 0x3f800000;
  param_1[0xb1] = 0;
  param_1[0xb5] = 0x437a0000;
  param_1[0xb9] = 0x41f00000;
  param_1[0xbd] = 0x3f800000;
  param_1[0xb2] = 0;
  param_1[0xb6] = 0x44160000;
  param_1[0xba] = 0x42500000;
  param_1[0xbe] = 0x3f800000;
  param_1[0xb3] = 0;
  param_1[0xb7] = 0x43960000;
  param_1[0xbb] = 0x43210000;
  param_1[0xbf] = 0x3f800000;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(byte *)((int)param_1 + 0x1d2) = *(byte *)((int)param_1 + 0x1d2) & 0xdf;
  uVar1 = FUN_005496c0(s_Water_xbmp_0072eb5c,&DAT_0071ef4c);
  FUN_00549430(param_1 + 0x78,uVar1);
  uVar1 = FUN_005496c0(s_WaterReflection_xbmp_0072eb44,&DAT_0071ef4c);
  FUN_00549430(param_1 + 0x79,uVar1);
  uVar1 = FUN_005496c0(s__WaterGloss_xbmp_0072eb33 + 1,&DAT_0071ef4c);
  FUN_00549430(param_1 + 0x7a,uVar1);
  *(byte *)((int)param_1 + 0x1d2) = *(byte *)((int)param_1 + 0x1d2) & 0xfe | 0x1e;
  *(byte *)((int)param_1 + 0x1d3) = *(byte *)((int)param_1 + 0x1d3) | 3;
  param_1[99] = 0x3f800000;
  param_1[0x5f] = 0x44480000;
  param_1[0x60] = 0;
  param_1[0x61] = 0x40000000;
  param_1[0x62] = 0x40800000;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x71] = 0x447a0000;
  param_1[199] = 1;
  param_1[0x72] = 0x41200000;
  puVar3 = param_1 + 100;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0x42c80000;
    puVar3 = puVar3 + 1;
  }
  uVar1 = param_1[100];
  param_1[0x6e] = uVar1;
  param_1[0x6f] = uVar1;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  param_1[0x70] = 0x41200000;
  param_1[0xc6] = 0;
  param_1[0x9e] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xc2) | 1;
  *(byte *)((int)param_1 + 0x1d2) = *(byte *)((int)param_1 + 0x1d2) | 0x40;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  local_14 = 0;
  do {
    fVar4 = (float10)FUN_0064c800((float)local_14 * _DAT_006ef704 * _DAT_006e9598);
    (&DAT_0075e080)[local_14] = (float)fVar4;
    local_14 = local_14 + 1;
  } while (local_14 < 0x80);
  ExceptionList = local_c;
  return param_1;
}

