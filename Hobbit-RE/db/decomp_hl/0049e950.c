
undefined4 * __thiscall FUN_0049e950(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_250 [128];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = FUN_00647e40(param_3,s_Radius_0072a57c);
  if (iVar1 == 0) {
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    uStack_8 = *(undefined4 *)(param_1 + 0xd0);
    *param_2 = 2;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Nav_Flags_0072a5b4);
  if (iVar1 == 0) {
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    uStack_c = (uint)*(byte *)(param_1 + 0xd4);
    *param_2 = 0xc;
    puVar2 = auStack_250;
    puVar3 = param_2 + 2;
    for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00480f60(auStack_50);
    FUN_00425250(auStack_38);
    FUN_004357e0(auStack_34);
    FUN_004357e0(auStack_28);
    param_2[0x92] = uStack_10;
    param_2[0x90] = uStack_18;
    param_2[0x91] = uStack_14;
    param_2[0x95] = uStack_4;
    param_2[0x93] = uStack_c;
    param_2[0x94] = uStack_8;
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Jump_To_NavPoint_0072a5c0);
  if (iVar1 == 0) {
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    uStack_18 = *(undefined4 *)(param_1 + 200);
    uStack_14 = *(undefined4 *)(param_1 + 0xcc);
    *param_2 = 0xf;
    puVar2 = auStack_250;
    puVar3 = param_2 + 2;
    for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_004357e0(auStack_50);
    FUN_004357e0(auStack_44);
    FUN_00425250(auStack_38);
    FUN_004357e0(auStack_34);
    FUN_004357e0(auStack_28);
    param_2[0x91] = uStack_14;
    param_2[0x90] = uStack_18;
    param_2[0x92] = uStack_10;
    param_2[0x94] = uStack_8;
    param_2[0x93] = uStack_c;
    param_2[0x95] = uStack_4;
    return param_2;
  }
  FUN_004abdf0(param_2,param_3);
  return param_2;
}

