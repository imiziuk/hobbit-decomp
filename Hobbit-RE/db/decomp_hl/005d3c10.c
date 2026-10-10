
void __thiscall FUN_005d3c10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 local_50 [4];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e0400;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc3d0(param_2);
  FUN_00649920(&param_2,s_Action_dItem_00746d2c,*(undefined4 *)(param_1 + 4));
  puVar2 = local_4c;
  local_4 = 0;
  uVar1 = FUN_00649940(puVar2);
  FUN_00640480(uVar1,puVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_0064a2e0(local_4c);
  FUN_00649920(&param_2,s_Action_dAdd_00746d20,*(undefined4 *)(param_1 + 4));
  iVar3 = param_1 + 0x44;
  local_4 = 1;
  uVar1 = FUN_00649940(iVar3);
  FUN_006405b0(uVar1,iVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_Action_dAmount_00746d10,*(undefined4 *)(param_1 + 4));
  iVar3 = param_1 + 0x48;
  local_4 = 2;
  uVar1 = FUN_00649940(iVar3);
  FUN_00640450(uVar1,iVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_50,s_Action_dSourceGuid_00746cfc,*(undefined4 *)(param_1 + 4));
  param_1 = param_1 + 0x50;
  local_4 = 3;
  uVar1 = FUN_00649940(param_1);
  FUN_006405e0(uVar1,param_1);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

