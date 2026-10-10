
void __thiscall FUN_004e98c0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5c3c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined1 *)FUN_005493e0();
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0075b6e0;
  }
  FUN_00648a10(puVar1);
  puVar1 = (undefined1 *)FUN_005493e0();
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0075b6e0;
  }
  FUN_00648a10(puVar1);
  puVar1 = (undefined1 *)FUN_005493e0();
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0075b6e0;
  }
  FUN_00648a10(puVar1);
  FUN_00641760(s_bRender_0072ed5c);
  FUN_00641760(s_bSplash_0072ed54);
  FUN_00641760(s_bDrown_0072ed4c);
  FUN_00641400(s_QuadSize_0072ed40);
  FUN_00641480(s_MinAlpha_00728e74);
  FUN_00641480(s_MaxAlpha_00728e68);
  FUN_00641370(CONCAT35(*(undefined3 *)(param_1 + 0x175),
                        CONCAT14(*(undefined1 *)(param_1 + 0x174),&DAT_00728df0)));
  FUN_00641760(s_CommonTexture_0072ed30);
  FUN_006414f0(s_BaseTexture_0072ed24);
  FUN_00641760(s_CommonRef_0072ed18);
  FUN_006414f0(s_RefTexture_0072ed0c);
  FUN_00641760(s_CommonGloss_0072ed00);
  FUN_006414f0(s_GlossTexture_0072ecf0);
  FUN_00641480(s_PainType_00728dd8);
  FUN_00641400(s_PainFreq_00728dcc);
  FUN_00641400(s_PoisonDur_00728dc0);
  FUN_00641400(s_PainAmt_00728db8);
  iVar3 = 0;
  do {
    FUN_00649920();
    local_4 = 0;
    uVar2 = FUN_00649940();
    FUN_00641400(uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920();
    local_4 = 1;
    uVar2 = FUN_00649940();
    FUN_00641400(uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920();
    local_4 = 2;
    uVar2 = FUN_00649940();
    FUN_00641400(uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920();
    local_4 = 3;
    uVar2 = FUN_00649940();
    FUN_00641400(uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_00641760(s_Interactive_0072ecb4);
  FUN_00641400(s_InteractiveAmp_0072eca4);
  FUN_00641400(s_NormalEx_0072ec98);
  FUN_00641400(s_FreezeDist_0072ec8c);
  FUN_00641400(s_UVDensity_0072ec80);
  FUN_00640b90(param_2,s_Height_ffffffffff_0072ec6c,(double)*(float *)(param_1 + 400),
               (double)*(float *)(param_1 + 0x194),(double)*(float *)(param_1 + 0x198),
               (double)*(float *)(param_1 + 0x19c),(double)*(float *)(param_1 + 0x1a0),
               (double)*(float *)(param_1 + 0x1a4),(double)*(float *)(param_1 + 0x1a8),
               (double)*(float *)(param_1 + 0x1ac),(double)*(float *)(param_1 + 0x1b0),
               (double)*(float *)(param_1 + 0x1b4));
  FUN_006412e0(s_ForceDir_0072ec60);
  FUN_004e2b70();
  FUN_006408e0(s_WaterCommandBuffer_0072ec4c);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x278)) {
    do {
      FUN_00640b90(param_2,s_Command_dd_0072ec40,
                   *(undefined1 *)(*(int *)(param_1 + 0x318) + iVar3 * 2));
      FUN_006412c0();
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x278));
  }
  ExceptionList = local_c;
  return;
}

