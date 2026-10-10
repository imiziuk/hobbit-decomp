
void __thiscall FUN_0047edb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 local_d8 [12];
  undefined1 local_cc [64];
  undefined1 local_8c;
  undefined4 local_8b;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d25d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_cinema_anim__OnImport_00728708);
  local_4 = 0;
  FUN_004752d0(param_2,param_3);
  FUN_00649920(local_d8,s_Action_d_Character_007286f4,param_2);
  iVar2 = param_1 + 0x20;
  local_4._0_1_ = 1;
  uVar1 = FUN_00649940(iVar2);
  FUN_006405e0(uVar1,iVar2);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(local_d8,s_Action_d_AnimName_007286e0,param_2);
  puVar4 = local_cc;
  local_4._0_1_ = 2;
  uVar1 = FUN_00649940(puVar4);
  FUN_00640480(uVar1,puVar4);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_0064a2e0(local_cc);
  FUN_00649920(local_d8,s_Action_d_Length_007286d0,param_2);
  iVar2 = param_1 + 0x60;
  local_4._0_1_ = 3;
  uVar1 = FUN_00649940(iVar2);
  FUN_00640420(uVar1,iVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649950();
  local_8c = DAT_0075b6e0;
  puVar3 = &local_8b;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  FUN_00649920(local_d8,s_Action_d_AnimGroup_007286bc,param_2);
  puVar4 = &local_8c;
  local_4._0_1_ = 4;
  uVar1 = FUN_00649940(puVar4);
  FUN_00640480(uVar1,puVar4);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_0047f470(&local_8c);
  FUN_00649920(local_d8,s_Action_d_AnimatedInPlace_007286a0,param_2);
  iVar2 = param_1 + 0x58;
  local_4._0_1_ = 5;
  uVar1 = FUN_00649940(iVar2);
  FUN_006405b0(uVar1,iVar2);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(local_d8,s_Action_d_Loops_00728690,param_2);
  iVar2 = param_1 + 0x5c;
  local_4._0_1_ = 6;
  uVar1 = FUN_00649940(iVar2);
  FUN_006405b0(uVar1,iVar2);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(local_d8,s_Action_d_AnimsToPlay_00728678,param_2);
  param_1 = param_1 + 100;
  local_4._0_1_ = 7;
  uVar1 = FUN_00649940(param_1);
  FUN_00640450(uVar1,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649950();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

