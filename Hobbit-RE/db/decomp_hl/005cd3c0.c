
void __thiscall FUN_005cd3c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dfb28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_005cc3d0(param_2);
  FUN_00649920(&param_2,s_Action_dSwitchGuid_00746724,*(undefined4 *)(param_1 + 4));
  iVar2 = param_1 + 0x18;
  local_4 = 0;
  uVar1 = FUN_00649940(iVar2);
  FUN_006405e0(uVar1,iVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_Action_dSwitchOn_00746710,*(undefined4 *)(param_1 + 4));
  iVar2 = param_1 + 0x20;
  local_4 = 1;
  uVar1 = FUN_00649940(iVar2);
  FUN_006405b0(uVar1,iVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_10,s_Action_dToggle_00746700,*(undefined4 *)(param_1 + 4));
  param_1 = param_1 + 0x24;
  local_4 = 2;
  uVar1 = FUN_00649940(param_1);
  FUN_006405b0(uVar1,param_1);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

