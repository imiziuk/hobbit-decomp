
void __thiscall FUN_006b72c0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e83e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fx_mgr__AdvanceLogic_00757bec);
  local_4 = 0;
  iVar1 = FUN_006b75b0(param_2);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + *param_2 * 4) + 0x18))(param_3);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

