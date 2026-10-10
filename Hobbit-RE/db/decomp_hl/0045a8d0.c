
void __thiscall FUN_0045a8d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0468;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_00641400(s_TimerOffset_00725a98,*(undefined4 *)(param_1 + 0x188));
  FUN_00641760(s_IsRunning_00725a8c,*(undefined4 *)(param_1 + 0x160));
  FUN_00641760(s_Continuous_00725a80,*(undefined4 *)(param_1 + 0x164));
  FUN_00641400(s_AnimationTime_00725a70,*(undefined4 *)(param_1 + 0x184));
  FUN_00641400(s_PainRadius_00725a64,*(undefined4 *)(param_1 + 0x194));
  FUN_00641400(s_PainDamage_00725a58,*(undefined4 *)(param_1 + 0x198));
  FUN_00641480(s_NumberOfAnimations_00725a44,*(undefined4 *)(param_1 + 0x170));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x170)) {
    iVar2 = 0;
    do {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x174) + iVar2);
      FUN_00649920(&local_10,s_AnimationName_d_00725a34,iVar3);
      local_4 = 0;
      uVar1 = FUN_00649940(uVar4);
      FUN_006414f0(uVar1,uVar4);
      local_4 = 0xffffffff;
      FUN_00649950();
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar3 < *(int *)(param_1 + 0x170));
  }
  FUN_004c1ff0(param_2);
  ExceptionList = local_c;
  return;
}

