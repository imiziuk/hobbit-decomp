
undefined4 * __thiscall
FUN_005c7b30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006df94b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 0;
  param_1[0xe] = param_4;
  param_1[0xf] = param_5;
  *param_1 = &PTR_FUN_006f44e8;
  FUN_005c7c40(param_2,param_3);
  ExceptionList = local_c;
  return param_1;
}

