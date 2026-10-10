
void __thiscall FUN_004763e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d1a20;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_cinema_popto__OnImport_00727d44);
  local_4 = 0;
  FUN_004752d0(param_2,param_3);
  FUN_00649920(&param_3,s_Action_d_Object_00727d34,param_2);
  iVar2 = param_1 + 0x20;
  local_4._0_1_ = 1;
  uVar1 = FUN_00649940(iVar2);
  FUN_006405e0(uVar1,iVar2);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_Location_00727d20,param_2);
  iVar2 = param_1 + 0x28;
  local_4._0_1_ = 2;
  uVar1 = FUN_00649940(iVar2);
  FUN_006405e0(uVar1,iVar2);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_Facing_00727d10,param_2);
  iVar2 = param_1 + 0x30;
  local_4._0_1_ = 3;
  uVar1 = FUN_00649940(iVar2);
  FUN_006405e0(uVar1,iVar2);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_SetFacing_00727cfc,param_2);
  param_1 = param_1 + 0x38;
  local_4._0_1_ = 4;
  uVar1 = FUN_00649940(param_1);
  FUN_006405b0(uVar1,param_1);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_Anim_00727cec,param_2);
  puVar3 = local_4c;
  local_4._0_1_ = 5;
  uVar1 = FUN_00649940(puVar3);
  FUN_00640480(uVar1,puVar3);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649950();
  FUN_0064a2e0(local_4c);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

