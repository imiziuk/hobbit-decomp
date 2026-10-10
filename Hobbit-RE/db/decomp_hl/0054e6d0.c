
undefined4 __thiscall FUN_0054e6d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00647d10(param_1 + 0x28,param_2);
  FUN_006aafd0(s_subtitlepackage_0073d0e0);
  uVar1 = FUN_0052ac90();
  FUN_00649920(&param_2,s_SubTitles__s_0073d0f0,uVar1);
  local_4 = 0;
  uVar1 = FUN_00649940();
  uVar2 = FUN_005496c0(uVar2,uVar1);
  uVar2 = FUN_006aae30(s_subtitlepackage_0073d0e0,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return uVar2;
}

