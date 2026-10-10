
undefined4 * __thiscall FUN_005e8a40(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_4c4 [4];
  undefined1 local_4c0 [4];
  undefined4 local_4bc;
  undefined4 local_4b4 [128];
  undefined1 local_2b4 [12];
  undefined1 local_2a8 [12];
  undefined1 local_29c [4];
  undefined1 local_298 [12];
  undefined1 local_28c [16];
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264 [2];
  undefined4 local_25c [128];
  undefined1 local_5c [12];
  undefined1 local_50 [12];
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
  puStack_8 = &LAB_006e1b31;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_4c4,s_AIManager_Actions_Action__d_Rope_00747a6c,*(undefined4 *)(param_1 + 4));
  iVar4 = 0;
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_270 = *(undefined4 *)(param_1 + 0x20);
    local_4bc = 1;
    *param_2 = 1;
    FUN_00424770(local_4b4);
  }
  else {
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        FUN_00649920(local_4c4,s_AIManager_Actions_Action__d_Rope_00747a48,
                     *(undefined4 *)(param_1 + 4),iVar4);
        local_4 = 1;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00406a80();
          local_4bc = 0xf;
          puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x24) + iVar4 * 4);
          local_27c = *puVar3;
          local_278 = puVar3[1];
          *param_2 = 0xf;
          FUN_00424770(local_4b4);
          ExceptionList = local_c;
          return param_2;
        }
        FUN_00649920(local_4c0,s_AIManager_Actions_Action__d_Rope_00747a1c,
                     *(undefined4 *)(param_1 + 4),iVar4);
        local_4 = 2;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_4bc = 2;
          local_26c = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + iVar4 * 4) + 8);
          *param_2 = 2;
          puVar3 = local_4b4;
          puVar5 = param_2 + 2;
          for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          }
          FUN_004357e0(local_2b4);
          FUN_004357e0(local_2a8);
          FUN_00425250(local_29c);
          FUN_004357e0(local_298);
          FUN_004357e0(local_28c);
          param_2[0x90] = local_27c;
          param_2[0x91] = local_278;
          param_2[0x92] = local_274;
          param_2[0x93] = local_270;
          param_2[0x94] = local_26c;
          param_2[0x95] = local_268;
          ExceptionList = local_c;
          return param_2;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x20));
    }
    FUN_005ccdb0(local_264,param_3);
    *param_2 = local_264[0];
    puVar3 = local_25c;
    puVar5 = param_2 + 2;
    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_004357e0(local_5c);
    FUN_004357e0(local_50);
    FUN_00425250(local_44);
    FUN_004357e0(local_40);
    FUN_004357e0(local_34);
    param_2[0x90] = local_24;
    param_2[0x91] = local_20;
    param_2[0x92] = local_1c;
    param_2[0x93] = local_18;
    param_2[0x94] = local_14;
    param_2[0x95] = local_10;
  }
  ExceptionList = local_c;
  return param_2;
}

