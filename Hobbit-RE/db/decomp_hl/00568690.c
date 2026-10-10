
void __thiscall FUN_00568690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  undefined1 local_a0 [4];
  uint local_9c;
  undefined1 local_98 [4];
  int local_94;
  undefined4 local_90;
  undefined1 local_8c [64];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db282;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00566fe0(param_2,param_3,param_4);
  FUN_00649920(local_a0,s_List_dGoal_dTarget_0073f59c,param_3,param_4);
  iVar3 = param_1 + 0x10;
  local_4 = 0;
  uVar1 = FUN_00649940(iVar3);
  FUN_006405e0(uVar1,iVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_a0,s_List_dGoal_dAnimType_0073f680,param_3,param_4);
  puVar4 = &local_90;
  local_4 = 1;
  uVar1 = FUN_00649940(puVar4);
  FUN_00640450(uVar1,puVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  *(undefined4 *)(param_1 + 0x2c) = local_90;
  FUN_00649920(local_a0,s_List_dGoal_dAnimName_0073f668,param_3,param_4);
  puVar5 = local_8c;
  local_4 = 2;
  uVar1 = FUN_00649940(puVar5);
  FUN_00640480(uVar1,puVar5);
  local_4 = 0xffffffff;
  FUN_00649950();
  local_94 = param_1 + 0x30;
  FUN_0064a2e0(local_8c);
  local_9c = (*(int *)(param_1 + 0x5c) << 0x1f) >> 0x1f;
  FUN_00649920(local_a0,s_List_dGoal_dLock_0073f654,param_3,param_4);
  puVar6 = &local_9c;
  local_4 = 3;
  uVar1 = FUN_00649940(puVar6);
  FUN_006405b0(uVar1,puVar6);
  local_4 = 0xffffffff;
  FUN_00649950();
  uVar2 = (*(uint *)(param_1 + 0x5c) ^ local_9c) & 1 ^ *(uint *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x5c) = uVar2;
  local_9c = (int)(uVar2 << 0x1e) >> 0x1f;
  FUN_00649920(local_a0,s_List_dGoal_dLookAhead_0073f63c,param_3,param_4);
  puVar6 = &local_9c;
  local_4 = 4;
  uVar1 = FUN_00649940(puVar6);
  FUN_006405b0(uVar1,puVar6);
  local_4 = 0xffffffff;
  FUN_00649950();
  *(uint *)(param_1 + 0x5c) =
       (local_9c * 2 ^ *(uint *)(param_1 + 0x5c)) & 2 ^ *(uint *)(param_1 + 0x5c);
  FUN_00649920(local_98,s_List_dGoal_dActionName_0073f624,param_3,param_4);
  puVar5 = local_4c;
  local_4 = 5;
  uVar1 = FUN_00649940(puVar5);
  FUN_00640480(uVar1,puVar5);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_0064a2e0(local_4c);
  ExceptionList = local_c;
  return;
}

