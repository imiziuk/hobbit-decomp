
void __thiscall FUN_005696c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_4;
  uVar3 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db3a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00566fe0(param_2,param_3,param_4);
  FUN_00649920(&param_4,s_List_dGoal_dActionName_0073f624,uVar3,uVar1);
  puVar4 = local_4c;
  local_4 = 0;
  uVar2 = FUN_00649940(puVar4);
  FUN_00640480(uVar2,puVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_0064a2e0(local_4c);
  FUN_00649920(&param_3,s_List_dGoal_dPlayTime_0073f794,uVar3,uVar1);
  param_1 = param_1 + 0x54;
  local_4 = 1;
  uVar3 = FUN_00649940(param_1);
  FUN_00640420(uVar3,param_1);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

