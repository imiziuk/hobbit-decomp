
void __fastcall FUN_005a9cc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006ddf0f;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  FUN_006089b0();
  local_4._0_1_ = 2;
  FUN_006089b0();
  local_4._0_1_ = 1;
  FUN_006089b0();
  puVar1 = param_1 + 1;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  ExceptionList = local_c;
  return;
}

