
undefined4 * __fastcall FUN_005b6a40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006deba6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_4 = 1;
  FUN_006499d0();
  *param_1 = 0;
  ExceptionList = local_c;
  return param_1;
}

