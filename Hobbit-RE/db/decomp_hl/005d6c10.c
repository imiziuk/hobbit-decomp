
undefined4 * __thiscall FUN_005d6c10(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_724 [4];
  undefined1 local_720 [4];
  undefined1 local_71c [4];
  undefined1 local_718 [4];
  undefined4 local_714;
  undefined4 local_70c [127];
  undefined1 local_50d;
  undefined1 local_50c [12];
  undefined1 local_500 [12];
  undefined1 local_4f4;
  undefined1 local_4f3;
  undefined1 local_4f2;
  undefined1 local_4f1;
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
  undefined4 local_270;
  undefined4 local_264 [2];
  undefined4 local_25c [128];
  undefined1 local_5c [12];
  undefined1 local_50 [12];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
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
  puStack_8 = &LAB_006e07a7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_724,s_AIManager_Actions_Action__d_Spaw_0074701c,*(undefined4 *)(param_1 + 4));
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
        FUN_00649920(local_724,s_AIManager_Actions_Action__d_Spaw_00746fc8,
                     *(undefined4 *)(param_1 + 4),iVar4);
        local_4 = 1;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00406a80();
          local_4bc = 0xf;
          iVar2 = *(int *)(*(int *)(param_1 + 0x24) + iVar4 * 4);
          local_27c = *(undefined4 *)(iVar2 + 0x20);
          local_278 = *(undefined4 *)(iVar2 + 0x24);
          *param_2 = 0xf;
          FUN_00424770(local_4b4);
          ExceptionList = local_c;
          return param_2;
        }
        FUN_00649920(local_718,s_AIManager_Actions_Action__d_Spaw_00746f98,
                     *(undefined4 *)(param_1 + 4),iVar4);
        local_4 = 2;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00406a80();
          local_4bc = 0xf;
          iVar2 = *(int *)(*(int *)(param_1 + 0x24) + iVar4 * 4);
          local_27c = *(undefined4 *)(iVar2 + 0x28);
          local_278 = *(undefined4 *)(iVar2 + 0x2c);
          *param_2 = 0xf;
          FUN_00424770(local_4b4);
          ExceptionList = local_c;
          return param_2;
        }
        FUN_00649920(local_71c,s_AIManager_Actions_Action__d_Spaw_00746f6c,
                     *(undefined4 *)(param_1 + 4),iVar4);
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00406a80();
          local_4bc = 0xf;
          iVar2 = *(int *)(*(int *)(param_1 + 0x24) + iVar4 * 4);
          local_27c = *(undefined4 *)(iVar2 + 0x30);
          local_278 = *(undefined4 *)(iVar2 + 0x34);
          *param_2 = 0xf;
          FUN_00424770(local_4b4);
          ExceptionList = local_c;
          return param_2;
        }
        FUN_00649920(local_720,s_AIManager_Actions_Action__d_Spaw_00746f3c,
                     *(undefined4 *)(param_1 + 4),iVar4);
        local_4 = 4;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_714 = 0xd;
          FUN_00647d70(local_70c,
                       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + iVar4 * 4) + 0x38),0x200)
          ;
          *param_2 = local_714;
          local_50d = 0;
          puVar3 = local_70c;
          puVar5 = param_2 + 2;
          for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          }
          FUN_004357e0(local_50c);
          FUN_004357e0(local_500);
          *(undefined1 *)((int)param_2 + 0x223) = local_4f1;
          *(undefined1 *)((int)param_2 + 0x222) = local_4f2;
          *(undefined1 *)(param_2 + 0x88) = local_4f4;
          *(undefined1 *)((int)param_2 + 0x221) = local_4f3;
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
    *(undefined1 *)((int)param_2 + 0x222) = local_42;
    *(undefined1 *)((int)param_2 + 0x223) = local_41;
    *(undefined1 *)((int)param_2 + 0x221) = local_43;
    *(undefined1 *)(param_2 + 0x88) = local_44;
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

