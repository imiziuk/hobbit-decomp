
void __fastcall FUN_00508f70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d6be1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006efd10;
  local_4 = 2;
  thunk_FUN_006a3050();
  local_4._0_1_ = 1;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006c026a(param_1 + 0x74,0x4ec,6,&LAB_00508f60);
  local_4 = 0xffffffff;
  FUN_006a2380();
  ExceptionList = local_c;
  return;
}

