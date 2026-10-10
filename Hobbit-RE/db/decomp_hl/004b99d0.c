
void __fastcall FUN_004b99d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d4598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ee748;
  local_4 = 0;
  if (param_1[0xa6] != 0 || param_1[0xa7] != 0) {
    FUN_0054be30(param_1[0xa6],param_1[0xa7]);
  }
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  local_4 = 0xffffffff;
  FUN_004c0460();
  ExceptionList = local_c;
  return;
}

