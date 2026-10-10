
void __thiscall FUN_006433b0(undefined4 param_1,undefined4 param_2,float *param_3)

{
  undefined4 uVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006e5ed2;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00649920();
  local_c = 0;
  uVar1 = FUN_00649940((double)*param_3,(double)param_3[1],(double)param_3[2],(double)param_3[3],
                       (double)param_3[4],(double)param_3[5]);
  FUN_00642590(param_1,uVar1);
  local_c = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_14;
  return;
}

