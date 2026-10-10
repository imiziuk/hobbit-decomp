
void __thiscall FUN_0047bcd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_cinema_fxobj_trigger__OnImport_007282e8);
  local_4 = 0;
  FUN_004752d0(param_2,param_3);
  FUN_00649920(&param_3,s_Action_d_FxObject_007282d4,param_2);
  iVar2 = param_1 + 0x20;
  local_4._0_1_ = 1;
  uVar1 = FUN_00649940(iVar2);
  FUN_006405e0(uVar1,iVar2);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_Expire_007282c4,param_2);
  param_1 = param_1 + 0x28;
  local_4._0_1_ = 2;
  uVar1 = FUN_00649940(param_1);
  FUN_00640420(uVar1,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649950();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

