
undefined4 * __thiscall
FUN_0047c7d0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_268 [4];
  undefined4 local_264;
  undefined4 local_25c [127];
  undefined1 local_5d;
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
  puStack_8 = &LAB_006d224b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_268,s__s_Sound_00728370,param_3);
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_4,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    local_5c = 0x7f7fffff;
    local_58 = 0x7f7fffff;
    local_54 = 0x7f7fffff;
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    local_264 = 0xd;
    FUN_00647d70(local_25c,*(undefined4 *)(param_1 + 0x1c),0x200);
    *param_2 = local_264;
    local_5d = 0;
    puVar3 = local_25c;
    puVar4 = param_2 + 2;
    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
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
  ExceptionList = local_c;
  return param_2;
}

