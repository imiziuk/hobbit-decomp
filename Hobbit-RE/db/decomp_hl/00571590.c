
undefined4 * __thiscall FUN_00571590(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_4a8 [128];
  undefined1 local_2a8 [24];
  undefined1 local_290 [4];
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined1 local_280 [16];
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined1 local_250 [592];
  
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  iVar4 = *(int *)(param_1 + 0x730);
  iVar1 = FUN_00647cf0(s_CameraMgr_ChaseOffset_0073fa3c);
  iVar2 = FUN_00647e80(param_3,s_CameraMgr_ChaseOffset_0073fa3c,iVar1);
  if (iVar2 != 0) {
LAB_0057176e:
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    local_258 = 0;
    *param_2 = 0;
    FUN_00424770(local_250);
    return param_2;
  }
  iVar2 = FUN_00647cf0(param_3);
  if (iVar1 == iVar2) {
    uVar3 = 8;
    local_28c = *(undefined4 *)(iVar4 + 0x78);
    local_288 = *(undefined4 *)(iVar4 + 0x7c);
    local_284 = *(undefined4 *)(iVar4 + 0x80);
  }
  else {
    iVar1 = iVar1 + param_3;
    iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
    if (iVar2 == 0) {
      local_260 = *(undefined4 *)(iVar4 + 0x78);
    }
    else {
      iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
      if (iVar2 == 0) {
        uVar3 = 2;
        local_260 = *(undefined4 *)(iVar4 + 0x7c);
        goto LAB_005716aa;
      }
      iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
      if (iVar1 != 0) goto LAB_0057176e;
      local_260 = *(undefined4 *)(iVar4 + 0x80);
    }
    uVar3 = 2;
  }
LAB_005716aa:
  *param_2 = uVar3;
  puVar5 = local_4a8;
  puVar6 = param_2 + 2;
  for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00480f60(local_2a8);
  FUN_00425250(local_290);
  FUN_004357e0(&local_28c);
  FUN_004357e0(local_280);
  param_2[0x92] = local_268;
  param_2[0x95] = local_25c;
  param_2[0x90] = local_270;
  param_2[0x91] = local_26c;
  param_2[0x93] = local_264;
  param_2[0x94] = local_260;
  return param_2;
}

