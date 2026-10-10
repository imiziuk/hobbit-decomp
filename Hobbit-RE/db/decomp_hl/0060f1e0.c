
undefined4 * __thiscall FUN_0060f1e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e4018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00638650(param_2,param_3);
  local_4 = 0;
  FUN_006c043b(param_1 + 0x2e,0x38,4,&LAB_00610820,FUN_00429100);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *param_1 = &PTR_FUN_006f58e8;
  param_1[0x1f] = 4;
  param_1[0x20] = 4;
  ExceptionList = local_c;
  return param_1;
}

