
undefined4 *
FUN_00569020(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_71c [4];
  int local_718;
  undefined4 local_714;
  undefined4 local_70c [127];
  undefined1 local_50d;
  undefined1 local_50c [24];
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
  int local_268;
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
  puStack_8 = &LAB_006db357;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_71c,s_AI_Tweaks_Goal_List__d_Goal__d_T_0073f5b0,param_3,param_4);
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_2,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_27c = *(undefined4 *)(local_718 + 0x10);
    local_278 = *(undefined4 *)(local_718 + 0x14);
    local_4bc = 0xf;
    *param_1 = 0xf;
    FUN_00424770(local_4b4);
  }
  else {
    FUN_00649920(local_71c,s_AI_Tweaks_Goal_List__d_Goal__d_A_0073f720,param_3,param_4);
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_2,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00406a80();
      local_270 = *(undefined4 *)(local_718 + 0x2c);
      local_4bc = 0xc;
      *param_1 = 0xc;
      FUN_00424770(local_4b4);
    }
    else {
      FUN_00649920(local_71c,s_AI_Tweaks_Goal_List__d_Goal__d_L_0073f6f0,param_3,param_4);
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_2,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00406a80();
        local_268 = (*(int *)(local_718 + 0x5c) << 0x1f) >> 0x1f;
        local_4bc = 3;
        *param_1 = 3;
        FUN_00424770(local_4b4);
      }
      else {
        FUN_00649920(local_71c,s_AI_Tweaks_Goal_List__d_Goal__d_L_0073f6c4,param_3,param_4);
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_2,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_268 = (*(int *)(local_718 + 0x5c) << 0x1e) >> 0x1f;
          local_4bc = 3;
          *param_1 = 3;
          FUN_00424770(local_4b4);
        }
        else {
          FUN_00649920(local_71c,s_AI_Tweaks_Goal_List__d_Goal__d_A_0073f698,param_3,param_4);
          local_4 = 4;
          uVar1 = FUN_00649940();
          iVar2 = FUN_00647e40(param_2,uVar1);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar2 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            local_714 = 0xd;
            FUN_00647d70(local_70c,*(undefined4 *)(local_718 + 0x30),0x200);
            local_50d = 0;
            *param_1 = local_714;
            puVar3 = local_70c;
            puVar4 = param_1 + 2;
            for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            FUN_00480f60(local_50c);
            *(undefined1 *)((int)param_1 + 0x223) = local_4f1;
            *(undefined1 *)((int)param_1 + 0x222) = local_4f2;
            *(undefined1 *)(param_1 + 0x88) = local_4f4;
            *(undefined1 *)((int)param_1 + 0x221) = local_4f3;
            FUN_004357e0(local_4f0);
            FUN_004357e0(local_4e4);
            param_1[0x90] = local_4d4;
            param_1[0x91] = local_4d0;
            param_1[0x92] = local_4cc;
          }
          else {
            FUN_005673d0(local_264,param_2,param_3,param_4);
            *param_1 = local_264[0];
            puVar3 = local_25c;
            puVar4 = param_1 + 2;
            for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            FUN_00480f60(local_5c);
            FUN_00425250(local_44);
            FUN_004357e0(local_40);
            FUN_004357e0(local_34);
            param_1[0x90] = local_24;
            param_1[0x91] = local_20;
            param_1[0x92] = local_1c;
            local_4c0 = local_10;
            local_4c8 = local_18;
            local_4c4 = local_14;
          }
          param_1[0x95] = local_4c0;
          param_1[0x93] = local_4c8;
          param_1[0x94] = local_4c4;
        }
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

