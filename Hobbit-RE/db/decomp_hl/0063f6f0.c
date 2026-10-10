
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0063f6f0(undefined4 param_1,undefined4 param_2,float *param_3)

{
  undefined4 uVar1;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5c2d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&param_2,s__s_fff_0074b0e8,param_2);
  local_4 = 0;
  uVar1 = FUN_00649940(&local_18,&local_14,&local_10);
  uVar1 = FUN_0063ea10(param_1,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  *param_3 = local_18 * _DAT_006e9368 * _DAT_006e957c;
  param_3[1] = local_14 * _DAT_006e9368 * _DAT_006e957c;
  param_3[2] = local_10 * _DAT_006e9368 * _DAT_006e957c;
  ExceptionList = local_c;
  return uVar1;
}

