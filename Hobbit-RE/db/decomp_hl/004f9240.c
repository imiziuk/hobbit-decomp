
void __fastcall FUN_004f9240(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d6264;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006efab0;
  local_4 = 2;
  FUN_005c15b0();
  iVar1 = param_1[0x3b];
  local_4._0_1_ = 1;
  while (0 < iVar1) {
    FUN_00582290();
    iVar1 = param_1[0x3b];
  }
  param_1 = param_1 + 0x31;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

