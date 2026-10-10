
undefined4 * __thiscall FUN_005e0160(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_4c0 [4];
  undefined4 local_4bc;
  undefined4 local_4b4 [127];
  undefined1 local_2b5;
  undefined1 local_2b4 [24];
  undefined1 local_29c [4];
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined1 local_28c [16];
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264 [2];
  undefined4 local_25c [128];
  undefined1 local_5c [24];
  undefined1 local_44 [4];
  undefined1 local_40 [12];
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e1206;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_4c0,s_AIManager_Actions_Action__d_Idle_00747650,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    local_4bc = 0xd;
    FUN_00647d70(local_4b4,*(undefined4 *)(param_1 + 0x18),0x200);
    *param_2 = local_4bc;
    local_2b5 = 0;
    puVar3 = local_4b4;
    puVar4 = param_2 + 2;
    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_00480f60(local_2b4);
    FUN_00425250(local_29c);
    FUN_004357e0(&local_298);
    FUN_004357e0(local_28c);
    param_2[0x90] = local_27c;
    param_2[0x91] = local_278;
    param_2[0x92] = local_274;
    param_2[0x93] = local_270;
    param_2[0x94] = local_26c;
    param_2[0x95] = local_268;
  }
  else {
    FUN_00649920(local_4c0,s_AIManager_Actions_Action__d_NPC_007470b8,*(undefined4 *)(param_1 + 4));
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      local_4bc = 0xf;
      local_27c = *(undefined4 *)(param_1 + 0x48);
      local_278 = *(undefined4 *)(param_1 + 0x4c);
      *param_2 = 0xf;
      puVar3 = local_4b4;
      puVar4 = param_2 + 2;
      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_00480f60(local_2b4);
      FUN_00425250(local_29c);
      param_2[0x89] = local_298;
      param_2[0x8a] = local_294;
      param_2[0x8b] = local_290;
      FUN_004357e0(local_28c);
      param_2[0x90] = local_27c;
      param_2[0x91] = local_278;
      param_2[0x92] = local_274;
    }
    else {
      FUN_005ccdb0(local_264,param_3);
      *param_2 = local_264[0];
      puVar3 = local_25c;
      puVar4 = param_2 + 2;
      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_00480f60(local_5c);
      FUN_00425250(local_44);
      FUN_004357e0(local_40);
      FUN_004357e0(local_34);
      param_2[0x90] = local_24;
      param_2[0x91] = local_20;
      param_2[0x92] = local_1c;
      local_268 = local_10;
      local_270 = local_18;
      local_26c = local_14;
    }
    param_2[0x93] = local_270;
    param_2[0x94] = local_26c;
    param_2[0x95] = local_268;
  }
  ExceptionList = local_c;
  return param_2;
}

