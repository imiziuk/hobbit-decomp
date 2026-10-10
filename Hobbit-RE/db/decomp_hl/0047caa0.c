
void FUN_0047caa0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2290;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_cinema_audio__OnImport_0072838c);
  local_4 = 0;
  FUN_004752d0(param_1,param_2);
  FUN_00649920(&param_2,s_Action_d_Sound_0072837c,param_1);
  puVar2 = local_4c;
  local_4._0_1_ = 1;
  uVar1 = FUN_00649940(puVar2);
  FUN_00640480(uVar1,puVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649950();
  FUN_0064a2e0(local_4c);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

