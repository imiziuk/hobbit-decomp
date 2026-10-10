
void __thiscall FUN_004ca660(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_100 [256];
  
  FUN_004aa650(param_2);
  FUN_00641480(s_RopeType_0072d318,*(undefined4 *)(param_1 + 0x188));
  FUN_006412e0(s_AnchorPos0_0072d30c,param_1 + 0xa8);
  FUN_006412e0(s_AnchorPos1_0072d300,param_1 + 0xb4);
  FUN_00641760(s_LockPos0_0072d2f4,*(undefined4 *)(param_1 + 0xc0));
  FUN_00641760(s_LockPos1_0072d2e8,*(undefined4 *)(param_1 + 0xc4));
  puVar1 = (undefined1 *)FUN_005493e0(param_1 + 0xdc);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0075b6e0;
  }
  FUN_006414f0(s_TextureName_0072d2dc,puVar1);
  FUN_00641400(s_Length_0072d2d4,*(undefined4 *)(param_1 + 200));
  FUN_00641400(s_SegLength_0072d2c8,*(undefined4 *)(param_1 + 0xcc));
  FUN_00641400(s_Weight_0072d2c0,*(undefined4 *)(param_1 + 0xd0));
  FUN_00641400(s_Radius_0072a57c,*(undefined4 *)(param_1 + 0xd4));
  FUN_00641400(s_VTiling_0072d2b8,*(undefined4 *)(param_1 + 0xd8));
  FUN_00641400(s_SettleTime_0072d2ac,*(undefined4 *)(param_1 + 0xe4));
  FUN_00641760(s_IsFallaway_0072d2a0,*(undefined4 *)(param_1 + 0xf0));
  FUN_00641760(s_IsElevator_0072d294,*(undefined4 *)(param_1 + 0xf4));
  FUN_00641760(s_PainAtTop_0072d288,*(undefined4 *)(param_1 + 0x10c));
  FUN_00641400(s_PainDistAboveRope_0072d274,*(undefined4 *)(param_1 + 0x110));
  FUN_00641400(s_PainRadius_00725a64,*(undefined4 *)(param_1 + 0x114));
  FUN_00641400(s_PainAmount_0072d268,*(undefined4 *)(param_1 + 0x118));
  FUN_00641400(s_ElevatorLen_0072d25c,*(undefined4 *)(param_1 + 0xf8));
  FUN_00641760(s_DoesRegenerate_0072d24c,*(undefined4 *)(param_1 + 0x108));
  FUN_00641400(s_RegenerateDelay_0072d23c,*(undefined4 *)(param_1 + 0x104));
  FUN_00641400(s_GrowRate_0072d230,*(undefined4 *)(param_1 + 0xfc));
  FUN_00641400(s_ShrinkRate_0072d224,*(undefined4 *)(param_1 + 0x100));
  FUN_00641400(s_RenderHeight_0072d214,*(undefined4 *)(param_1 + 0xe8));
  FUN_006417e0(s_AttachGuid_0072d208,*(undefined4 *)(param_1 + 0x168),
               *(undefined4 *)(param_1 + 0x16c));
  FUN_00641400(s_AttachWeight_0072d1f8,*(undefined4 *)(param_1 + 0x170));
  puVar1 = (undefined1 *)FUN_005493e0(param_1 + 0xe0);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0075b6e0;
  }
  FUN_00648a10(puVar1,auStack_100);
  FUN_00641760(s_CommonTopTex_0072d1e8,*(byte *)(param_1 + 0x18c) >> 1 & 1);
  FUN_006414f0(s_TopTex_0072d1e0,auStack_100);
  puVar1 = (undefined1 *)FUN_005493e0(param_1 + 0xdc);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0075b6e0;
  }
  FUN_00648a10(puVar1,auStack_100);
  FUN_00641760(s_CommonBotTex_0072d1d0,*(byte *)(param_1 + 0x18c) & 1);
  FUN_006414f0(s_BotTex_0072d1c8,auStack_100);
  FUN_006412c0();
  return;
}

