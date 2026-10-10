
void __thiscall FUN_005d7330(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_114 [4];
  undefined1 local_110 [4];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e0836;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc3d0(param_2);
  FUN_00649920(local_110,s_Action_dLink_00747108,*(undefined4 *)(param_1 + 4));
  puVar2 = local_10c;
  local_4 = 0;
  uVar1 = FUN_00649940(puVar2);
  FUN_00640480(uVar1,puVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_0064a2e0(local_10c);
  FUN_00649920(local_114,s_Action_dLinkState_007470f4,*(undefined4 *)(param_1 + 4));
  param_1 = param_1 + 0x44;
  local_4 = 1;
  uVar1 = FUN_00649940(param_1);
  FUN_00640450(uVar1,param_1);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

