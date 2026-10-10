
void __thiscall FUN_004ca940(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_11c;
  int local_118 [3];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4b0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_rope__OnImport_0072d324);
  local_4 = 0;
  FUN_004aa740(param_2);
  FUN_00640450(s_RopeType_0072d318,local_118);
  *(int *)(param_1 + 0x188) = local_118[0];
  if (local_118[0] < 0) {
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  if (2 < *(int *)(param_1 + 0x188)) {
    *(undefined4 *)(param_1 + 0x188) = 2;
  }
  FUN_006403a0(s_AnchorPos0_0072d30c,(undefined4 *)(param_1 + 0xa8));
  FUN_006403a0(s_AnchorPos1_0072d300,param_1 + 0xb4);
  FUN_006405b0(s_LockPos0_0072d2f4,param_1 + 0xc0);
  FUN_006405b0(s_LockPos1_0072d2e8,param_1 + 0xc4);
  FUN_00640420(s_Length_0072d2d4,param_1 + 200);
  FUN_00640420(s_SegLength_0072d2c8,param_1 + 0xcc);
  FUN_00640420(s_Weight_0072d2c0,param_1 + 0xd0);
  FUN_00640420(s_Radius_0072a57c,(undefined4 *)(param_1 + 0xd4));
  *(undefined4 *)(param_1 + 0xd4) = 0x40a00000;
  FUN_00640420(s_VTiling_0072d2b8,param_1 + 0xd8);
  FUN_00640420(s_SettleTime_0072d2ac,param_1 + 0xe4);
  FUN_006405b0(s_IsFallaway_0072d2a0,param_1 + 0xf0);
  FUN_006405b0(s_IsElevator_0072d294,param_1 + 0xf4);
  FUN_006405b0(s_PainAtTop_0072d288,param_1 + 0x10c);
  FUN_00640420(s_PainDistAboveRope_0072d274,param_1 + 0x110);
  FUN_00640420(s_PainRadius_00725a64,param_1 + 0x114);
  FUN_00640420(s_PainAmount_0072d268,param_1 + 0x118);
  FUN_00640420(s_ElevatorLen_0072d25c,param_1 + 0xf8);
  FUN_006405b0(s_DoesRegenerate_0072d24c,param_1 + 0x108);
  FUN_00640420(s_RegenerateDelay_0072d23c,param_1 + 0x104);
  FUN_00640420(s_GrowRate_0072d230,param_1 + 0xfc);
  FUN_00640420(s_ShrinkRate_0072d224,param_1 + 0x100);
  FUN_00640420(s_RenderHeight_0072d214,param_1 + 0xe8);
  FUN_006405e0(s_AttachGuid_0072d208,param_1 + 0x168);
  FUN_00640420(s_AttachWeight_0072d1f8,param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xb0);
  FUN_006405b0(s_CommonTopTex_0072d1e8,&local_11c);
  *(byte *)(param_1 + 0x18c) =
       ((local_11c != 0) << 1 ^ *(byte *)(param_1 + 0x18c)) & 2 ^ *(byte *)(param_1 + 0x18c);
  iVar1 = FUN_00640480(s_TopTex_0072d1e0,local_10c);
  if (iVar1 == 0) {
    FUN_00647d10(local_10c,s_thornvine_xbmp_0072d144);
    *(byte *)(param_1 + 0x18c) = *(byte *)(param_1 + 0x18c) | 1;
  }
  if ((*(byte *)(param_1 + 0x18c) & 2) == 0) {
    uVar2 = FUN_005496c0(local_10c,0);
  }
  else {
    uVar2 = FUN_005496c0(local_10c,s_Props_00720224);
  }
  FUN_00549430(param_1 + 0xe0,uVar2);
  FUN_006405b0(s_CommonBotTex_0072d1d0,&local_11c);
  *(byte *)(param_1 + 0x18c) =
       (local_11c != 0 ^ *(byte *)(param_1 + 0x18c)) & 1 ^ *(byte *)(param_1 + 0x18c);
  iVar1 = FUN_00640480(s_BotTex_0072d1c8,local_10c);
  if (iVar1 == 0) {
    FUN_00647d10(local_10c,s_hangvine_xbmp_0072d154);
    *(byte *)(param_1 + 0x18c) = *(byte *)(param_1 + 0x18c) | 1;
  }
  if ((*(byte *)(param_1 + 0x18c) & 1) == 0) {
    uVar2 = FUN_005496c0(local_10c,0);
  }
  else {
    uVar2 = FUN_005496c0(local_10c,s_Props_00720224);
  }
  FUN_00549430(param_1 + 0xdc,uVar2);
  FUN_004c9290(0);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

