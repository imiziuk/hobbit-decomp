
void FUN_0055ab50(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006da158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_layer_mgr__NotifySystems_0073e3c8);
  local_4 = 0;
  thunk_FUN_00551a80();
  FUN_00429100();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

