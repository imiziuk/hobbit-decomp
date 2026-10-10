
undefined4 * __thiscall FUN_005fce20(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_71c [4];
  undefined1 local_718 [4];
  undefined4 local_714;
  undefined4 local_70c [128];
  undefined1 local_50c [12];
  undefined1 local_500 [12];
  undefined1 local_4f4 [4];
  undefined1 local_4f0 [12];
  undefined1 local_4e4 [16];
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc [2];
  undefined4 local_4b4 [128];
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
  undefined4 local_264;
  undefined1 local_25c [568];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e305c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_71c,s_AIManager_Triggers_Trigger__d_An_0074877c,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_10 = *(undefined4 *)(param_1 + 0x28);
    local_264 = 3;
    *param_2 = 3;
    FUN_00424770(local_25c);
  }
  else {
    FUN_00649920(local_71c,s_AIManager_Triggers_Trigger__d_NP_0074874c,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00406a80();
      local_18 = *(undefined4 *)(param_1 + 0x14);
      local_264 = 1;
      *param_2 = 1;
      FUN_00424770(local_25c);
    }
    else {
      if (0 < *(int *)(param_1 + 0x14)) {
        iVar2 = 0;
        do {
          FUN_00649920(local_71c,s_AIManager_Triggers_Trigger__d_NP_007486f0,
                       *(undefined4 *)(param_1 + 4),iVar2);
          local_4 = 2;
          uVar1 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar1);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            local_264 = 0xf;
            puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x18) + iVar2 * 4);
            local_24 = *puVar4;
            local_20 = puVar4[1];
            *param_2 = 0xf;
            FUN_00424770(local_25c);
            ExceptionList = local_c;
            return param_2;
          }
          FUN_00649920(local_718,s_AIManager_Triggers_Trigger__d_NP_007486c0,
                       *(undefined4 *)(param_1 + 4),iVar2);
          local_4 = 3;
          uVar1 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar1);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            local_714 = 0xc;
            local_4c8 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + iVar2 * 4) + 8);
            *param_2 = 0xc;
            puVar4 = local_70c;
            puVar5 = param_2 + 2;
            for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
            FUN_004357e0(local_50c);
            FUN_004357e0(local_500);
            FUN_00425250(local_4f4);
            FUN_004357e0(local_4f0);
            FUN_004357e0(local_4e4);
            param_2[0x90] = local_4d4;
            param_2[0x91] = local_4d0;
            param_2[0x92] = local_4cc;
            param_2[0x93] = local_4c8;
            param_2[0x94] = local_4c4;
            param_2[0x95] = local_4c0;
            ExceptionList = local_c;
            return param_2;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 0x14));
      }
      FUN_005f19b0(local_4bc,param_3);
      *param_2 = local_4bc[0];
      puVar4 = local_4b4;
      puVar5 = param_2 + 2;
      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_00480f60(local_2b4);
      FUN_00425250(local_29c);
      param_2[0x89] = local_298;
      param_2[0x8b] = local_290;
      param_2[0x8a] = local_294;
      FUN_004357e0(local_28c);
      param_2[0x90] = local_27c;
      param_2[0x91] = local_278;
      param_2[0x92] = local_274;
      param_2[0x93] = local_270;
      param_2[0x94] = local_26c;
      param_2[0x95] = local_268;
    }
  }
  ExceptionList = local_c;
  return param_2;
}

