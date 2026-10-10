
void FUN_00584e60(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc5c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__RenderLoadTriggers_00740e30);
  local_4 = 0;
  FUN_00584190(0x34,s_Load_Trigger_Render_00740e1c);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

