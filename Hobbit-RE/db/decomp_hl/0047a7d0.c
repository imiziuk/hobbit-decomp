
void __thiscall FUN_0047a7d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d1fa0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_cinema_fx__OnImport_00728204);
  local_4 = 0;
  FUN_004752d0(param_2,param_3);
  FUN_00649920(&param_3,s_Action_d_FXType_007281f4,param_2);
  puVar2 = local_18;
  local_4._0_1_ = 1;
  uVar1 = FUN_00649940(puVar2);
  FUN_00640450(uVar1,puVar2);
  local_4._0_1_ = 0;
  FUN_00649950();
  *(undefined4 *)(param_1 + 0x1c) = local_18[0];
  FUN_00649920(&param_3,s_Action_d_Magnitude_007281e0,param_2);
  iVar3 = param_1 + 0x20;
  local_4._0_1_ = 2;
  uVar1 = FUN_00649940(iVar3);
  FUN_00640420(uVar1,iVar3);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_Frequency_007281cc,param_2);
  iVar3 = param_1 + 0x24;
  local_4._0_1_ = 3;
  uVar1 = FUN_00649940(iVar3);
  FUN_00640420(uVar1,iVar3);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_Rolling_007281b8,param_2);
  local_4._0_1_ = 4;
  iVar3 = param_1 + 0x28;
  uVar1 = FUN_00649940(iVar3);
  FUN_006405b0(uVar1,iVar3);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_Fadeout_007281a4,param_2);
  iVar3 = param_1 + 0x2c;
  local_4._0_1_ = 5;
  uVar1 = FUN_00649940(iVar3);
  FUN_006405b0(uVar1,iVar3);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_Color_00728194,param_2);
  iVar3 = param_1 + 0x34;
  local_4._0_1_ = 6;
  uVar1 = FUN_00649940(iVar3);
  FUN_006403e0(uVar1,iVar3);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_Target_00728128,param_2);
  param_1 = param_1 + 0x30;
  local_4._0_1_ = 7;
  uVar1 = FUN_00649940(param_1);
  FUN_00640420(uVar1,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649950();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

