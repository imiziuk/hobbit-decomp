
undefined4 * __thiscall FUN_005f19b0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
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
  int local_4c0;
  undefined4 local_4bc;
  undefined1 local_4b4 [588];
  int local_268;
  undefined4 local_264;
  undefined1 local_25c [592];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e2401;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_718,s_AIManager_Triggers_Trigger__d_Is_00748078,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_268 = (*(int *)(param_1 + 8) << 0x1f) >> 0x1f;
    local_4bc = 3;
    *param_2 = 3;
    puVar5 = local_4b4;
  }
  else {
    FUN_00649920(local_718,s_AIManager_Triggers_Trigger__d_St_007480d4,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      local_268 = (*(int *)(param_1 + 8) << 0x1e) >> 0x1f;
      puVar5 = local_4b4;
      local_4bc = 3;
      *param_2 = 3;
    }
    else {
      FUN_00649920(local_718,s_AIManager_Triggers_Trigger__d_Tr_007480a4,
                   *(undefined4 *)(param_1 + 4));
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        local_4c0 = (*(int *)(param_1 + 8) << 0x1d) >> 0x1f;
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
        param_2[0x93] = local_4c8;
        param_2[0x94] = local_4c4;
        param_2[0x95] = local_4c0;
        ExceptionList = local_c;
        return param_2;
      }
      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      local_264 = 0;
      *param_2 = 0;
      puVar5 = local_25c;
    }
  }
  FUN_00424770(puVar5);
  ExceptionList = local_c;
  return param_2;
}

