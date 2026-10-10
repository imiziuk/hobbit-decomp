
undefined4 * __fastcall FUN_0051ffb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d78e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006a22e0();
  local_4 = 0;
  FUN_006c043b(param_1 + 0x80,400,3,FUN_004f9160,FUN_004f9240);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00671410();
  *param_1 = &PTR_FUN_006f35c0;
  ExceptionList = local_c;
  return param_1;
}

