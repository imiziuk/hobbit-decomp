
undefined4 * __thiscall FUN_005e36c0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_4c0 [4];
  undefined4 local_4bc;
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
  undefined4 local_264 [2];
  undefined4 local_25c [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e1511;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_4c0,s_AIManager_Actions_Action__d_NPC_C_00747330,*(undefined4 *)(param_1 + 4));
  iVar4 = 0;
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_270 = *(undefined4 *)(param_1 + 0x24);
    puVar3 = local_4b4;
    local_4bc = 1;
    *param_2 = 1;
  }
  else {
    if (0 < *(int *)(param_1 + 0x24)) {
      do {
        FUN_00649920(local_4c0,s_AIManager_Actions_Action__d_NPC___0074730c,
                     *(undefined4 *)(param_1 + 4),iVar4);
        local_4 = 1;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_27c = *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar4 * 8);
          local_4bc = 0xf;
          local_278 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 4 + iVar4 * 8);
          *param_2 = 0xf;
          puVar3 = local_4b4;
          puVar5 = param_2 + 2;
          for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          }
          FUN_00480f60(local_2b4);
          FUN_00425250(local_29c);
          FUN_004357e0(local_298);
          FUN_004357e0(local_28c);
          param_2[0x92] = local_274;
          param_2[0x90] = local_27c;
          param_2[0x91] = local_278;
          param_2[0x95] = local_268;
          param_2[0x93] = local_270;
          param_2[0x94] = local_26c;
          ExceptionList = local_c;
          return param_2;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x24));
    }
    FUN_00649920(local_4c0,s_AIManager_Actions_Action__d_Do_R_00747798,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 2;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      local_4bc = 3;
      local_268 = *(undefined4 *)(param_1 + 0x18);
      *param_2 = 3;
      puVar3 = local_4b4;
      puVar5 = param_2 + 2;
      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_00480f60(local_2b4);
      FUN_00425250(local_29c);
      FUN_004357e0(local_298);
      FUN_004357e0(local_28c);
      param_2[0x91] = local_278;
      param_2[0x90] = local_27c;
      param_2[0x92] = local_274;
      param_2[0x94] = local_26c;
      param_2[0x93] = local_270;
      param_2[0x95] = local_268;
      ExceptionList = local_c;
      return param_2;
    }
    FUN_005ccdb0(local_264,param_3);
    puVar3 = local_25c;
    *param_2 = local_264[0];
  }
  FUN_00424770(puVar3);
  ExceptionList = local_c;
  return param_2;
}

