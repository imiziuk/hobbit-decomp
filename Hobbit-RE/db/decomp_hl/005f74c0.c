
undefined4 * __thiscall FUN_005f74c0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_4c0 [4];
  undefined4 local_4bc;
  undefined4 local_4b4 [127];
  undefined1 local_2b5;
  undefined1 local_2b4 [12];
  undefined1 local_2a8 [12];
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
  undefined1 local_5c [12];
  undefined1 local_50 [12];
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
  puStack_8 = &LAB_006e2a46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_4c0,s_AIManager_Triggers_Trigger__d_NP_007483cc,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    local_27c = *(undefined4 *)(param_1 + 0x10);
    local_278 = *(undefined4 *)(param_1 + 0x14);
    local_4bc = 0xf;
    *param_2 = 0xf;
    FUN_00424770(local_4b4);
  }
  else {
    FUN_00649920(local_4c0,s_AIManager_Triggers_Trigger__d_Ac_007484d0,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      local_4bc = 0xd;
      FUN_00647d70(local_4b4,*(undefined4 *)(param_1 + 0x18),0x200);
      local_2b5 = 0;
      *param_2 = local_4bc;
      puVar3 = local_4b4;
      puVar4 = param_2 + 2;
      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_004357e0(local_2b4);
      FUN_004357e0(local_2a8);
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
    }
    else {
      FUN_005f19b0(local_264,param_3);
      *param_2 = local_264[0];
      puVar3 = local_25c;
      puVar4 = param_2 + 2;
      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_004357e0(local_5c);
      FUN_004357e0(local_50);
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
  }
  ExceptionList = local_c;
  return param_2;
}

