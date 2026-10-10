
undefined4 __thiscall
FUN_00509bf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6cb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_006a2400(param_2,param_3,param_4,param_5,param_6,param_7,0);
  uVar2 = FUN_006a3320(0);
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  FUN_006a2bd0(uVar2);
  uVar2 = FUN_0052ac90();
  FUN_00649920(&param_7,s_strings__s_00723ad8,uVar2);
  local_4 = 0;
  uVar2 = FUN_00649940();
  uVar2 = FUN_005496c0(s_credits_bin_007328d8,uVar2);
  FUN_006aae30(s_credits_007328d0,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  uVar2 = FUN_006aae00(s_credits_007328d0);
  *(undefined4 *)(param_1 + 0x178) = uVar2;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  FUN_0050a280(0,0);
  *(undefined4 *)(param_1 + 0x188) = 0;
  ExceptionList = local_c;
  return uVar1;
}

