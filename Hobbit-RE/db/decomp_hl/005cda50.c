
undefined4 * __thiscall FUN_005cda50(int param_1,undefined4 *param_2,undefined4 param_3)

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
  undefined4 local_4bc [2];
  undefined4 local_4b4 [128];
  undefined1 local_2b4 [24];
  undefined1 local_29c [4];
  undefined1 local_298 [12];
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
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dfbd1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_718,s_AIManager_Actions_Action__d_Swit_007467a0,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    local_24 = *(undefined4 *)(param_1 + 0x18);
    local_20 = *(undefined4 *)(param_1 + 0x1c);
    local_264 = 0xf;
    *param_2 = 0xf;
    FUN_00424770(local_25c);
  }
  else {
    FUN_00649920(local_718,s_AIManager_Actions_Action__d_Swit_00746778,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      local_10 = *(undefined4 *)(param_1 + 0x20);
      local_264 = 3;
      *param_2 = 3;
      FUN_00424770(local_25c);
    }
    else {
      FUN_00649920(local_718,s_AIManager_Actions_Action__d_Togg_00746738,
                   *(undefined4 *)(param_1 + 4));
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        local_714 = 3;
        local_4c0 = *(undefined4 *)(param_1 + 0x24);
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
        FUN_005ccdb0(local_4bc,param_3);
        *param_2 = local_4bc[0];
        puVar3 = local_4b4;
        puVar4 = param_2 + 2;
        for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        FUN_00480f60(local_2b4);
        FUN_00425250(local_29c);
        FUN_004357e0(local_298);
        FUN_004357e0(local_28c);
        param_2[0x90] = local_27c;
        param_2[0x91] = local_278;
        param_2[0x92] = local_274;
        local_4c0 = local_268;
        local_4c8 = local_270;
        local_4c4 = local_26c;
      }
      param_2[0x95] = local_4c0;
      param_2[0x93] = local_4c8;
      param_2[0x94] = local_4c4;
    }
  }
  ExceptionList = local_c;
  return param_2;
}

