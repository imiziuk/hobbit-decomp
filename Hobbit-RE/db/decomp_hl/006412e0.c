
void __thiscall FUN_006412e0(undefined4 param_1,undefined4 param_2,float *param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5d82;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920();
  local_4 = 0;
  uVar1 = FUN_00649940((double)*param_3,(double)param_3[1],(double)param_3[2]);
  FUN_00640b90(param_1,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

