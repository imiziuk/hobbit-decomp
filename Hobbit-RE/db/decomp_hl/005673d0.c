
undefined4 * __thiscall
FUN_005673d0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_4c0 [4];
  undefined4 local_4bc;
  undefined4 local_4b4 [128];
  undefined1 local_2b4 [12];
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
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db13b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_4c0,s_AI_Tweaks_Goal_List__d_Goal__d_M_0073f554,param_4,param_5);
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    local_10 = (*(int *)(param_1 + 4) << 0x1e) >> 0x1f;
    local_264 = 3;
    *param_2 = 3;
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
  else {
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    local_4bc = 0;
    *param_2 = 0;
    puVar3 = local_4b4;
    puVar4 = param_2 + 2;
    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_004357e0(local_2b4);
    FUN_004357e0(local_2a8);
    *(undefined1 *)((int)param_2 + 0x223) = local_299;
    *(undefined1 *)((int)param_2 + 0x222) = local_29a;
    *(undefined1 *)((int)param_2 + 0x221) = local_29b;
    *(undefined1 *)(param_2 + 0x88) = local_29c;
    param_2[0x89] = local_298;
    param_2[0x8a] = local_294;
    param_2[0x8b] = local_290;
    FUN_004357e0(local_28c);
    param_2[0x90] = local_27c;
    param_2[0x91] = local_278;
    param_2[0x92] = local_274;
    param_2[0x93] = local_270;
    param_2[0x94] = local_26c;
    param_2[0x95] = local_268;
  }
  ExceptionList = local_c;
  return param_2;
}

