
undefined4 * __fastcall FUN_006a3680(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e78e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006aa670();
  local_4 = 0;
  FUN_0064afa0();
  *param_1 = &PTR_FUN_006fcd34;
  ExceptionList = local_c;
  return param_1;
}

