
undefined4 * __thiscall FUN_0062ab40(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
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
  puStack_8 = &LAB_006e505e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_4c0,s__s_Attack_Delay_00749e1c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_26c = *(undefined4 *)(param_1 + 0x70);
  }
  else {
    FUN_00649920(local_4c0,s__s_Attack_Radius_00749e2c,*(undefined4 *)(param_1 + 0x10));
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00406a80();
      local_26c = *(undefined4 *)(param_1 + 0x74);
    }
    else {
      FUN_00649920(local_4c0,s__s_Attack_Idle_Radius_0074a080,*(undefined4 *)(param_1 + 0x10));
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00406a80();
        local_26c = *(undefined4 *)(param_1 + 0x78);
      }
      else {
        FUN_00649920(local_4c0,s__s_Attack_Height_0074a394,*(undefined4 *)(param_1 + 0x10));
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00406a80();
          local_26c = *(undefined4 *)(param_1 + 0x7c);
        }
        else {
          FUN_00649920(local_4c0,s__s_Jump_Attack_Percent_0074a37c,*(undefined4 *)(param_1 + 0x10));
          local_4 = 4;
          uVar1 = FUN_00649940();
          iVar2 = FUN_00647e40(param_3,uVar1);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar2 == 0) {
            FUN_00406a80();
            local_270 = *(undefined4 *)(param_1 + 0x80);
            local_4bc = 1;
            *param_2 = 1;
            FUN_00424770(local_4b4);
            ExceptionList = local_c;
            return param_2;
          }
          FUN_00649920(local_4c0,s__s_Jump_Attack_Radius_0074a364,*(undefined4 *)(param_1 + 0x10));
          local_4 = 5;
          uVar1 = FUN_00649940();
          iVar2 = FUN_00647e40(param_3,uVar1);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar2 == 0) {
            FUN_00406a80();
            local_26c = *(undefined4 *)(param_1 + 0x84);
          }
          else {
            FUN_00649920(local_4c0,s__s_Minimum_Jump_Attack_Radius_0074a344,
                         *(undefined4 *)(param_1 + 0x10));
            local_4 = 6;
            uVar1 = FUN_00649940();
            iVar2 = FUN_00647e40(param_3,uVar1);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar2 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              local_26c = *(undefined4 *)(param_1 + 0x88);
            }
            else {
              FUN_00649920(local_4c0,s__s_Timeout_Duration_00748df4,*(undefined4 *)(param_1 + 0x10))
              ;
              local_4 = 7;
              uVar1 = FUN_00649940();
              iVar2 = FUN_00647e40(param_3,uVar1);
              local_4 = 0xffffffff;
              FUN_00649950();
              if (iVar2 != 0) {
                FUN_00649920(local_4c0,s__s_Ranged_Attack_Percent_0074a328,
                             *(undefined4 *)(param_1 + 0x10));
                local_4 = 8;
                uVar1 = FUN_00649940();
                iVar2 = FUN_00647e40(param_3,uVar1);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar2 == 0) {
                  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
                  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                  local_270 = *(undefined4 *)(param_1 + 0x9c);
                  local_4bc = 1;
                  *param_2 = 1;
                  puVar3 = local_4b4;
                  puVar4 = param_2 + 2;
                  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *puVar4 = *puVar3;
                    puVar3 = puVar3 + 1;
                    puVar4 = puVar4 + 1;
                  }
                  FUN_00480f60(local_2b4);
                  *(undefined1 *)((int)param_2 + 0x222) = local_29a;
                  *(undefined1 *)((int)param_2 + 0x223) = local_299;
                  *(undefined1 *)((int)param_2 + 0x221) = local_29b;
                  *(undefined1 *)(param_2 + 0x88) = local_29c;
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
                FUN_00649920(local_4c0,s__s_Health_Retreat_Percent_0074a30c,
                             *(undefined4 *)(param_1 + 0x10));
                local_4 = 9;
                uVar1 = FUN_00649940();
                iVar2 = FUN_00647e40(param_3,uVar1);
                local_4 = 0xffffffff;
                FUN_00649950();
                if (iVar2 == 0) {
                  local_5c = 0x7f7fffff;
                  local_58 = 0x7f7fffff;
                  local_54 = 0x7f7fffff;
                  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
                  local_18 = *(undefined4 *)(param_1 + 0xa0);
                  *param_2 = 1;
                  local_264 = 1;
                  puVar3 = local_25c;
                  puVar4 = param_2 + 2;
                  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *puVar4 = *puVar3;
                    puVar3 = puVar3 + 1;
                    puVar4 = puVar4 + 1;
                  }
                  param_2[0x82] = local_5c;
                  param_2[0x84] = local_54;
                  param_2[0x83] = local_58;
                  FUN_004357e0(local_50);
                  *(undefined1 *)((int)param_2 + 0x223) = local_41;
                  *(undefined1 *)(param_2 + 0x88) = local_44;
                  *(undefined1 *)((int)param_2 + 0x222) = local_42;
                  *(undefined1 *)((int)param_2 + 0x221) = local_43;
                  param_2[0x8b] = local_38;
                  param_2[0x89] = local_40;
                  param_2[0x8a] = local_3c;
                  param_2[0x8e] = local_2c;
                  param_2[0x8c] = local_34;
                  param_2[0x8d] = local_30;
                  param_2[0x92] = local_1c;
                  param_2[0x90] = local_24;
                  param_2[0x91] = local_20;
                  param_2[0x95] = local_10;
                  param_2[0x93] = local_18;
                  param_2[0x94] = local_14;
                  ExceptionList = local_c;
                  return param_2;
                }
                FUN_005bf9f0(param_2,param_3);
                ExceptionList = local_c;
                return param_2;
              }
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              local_26c = *(undefined4 *)(param_1 + 0x90);
            }
          }
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

