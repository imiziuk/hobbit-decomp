
void __fastcall FUN_004edb90(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d5e96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ef808;
  puVar1 = param_1 + 0x9d;
  local_4 = 1;
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  param_1 = param_1 + 0x9c;
  local_4 = local_4 & 0xffffff00;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_004c0460();
  ExceptionList = local_c;
  return;
}

