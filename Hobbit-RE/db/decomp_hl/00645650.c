
undefined4 * __fastcall FUN_00645650(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5ffb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006499d0();
  local_4 = 0;
  FUN_00651e50();
  *param_1 = 0;
  param_1[1] = 0;
  ExceptionList = local_c;
  return param_1;
}

