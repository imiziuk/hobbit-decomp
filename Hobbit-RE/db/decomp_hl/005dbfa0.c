
void __thiscall FUN_005dbfa0(int param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006e0d78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005cc3d0(param_2);
  FUN_00649920(&param_2,s_Action_dStringID_0074739c,*(undefined4 *)(param_1 + 4));
  puVar2 = local_4c;
  local_4 = 0;
  uVar1 = FUN_00649940(puVar2);
  FUN_00640480(uVar1,puVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_Action_dScroll_0074738c,*(undefined4 *)(param_1 + 4));
  iVar3 = param_1 + 0x70;
  local_4 = 1;
  uVar1 = FUN_00649940(iVar3);
  FUN_006405b0(uVar1,iVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_50,s_Action_dDelayTime_00747378,*(undefined4 *)(param_1 + 4));
  param_1 = param_1 + 0x18;
  local_4 = 2;
  uVar1 = FUN_00649940(param_1);
  FUN_00640420(uVar1,param_1);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_0064a2e0(local_4c);
  ExceptionList = local_c;
  return;
}

