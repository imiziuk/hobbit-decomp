
void __thiscall FUN_00603ad0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e37e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_00649920(&local_10,s_FXObject_d_00748b48,*(undefined4 *)(param_1 + 4));
  param_1 = param_1 + 0x10;
  local_4 = 0;
  uVar1 = FUN_00649940(param_1);
  FUN_006405e0(uVar1,param_1);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_005f1cf0(param_2);
  ExceptionList = local_c;
  return;
}

