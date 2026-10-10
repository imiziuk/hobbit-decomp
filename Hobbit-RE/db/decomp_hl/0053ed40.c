
undefined4 * __fastcall FUN_0053ed40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d924b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0053eac0();
  FUN_00651e50();
  local_4 = 0;
  FUN_00651e50();
  DAT_00767098 = DAT_00767098 + 1;
  ExceptionList = local_c;
  return param_1;
}

