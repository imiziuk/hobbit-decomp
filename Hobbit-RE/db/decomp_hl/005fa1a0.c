
void __thiscall FUN_005fa1a0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_50 [4];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e2d50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_50,s_NPC_d_00748398,*(undefined4 *)(param_1 + 4));
  iVar3 = param_1 + 0x10;
  local_4 = 0;
  uVar2 = FUN_00649940(iVar3);
  uVar1 = param_2;
  FUN_006405e0(uVar2,iVar3);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_GoalList_d_007485cc,*(undefined4 *)(param_1 + 4));
  puVar4 = local_4c;
  local_4 = 1;
  uVar2 = FUN_00649940(puVar4);
  FUN_00640480(uVar2,puVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_0064a2e0(local_4c);
  FUN_005f1cf0(uVar1);
  ExceptionList = local_c;
  return;
}

