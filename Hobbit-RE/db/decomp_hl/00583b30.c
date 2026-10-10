
void __fastcall FUN_00583b30(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006dc20a;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_006c026a(param_1 + 0x638,4,2,FUN_00406ba0);
  local_4._0_1_ = 1;
  FUN_00671570();
  puVar1 = (undefined4 *)(param_1 + 0x1b0);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  puVar2 = (undefined4 *)(param_1 + 0x1ac);
  *puVar1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_00549580(puVar2);
  FUN_00549350(puVar2);
  *puVar2 = 0x7fffffff;
  ExceptionList = local_c;
  return;
}

