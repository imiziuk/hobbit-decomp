
void __thiscall FUN_0045a660(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int local_224;
  int *local_220;
  int local_21c;
  int local_218;
  undefined1 local_20c [512];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0454;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_boulder_run__OnImport_00725aa4);
  piVar2 = (int *)0x0;
  local_4 = 0;
  FUN_00640420(s_TimerOffset_00725a98,param_1 + 0x18c);
  FUN_006405b0(s_IsRunning_00725a8c,param_1 + 0x160);
  FUN_006405b0(s_Continuous_00725a80,param_1 + 0x164);
  FUN_00640420(s_AnimationTime_00725a70,param_1 + 0x184);
  FUN_00640420(s_PainRadius_00725a64,param_1 + 0x194);
  FUN_00640420(s_PainDamage_00725a58,param_1 + 0x198);
  FUN_00640450(s_NumberOfAnimations_00725a44,&local_224);
  iVar3 = *(int *)(param_1 + 0x178);
  local_21c = local_224;
  iVar5 = iVar3;
  if (iVar3 < local_224) {
    iVar5 = local_224;
  }
  local_218 = iVar5;
  if (iVar5 != iVar3) {
    local_220 = (int *)operator_new(iVar5 * 0x2c + 4);
    local_4._0_1_ = 1;
    if (local_220 != (int *)0x0) {
      piVar2 = local_220 + 1;
      *local_220 = iVar5;
      FUN_006c043b(piVar2,0x2c,iVar5,FUN_006499d0,FUN_00649ba0);
    }
    iVar3 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    local_220 = piVar2;
    if (0 < *(int *)(param_1 + 0x170)) {
      iVar4 = 0;
      do {
        FUN_0064a320(*(int *)(param_1 + 0x174) + iVar4);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x2c;
        iVar5 = local_218;
      } while (iVar3 < *(int *)(param_1 + 0x170));
    }
    iVar3 = *(int *)(param_1 + 0x174);
    if (iVar3 != 0) {
      FUN_006c026a(iVar3,0x2c,*(undefined4 *)(iVar3 + -4),FUN_00649ba0);
      FUN_006bf840(iVar3 + -4);
    }
    *(int **)(param_1 + 0x174) = local_220;
    *(int *)(param_1 + 0x178) = iVar5;
  }
  *(int *)(param_1 + 0x170) = local_21c;
  local_224 = 0;
  if (0 < *(int *)(param_1 + 0x170)) {
    do {
      FUN_00649920(&local_21c,s_AnimationName_d_00725a34,local_224);
      puVar6 = local_20c;
      local_4._0_1_ = 2;
      uVar1 = FUN_00649940(puVar6);
      FUN_00640480(uVar1,puVar6);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649950();
      FUN_0064a2e0(local_20c);
      local_224 = local_224 + 1;
    } while (local_224 < *(int *)(param_1 + 0x170));
  }
  FUN_004c2430(param_2);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

