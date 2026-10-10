
void __fastcall FUN_00595310(int param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__UpdateGoals_00742fc0);
  local_4 = 0;
  FUN_00592920();
  uVar1 = FUN_005af960();
  *(undefined4 *)(param_1 + 400) = uVar1;
  FUN_00595730();
  *(undefined4 *)(param_1 + 0x29c) = 0;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

