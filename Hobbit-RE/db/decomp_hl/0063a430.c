
undefined4 * __thiscall FUN_0063a430(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_4c8 [4];
  undefined1 local_4c4 [4];
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
  undefined4 local_264;
  undefined4 local_25c [128];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [12];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
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
  puStack_8 = &LAB_006e5a6d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_4c8,s__s_Idle_Leash_Radius_0074a780,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_26c = *(undefined4 *)(param_1 + 100);
  }
  else {
    FUN_00649920(local_4c8,s__s_Idle_Animation_Delay_0074a2d8,*(undefined4 *)(param_1 + 0x10));
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00406a80();
      local_26c = *(undefined4 *)(param_1 + 0x68);
    }
    else {
      FUN_00649920(local_4c8,s__s_Wander_Delay_007490cc,*(undefined4 *)(param_1 + 0x10));
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 != 0) {
        FUN_00649920(local_4c8,s__s_Patrol_Point_Count_0074a768,*(undefined4 *)(param_1 + 0x10));
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00406a80();
          local_270 = *(undefined4 *)(param_1 + 0x50);
          local_4bc = 1;
          *param_2 = 1;
          FUN_00424770(local_4b4);
          ExceptionList = local_c;
          return param_2;
        }
        iVar2 = 0;
        if (0 < *(int *)(param_1 + 0x50)) {
          do {
            FUN_00649920(local_4c8,s__s_Patrol_Point__d_Patrol_Point_0074a748,
                         *(undefined4 *)(param_1 + 0x10),iVar2);
            local_4 = 4;
            uVar1 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar1);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              local_4bc = 0xf;
              puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x54) + iVar2 * 4);
              local_27c = *puVar4;
              local_278 = puVar4[1];
              *param_2 = 0xf;
              FUN_00424770(local_4b4);
              ExceptionList = local_c;
              return param_2;
            }
            FUN_00649920(local_4c0,s__s_Patrol_Point__d_Patrol_Pause_0074a728,
                         *(undefined4 *)(param_1 + 0x10),iVar2);
            local_4 = 5;
            uVar1 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar1);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              local_4bc = 2;
              local_26c = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x54) + iVar2 * 4) + 8);
              *param_2 = 2;
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
            FUN_00649920(local_4c4,s__s_Patrol_Point__d_Animation_0074a708,
                         *(undefined4 *)(param_1 + 0x10),iVar2);
            local_4 = 6;
            uVar1 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar1);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              local_264 = 0xc;
              local_18 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x54) + iVar2 * 4) + 0xc);
              *param_2 = 0xc;
              puVar4 = local_25c;
              puVar5 = param_2 + 2;
              for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar5 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar5 = puVar5 + 1;
              }
              param_2[0x82] = local_5c;
              param_2[0x83] = local_58;
              param_2[0x84] = local_54;
              FUN_004357e0(local_50);
              *(undefined1 *)((int)param_2 + 0x223) = local_41;
              *(undefined1 *)((int)param_2 + 0x221) = local_43;
              *(undefined1 *)((int)param_2 + 0x222) = local_42;
              *(undefined1 *)(param_2 + 0x88) = local_44;
              param_2[0x8a] = local_3c;
              param_2[0x89] = local_40;
              param_2[0x8b] = local_38;
              param_2[0x8d] = local_30;
              param_2[0x8c] = local_34;
              param_2[0x8e] = local_2c;
              param_2[0x91] = local_20;
              param_2[0x90] = local_24;
              param_2[0x92] = local_1c;
              param_2[0x94] = local_14;
              param_2[0x93] = local_18;
              param_2[0x95] = local_10;
              ExceptionList = local_c;
              return param_2;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(param_1 + 0x50));
        }
        FUN_005bf9f0(param_2,param_3);
        ExceptionList = local_c;
        return param_2;
      }
      FUN_00406a80();
      local_26c = *(undefined4 *)(param_1 + 0x6c);
    }
  }
  local_4bc = 2;
  *param_2 = 2;
  FUN_00424770(local_4b4);
  ExceptionList = local_c;
  return param_2;
}

