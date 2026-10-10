
undefined4 * __thiscall FUN_005f3690(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_718 [4];
  undefined4 local_714;
  undefined4 local_70c [128];
  undefined1 local_50c [24];
  undefined1 local_4f4 [4];
  undefined1 local_4f0 [12];
  undefined1 local_4e4 [16];
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined1 local_4b4 [568];
  undefined4 local_27c;
  undefined4 local_278;
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
  puStack_8 = &LAB_006e265c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_718,s_AIManager_Triggers_Trigger__d_Vo_007482a4,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_27c = *(undefined4 *)(param_1 + 0x18);
    local_278 = *(undefined4 *)(param_1 + 0x1c);
    local_4bc = 0xf;
    *param_2 = 0xf;
    FUN_00424770(local_4b4);
  }
  else {
    FUN_00649920(local_718,s_AIManager_Triggers_Trigger__d_Ch_0074827c,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00406a80();
      local_27c = *(undefined4 *)(param_1 + 0x10);
      local_278 = *(undefined4 *)(param_1 + 0x14);
      local_4bc = 0xf;
      *param_2 = 0xf;
      FUN_00424770(local_4b4);
    }
    else {
      FUN_00649920(local_718,s_AIManager_Triggers_Trigger__d_Ap_0074824c,
                   *(undefined4 *)(param_1 + 4));
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        local_268 = *(undefined4 *)(param_1 + 0xc);
        local_4bc = 3;
        *param_2 = 3;
        FUN_00424770(local_4b4);
      }
      else {
        FUN_00649920(local_718,s_AIManager_Triggers_Trigger__d_Tr_00748210,
                     *(undefined4 *)(param_1 + 4));
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_4c0 = *(undefined4 *)(param_1 + 0x20);
          local_714 = 3;
          *param_2 = 3;
          puVar3 = local_70c;
          puVar4 = param_2 + 2;
          for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          FUN_00480f60(local_50c);
          FUN_00425250(local_4f4);
          FUN_004357e0(local_4f0);
          FUN_004357e0(local_4e4);
          param_2[0x90] = local_4d4;
          param_2[0x91] = local_4d0;
          param_2[0x92] = local_4cc;
        }
        else {
          FUN_005f19b0(local_264,param_3);
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
          local_4c8 = local_18;
          local_4c4 = local_14;
          local_4c0 = local_10;
        }
        param_2[0x93] = local_4c8;
        param_2[0x94] = local_4c4;
        param_2[0x95] = local_4c0;
      }
    }
  }
  ExceptionList = local_c;
  return param_2;
}

