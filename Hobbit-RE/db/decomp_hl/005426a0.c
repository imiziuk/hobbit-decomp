
void __fastcall FUN_005426a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d93ea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f3c18;
  puVar1 = param_1 + 1;
  local_4 = 0;
  param_1[2] = 0xffffffff;
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_00545730();
  ExceptionList = local_c;
  return;
}

