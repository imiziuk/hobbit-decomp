
void __thiscall FUN_004e9dc0(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  float10 fVar6;
  int iVar7;
  undefined1 local_148 [4];
  undefined1 local_144 [4];
  undefined1 local_140 [4];
  undefined4 local_13c;
  undefined1 local_138 [4];
  char local_134 [4];
  byte local_130 [4];
  char local_12c [4];
  char local_128 [4];
  undefined1 local_124 [4];
  byte local_120 [4];
  char local_11c [4];
  char local_118 [12];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5c87;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_water__OnImport_0072ed64);
  iVar5 = 0;
  local_4 = 0;
  FUN_006405b0(s_bRender_0072ed5c,local_11c);
  *(byte *)(param_1 + 0x1d2) =
       (local_11c[0] << 1 ^ *(byte *)(param_1 + 0x1d2)) & 2 ^ *(byte *)(param_1 + 0x1d2);
  FUN_006405b0(s_bSplash_0072ed54,local_130);
  *(byte *)(param_1 + 0x1d3) =
       (*(byte *)(param_1 + 0x1d3) ^ local_130[0]) & 1 ^ *(byte *)(param_1 + 0x1d3);
  FUN_006405b0(s_bDrown_0072ed4c,local_128);
  pfVar1 = (float *)(param_1 + 0x160);
  *(byte *)(param_1 + 0x1d3) =
       (local_128[0] << 1 ^ *(byte *)(param_1 + 0x1d3)) & 2 ^ *(byte *)(param_1 + 0x1d3);
  FUN_00640420(s_QuadSize_0072ed40,pfVar1);
  FUN_00640450(s_MinAlpha_00728e74,local_148);
  *(undefined1 *)(param_1 + 0x1d0) = local_148[0];
  FUN_00640450(s_MaxAlpha_00728e68,local_148);
  *(undefined1 *)(param_1 + 0x1d1) = local_148[0];
  FUN_006403e0(&DAT_00728df0,param_1 + 0x174);
  fVar6 = (float10)FUN_005a3710();
  *pfVar1 = (float)(fVar6 * (float10)*pfVar1);
  FUN_006405b0(s_CommonTexture_0072ed30,local_134);
  *(byte *)(param_1 + 0x1d2) =
       (local_134[0] << 2 ^ *(byte *)(param_1 + 0x1d2)) & 4 ^ *(byte *)(param_1 + 0x1d2);
  iVar2 = FUN_00640480(s_BaseTexture_0072ed24,local_10c);
  if (iVar2 == 0) {
    FUN_00647d10(local_10c,s_Water_xbmp_0072eb5c);
    *(byte *)(param_1 + 0x1d2) = *(byte *)(param_1 + 0x1d2) | 4;
  }
  if ((*(byte *)(param_1 + 0x1d2) & 4) == 0) {
    uVar3 = FUN_005496c0(local_10c,0);
  }
  else {
    uVar3 = FUN_005496c0(local_10c,&DAT_0071ef4c);
  }
  FUN_00549430(param_1 + 0x1e0,uVar3);
  FUN_006405b0(s_CommonRef_0072ed18,local_118);
  *(byte *)(param_1 + 0x1d2) =
       (local_118[0] << 3 ^ *(byte *)(param_1 + 0x1d2)) & 8 ^ *(byte *)(param_1 + 0x1d2);
  iVar2 = FUN_00640480(s_RefTexture_0072ed0c,local_10c);
  if (iVar2 == 0) {
    FUN_00647d10(local_10c,s_WaterReflection_xbmp_0072eb44);
    *(byte *)(param_1 + 0x1d2) = *(byte *)(param_1 + 0x1d2) | 8;
  }
  if ((*(byte *)(param_1 + 0x1d2) & 8) == 0) {
    uVar3 = FUN_005496c0(local_10c,0);
  }
  else {
    uVar3 = FUN_005496c0(local_10c,&DAT_0071ef4c);
  }
  FUN_00549430(param_1 + 0x1e4,uVar3);
  FUN_006405b0(s_CommonGloss_0072ed00,local_12c);
  *(byte *)(param_1 + 0x1d2) =
       (local_12c[0] << 4 ^ *(byte *)(param_1 + 0x1d2)) & 0x10 ^ *(byte *)(param_1 + 0x1d2);
  iVar2 = FUN_00640480(s_GlossTexture_0072ecf0,local_10c);
  if (iVar2 == 0) {
    FUN_00647d10(local_10c,s__WaterGloss_xbmp_0072eb33 + 1);
    *(byte *)(param_1 + 0x1d2) = *(byte *)(param_1 + 0x1d2) | 0x10;
  }
  if ((*(byte *)(param_1 + 0x1d2) & 0x10) == 0) {
    uVar3 = FUN_005496c0(local_10c,0);
  }
  else {
    uVar3 = FUN_005496c0(local_10c,&DAT_0071ef4c);
  }
  FUN_00549430(param_1 + 0x1e8,uVar3);
  FUN_00640450(s_PainType_00728dd8,&local_13c);
  FUN_00640420(s_PainFreq_00728dcc,(undefined4 *)(param_1 + 0x184));
  FUN_00640420(s_PoisonDur_00728dc0,param_1 + 0x188);
  FUN_00640420(s_PainAmt_00728db8,param_1 + 0x18c);
  *(undefined4 *)(param_1 + 0x180) = local_13c;
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x184);
  iVar2 = param_1 + 0x2e0;
  do {
    FUN_00649920(local_124,s_Wave_dAmp_0072ece4,iVar5);
    iVar7 = iVar2 + -0x20;
    local_4._0_1_ = 1;
    uVar3 = FUN_00649940(iVar7);
    FUN_00640420(uVar3,iVar7);
    local_4._0_1_ = 0;
    FUN_00649950();
    FUN_00649920(local_138,s_Wave_dAng_0072ecd8,iVar5);
    local_4._0_1_ = 2;
    iVar7 = iVar2;
    uVar3 = FUN_00649940(iVar2);
    FUN_00640420(uVar3,iVar7);
    local_4._0_1_ = 0;
    FUN_00649950();
    FUN_00649920(local_140,s_Wave_dLen_0072eccc,iVar5);
    iVar7 = iVar2 + -0x10;
    local_4._0_1_ = 3;
    uVar3 = FUN_00649940(iVar7);
    FUN_00640420(uVar3,iVar7);
    local_4._0_1_ = 0;
    FUN_00649950();
    FUN_00649920(local_144,s_Wave_dTime_0072ecc0,iVar5);
    iVar7 = iVar2 + 0x10;
    local_4._0_1_ = 4;
    uVar3 = FUN_00649940(iVar7);
    FUN_00640420(uVar3,iVar7);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649950();
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar5 < 4);
  FUN_006405b0(s_Interactive_0072ecb4,local_120);
  *(byte *)(param_1 + 0x1d2) =
       (*(byte *)(param_1 + 0x1d2) ^ local_120[0]) & 1 ^ *(byte *)(param_1 + 0x1d2);
  FUN_00640420(s_InteractiveAmp_0072eca4,param_1 + 0x1c8);
  FUN_00640420(s_NormalEx_0072ec98,param_1 + 0x28c);
  FUN_00640420(s_FreezeDist_0072ec8c,param_1 + 0x1c4);
  FUN_00640420(s_UVDensity_0072ec80,param_1 + 0x17c);
  FUN_006401e0(param_2,s_Height_ffffffffff_0072ec6c,(undefined4 *)(param_1 + 400),param_1 + 0x194,
               param_1 + 0x198,param_1 + 0x19c,param_1 + 0x1a0,param_1 + 0x1a4,param_1 + 0x1a8,
               param_1 + 0x1ac,param_1 + 0x1b0,param_1 + 0x1b4);
  FUN_006403a0(s_ForceDir_0072ec60,param_1 + 0x27c);
  FUN_004e2c00(param_2);
  FUN_004e93f0();
  FUN_0063ff20();
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0xc);
  if (*(int *)(param_1 + 0x318) != 0) {
    FUN_006bf840(*(int *)(param_1 + 0x318));
  }
  pvVar4 = operator_new(*(int *)(param_1 + 0x278) << 1);
  *(void **)(param_1 + 0x318) = pvVar4;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x278)) {
    do {
      FUN_0063ffc0();
      FUN_006401e0(param_2,s_Command_dd_0072ec40,local_144,local_140);
      *(undefined1 *)(*(int *)(param_1 + 0x318) + iVar2 * 2) = local_144[0];
      *(undefined1 *)(*(int *)(param_1 + 0x318) + 1 + iVar2 * 2) = local_140[0];
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x278));
  }
  uVar3 = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(param_1 + 0x1b8) = uVar3;
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

