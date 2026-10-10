
undefined4 * __thiscall FUN_005dea20(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_4c0 [4];
  undefined4 local_4bc;
  undefined4 local_4b4 [128];
  undefined1 local_2b4 [24];
  undefined1 local_29c;
  undefined1 local_29b;
  undefined1 local_29a;
  undefined1 local_299;
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
  puStack_8 = &LAB_006e100c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_4c0,s_AIManager_Actions_Action__d_Targ_00747594,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_27c = *(undefined4 *)(param_1 + 0x38);
    local_278 = *(undefined4 *)(param_1 + 0x3c);
    local_4bc = 0xf;
    *param_2 = 0xf;
    FUN_00424770(local_4b4);
  }
  else {
    FUN_00649920(local_4c0,s_AIManager_Actions_Action__d_Sele_00747564,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00406a80();
      local_270 = *(undefined4 *)(param_1 + 0x34);
      local_4bc = 0xc;
      *param_2 = 0xc;
      FUN_00424770(local_4b4);
    }
    else {
      FUN_00649920(local_4c0,s_AIManager_Actions_Action__d_Cine_00747490,
                   *(undefined4 *)(param_1 + 4));
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00406a80();
        local_270 = *(undefined4 *)(param_1 + 0x48);
        local_4bc = 1;
        *param_2 = 1;
        FUN_00424770(local_4b4);
      }
      else {
        iVar2 = 0;
        if (0 < *(int *)(param_1 + 0x48)) {
LAB_005dec05:
          FUN_00649920(local_4c0,s_AIManager_Actions_Action__d_Cine_00747468,
                       *(undefined4 *)(param_1 + 4),iVar2);
          local_4 = 3;
          uVar1 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar1);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 != 0) goto code_r0x005dec5c;
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_27c = *(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar2 * 8);
          local_4bc = 0xf;
          local_278 = *(undefined4 *)(*(int *)(param_1 + 0x4c) + 4 + iVar2 * 8);
          *param_2 = 0xf;
          puVar4 = local_4b4;
          puVar5 = param_2 + 2;
          for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          FUN_00480f60(local_2b4);
          *(undefined1 *)((int)param_2 + 0x223) = local_299;
          *(undefined1 *)((int)param_2 + 0x222) = local_29a;
          *(undefined1 *)(param_2 + 0x88) = local_29c;
          *(undefined1 *)((int)param_2 + 0x221) = local_29b;
          FUN_004357e0(local_298);
          FUN_004357e0(local_28c);
          param_2[0x90] = local_27c;
          param_2[0x91] = local_278;
          param_2[0x92] = local_274;
          local_10 = local_268;
          local_18 = local_270;
          local_14 = local_26c;
          goto LAB_005ded20;
        }
LAB_005dec64:
        FUN_005ccdb0(local_264,param_3);
        *param_2 = local_264[0];
        puVar4 = local_25c;
        puVar5 = param_2 + 2;
        for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        FUN_00480f60(local_5c);
        FUN_00425250(local_44);
        FUN_004357e0(local_40);
        FUN_004357e0(local_34);
        param_2[0x90] = local_24;
        param_2[0x91] = local_20;
        param_2[0x92] = local_1c;
LAB_005ded20:
        param_2[0x95] = local_10;
        param_2[0x93] = local_18;
        param_2[0x94] = local_14;
      }
    }
  }
  ExceptionList = local_c;
  return param_2;
code_r0x005dec5c:
  iVar2 = iVar2 + 1;
  if (*(int *)(param_1 + 0x48) <= iVar2) goto LAB_005dec64;
  goto LAB_005dec05;
}

