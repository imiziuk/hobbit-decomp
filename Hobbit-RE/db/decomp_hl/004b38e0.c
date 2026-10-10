
undefined4 * __fastcall FUN_004b38e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4116;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aa170();
  local_4 = 0;
  FUN_0064afa0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005a3f00();
  *param_1 = &PTR_FUN_006ee2f8;
  ExceptionList = local_c;
  return param_1;
}

