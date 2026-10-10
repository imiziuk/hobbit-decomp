
undefined4 * __thiscall FUN_004bd0f0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_2b0 [12];
  undefined1 auStack_2a4 [12];
  undefined4 auStack_298 [2];
  undefined1 auStack_290 [568];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  iVar1 = FUN_00647e40(param_3,s_Can_Flip_0072c59c);
  if (iVar1 == 0) {
    FUN_00425440();
    iStack_44 = (*(int *)(param_1 + 0x260) << 0x19) >> 0x1f;
    auStack_298[0] = 3;
    *param_2 = 3;
    FUN_00424770(auStack_290);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Disabled_0072c590);
  if (iVar1 == 0) {
    FUN_00406a80();
    iStack_44 = (*(int *)(param_1 + 0x260) << 0x1e) >> 0x1f;
    auStack_298[0] = 3;
    *param_2 = 3;
    FUN_00424770(auStack_290);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Box_Type_0072c5c0);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_4c = *(undefined4 *)(param_1 + 0x17c);
    auStack_298[0] = 0xc;
    *param_2 = 0xc;
    FUN_00424770(auStack_290);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_MaxSlope_0072c5b4);
  if (iVar1 == 0) {
    FUN_00406a80();
    auStack_298[0] = 2;
    uStack_48 = DAT_0072c444;
    *param_2 = 2;
    FUN_00424770(auStack_290);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Sync_Volume_0072c5a8);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_58 = *(undefined4 *)(param_1 + 0x290);
    uStack_54 = *(undefined4 *)(param_1 + 0x294);
    auStack_298[0] = 0xf;
    *param_2 = 0xf;
    FUN_00424770(auStack_290);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Radius_0072a57c);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_48 = *(undefined4 *)(param_1 + 0x264);
    auStack_298[0] = 2;
    *param_2 = 2;
    FUN_00424770(auStack_290);
    return param_2;
  }
  FUN_00406a80();
  FUN_004064d0();
  FUN_004069b0(param_1 + 0x220);
  FUN_004065c0(auStack_2a4);
  FUN_004357e0(auStack_2a4);
  iVar1 = FUN_004c0030(param_3,auStack_298,s_RenderOrient_0072c580,auStack_2b0);
  if (iVar1 != 0) {
    *param_2 = auStack_298[0];
    FUN_00424770(auStack_290);
    return param_2;
  }
  FUN_004c5ba0(param_2,param_3);
  return param_2;
}

