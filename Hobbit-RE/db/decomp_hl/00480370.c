
void __thiscall FUN_00480370(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2740;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_00475120(param_2,param_3);
  FUN_00649920(&param_3,s_Action_d_Object_00727d34,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  local_4 = 0;
  uVar2 = FUN_00649940(uVar3,uVar4);
  FUN_006417e0(uVar2,uVar3,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  param_3 = *(undefined4 *)(param_1 + 0x28);
  FUN_00649920(&param_2,s_Action_d_AnimName_007286e0,uVar1);
  local_4 = 1;
  uVar4 = param_3;
  uVar3 = FUN_00649940(param_3);
  FUN_006414f0(uVar3,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_StartAnimating_00728834,uVar1);
  iVar5 = (*(int *)(param_1 + 0x54) << 0x1f) >> 0x1f;
  local_4 = 2;
  uVar4 = FUN_00649940(iVar5);
  FUN_00641760(uVar4,iVar5);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_Looping_00728820,uVar1);
  local_4 = 3;
  iVar5 = (*(int *)(param_1 + 0x54) << 0x1e) >> 0x1f;
  uVar4 = FUN_00649940(iVar5);
  FUN_00641760(uVar4,iVar5);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_HideWhenDone_00728808,uVar1);
  iVar5 = (*(int *)(param_1 + 0x54) << 0x1d) >> 0x1f;
  local_4 = 4;
  uVar4 = FUN_00649940(iVar5);
  FUN_00641760(uVar4,iVar5);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_10,s_Action_d_SetToEndOnSkip_007287f0,uVar1);
  iVar5 = (*(int *)(param_1 + 0x54) << 0x1c) >> 0x1f;
  local_4 = 5;
  uVar4 = FUN_00649940(iVar5);
  FUN_00641760(uVar4,iVar5);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

