
undefined4 * __thiscall FUN_00634570(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_4c0 [4];
  undefined4 local_4bc;
  undefined4 local_4b4 [128];
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
  undefined1 local_28c [16];
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
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
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e56d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_4c0,s__s_Cover_NavPoint_0074a560,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    local_24 = *(undefined4 *)(param_1 + 0x48);
    local_264 = 0xf;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    *param_2 = 0xf;
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
    param_2[0x92] = local_1c;
    param_2[0x90] = local_24;
    param_2[0x91] = local_20;
    param_2[0x95] = local_10;
    param_2[0x93] = local_18;
    param_2[0x94] = local_14;
  }
  else {
    FUN_00649920(local_4c0,s__s_Minimum_Cover_Time_0074a548,*(undefined4 *)(param_1 + 0x10));
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      local_2b4 = 0x7f7fffff;
      local_2b0 = 0x7f7fffff;
      local_2ac = 0x7f7fffff;
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      local_4bc = 2;
      local_26c = *(undefined4 *)(param_1 + 0x54);
      *param_2 = 2;
      puVar3 = local_4b4;
      puVar4 = param_2 + 2;
      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_004357e0(&local_2b4);
      FUN_004357e0(local_2a8);
      *(undefined1 *)((int)param_2 + 0x223) = local_299;
      *(undefined1 *)((int)param_2 + 0x222) = local_29a;
      *(undefined1 *)((int)param_2 + 0x221) = local_29b;
      *(undefined1 *)(param_2 + 0x88) = local_29c;
      param_2[0x89] = local_298;
      param_2[0x8a] = local_294;
      param_2[0x8b] = local_290;
      FUN_004357e0(local_28c);
      param_2[0x92] = local_274;
      param_2[0x90] = local_27c;
      param_2[0x91] = local_278;
      param_2[0x95] = local_268;
      param_2[0x93] = local_270;
      param_2[0x94] = local_26c;
    }
    else {
      FUN_005bf9f0(param_2,param_3);
    }
  }
  ExceptionList = local_c;
  return param_2;
}

