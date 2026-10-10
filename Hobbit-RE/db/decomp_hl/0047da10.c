
void FUN_0047da10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2420;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_cinema_ai_trigger__OnImport_00728498);
  uVar1 = param_1;
  local_4 = 0;
  FUN_00649920(&param_1,s_Action_d_TriggerName_00728480,param_1);
  puVar4 = local_4c;
  local_4._0_1_ = 1;
  uVar3 = FUN_00649940(puVar4);
  uVar2 = param_2;
  FUN_00640480(uVar3,puVar4);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649950();
  FUN_0064a2e0(local_4c);
  FUN_004752d0(uVar1,uVar2);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

