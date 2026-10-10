
void FUN_005c3030(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df4e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_task_mgr__FlushAll_00745edc);
  local_4 = 0;
  FUN_005c33e0();
  FUN_005c3090();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

