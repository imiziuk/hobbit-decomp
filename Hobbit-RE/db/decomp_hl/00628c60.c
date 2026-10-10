
undefined4 * __thiscall FUN_00628c60(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_718 [4];
  undefined4 local_714;
  undefined4 local_70c [128];
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
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e4efc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00406a80();
  FUN_00649920(local_718,s__s_FollowThisGUID_0074a2c4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    local_24 = *(undefined4 *)(param_1 + 0x60);
    local_20 = *(undefined4 *)(param_1 + 100);
    local_264 = 0xf;
    *param_2 = 0xf;
    FUN_00424770(local_25c);
  }
  else {
    FUN_00649920(local_718,s__s_Minion_Count_00748de4,*(undefined4 *)(param_1 + 0x10));
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00406a80();
      local_270 = *(undefined4 *)(param_1 + 0x70);
      local_4bc = 1;
      *param_2 = 1;
      FUN_00424770(local_4b4);
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x70)) {
        do {
          FUN_00649920(local_718,s__s_Minion__d_00748dd4,*(undefined4 *)(param_1 + 0x10),iVar2);
          local_4 = 2;
          uVar1 = FUN_00649940();
          iVar3 = FUN_00647e40(param_3,uVar1);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar3 == 0) {
            FUN_00406a80();
            local_4bc = 0xf;
            local_27c = *(undefined4 *)(*(int *)(param_1 + 0x74) + iVar2 * 8);
            local_278 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 4 + iVar2 * 8);
            *param_2 = 0xf;
            puVar4 = local_4b4;
            puVar5 = param_2 + 2;
            for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
            FUN_00480f60(local_2b4);
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
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 0x70));
      }
      FUN_00649920(local_718,s__s_Idle_Animation_Delay_0074a2d8,*(undefined4 *)(param_1 + 0x10));
      local_4 = 3;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        local_4c4 = *(undefined4 *)(param_1 + 0x54);
        local_714 = 2;
        *param_2 = 2;
        puVar4 = local_70c;
        puVar5 = param_2 + 2;
        for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
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
        param_2[0x92] = local_4cc;
        param_2[0x90] = local_4d4;
        param_2[0x91] = local_4d0;
        param_2[0x95] = local_4c0;
        param_2[0x93] = local_4c8;
        param_2[0x94] = local_4c4;
      }
      else {
        FUN_005bf9f0(param_2,param_3);
      }
    }
  }
  ExceptionList = local_c;
  return param_2;
}

