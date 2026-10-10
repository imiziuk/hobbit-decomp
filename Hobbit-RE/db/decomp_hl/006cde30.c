
void __fastcall FUN_006cde30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006e8680;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006fe03c;
  local_4 = 1;
  FUN_006cdeb0();
  param_1 = param_1 + 1;
  local_4 = local_4 & 0xffffff00;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_00545730();
  ExceptionList = local_c;
  return;
}

