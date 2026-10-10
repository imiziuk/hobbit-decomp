
void __fastcall FUN_005acd70(int param_1)

{
  undefined4 uVar1;
  void *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de1b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_StateController__UpdateCurrentSt_00744b40);
  local_4 = 0;
  (**(code **)(**(int **)(param_1 + 0xbc) + 8))(*(undefined4 *)(param_1 + 0x19c));
  uVar1 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x14))(0);
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  pvStack_c = (void *)0xffffffff;
  FUN_00649720();
  ExceptionList = local_14;
  return;
}

