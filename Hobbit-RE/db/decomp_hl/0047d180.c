
void __thiscall FUN_0047d180(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2330;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_cinema_script__OnImport_00728404);
  local_4 = 0;
  FUN_004752d0(param_2,param_3);
  FUN_00649920(&param_3,s_Action_d_Trigger_007283f0,param_2);
  param_1 = param_1 + 0x20;
  local_4._0_1_ = 1;
  uVar1 = FUN_00649940(param_1);
  FUN_006405e0(uVar1,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649950();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

