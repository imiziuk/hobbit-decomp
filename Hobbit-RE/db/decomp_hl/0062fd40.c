
undefined4 * __thiscall FUN_0062fd40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5338;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00638650(param_2,param_3);
  local_4 = 0;
  *param_1 = &PTR_FUN_006f64d0;
  param_1[0x18] = 0x40800000;
  fVar1 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
  param_1[0x19] = (float)fVar1;
  param_1[0x1a] = 0x40800000;
  ExceptionList = local_c;
  return param_1;
}

