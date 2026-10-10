
void __thiscall FUN_00523130(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 local_58 [76];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d79f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0052cd20(0);
  FUN_006a2880(param_2,param_3);
  iVar1 = FUN_006a22a0(0x50);
  iVar2 = FUN_006a2260(0x280);
  iVar3 = FUN_006a22a0(0);
  local_68 = FUN_006a2260(0);
  local_68 = local_68 + 1;
  local_60 = iVar2 + 1;
  local_64 = iVar3 + -1;
  local_5c = iVar1 + -1;
  param_3 = 0xff000000;
  uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_QUICK_TIPS_00735334);
  puVar8 = &param_3;
  uVar7 = 0x12;
  piVar6 = &local_68;
  uVar5 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fb40(uVar5,piVar6,uVar7,puVar8,uVar4);
  local_68 = local_68 + -1;
  local_60 = local_60 + -1;
  local_64 = local_64 + -1;
  local_5c = local_5c + -1;
  param_3 = 0xffffffff;
  uVar4 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_QUICK_TIPS_00735334);
  puVar8 = &param_3;
  uVar7 = 0x12;
  piVar6 = &local_68;
  uVar5 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fb40(uVar5,piVar6,uVar7,puVar8,uVar4);
  FUN_0064afa0();
  local_4 = 0;
  switch(*(undefined4 *)(param_1 + 0x158)) {
  case 0:
    pcVar9 = s_IDS_QUICK_TIP_TARGETING_0073531c;
    break;
  case 1:
    pcVar9 = s_IDS_QUICK_TIP_LOCK_PICK_00735304;
    break;
  case 2:
    pcVar9 = s_IDS_QUICK_TIP_STONES_007352ec;
    break;
  case 3:
    pcVar9 = s_IDS_QUICK_TIP_SNEAK_007352d8;
    break;
  case 4:
    pcVar9 = s_IDS_QUICK_TIP_VAULT_007352c4;
    break;
  case 5:
    pcVar9 = s_IDS_QUICK_TIP_POWER_UPS_007352ac;
    break;
  case 6:
    pcVar9 = s_IDS_QUICK_TIP_MOVE_00735298;
    break;
  case 7:
    pcVar9 = s_IDS_QUICK_TIP_INVENTORY_00735280;
    break;
  case 8:
    pcVar9 = s_IDS_QUICK_TIP_DEFENSE_00735268;
    break;
  default:
    goto switchD_005232a7_default;
  }
  uVar4 = FUN_006ab1a0(&DAT_0071ceb4,pcVar9);
  FUN_0064b7b0(uVar4);
switchD_005232a7_default:
  uVar4 = __ftol();
  iVar1 = FUN_006a22a0(uVar4);
  uVar4 = __ftol();
  iVar2 = FUN_006a2260(uVar4);
  uVar4 = __ftol();
  iVar3 = FUN_006a22a0(uVar4);
  uVar4 = __ftol();
  local_68 = FUN_006a2260(uVar4);
  local_68 = local_68 + 1;
  puVar10 = local_58;
  puVar8 = &param_3;
  uVar5 = 0x12;
  local_60 = iVar2 + 1;
  piVar6 = &local_68;
  local_64 = iVar3 + -1;
  local_5c = iVar1 + -1;
  param_3 = 0xff000000;
  uVar4 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fbc0(uVar4,piVar6,uVar5,puVar8,puVar10);
  local_68 = local_68 + -1;
  local_60 = local_60 + -1;
  local_64 = local_64 + -1;
  local_5c = local_5c + -1;
  puVar10 = local_58;
  puVar8 = &param_2;
  uVar5 = 0x12;
  piVar6 = &local_68;
  param_2 = 0xffffffff;
  uVar4 = FUN_0069fa60(s_large_0071ceac);
  FUN_0069fbc0(uVar4,piVar6,uVar5,puVar8,puVar10);
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

