
undefined4 * __thiscall FUN_005ffa30(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_4ec [4];
  undefined4 local_4e8;
  undefined4 local_4e0 [127];
  undefined1 local_2e1;
  undefined1 local_2e0 [12];
  undefined1 local_2d4 [12];
  undefined1 local_2c8 [4];
  undefined1 local_2c4 [12];
  undefined1 local_2b8 [16];
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined1 local_290 [44];
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
  puStack_8 = &LAB_006e337c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_4ec,s_AIManager_Triggers_Trigger__d_Da_00748958,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_2a8 = *(undefined4 *)(param_1 + 0x10);
    local_2a4 = *(undefined4 *)(param_1 + 0x14);
    local_4e8 = 0x10;
    *param_2 = 0x10;
    FUN_00424770(local_4e0);
  }
  else {
    FUN_00649920(local_4ec,s_AIManager_Triggers_Trigger__d_Da_00748930,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      local_2a8 = *(undefined4 *)(param_1 + 0x18);
      local_2a4 = *(undefined4 *)(param_1 + 0x1c);
      local_4e8 = 0x10;
      *param_2 = 0x10;
      FUN_00424770(local_4e0);
    }
    else {
      uVar1 = FUN_005b8a30(local_290,*(undefined4 *)(param_1 + 0x4c));
      local_4 = 2;
      FUN_0064a320(uVar1);
      local_4 = 0xffffffff;
      FUN_00649ba0();
      FUN_00649920(local_4ec,s_AIManager_Triggers_Trigger__d_Pa_00748908,
                   *(undefined4 *)(param_1 + 4));
      local_4 = 3;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        local_4e8 = 0xd;
        FUN_00647d70(local_4e0,DAT_007cc5b8,0x200);
        *param_2 = local_4e8;
        local_2e1 = 0;
        puVar3 = local_4e0;
        puVar4 = param_2 + 2;
        for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        FUN_004357e0(local_2e0);
        FUN_004357e0(local_2d4);
        FUN_00425250(local_2c8);
        FUN_004357e0(local_2c4);
        FUN_004357e0(local_2b8);
        param_2[0x90] = local_2a8;
        param_2[0x91] = local_2a4;
        param_2[0x92] = local_2a0;
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
        local_294 = local_10;
        local_29c = local_18;
        local_298 = local_14;
      }
      param_2[0x95] = local_294;
      param_2[0x93] = local_29c;
      param_2[0x94] = local_298;
    }
  }
  ExceptionList = local_c;
  return param_2;
}

