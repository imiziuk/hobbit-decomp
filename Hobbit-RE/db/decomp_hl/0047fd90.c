
undefined4 * __thiscall
FUN_0047fd90(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_4c0 [4];
  undefined4 local_4bc;
  undefined4 local_4b4 [127];
  undefined1 local_2b5;
  undefined1 local_2b4 [24];
  undefined1 local_29c [4];
  undefined1 local_298 [12];
  undefined1 local_28c [16];
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  int local_268;
  undefined4 local_264;
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
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2702;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_4c0,s__s_RigidInstance_007287dc,param_3);
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_4,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_27c = *(undefined4 *)(param_1 + 0x20);
    local_278 = *(undefined4 *)(param_1 + 0x24);
    local_4bc = 0x10;
    *param_2 = 0x10;
    FUN_00424770(local_4b4);
  }
  else {
    FUN_00649920(local_4c0,s__s_AnimationName_007287c8,param_3);
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_4,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00406a80();
      local_4bc = 4;
      FUN_00647d70(local_4b4,*(undefined4 *)(param_1 + 0x28),0x200);
      *param_2 = local_4bc;
      local_2b5 = 0;
      FUN_00424770(local_4b4);
    }
    else {
      FUN_00649920(local_4c0,s__s_Start_Animating_007287b4,param_3);
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_4,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        local_10 = (*(int *)(param_1 + 0x54) << 0x1f) >> 0x1f;
        local_264 = 3;
        *param_2 = 3;
        FUN_00424770(local_25c);
      }
      else {
        FUN_00649920(local_4c0,s__s_Looping_00727ed8,param_3);
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_4,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_10 = (*(int *)(param_1 + 0x54) << 0x1e) >> 0x1f;
          local_264 = 3;
          *param_2 = 3;
          FUN_00424770(local_25c);
        }
        else {
          FUN_00649920(local_4c0,s__s_HideAtShotEnd_007287a0,param_3);
          local_4 = 4;
          uVar1 = FUN_00649940();
          iVar2 = FUN_00647e40(param_4,uVar1);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar2 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            local_268 = (*(int *)(param_1 + 0x54) << 0x1d) >> 0x1f;
            local_4bc = 3;
            *param_2 = 3;
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
            param_2[0x93] = local_270;
            param_2[0x94] = local_26c;
            param_2[0x95] = local_268;
          }
          else {
            FUN_00649920(local_4c0,s__s_SetToEndOnSkip_0072878c,param_3);
            local_4 = 5;
            uVar1 = FUN_00649940();
            iVar2 = FUN_00647e40(param_4,uVar1);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar2 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              local_10 = (*(int *)(param_1 + 0x54) << 0x1c) >> 0x1f;
              local_264 = 3;
              *param_2 = 3;
              puVar3 = local_25c;
              puVar4 = param_2 + 2;
              for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar4 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar4 = puVar4 + 1;
              }
              FUN_00480f60(local_5c);
              FUN_00425250(local_44);
              FUN_004357e0(local_40);
              FUN_004357e0(local_34);
              param_2[0x90] = local_24;
              param_2[0x91] = local_20;
              param_2[0x92] = local_1c;
              param_2[0x93] = local_18;
              param_2[0x94] = local_14;
              param_2[0x95] = local_10;
            }
            else {
              FUN_00474d50(param_2,param_3,param_4);
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return param_2;
}

