
undefined4 * __thiscall FUN_0060aec0(int param_1,undefined4 *param_2,undefined4 param_3)

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
  undefined4 local_25c [128];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
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
  puStack_8 = &LAB_006e3cc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_4c8,s__s_WightBossAttack_Delay_00748e5c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_26c = *(undefined4 *)(param_1 + 0xbc);
  }
  else {
    FUN_00649920(local_4c8,s__s_WightBossCastPercent_00748e44,*(undefined4 *)(param_1 + 0x10));
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00406a80();
      local_26c = *(undefined4 *)(param_1 + 0xd4);
    }
    else {
      FUN_00649920(local_4c8,s__s_WightBossAttack_Radius_00748e28,*(undefined4 *)(param_1 + 0x10));
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00406a80();
        local_26c = *(undefined4 *)(param_1 + 0xc0);
      }
      else {
        FUN_00649920(local_4c8,s__s_WightBossAttack_Idle_Radius_00748e08,
                     *(undefined4 *)(param_1 + 0x10));
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00406a80();
          local_26c = *(undefined4 *)(param_1 + 0xc4);
        }
        else {
          FUN_00649920(local_4c8,s__s_Timeout_Duration_00748df4,*(undefined4 *)(param_1 + 0x10));
          local_4 = 4;
          uVar1 = FUN_00649940();
          iVar2 = FUN_00647e40(param_3,uVar1);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar2 != 0) {
            FUN_00649920(local_4c8,s__s_Minion_Count_00748de4,*(undefined4 *)(param_1 + 0x10));
            local_4 = 5;
            uVar1 = FUN_00649940();
            iVar2 = FUN_00647e40(param_3,uVar1);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar2 == 0) {
              FUN_00406a80();
              local_270 = *(undefined4 *)(param_1 + 0x94);
              local_4bc = 1;
              *param_2 = 1;
              FUN_00424770(local_4b4);
              ExceptionList = local_c;
              return param_2;
            }
            iVar2 = 0;
            if (0 < *(int *)(param_1 + 0x94)) {
              do {
                FUN_00649920(local_4c8,s__s_Minion__d_00748dd4,*(undefined4 *)(param_1 + 0x10),iVar2
                            );
                local_4 = 6;
                uVar1 = FUN_00649940();
                iVar3 = FUN_00647e40(param_3,uVar1);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar3 == 0) {
                  FUN_00406a80();
                  local_4bc = 0xf;
                  puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x98) + iVar2 * 4);
                  local_27c = *puVar4;
                  local_278 = puVar4[1];
                  *param_2 = 0xf;
                  FUN_00424770(local_4b4);
                  ExceptionList = local_c;
                  return param_2;
                }
                FUN_00649920(local_4c0,s__s_Spawn_Volume__d_00748dc0,*(undefined4 *)(param_1 + 0x10)
                             ,iVar2);
                local_4 = 7;
                uVar1 = FUN_00649940();
                iVar3 = FUN_00647e40(param_3,uVar1);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar3 == 0) {
                  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                  local_4bc = 0xf;
                  iVar2 = *(int *)(*(int *)(param_1 + 0x98) + iVar2 * 4);
                  local_27c = *(undefined4 *)(iVar2 + 8);
                  local_278 = *(undefined4 *)(iVar2 + 0xc);
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
                  ExceptionList = local_c;
                  return param_2;
                }
                FUN_00649920(local_4c4,s__s_Facing_Volume__d_00748dac,
                             *(undefined4 *)(param_1 + 0x10),iVar2);
                local_4 = 8;
                uVar1 = FUN_00649940();
                iVar3 = FUN_00647e40(param_3,uVar1);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar3 == 0) {
                  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                  local_264 = 0xf;
                  iVar2 = *(int *)(*(int *)(param_1 + 0x98) + iVar2 * 4);
                  local_24 = *(undefined4 *)(iVar2 + 0x10);
                  local_20 = *(undefined4 *)(iVar2 + 0x14);
                  *param_2 = 0xf;
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
                  param_2[0x85] = local_50;
                  param_2[0x86] = local_4c;
                  param_2[0x87] = local_48;
                  *(undefined1 *)((int)param_2 + 0x223) = local_41;
                  *(undefined1 *)((int)param_2 + 0x222) = local_42;
                  *(undefined1 *)((int)param_2 + 0x221) = local_43;
                  *(undefined1 *)(param_2 + 0x88) = local_44;
                  param_2[0x89] = local_40;
                  param_2[0x8a] = local_3c;
                  param_2[0x8b] = local_38;
                  param_2[0x8c] = local_34;
                  param_2[0x8d] = local_30;
                  param_2[0x8e] = local_2c;
                  param_2[0x92] = local_1c;
                  param_2[0x93] = local_18;
                  param_2[0x94] = local_14;
                  param_2[0x90] = local_24;
                  param_2[0x91] = local_20;
                  param_2[0x95] = local_10;
                  ExceptionList = local_c;
                  return param_2;
                }
                iVar2 = iVar2 + 1;
              } while (iVar2 < *(int *)(param_1 + 0x94));
            }
            FUN_005bf9f0(param_2,param_3);
            ExceptionList = local_c;
            return param_2;
          }
          FUN_00406a80();
          local_26c = *(undefined4 *)(param_1 + 0xd8);
        }
      }
    }
  }
  local_4bc = 2;
  *param_2 = 2;
  FUN_00424770(local_4b4);
  ExceptionList = local_c;
  return param_2;
}

