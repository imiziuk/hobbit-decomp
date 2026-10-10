
void __fastcall FUN_0048e8c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d3078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ed5e0;
  param_1 = param_1 + 0x54;
  local_4 = 0;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_004d0910();
  ExceptionList = local_c;
  return;
}

