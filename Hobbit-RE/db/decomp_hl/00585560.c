
void FUN_00585560(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc768;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__RenderFXObjects_007410cc);
  local_4 = 0;
  FUN_00584190(0x2d,s_FXObject_Render_007410bc);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

