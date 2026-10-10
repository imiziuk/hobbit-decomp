
void __thiscall FUN_00480540(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint local_58 [3];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_cinema_anim_inst__OnImport_0072884c);
  local_4 = 0;
  FUN_004752d0(param_2,param_3);
  FUN_00649920(&param_3,s_Action_d_Object_00727d34,param_2);
  iVar3 = param_1 + 0x20;
  local_4._0_1_ = 1;
  uVar1 = FUN_00649940(iVar3);
  FUN_006405e0(uVar1,iVar3);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_AnimName_007286e0,param_2);
  puVar4 = local_4c;
  local_4._0_1_ = 2;
  uVar1 = FUN_00649940(puVar4);
  FUN_00640480(uVar1,puVar4);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_0064a2e0(local_4c);
  local_58[0] = (*(int *)(param_1 + 0x54) << 0x1f) >> 0x1f;
  FUN_00649920(&param_3,s_Action_d_StartAnimating_00728834,param_2);
  puVar5 = local_58;
  local_4._0_1_ = 3;
  uVar1 = FUN_00649940(puVar5);
  FUN_006405b0(uVar1,puVar5);
  local_4._0_1_ = 0;
  FUN_00649950();
  uVar2 = (*(uint *)(param_1 + 0x54) ^ local_58[0]) & 1 ^ *(uint *)(param_1 + 0x54);
  *(uint *)(param_1 + 0x54) = uVar2;
  local_58[0] = (int)(uVar2 << 0x1e) >> 0x1f;
  FUN_00649920(&param_3,s_Action_d_Looping_00728820,param_2);
  puVar5 = local_58;
  local_4._0_1_ = 4;
  uVar1 = FUN_00649940(puVar5);
  FUN_006405b0(uVar1,puVar5);
  local_4._0_1_ = 0;
  FUN_00649950();
  uVar2 = (local_58[0] * 2 ^ *(uint *)(param_1 + 0x54)) & 2 ^ *(uint *)(param_1 + 0x54);
  *(uint *)(param_1 + 0x54) = uVar2;
  local_58[0] = (int)(uVar2 << 0x1d) >> 0x1f;
  FUN_00649920(&param_3,s_Action_d_HideWhenDone_00728808,param_2);
  puVar5 = local_58;
  local_4._0_1_ = 5;
  uVar1 = FUN_00649940(puVar5);
  FUN_006405b0(uVar1,puVar5);
  local_4._0_1_ = 0;
  FUN_00649950();
  uVar2 = (local_58[0] * 4 ^ *(uint *)(param_1 + 0x54)) & 4 ^ *(uint *)(param_1 + 0x54);
  *(uint *)(param_1 + 0x54) = uVar2;
  local_58[0] = (int)(uVar2 << 0x1c) >> 0x1f;
  FUN_00649920(&param_3,s_Action_d_SetToEndOnSkip_007287f0,param_2);
  puVar5 = local_58;
  local_4._0_1_ = 6;
  uVar1 = FUN_00649940(puVar5);
  FUN_006405b0(uVar1,puVar5);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649950();
  *(uint *)(param_1 + 0x54) =
       (local_58[0] * 8 ^ *(uint *)(param_1 + 0x54)) & 8 ^ *(uint *)(param_1 + 0x54);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

