
undefined4 * __fastcall FUN_0051cc30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d76c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006a22e0();
  local_4 = 0;
  FUN_006499d0();
  *param_1 = &PTR_FUN_006f3410;
  ExceptionList = local_c;
  return param_1;
}

