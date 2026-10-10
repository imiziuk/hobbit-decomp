
void __thiscall FUN_005e8ed0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e1b60;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_005cc3d0(param_2);
  FUN_00649920(&param_2,s_Action_dObject_00747238,*(undefined4 *)(param_1 + 4));
  iVar2 = param_1 + 0x18;
  local_4 = 0;
  uVar1 = FUN_00649940(iVar2);
  FUN_006405e0(uVar1,iVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_Action_dCollides_00747ac0,*(undefined4 *)(param_1 + 4));
  iVar2 = param_1 + 0x20;
  local_4 = 1;
  uVar1 = FUN_00649940(iVar2);
  FUN_006405b0(uVar1,iVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_Action_dBilboCollides_00747aa8,*(undefined4 *)(param_1 + 4));
  iVar2 = param_1 + 0x24;
  local_4 = 2;
  uVar1 = FUN_00649940(iVar2);
  FUN_006405b0(uVar1,iVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_10,s_Action_dNPCCollides_00747a94,*(undefined4 *)(param_1 + 4));
  param_1 = param_1 + 0x28;
  local_4 = 3;
  uVar1 = FUN_00649940(param_1);
  FUN_006405b0(uVar1,param_1);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

