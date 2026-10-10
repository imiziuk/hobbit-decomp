
undefined4 * __fastcall FUN_005c1540(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df448;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005a3250();
  local_4 = 0;
  *param_1 = &PTR_FUN_006f4484;
  FUN_005c1600();
  ExceptionList = pvStack_c;
  return param_1;
}

