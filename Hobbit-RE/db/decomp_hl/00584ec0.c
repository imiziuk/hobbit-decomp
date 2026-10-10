
void FUN_00584ec0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc5e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__RenderTriggers_00740e60);
  local_4 = 0;
  FUN_00584190(0x35,s_Trigger_Render_00740e50);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

