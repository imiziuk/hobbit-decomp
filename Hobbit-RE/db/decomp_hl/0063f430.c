
undefined4 __thiscall FUN_0063f430(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5bd3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&param_2,s__s_dddd_0074b0bc,param_2);
  local_4 = 0;
  uVar1 = FUN_00649940(local_1c,local_18,local_14,local_10);
  uVar1 = FUN_0063ea10(param_1,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  param_3[1] = local_18[0];
  param_3[2] = local_1c[0];
  param_3[3] = local_10[0];
  *param_3 = local_14[0];
  ExceptionList = local_c;
  return uVar1;
}

