
undefined4 * __thiscall FUN_0060d650(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_4c0 [4];
  undefined4 local_4bc;
  undefined4 local_4b4 [127];
  undefined1 local_2b5;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined1 local_2a8 [12];
  undefined1 local_29c;
  undefined1 local_29b;
  undefined1 local_29a;
  undefined1 local_299;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined1 local_25c [511];
  undefined1 local_5d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e3f1c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_4c0,s__s_HitmeOverlay_0074901c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_264 = 0xd;
    FUN_00647d70(local_25c,*(undefined4 *)(param_1 + 0x50),0x200);
    local_5d = 0;
    *param_2 = local_264;
    FUN_00424770(local_25c);
  }
  else {
    FUN_00649920(local_4c0,s__s_TargetHitmeOverlay_00749004,*(undefined4 *)(param_1 + 0x10));
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00406a80();
      local_264 = 0xd;
      FUN_00647d70(local_25c,*(undefined4 *)(param_1 + 0x7c),0x200);
      local_5d = 0;
      *param_2 = local_264;
      FUN_00424770(local_25c);
    }
    else {
      FUN_00649920(local_4c0,s__s_JumpHitmeOverlay_00748ff0,*(undefined4 *)(param_1 + 0x10));
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00406a80();
        local_264 = 0xd;
        FUN_00647d70(local_25c,*(undefined4 *)(param_1 + 0xa8),0x200);
        *param_2 = local_264;
        local_5d = 0;
        FUN_00424770(local_25c);
      }
      else {
        FUN_00649920(local_4c0,s__s_Quest_00748fe4,*(undefined4 *)(param_1 + 0x10));
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_4bc = 0xd;
          FUN_00647d70(local_4b4,*(undefined4 *)(param_1 + 0xd4),0x200);
          *param_2 = local_4bc;
          local_2b5 = 0;
          puVar3 = local_4b4;
          puVar4 = param_2 + 2;
          for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          param_2[0x82] = local_2b4;
          param_2[0x83] = local_2b0;
          param_2[0x84] = local_2ac;
          FUN_004357e0(local_2a8);
          *(undefined1 *)((int)param_2 + 0x223) = local_299;
          *(undefined1 *)((int)param_2 + 0x222) = local_29a;
          *(undefined1 *)((int)param_2 + 0x221) = local_29b;
          *(undefined1 *)(param_2 + 0x88) = local_29c;
          param_2[0x89] = local_298;
          param_2[0x8a] = local_294;
          param_2[0x8b] = local_290;
          param_2[0x8c] = local_28c;
          param_2[0x8d] = local_288;
          param_2[0x8e] = local_284;
          param_2[0x90] = local_27c;
          param_2[0x91] = local_278;
          param_2[0x92] = local_274;
          param_2[0x93] = local_270;
          param_2[0x94] = local_26c;
          param_2[0x95] = local_268;
        }
        else {
          FUN_005bf9f0(param_2,param_3);
        }
      }
    }
  }
  ExceptionList = local_c;
  return param_2;
}

