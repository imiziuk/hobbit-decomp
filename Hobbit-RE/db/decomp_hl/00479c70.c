
void __thiscall FUN_00479c70(int param_1,undefined4 param_2,int param_3)

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
  puStack_8 = &LAB_006d1e58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_00475120(param_2,param_3);
  FUN_00649920(&param_3,s_Action_d_CameraType_00728138,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  local_4 = 0;
  uVar2 = FUN_00649940(uVar4);
  FUN_00641480(uVar2,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_Target_00728128,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  local_4 = 1;
  uVar3 = FUN_00649940(uVar2,uVar4);
  FUN_006417e0(uVar3,uVar2,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_Relative_00728114,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  local_4 = 2;
  uVar2 = FUN_00649940(uVar4);
  FUN_00641760(uVar2,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_StartOrient_007280fc,uVar1);
  iVar5 = param_1 + 0x28;
  local_4 = 3;
  uVar4 = FUN_00649940(iVar5);
  FUN_00641600(uVar4,iVar5);
  local_4 = 0xffffffff;
  FUN_00649950();
  param_3 = param_1 + 0x28;
  if (*(int *)(param_1 + 0x6c) == 0) {
    param_3 = param_1 + 0x34;
  }
  FUN_00649920(&param_2,s_Action_d_EndOrient_007280e8,uVar1);
  local_4 = 4;
  iVar5 = param_3;
  uVar4 = FUN_00649940(param_3);
  FUN_00641600(uVar4,iVar5);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_StartOffset_007280d0,uVar1);
  iVar5 = param_1 + 0x40;
  local_4 = 5;
  uVar4 = FUN_00649940(iVar5);
  FUN_006412e0(uVar4,iVar5);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (*(int *)(param_1 + 0x6c) == 0) {
    param_3 = param_1 + 0x4c;
  }
  else {
    param_3 = param_1 + 0x40;
  }
  FUN_00649920(&param_2,s_Action_d_EndOffset_007280bc,uVar1);
  local_4 = 6;
  iVar5 = param_3;
  uVar4 = FUN_00649940(param_3);
  FUN_006412e0(uVar4,iVar5);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_TargetOffset_007280a4,uVar1);
  iVar5 = param_1 + 0x70;
  local_4 = 7;
  uVar4 = FUN_00649940(iVar5);
  FUN_006412e0(uVar4,iVar5);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_StartFOV_00728090,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  local_4 = 8;
  uVar2 = FUN_00649940(uVar4);
  FUN_00641400(uVar2,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_EndFOV_00728080,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 0x5c);
  local_4 = 9;
  uVar2 = FUN_00649940(uVar4);
  FUN_00641400(uVar2,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_TransitionPop_00728068,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 0x68);
  local_4 = 10;
  uVar2 = FUN_00649940(uVar4);
  FUN_00641760(uVar2,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_Loop_00728058,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 100);
  local_4 = 0xb;
  uVar2 = FUN_00649940(uVar4);
  FUN_00641760(uVar2,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_10,s_Action_d_EndSyncPoint_00728040,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  local_4 = 0xc;
  uVar2 = FUN_00649940(uVar4);
  FUN_00641480(uVar2,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

