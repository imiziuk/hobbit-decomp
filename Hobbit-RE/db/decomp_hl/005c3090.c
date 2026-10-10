
void FUN_005c3090(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_task_mgr__RenderAll_00745ef8);
  local_4 = 0;
  FUN_005c3a90();
  FUN_005c3cc0();
  FUN_005c3d30();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

