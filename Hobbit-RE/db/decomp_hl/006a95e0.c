
undefined4 * __fastcall FUN_006a95e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e7fa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006a7cc0();
  local_4 = 0;
  FUN_00650250();
  *param_1 = &PTR_FUN_006fd260;
  ExceptionList = local_c;
  return param_1;
}

