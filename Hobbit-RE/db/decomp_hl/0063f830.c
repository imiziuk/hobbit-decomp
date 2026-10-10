
undefined4 __thiscall FUN_0063f830(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5c51;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&param_2,&DAT_0074b0f8,param_2);
  local_4 = 0;
  uVar1 = FUN_00649940(param_3);
  uVar1 = FUN_0063ea10(param_1,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return uVar1;
}

