
undefined4 * __thiscall
FUN_0047c210(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_268 [4];
  undefined4 local_264;
  undefined4 local_25c [128];
  undefined1 local_5c [12];
  undefined1 local_50 [12];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
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
  puStack_8 = &LAB_006d21d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_268,s__s_FxObject_00728314,param_3);
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_4,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    local_24 = *(undefined4 *)(param_1 + 0x20);
    local_264 = 0xf;
    local_20 = *(undefined4 *)(param_1 + 0x24);
    *param_2 = 0xf;
    puVar3 = local_25c;
    puVar4 = param_2 + 2;
    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_004357e0(local_5c);
    FUN_004357e0(local_50);
    FUN_00425250(&local_44);
    FUN_004357e0(&local_40);
  }
  else {
    FUN_00649920(local_268,s__s_Expire_00728308,param_3);
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_4,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 != 0) {
      FUN_00474d50(param_2,param_3,param_4);
      ExceptionList = local_c;
      return param_2;
    }
    FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    local_264 = 2;
    local_14 = *(undefined4 *)(param_1 + 0x28);
    *param_2 = 2;
    puVar3 = local_25c;
    puVar4 = param_2 + 2;
    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_004357e0(local_5c);
    FUN_004357e0(local_50);
    *(undefined1 *)((int)param_2 + 0x223) = local_41;
    *(undefined1 *)((int)param_2 + 0x222) = local_42;
    *(undefined1 *)((int)param_2 + 0x221) = local_43;
    *(undefined1 *)(param_2 + 0x88) = local_44;
    param_2[0x89] = local_40;
    param_2[0x8a] = local_3c;
    param_2[0x8b] = local_38;
  }
  FUN_004357e0(local_34);
  param_2[0x90] = local_24;
  param_2[0x91] = local_20;
  param_2[0x92] = local_1c;
  param_2[0x93] = local_18;
  param_2[0x94] = local_14;
  param_2[0x95] = local_10;
  ExceptionList = local_c;
  return param_2;
}

