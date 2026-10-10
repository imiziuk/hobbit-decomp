
undefined4 * __fastcall FUN_00518c50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d7510;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006a22e0();
  local_4 = 0;
  FUN_006c043b(param_1 + 0x61,0x20,4,FUN_00650250,thunk_FUN_00650380);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0064cbe0();
  *param_1 = &PTR_FUN_006f3118;
  ExceptionList = local_c;
  return param_1;
}

